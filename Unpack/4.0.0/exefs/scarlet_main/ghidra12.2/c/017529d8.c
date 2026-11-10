/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017529d8; name: FUN_017529d8
 */


void FUN_017529d8(int *param_1,undefined8 param_2,byte *param_3,long *param_4)

{
  size_t __n;
  byte *__src;
  int local_48 [2];
  size_t local_28;
  
  __n = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  local_28 = __n;
  FUN_0111b0ac(local_48,&local_28,param_4);
  if (local_48[0] == 0) {
    __src = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __src = param_3 + 1;
    }
    memcpy((void *)(*param_4 + param_4[2]),__src,__n);
    param_4[2] = param_4[2] + __n;
  }
  *param_1 = local_48[0];
  return;
}


