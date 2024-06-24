#!/usr/bin/node

function repeater (x, theFunction) {
  for (let i = 0; i < x; i++) {
    theFunction();
  }
}

module.exports = {
  callMeMoby: repeater
};
