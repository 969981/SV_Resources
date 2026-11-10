/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00344ae0; name: FUN_00344ae0
 */


void FUN_00344ae0(undefined8 *param_1)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (void *)*param_1;
  while (__ptr != param_1 + 5) {
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    __ptr = puVar1;
  }
  if (param_1[10] != 0) {
    FUN_00343d90();
  }
  free((void *)param_1[0xd]);
  free(param_1);
  return;
}


