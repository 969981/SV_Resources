/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00211ce8; name: FUN_00211ce8
 */


void FUN_00211ce8(ulong *param_1,byte param_2)

{
  byte bVar1;
  byte *__dest;
  ulong uVar2;
  byte *__src;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
    __src = (byte *)((long)param_1 + 1);
    if (bVar1 >> 1 != 0x16) {
      *(byte *)param_1 = bVar1 + 2 & 0xfe;
      goto LAB_00211dfc;
    }
    __n = 0x16;
    uVar4 = 0x16;
LAB_00211d54:
    uVar2 = __n << 1;
    if (uVar2 <= __n + 1) {
      uVar2 = __n + 1;
    }
    uVar3 = 0x17;
    if (0x16 < uVar2) {
      uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    }
LAB_00211d98:
    __dest = (byte *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar3,1);
    memcpy(__dest,__src,__n);
    if (__n + 1 != 0x17) {
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,__n + 1,1);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
    __src = __dest;
  }
  else {
    uVar4 = param_1[1];
    __n = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar4 == __n) {
      if ((*param_1 & 0xfffffffffffffffe) == 0xfffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = (byte *)param_1[2];
      if (__n < 0x7fffffffffffffe7) goto LAB_00211d54;
      uVar3 = 0xffffffffffffffef;
      goto LAB_00211d98;
    }
    __src = (byte *)param_1[2];
  }
  param_1[1] = uVar4 + 1;
LAB_00211dfc:
  __src[uVar4] = param_2;
  (__src + uVar4)[1] = 0;
  return;
}


