module Counter = {
  include ReactRe.Component.Stateful;
  type state = {counterValue: int};
  type props = {title: string};
  let name = "Counter";
  let getInitialState _ => {counterValue: 0};
  let handleIncrement {state} _ => {
    let currentValue = state.counterValue;
    let nextValue = currentValue + 1;
    Some {counterValue: nextValue}
  };
  let handleDecrement {state} _ => {
    let currentValue = state.counterValue;
    let nextValue = currentValue - 1;
    Some {counterValue: nextValue}
  };
  let render {props, state, updater} => {
    let counterClass =
      [state.counterValue > 0 ? "positive" : "", state.counterValue < 0 ? "negative" : ""] |>
      String.concat " ";
    <div className="counter-card">
      <h1 className="counter-card-title"> (ReactRe.stringToElement props.title) </h1>
      <h1 className=counterClass>
        (ReactRe.stringToElement (string_of_int state.counterValue))
      </h1>
      <div className="button-group">
        <button id="decrement-btn" className="btn btn-red" onClick=(updater handleDecrement)>
          (ReactRe.stringToElement "Decrement")
        </button>
        <button id="increment-btn" className="btn btn-green" onClick=(updater handleIncrement)>
          (ReactRe.stringToElement "Increment")
        </button>
      </div>
    </div>
  };
};

include ReactRe.CreateComponent Counter;

let createElement ::title => wrapProps {title: title};
