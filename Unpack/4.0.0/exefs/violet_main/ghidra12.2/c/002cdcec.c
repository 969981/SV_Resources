/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cdcec; name: FUN_002cdcec
 */


void FUN_002cdcec(ulong *param_1,byte param_2)

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
      goto LAB_002cddec;
    }
    __n = 0x16;
    uVar4 = 0x16;
LAB_002cdd58:
    uVar2 = __n << 1;
    if (uVar2 <= __n + 1) {
      uVar2 = __n + 1;
    }
    uVar3 = 0x17;
    if (0x16 < uVar2) {
      uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    }
LAB_002cdd9c:
    __dest = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    memcpy(__dest,__src,__n);
    if (__n != 0x16) {
      FUN_0049e790(PTR_LAB_047cba48,__src);
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
      if (__n < 0x7fffffffffffffe7) goto LAB_002cdd58;
      uVar3 = 0xffffffffffffffef;
      goto LAB_002cdd9c;
    }
    __src = (byte *)param_1[2];
  }
  param_1[1] = uVar4 + 1;
LAB_002cddec:
  __src[uVar4] = param_2;
  (__src + uVar4)[1] = 0;
  return;
}


