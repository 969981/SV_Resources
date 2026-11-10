/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a02dc; name: FUN_015a02dc
 */


long FUN_015a02dc(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if (param_1[8] == 0) {
    if (param_1[9] == 0) {
      lVar4 = 0;
    }
    else {
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
      lVar4 = *(long *)(param_1[9] + (ulong)uVar1 * 8) + (ulong)(param_2 - uVar2 * uVar3) * 0x10;
    }
  }
  else {
    lVar4 = param_1[8] + (ulong)param_2 * 0x10;
  }
  return lVar4;
}


