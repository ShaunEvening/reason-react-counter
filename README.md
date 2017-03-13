# Counter with `reasonml/rehydrate`

This is a sample counter application written in React with [`reasonml/rehydrate`](https://github.com/reasonml/rehydrate)

## Setup

_**NOTE:**_ As a prerequisite, you'll need to install version 1.7+ of [ninja](https://ninja-build.org/).
This can be done via brew by running `brew install ninja` on MacOS.

```sh
# Clone the repo
git clone https://github.com/ShaunLloyd/reason-rehydrate-counter.git

# Install the dependencies
npm install

# Compiles your reason files into javascript
npm start

# In a separate tab, bundle the javascript
npm run build
```

Once you see webpack has successfully bundled your files open up the `index.html` in the `src` directory.
