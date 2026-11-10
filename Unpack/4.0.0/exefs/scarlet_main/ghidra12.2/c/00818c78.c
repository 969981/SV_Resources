/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00818c78; name: FUN_00818c78
 */


void FUN_00818c78(ulong *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  char local_50 [48];
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 2 && iVar1 != 0x1c) {
LAB_00818ce8:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  local_50[0x26] = '\0';
  local_50[0x27] = '\0';
  local_50[0x28] = '\0';
  local_50[0x29] = '\0';
  local_50[0x2a] = '\0';
  local_50[0x2b] = '\0';
  local_50[0x2c] = '\0';
  local_50[0x2d] = '\0';
  local_50[0x20] = '\0';
  local_50[0x21] = '\0';
  local_50[0x22] = '\0';
  local_50[0x23] = '\0';
  local_50[0x24] = '\0';
  local_50[0x25] = '\0';
  local_50[8] = '\0';
  local_50[9] = '\0';
  local_50[10] = '\0';
  local_50[0xb] = '\0';
  local_50[0xc] = '\0';
  local_50[0xd] = '\0';
  local_50[0xe] = '\0';
  local_50[0xf] = '\0';
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_50[4] = '\0';
  local_50[5] = '\0';
  local_50[6] = '\0';
  local_50[7] = '\0';
  local_50[0x18] = '\0';
  local_50[0x19] = '\0';
  local_50[0x1a] = '\0';
  local_50[0x1b] = '\0';
  local_50[0x1c] = '\0';
  local_50[0x1d] = '\0';
  local_50[0x1e] = '\0';
  local_50[0x1f] = '\0';
  local_50[0x10] = '\0';
  local_50[0x11] = '\0';
  local_50[0x12] = '\0';
  local_50[0x13] = '\0';
  local_50[0x14] = '\0';
  local_50[0x15] = '\0';
  local_50[0x16] = '\0';
  local_50[0x17] = '\0';
  lVar2 = nn::socket::InetNtop(iVar1,(void *)(param_2 + 0xc),local_50,0x2e);
  if (lVar2 == 0) goto LAB_00818ce8;
  __n = strlen(local_50);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00818d38;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,local_50,__n);
LAB_00818d38:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


