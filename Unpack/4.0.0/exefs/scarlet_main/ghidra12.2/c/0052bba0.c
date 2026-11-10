/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052bba0; name: FUN_0052bba0
 */


undefined8 FUN_0052bba0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  
  puVar2 = (undefined8 *)*param_1;
  if ((uint)((int)param_1[1] - (int)puVar2) < 8) {
    puVar2 = &local_18;
    uVar1 = FUN_0052b6d0(param_1,&local_18,8);
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


