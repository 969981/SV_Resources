/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052bb38; name: FUN_0052bb38
 */


undefined8 FUN_0052bb38(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  
  puVar2 = (undefined4 *)*param_1;
  if ((uint)((int)param_1[1] - (int)puVar2) < 4) {
    puVar2 = &local_14;
    uVar1 = FUN_0052b6d0(param_1,&local_14,4);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else {
    *param_1 = (long)(puVar2 + 1);
  }
  *param_2 = *puVar2;
  return 1;
}


