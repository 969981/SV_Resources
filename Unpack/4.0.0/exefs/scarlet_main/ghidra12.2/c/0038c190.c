/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038c190; name: FUN_0038c190
 */


void FUN_0038c190(undefined8 *param_1)

{
  undefined8 *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    __ptr = (undefined8 *)*param_1;
    if (__ptr != (undefined8 *)0x0) {
      lVar1 = param_1[1];
      if (lVar1 != 0) {
        puVar2 = __ptr;
        do {
          if ((void *)*puVar2 != (void *)0x0) {
            free((void *)*puVar2);
          }
          if ((void *)puVar2[1] != (void *)0x0) {
            free((void *)puVar2[1]);
          }
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar1 = lVar1 + -1;
          puVar2[2] = 0;
          puVar2 = puVar2 + 3;
        } while (lVar1 != 0);
      }
      free(__ptr);
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  return;
}


