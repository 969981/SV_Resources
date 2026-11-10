/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003992d0; name: FUN_003992d0
 */


void FUN_003992d0(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  undefined1 *__dest;
  char local_38 [8];
  undefined1 local_30;
  undefined1 local_2f;
  char local_2e;
  char local_2d;
  undefined1 local_2c;
  char local_2b;
  char local_2a;
  undefined1 local_29;
  char local_28;
  char local_27;
  undefined1 local_26;
  
  uVar6 = *param_2;
  if ((uVar6 == 0) || (0x2a300 < uVar6 + 0x15180)) {
    *(undefined1 *)param_1 = 6;
    *(undefined4 *)((long)param_1 + 1) = 0x435455;
    return;
  }
  iVar5 = (int)uVar6;
  local_30 = 0x43;
  local_2f = 0x2d;
  if (-1 < iVar5) {
    local_2f = 0x2b;
  }
  local_38 = (char  [8])s_Fixed_UTC_03c6ec0a._0_8_;
  iVar2 = iVar5 / 0x3c;
  iVar5 = iVar5 % 0x3c;
  if (iVar5 < 1) {
    iVar1 = iVar5;
    iVar3 = iVar2;
  }
  else {
    iVar1 = iVar5 + -0x3c;
    iVar3 = iVar2 + 1;
  }
  bVar4 = (uVar6 & 0x80000000) != 0;
  if (bVar4) {
    iVar2 = -iVar3;
  }
  if (bVar4) {
    iVar5 = -iVar1;
  }
  local_29 = 0x3a;
  local_2c = 0x3a;
  local_26 = 0;
  local_2d = "0123456789"[(iVar2 / 0x3c) % 10];
  local_2e = "0123456789"[(iVar2 / 600) % 10];
  local_27 = "0123456789"[iVar5 % 10];
  local_2a = "0123456789"[(iVar2 % 0x3c) % 10];
  local_2b = "0123456789"[((iVar2 % 0x3c) / 10) % 10];
  local_28 = "0123456789"[(iVar5 / 10) % 10];
  __n = strlen(local_38);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_003994f4;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar6 | 1;
  }
  memcpy(__dest,local_38,__n);
LAB_003994f4:
  __dest[__n] = 0;
  return;
}


