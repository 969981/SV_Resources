/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e13184; name: FUN_01e13184
 */


uint FUN_01e13184(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 == 2) {
    pcStack_28 = "0626_formchange02";
    local_30 = 0xabce1c4baf4214e4;
  }
  else {
    if (param_2 != 1) {
      uVar1 = 0;
      goto LAB_01e131e8;
    }
    pcStack_28 = "0625_formchange01";
    local_30 = 0x93e19c866dca9852;
  }
  local_20 = 0x11;
  uStack_18 = 0;
  uVar1 = FUN_00c738f0(param_1,&local_30);
LAB_01e131e8:
  return uVar1 & 1;
}


