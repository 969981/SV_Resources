/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e55c0; name: FUN_003e55c0
 */


undefined8 FUN_003e55c0(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if ((param_3 != -1) && (param_1[1] == 0)) {
      lVar1 = FUN_003e50d0();
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    FUN_003dffa0(*param_1);
    *param_1 = param_2;
    if (param_3 != 0) {
      if (param_3 == -1) {
        FUN_003e50e0(param_1[1]);
        param_1[1] = 0;
      }
      else {
        FUN_003de3c0(param_1[1],param_3,param_4);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


