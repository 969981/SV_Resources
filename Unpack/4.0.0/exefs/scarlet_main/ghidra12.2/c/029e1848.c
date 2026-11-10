/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e1848; name: FUN_029e1848
 */


undefined8 FUN_029e1848(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (7 < (ulong)param_1[1]) {
    uVar1 = *(uint *)(*param_1 + 4);
    if ((0 < (int)uVar1) && ((ulong)uVar1 + 4 <= param_1[1] - 1U)) {
      uVar2 = FUN_029e2198(*param_1 + 4 + (ulong)uVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}


