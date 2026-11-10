/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e10f24; name: FUN_01e10f24
 */


uint FUN_01e10f24(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 == 1) {
    local_30 = 0x6f4cde6416ffe156;
    pcStack_28 = "0281_sleep01_loop";
    local_20 = 0x11;
  }
  else {
    if (param_2 == 2) {
      pcStack_28 = "0291_eat01_loop";
      local_30 = 0x5a69b601ed182f1a;
    }
    else {
      if (param_2 != 3) {
        uVar1 = 0;
        goto LAB_01e10f64;
      }
      pcStack_28 = "0294_eat02_loop";
      local_30 = 0x83107dba9c7957d0;
    }
    local_20 = 0xf;
  }
  uStack_18 = 0;
  uVar1 = FUN_00c738f0(param_1,&local_30);
LAB_01e10f64:
  return uVar1 & 1;
}


