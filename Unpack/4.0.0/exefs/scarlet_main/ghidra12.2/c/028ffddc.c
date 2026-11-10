/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ffddc; name: FUN_028ffddc
 */


undefined8 FUN_028ffddc(int *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_019367c0(param_2,param_1);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar1 != 0)) {
      if ((ulong)param_2[1] < 0x69) {
        return 0;
      }
      if (param_2[1] - 0x68U < (long)param_1 + (uVar1 - *param_2)) {
        return 0;
      }
    }
    uVar2 = 1;
    *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  }
  return uVar2;
}


