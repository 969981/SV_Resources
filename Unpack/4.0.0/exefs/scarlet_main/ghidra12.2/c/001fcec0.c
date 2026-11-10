/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fcec0; name: FUN_001fcec0
 */


ulong * FUN_001fcec0(ulong *param_1,ulong *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *__src;
  byte bVar3;
  void *__dest;
  ulong uVar4;
  byte *pbVar5;
  void *pvVar6;
  ulong uVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  bVar3 = (byte)*param_2;
  if ((*param_1 & 1) == 0) {
    if ((bVar3 & 1) == 0) {
      uVar7 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar7;
      *param_1 = uVar4;
      return param_1;
    }
    sVar2 = param_2[1];
    pvVar6 = (void *)param_2[2];
    if (sVar2 < 0x17) {
      *(byte *)param_1 = (byte)((int)sVar2 << 1);
      if (sVar2 != 0) {
        memcpy((byte *)((long)param_1 + 1),pvVar6,sVar2);
      }
      *(byte *)((long)param_1 + sVar2 + 1) = 0;
      return param_1;
    }
    if (0xffffffffffffffd8 < sVar2 - 0x16) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    sVar1 = sVar2;
    if (sVar2 < 0x2d) {
      sVar1 = 0x2c;
    }
    uVar4 = sVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    memcpy(__dest,pvVar6,sVar2);
    param_1[1] = sVar2;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
    *(undefined1 *)((long)__dest + sVar2) = 0;
    return param_1;
  }
  sVar2 = param_2[1];
  __src = (byte *)param_2[2];
  if ((bVar3 & 1) == 0) {
    __src = (byte *)((long)param_2 + 1);
    sVar2 = (ulong)(bVar3 >> 1);
  }
  uVar4 = *param_1 & 0xfffffffffffffffe;
  if (sVar2 < uVar4) {
    pvVar6 = (void *)param_1[2];
    param_1[1] = sVar2;
    if (sVar2 != 0) {
      memcpy(pvVar6,__src,sVar2);
    }
    goto LAB_001fd0e0;
  }
  if (-uVar4 - 0x11 < (sVar2 - uVar4) + 1) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  uVar4 = uVar4 - 1;
  if ((*param_1 & 1) == 0) {
    pbVar5 = (byte *)((long)param_1 + 1);
    if (uVar4 < 0x7fffffffffffffe7) goto LAB_001fd07c;
LAB_001fd060:
    uVar4 = 0xffffffffffffffef;
  }
  else {
    pbVar5 = (byte *)param_1[2];
    if (0x7fffffffffffffe6 < uVar4) goto LAB_001fd060;
LAB_001fd07c:
    uVar7 = uVar4 * 2;
    if (uVar4 * 2 <= sVar2) {
      uVar7 = sVar2;
    }
    uVar4 = 0x17;
    if (0x16 < uVar7) {
      uVar4 = uVar7 + 0x10 & 0xfffffffffffffff0;
    }
  }
  pvVar6 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
  if (sVar2 != 0) {
    memcpy(pvVar6,__src,sVar2);
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar5);
  param_1[1] = sVar2;
  param_1[2] = (ulong)pvVar6;
  *param_1 = uVar4 | 1;
LAB_001fd0e0:
  *(undefined1 *)((long)pvVar6 + sVar2) = 0;
  return param_1;
}


