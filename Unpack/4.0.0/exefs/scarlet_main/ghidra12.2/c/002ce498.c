/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ce498; name: FUN_002ce498
 */


ulong * FUN_002ce498(ulong *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  
  if (param_2 == 0) {
    return param_1;
  }
  bVar2 = (byte)*param_1;
  if ((bVar2 & 1) == 0) {
    uVar4 = (ulong)(bVar2 >> 1);
    uVar5 = 0x16;
    uVar3 = (ulong)bVar2;
    if (0x16 - uVar4 < param_2) goto LAB_002ce500;
LAB_002ce4dc:
    if ((uVar3 & 1) == 0) {
      uVar3 = (long)param_1 + 1;
      goto LAB_002ce5c0;
    }
  }
  else {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar5 = (uVar3 & 0xfffffffffffffffe) - 1;
    if (param_2 <= uVar5 - uVar4) goto LAB_002ce4dc;
LAB_002ce500:
    uVar3 = uVar4 + param_2;
    if (-uVar5 - 0x11 < uVar3 - uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((bVar2 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
      if (uVar5 < 0x7fffffffffffffe7) goto LAB_002ce54c;
LAB_002ce530:
      uVar3 = 0xffffffffffffffef;
    }
    else {
      __src = (void *)param_1[2];
      if (0x7fffffffffffffe6 < uVar5) goto LAB_002ce530;
LAB_002ce54c:
      uVar1 = uVar5 << 1;
      if (uVar5 << 1 <= uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = 0x17;
      if (0x16 < uVar1) {
        uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
      }
    }
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    if (uVar4 != 0) {
      memcpy(__dest,__src,uVar4);
    }
    if (uVar5 != 0x16) {
      FUN_0049e790(PTR_LAB_047cba48,__src);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  uVar3 = param_1[2];
LAB_002ce5c0:
  memset((void *)(uVar3 + uVar4),param_3,param_2);
  uVar4 = uVar4 + param_2;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)((int)uVar4 << 1);
  }
  else {
    param_1[1] = uVar4;
  }
  *(undefined1 *)(uVar3 + uVar4) = 0;
  return param_1;
}


