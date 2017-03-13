const path = require('path');

module.exports = {
  entry: {
    counter: './lib/js/src/counterRoot.js',
  },
  output: {
    path: path.join(__dirname, "bundledOutputs"),
    filename: '[name].js',
  },
};
