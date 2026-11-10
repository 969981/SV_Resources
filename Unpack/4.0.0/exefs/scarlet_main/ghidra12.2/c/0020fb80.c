/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0020fb80; name: FUN_0020fb80
 */


void FUN_0020fb80(long *param_1,long param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  char *__s;
  ulong uVar4;
  
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x50);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0020fcc0 to 0020fcc7 has its CatchHandler @ 0020fd10 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)(lVar1 + 0x21);
    *(char *)(lVar1 + 0x20) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_0020fc1c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    *(ulong *)(lVar1 + 0x20) = uVar4 | 1;
    *(size_t *)(lVar1 + 0x28) = sVar2;
    *(void **)(lVar1 + 0x30) = pvVar3;
LAB_0020fc1c:
    memcpy(pvVar3,param_3,sVar2);
  }
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  __s = (char *)*param_4;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0020fccc to 0020fccf has its CatchHandler @ 0020fcd0 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)(lVar1 + 0x39);
    *(char *)(lVar1 + 0x38) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_0020fc9c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    *(ulong *)(lVar1 + 0x38) = uVar4 | 1;
    *(size_t *)(lVar1 + 0x40) = sVar2;
    *(void **)(lVar1 + 0x48) = pvVar3;
  }
  memcpy(pvVar3,__s,sVar2);
LAB_0020fc9c:
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


