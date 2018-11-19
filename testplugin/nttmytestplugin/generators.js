// Blockly.JavaScript['kidbright_writeled'] = function (block) {
//   return 'DEV_IO.NTTMyTestPlugin()' + '.writepin(' + block.getFieldValue('pin') + ',' + block.getFieldValue('state') + ');\n';
// };

// Blockly.JavaScript['mytestplugin.out'] = function (block) {
//   return 'DEV_IO.MyTestPlugin()' + '.outputpin(' + block.getFieldValue('OUTPUT') + ',' + block.getFieldValue('STATUS') + ');\n';
// };

Blockly.JavaScript["NTTMyTestPlugin_out"] = function (block) {
  return 'DEV_IO.NTTMyTestPlugin()' + '.writeLED(' + block.getFieldValue('outputpin') + ',' + block.getFieldValue('state') + ');\n';
};