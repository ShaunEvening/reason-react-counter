<p align="center">
  <img src="http://i.imgur.com/49C0QB7.png" width="35%"/>
</p>
<h1 align="center">
  `reasonml/rehydrate` Counter App
</h1>

<p align="center">
This is a react counter application written with [`reasonml/rehydrate`](https://github.com/reasonml/rehydrate).
Please keep in mind that rehydrate is still in the works and is subject to a lot of change. I will try to keep this as up to date as possible so bare with me.
</p>

## Setup

**prerequisite:** you'll need to install version 1.7+ of [ninja](https://ninja-build.org/).
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
