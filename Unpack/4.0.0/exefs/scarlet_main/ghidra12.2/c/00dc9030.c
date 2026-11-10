/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc9030; name: FUN_00dc9030
 */


undefined4 FUN_00dc9030(void *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x24);
  free(*(void **)((long)param_1 + 0x40));
  free(*(void **)((long)param_1 + 0x58));
  free(param_1);
  return uVar1;
}


