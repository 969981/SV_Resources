/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f0310; name: FUN_002f0310
 */


undefined1 * FUN_002f0310(char *param_1,char *param_2)

{
  undefined1 *puVar1;
  size_t __n;
  size_t __n_00;
  undefined1 *__dest;
  
  __n = strlen(param_1);
  __n_00 = strlen(param_2);
  __dest = (undefined1 *)FUN_0038c780(__n + __n_00 + 2);
  memcpy(__dest,param_1,__n);
  puVar1 = __dest + __n;
  *puVar1 = 0x2e;
  memcpy(puVar1 + 1,param_2,__n_00);
  puVar1 = puVar1 + 1 + __n_00;
  if ((puVar1 < __dest) || ((long)puVar1 - (long)__dest != __n + __n_00 + 1)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *puVar1 = 0;
  free(param_1);
  free(param_2);
  return __dest;
}


