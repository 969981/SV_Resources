/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e3b6c; name: FUN_013e3b6c
 */


void FUN_013e3b6c(undefined8 param_1,int *param_2)

{
  ulong uVar1;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar1 == 0)) {
    FUN_013e3b98(param_1,0);
    return;
  }
  FUN_013e3b98(param_1,*(undefined2 *)((long)param_2 + uVar1));
  return;
}


