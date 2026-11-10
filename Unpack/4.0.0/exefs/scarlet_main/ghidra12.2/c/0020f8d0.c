/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0020f8d0; name: FUN_0020f8d0
 */


ulong * FUN_0020f8d0(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  void *__dest;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  ulong uVar7;
  
  bVar3 = (byte)*param_1;
  if ((bVar3 & 1) == 0) {
    uVar6 = (ulong)(bVar3 >> 1);
    uVar7 = 0x16;
    uVar5 = 0x16 - uVar6;
  }
  else {
    uVar6 = param_1[1];
    uVar7 = (*param_1 & 0xfffffffffffffffe) - 1;
    uVar5 = uVar7 - uVar6;
  }
  if (uVar5 < param_3) {
    uVar5 = uVar6 + param_3;
    if (-uVar7 - 0x12 < uVar5 - uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((bVar3 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
    }
    else {
      __src = (void *)param_1[2];
    }
    uVar2 = uVar7 << 1;
    if (uVar7 << 1 <= uVar5) {
      uVar2 = uVar5;
    }
    uVar1 = 0x17;
    if (0x16 < uVar2) {
      uVar1 = uVar2 + 0x10 & 0xfffffffffffffff0;
    }
    uVar2 = 0xffffffffffffffef;
    if (uVar7 < 0x7fffffffffffffe7) {
      uVar2 = uVar1;
    }
    __dest = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar2,1);
    if (uVar6 != 0) {
      memcpy(__dest,__src,uVar6);
    }
    memcpy((void *)((long)__dest + uVar6),param_2,param_3);
    if (uVar7 + 1 != 0x17) {
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,uVar7 + 1,1);
    }
    puVar4 = (undefined1 *)((long)__dest + uVar5);
    *param_1 = uVar2 | 1;
    param_1[1] = uVar5;
    param_1[2] = (ulong)__dest;
  }
  else {
    if (param_3 == 0) {
      return param_1;
    }
    if ((bVar3 & 1) == 0) {
      uVar7 = (long)param_1 + 1;
    }
    else {
      uVar7 = param_1[2];
    }
    memcpy((void *)(uVar7 + uVar6),param_2,param_3);
    uVar6 = uVar6 + param_3;
    if ((*param_1 & 1) == 0) {
      puVar4 = (undefined1 *)(uVar7 + uVar6);
      *(char *)param_1 = (char)((int)uVar6 << 1);
    }
    else {
      param_1[1] = uVar6;
      puVar4 = (undefined1 *)(uVar7 + uVar6);
    }
  }
  *puVar4 = 0;
  return param_1;
}


