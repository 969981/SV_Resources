/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edc1d8; name: FUN_01edc1d8
 */


void FUN_01edc1d8(long param_1,void *param_2)

{
  void *__src;
  ulong uVar1;
  
  if (*(char *)((long)param_2 + 0xe) == '\0') {
    return;
  }
  __src = (void *)(param_1 + 0x7448);
  uVar1 = 0x31;
  while( true ) {
    memcpy((void *)((long)__src + 0x4f0),(void *)((long)__src + 0x278),0x274);
    if (uVar1 < 2) break;
    uVar1 = uVar1 - 2;
    memcpy((void *)((long)__src + 0x278),__src,0x274);
    __src = (void *)((long)__src + -0x4f0);
  }
  memcpy((void *)(param_1 + 0x40),param_2,0x274);
  return;
}


