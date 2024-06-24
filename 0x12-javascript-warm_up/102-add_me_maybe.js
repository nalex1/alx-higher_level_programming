#!/usr/bin/node

function incr (number, theFunction) {
  number++;
  theFunction(number);
}

module.exports = {
  addMeMaybe: incr
};
