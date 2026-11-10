/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a1be0; name: FUN_003a1be0
 */


undefined8 FUN_003a1be0(long *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (((param_2 == 0) || (param_1[5] == 0)) || ((ulong)(param_1[4] - param_1[3]) < param_2)) {
    return 0;
  }
  if (param_1[1] == 0) {
    uVar2 = *(ulong *)*param_1;
    if (uVar2 - param_1[3] < param_2) {
      if (param_2 <= uVar2) {
        param_2 = uVar2;
      }
      uVar2 = param_2 * 2;
      if (uVar2 < 0x101) {
        uVar2 = 0x100;
      }
      if ((long)param_2 < 0) {
        uVar2 = 0xffffffffffffffff;
      }
      lVar1 = FUN_003f31c0((ulong *)*param_1,uVar2);
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  if (param_3 != (long *)0x0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      lVar1 = *(long *)(*param_1 + 8);
    }
    *param_3 = lVar1 + param_1[2];
  }
  return 1;
}


