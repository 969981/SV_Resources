/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c34420; name: FUN_00c34420
 */


void FUN_00c34420(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  size_t __n;
  char *__src;
  bool bVar1;
  
  bVar1 = (param_3 & 1) == 0;
  __src = "true";
  if (bVar1) {
    __src = "false";
  }
  __n = 4;
  if (bVar1) {
    __n = 5;
  }
  *param_1 = (char)((int)__n << 1);
  memcpy(param_1 + 1,__src,__n);
  (param_1 + 1)[__n] = 0;
  return;
}


