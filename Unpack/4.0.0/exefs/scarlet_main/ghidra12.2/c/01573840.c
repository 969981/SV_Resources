/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01573840; name: FUN_01573840
 */


void FUN_01573840(undefined8 *param_1,long param_2)

{
  void *__s;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    FUN_028b8774();
    __s = (void *)param_1[1];
    memset(__s,0,param_2 << 2);
    param_1[1] = (void *)((long)__s + param_2 * 4);
  }
  return;
}


