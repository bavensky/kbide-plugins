// Blockly.Blocks['kbled.out'] = {
//   init: function() {
//     this.appendDummyInput()
//         .appendField("STATE")
//         .appendField(new Blockly.FieldDropdown([["HIGH","0"], ["LOW","1"]]), "STATE")
//         .appendField("GPIO")
//         .appendField(new Blockly.FieldDropdown([["BT","17"], ["WIFI","2"], ["NTP","15"]]), "GPIO");
//     this.setInputsInline(true);
//     this.setPreviousStatement(true, null);
//     this.setNextStatement(true, null);
//     this.setColour(230);
//  this.setTooltip("");
//  this.setHelpUrl("");
//   }
// };

Blockly.Blocks["kidbrightled.out"] = {
    init: function() {
        this.appendDummyInput()
            // .appendField(Blockly.Msg.OUTPUT_WRITE_TITLE)
            .appendField("Write LED")
            .appendField(new Blockly.FieldDropdown([
                ["BT", "17"],
                ["WIFI", "2"],
                ["NTP", "15"],
                ["IOT", "12"]
            ]), 'OUTPUT')
            .appendField(Blockly.Msg.STATUS)
            .appendField(new Blockly.FieldDropdown([
                ["ON", "0"],
                ["OFF", "1"]
            ]), 'STATUS');
        this.setInputsInline(true);
        this.setPreviousStatement(true);
        this.setNextStatement(true);
        this.setColour(io_colour);
        this.setTooltip(Blockly.Msg.OUTPUT_WRITE_TOOLTIP);
        this.setHelpUrl(Blockly.Msg.OUTPUT_WRITE_HELPURL);
    }
};

Blockly.Blocks['kidbrightled.buttonpin'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Read Button")
        .appendField(new Blockly.FieldDropdown([["1","16"], ["2","12"], ["",""]]), "buttonpin");
    this.setOutput(true, null);
    this.setColour(230);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};