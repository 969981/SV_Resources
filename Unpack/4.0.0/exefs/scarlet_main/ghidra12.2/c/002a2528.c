/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a2528; name: FUN_002a2528
 */


void FUN_002a2528(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  void *__dest;
  ulong uVar3;
  ulong __n;
  byte *__src;
  ulong uVar4;
  
  bVar2 = (byte)*param_1;
  if ((bVar2 & 1) == 0) {
    __n = (ulong)(bVar2 >> 1);
    if (param_2 <= __n) {
      *(byte *)((long)param_1 + param_2 + 1) = 0;
      *(byte *)param_1 = (byte)((int)param_2 << 1);
      return;
    }
    param_2 = param_2 - __n;
    if (param_2 == 0) {
      return;
    }
    uVar4 = 0x16;
    uVar3 = (ulong)bVar2;
    if (0x16 - __n < param_2) goto LAB_002a25b4;
  }
  else {
    __n = param_1[1];
    if (param_2 <= __n) {
      *(undefined1 *)(param_1[2] + param_2) = 0;
      param_1[1] = param_2;
      return;
    }
    param_2 = param_2 - __n;
    if (param_2 == 0) {
      return;
    }
    uVar3 = *param_1;
    uVar4 = (uVar3 & 0xfffffffffffffffe) - 1;
    if (uVar4 - __n < param_2) {
LAB_002a25b4:
      uVar3 = __n + param_2;
      if (-uVar4 - 0x11 < uVar3 - uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if ((bVar2 & 1) == 0) {
        __src = (byte *)((long)param_1 + 1);
        if (uVar4 < 0x7fffffffffffffe7) goto LAB_002a2624;
LAB_002a25e4:
        uVar3 = 0xffffffffffffffef;
      }
      else {
        __src = (byte *)param_1[2];
        if (0x7fffffffffffffe6 < uVar4) goto LAB_002a25e4;
LAB_002a2624:
        uVar1 = uVar4 << 1;
        if (uVar4 << 1 <= uVar3) {
          uVar1 = uVar3;
        }
        uVar3 = 0x17;
        if (0x16 < uVar1) {
          uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
        }
      }
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      if (__n != 0) {
        memcpy(__dest,__src,__n);
      }
      if (uVar4 != 0x16) {
        FUN_0049e790(PTR_LAB_047cba48,__src);
      }
      param_1[2] = (ulong)__dest;
      *param_1 = uVar3 | 1;
      goto LAB_002a2694;
    }
  }
  if ((uVar3 & 1) == 0) {
    *(byte *)param_1 = (byte)((int)(__n + param_2) << 1);
    *(byte *)((long)param_1 + __n + param_2 + 1) = 0;
    return;
  }
LAB_002a2694:
  param_1[1] = __n + param_2;
  *(undefined1 *)(param_1[2] + __n + param_2) = 0;
  return;
}


