/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a5034; name: FUN_015a5034
 */


long FUN_015a5034(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < *(uint *)((long)param_1 + 0x54)) {
    if (param_1[8] != 0) {
      return param_1[8] + (ulong)param_2 * 0x10;
    }
    if (param_1[9] != 0) {
      uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = param_2 / uVar2;
      }
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = param_2 / uVar3;
      }
      return *(long *)(param_1[9] + (ulong)uVar1 * 8) + (ulong)(param_2 - uVar2 * uVar3) * 0x10;
    }
  }
  return 0;
}


