/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00263a80; name: FUN_00263a80
 */


ulong * FUN_00263a80(ulong *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  byte *__src;
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  void *__dest;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  
  bVar4 = (byte)*param_1;
  if ((bVar4 & 1) == 0) {
    uVar7 = (ulong)(bVar4 >> 1);
    if (uVar7 < param_2) {
LAB_00263c78:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar8 = 0x16;
    uVar5 = 0x16 - uVar7;
  }
  else {
    uVar7 = param_1[1];
    if (uVar7 < param_2) goto LAB_00263c78;
    uVar8 = (*param_1 & 0xfffffffffffffffe) - 1;
    uVar5 = uVar8 - uVar7;
  }
  if (uVar5 < param_4) {
    uVar5 = uVar7 + param_4;
    if (-uVar8 - 0x12 < uVar5 - uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((bVar4 & 1) == 0) {
      pbVar6 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar6 = (byte *)param_1[2];
    }
    uVar2 = uVar8 << 1;
    if (uVar8 << 1 <= uVar5) {
      uVar2 = uVar5;
    }
    uVar1 = 0x17;
    if (0x16 < uVar2) {
      uVar1 = uVar2 + 0x10 & 0xfffffffffffffff0;
    }
    uVar2 = 0xffffffffffffffef;
    if (uVar8 < 0x7fffffffffffffe7) {
      uVar2 = uVar1;
    }
    __dest = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar2,1);
    if (param_2 != 0) {
      memcpy(__dest,pbVar6,param_2);
    }
    memcpy((void *)((long)__dest + param_2),param_3,param_4);
    if (uVar7 - param_2 != 0) {
      memcpy((void *)((long)((long)__dest + param_2) + param_4),pbVar6 + param_2,uVar7 - param_2);
    }
    if (uVar8 + 1 != 0x17) {
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar6,uVar8 + 1,1);
    }
    pbVar6 = (byte *)((long)__dest + uVar5);
    *param_1 = uVar2 | 1;
    param_1[1] = uVar5;
    param_1[2] = (ulong)__dest;
  }
  else {
    if (param_4 == 0) {
      return param_1;
    }
    if ((bVar4 & 1) == 0) {
      pbVar6 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar6 = (byte *)param_1[2];
    }
    if (uVar7 - param_2 != 0) {
      __src = pbVar6 + param_2;
      pbVar3 = param_3 + param_4;
      if (pbVar6 + uVar7 <= param_3 || param_3 < __src) {
        pbVar3 = param_3;
      }
      memmove(__src + param_4,__src,uVar7 - param_2);
      param_3 = pbVar3;
    }
    memmove(pbVar6 + param_2,param_3,param_4);
    uVar7 = uVar7 + param_4;
    if ((*param_1 & 1) == 0) {
      pbVar6 = pbVar6 + uVar7;
      *(byte *)param_1 = (byte)((int)uVar7 << 1);
    }
    else {
      param_1[1] = uVar7;
      pbVar6 = pbVar6 + uVar7;
    }
  }
  *pbVar6 = 0;
  return param_1;
}


