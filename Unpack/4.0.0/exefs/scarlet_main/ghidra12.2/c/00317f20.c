/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00317f20; name: FUN_00317f20
 */


void FUN_00317f20(ulong param_1)

{
  void *__ptr;
  void *__ptr_00;
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 & 0xfffffffffffffffc);
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  __ptr = (void *)FUN_00366f90(&local_40);
  __ptr_00 = (void *)FUN_0036a0b0(puVar1 + 4,3);
  free(__ptr);
  free(__ptr_00);
  return;
}


