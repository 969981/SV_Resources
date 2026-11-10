/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d8db8; name: FUN_001d8db8
 */


long FUN_001d8db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  int local_4;
  
  local_4 = 0;
  if ((code *)param_5[0xb6] != (code *)0x0) {
    lVar1 = (*(code *)param_5[0xb6])(param_5,0,param_2,param_3,&local_4);
    if ((local_4 == 0x51) || (lVar1 == 0)) {
      return -0x1f8;
    }
    if (lVar1 != -1) {
      return lVar1;
    }
    FUN_001db9c8(*param_5,"Failed sending HTTP2 data");
  }
  return -0x386;
}


