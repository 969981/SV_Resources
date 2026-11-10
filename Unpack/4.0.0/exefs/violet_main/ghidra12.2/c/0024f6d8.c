/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024f6d8; name: FUN_0024f6d8
 */


void FUN_0024f6d8(long *param_1,byte *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong __n;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  
  puVar10 = (ulong *)param_1[1];
  if ((ulong *)param_1[2] <= puVar10) {
    lVar8 = (long)puVar10 - *param_1 >> 5;
    uVar11 = lVar8 + 1;
    if (uVar11 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar14 = lVar4 >> 4;
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
    if (0x3fffffffffffffe < (ulong)(lVar4 >> 5)) {
      uVar11 = 0x7ffffffffffffff;
    }
    if (uVar11 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 << 5,8);
    }
    uVar3 = *param_3;
    puVar10 = (ulong *)(lVar4 + lVar8 * 0x20);
    uVar14 = *param_4;
    plVar2 = (long *)FUN_01cf7e20();
    puVar10[3] = (ulong)plVar2;
    if ((*param_2 & 1) == 0) {
      uVar5 = (ulong)(*param_2 >> 1);
      if (uVar5 < uVar3) {
LAB_0024f9c0:
                    /* try { // try from 0024f9c0 to 0024f9cf has its CatchHandler @ 0024f9d0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      param_2 = param_2 + 1;
    }
    else {
      uVar5 = *(ulong *)(param_2 + 8);
      if (uVar5 < uVar3) goto LAB_0024f9c0;
      param_2 = *(byte **)(param_2 + 0x10);
    }
    __n = uVar5 - uVar3;
    if (uVar14 <= uVar5 - uVar3) {
      __n = uVar14;
    }
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      puVar12 = (undefined1 *)((long)puVar10 + 1);
      *(char *)puVar10 = (char)((int)__n << 1);
      if (__n == 0) goto LAB_0024f8cc;
    }
    else {
      uVar14 = __n + 0x10 & 0xfffffffffffffff0;
      puVar12 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar14,1);
      *puVar10 = uVar14 | 1;
      puVar10[1] = __n;
      puVar10[2] = (ulong)puVar12;
    }
    memcpy(puVar12,param_2 + uVar3,__n);
LAB_0024f8cc:
    puVar12[__n] = 0;
    pbVar6 = (byte *)*param_1;
    pbVar7 = (byte *)param_1[1];
    puVar1 = puVar10 + 4;
    puVar9 = puVar10;
    if (pbVar7 == pbVar6) {
      pbVar7 = pbVar6;
    }
    else {
      do {
        uVar14 = *(ulong *)(pbVar7 + -0x20);
        uVar5 = *(ulong *)(pbVar7 + -8);
        uVar3 = *(ulong *)(pbVar7 + -0x10);
        puVar10 = puVar9 + -4;
        puVar9[-3] = *(ulong *)(pbVar7 + -0x18);
        *puVar10 = uVar14;
        puVar9[-1] = uVar5;
        puVar9[-2] = uVar3;
        pbVar7[-0x18] = 0;
        pbVar7[-0x17] = 0;
        pbVar7[-0x16] = 0;
        pbVar7[-0x15] = 0;
        pbVar7[-0x14] = 0;
        pbVar7[-0x13] = 0;
        pbVar7[-0x12] = 0;
        pbVar7[-0x11] = 0;
        pbVar7[-0x10] = 0;
        pbVar7[-0xf] = 0;
        pbVar7[-0xe] = 0;
        pbVar7[-0xd] = 0;
        pbVar7[-0xc] = 0;
        pbVar7[-0xb] = 0;
        pbVar7[-10] = 0;
        pbVar7[-9] = 0;
        pbVar7[-0x20] = 0;
        pbVar7[-0x1f] = 0;
        pbVar7[-0x1e] = 0;
        pbVar7[-0x1d] = 0;
        pbVar7[-0x1c] = 0;
        pbVar7[-0x1b] = 0;
        pbVar7[-0x1a] = 0;
        pbVar7[-0x19] = 0;
        pbVar7 = pbVar7 + -0x20;
        puVar9 = puVar10;
      } while (pbVar6 != pbVar7);
      pbVar6 = (byte *)param_1[1];
      pbVar7 = (byte *)*param_1;
    }
    *param_1 = (long)puVar10;
    param_1[1] = (long)puVar1;
    lVar8 = param_1[2];
    param_1[2] = lVar4 + uVar11 * 0x20;
    if (pbVar6 != pbVar7) {
      do {
        pbVar13 = pbVar6 + -0x20;
        if ((*pbVar13 & 1) != 0) {
          (**(code **)(**(long **)(pbVar6 + -8) + 0x18))
                    (*(long **)(pbVar6 + -8),*(undefined8 *)(pbVar6 + -0x10),
                     *(ulong *)(pbVar6 + -0x20) & 0xfffffffffffffffe,1);
        }
        pbVar6 = pbVar13;
      } while (pbVar7 != pbVar13);
    }
    if (pbVar7 == (byte *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0024f98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar7,lVar8 - (long)pbVar7,8);
    return;
  }
  uVar14 = *param_3;
  uVar11 = *param_4;
  plVar2 = (long *)FUN_01cf7e20();
  puVar10[3] = (ulong)plVar2;
  if ((*param_2 & 1) == 0) {
    uVar3 = (ulong)(*param_2 >> 1);
    if (uVar3 < uVar14) {
LAB_0024f9b0:
                    /* try { // try from 0024f9b0 to 0024f9bf has its CatchHandler @ 0024f9fc */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    param_2 = param_2 + 1;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
    if (uVar3 < uVar14) goto LAB_0024f9b0;
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar5 = uVar3 - uVar14;
  if (uVar11 <= uVar3 - uVar14) {
    uVar5 = uVar11;
  }
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar5 < 0x17) {
    puVar12 = (undefined1 *)((long)puVar10 + 1);
    *(char *)puVar10 = (char)((int)uVar5 << 1);
    if (uVar5 == 0) goto LAB_0024f80c;
  }
  else {
    uVar11 = uVar5 + 0x10 & 0xfffffffffffffff0;
    puVar12 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar11,1);
    *puVar10 = uVar11 | 1;
    puVar10[1] = uVar5;
    puVar10[2] = (ulong)puVar12;
  }
  memcpy(puVar12,param_2 + uVar14,uVar5);
LAB_0024f80c:
  puVar12[uVar5] = 0;
  param_1[1] = (long)(puVar10 + 4);
  return;
}


