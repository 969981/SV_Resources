/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024fa0c; name: FUN_0024fa0c
 */


void FUN_0024fa0c(long *param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar9 = (ulong *)param_1[1];
  if ((ulong *)param_1[2] <= puVar9) {
    lVar7 = (long)puVar9 - *param_1 >> 5;
    uVar13 = lVar7 + 1;
    if (uVar13 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar3 = lVar4 >> 4;
    if (uVar13 <= uVar3) {
      uVar13 = uVar3;
    }
    if (0x3fffffffffffffe < (ulong)(lVar4 >> 5)) {
      uVar13 = 0x7ffffffffffffff;
    }
    if (uVar13 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar13 << 5,8);
    }
    uVar3 = *param_3;
    puVar9 = (ulong *)(lVar4 + lVar7 * 0x20);
    plVar2 = (long *)FUN_01cf7e20();
    puVar9[3] = (ulong)plVar2;
    if ((*param_2 & 1) == 0) {
      uVar12 = (ulong)(*param_2 >> 1);
      if (uVar12 < uVar3) {
LAB_0024fcd8:
                    /* try { // try from 0024fcd8 to 0024fce7 has its CatchHandler @ 0024fce8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      param_2 = param_2 + 1;
    }
    else {
      uVar12 = *(ulong *)(param_2 + 8);
      if (uVar12 < uVar3) goto LAB_0024fcd8;
      param_2 = *(byte **)(param_2 + 0x10);
    }
    uVar12 = uVar12 - uVar3;
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar12 < 0x17) {
      puVar10 = (undefined1 *)((long)puVar9 + 1);
      *(char *)puVar9 = (char)((int)uVar12 << 1);
      if (uVar12 == 0) goto LAB_0024fbe4;
    }
    else {
      uVar14 = uVar12 + 0x10 & 0xfffffffffffffff0;
      puVar10 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar14,1);
      *puVar9 = uVar14 | 1;
      puVar9[1] = uVar12;
      puVar9[2] = (ulong)puVar10;
    }
    memcpy(puVar10,param_2 + uVar3,uVar12);
LAB_0024fbe4:
    puVar10[uVar12] = 0;
    pbVar5 = (byte *)*param_1;
    pbVar6 = (byte *)param_1[1];
    puVar1 = puVar9 + 4;
    puVar8 = puVar9;
    if (pbVar6 == pbVar5) {
      pbVar6 = pbVar5;
    }
    else {
      do {
        uVar3 = *(ulong *)(pbVar6 + -0x20);
        uVar14 = *(ulong *)(pbVar6 + -8);
        uVar12 = *(ulong *)(pbVar6 + -0x10);
        puVar9 = puVar8 + -4;
        puVar8[-3] = *(ulong *)(pbVar6 + -0x18);
        *puVar9 = uVar3;
        puVar8[-1] = uVar14;
        puVar8[-2] = uVar12;
        pbVar6[-0x18] = 0;
        pbVar6[-0x17] = 0;
        pbVar6[-0x16] = 0;
        pbVar6[-0x15] = 0;
        pbVar6[-0x14] = 0;
        pbVar6[-0x13] = 0;
        pbVar6[-0x12] = 0;
        pbVar6[-0x11] = 0;
        pbVar6[-0x10] = 0;
        pbVar6[-0xf] = 0;
        pbVar6[-0xe] = 0;
        pbVar6[-0xd] = 0;
        pbVar6[-0xc] = 0;
        pbVar6[-0xb] = 0;
        pbVar6[-10] = 0;
        pbVar6[-9] = 0;
        pbVar6[-0x20] = 0;
        pbVar6[-0x1f] = 0;
        pbVar6[-0x1e] = 0;
        pbVar6[-0x1d] = 0;
        pbVar6[-0x1c] = 0;
        pbVar6[-0x1b] = 0;
        pbVar6[-0x1a] = 0;
        pbVar6[-0x19] = 0;
        pbVar6 = pbVar6 + -0x20;
        puVar8 = puVar9;
      } while (pbVar5 != pbVar6);
      pbVar5 = (byte *)param_1[1];
      pbVar6 = (byte *)*param_1;
    }
    *param_1 = (long)puVar9;
    param_1[1] = (long)puVar1;
    lVar7 = param_1[2];
    param_1[2] = lVar4 + uVar13 * 0x20;
    if (pbVar5 != pbVar6) {
      do {
        pbVar11 = pbVar5 + -0x20;
        if ((*pbVar11 & 1) != 0) {
          (**(code **)(**(long **)(pbVar5 + -8) + 0x18))
                    (*(long **)(pbVar5 + -8),*(undefined8 *)(pbVar5 + -0x10),
                     *(ulong *)(pbVar5 + -0x20) & 0xfffffffffffffffe,1);
        }
        pbVar5 = pbVar11;
      } while (pbVar6 != pbVar11);
    }
    if (pbVar6 == (byte *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0024fca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar6,lVar7 - (long)pbVar6,8);
    return;
  }
  uVar13 = *param_3;
  plVar2 = (long *)FUN_01cf7e20();
  puVar9[3] = (ulong)plVar2;
  if ((*param_2 & 1) == 0) {
    uVar3 = (ulong)(*param_2 >> 1);
    if (uVar3 < uVar13) {
LAB_0024fcc8:
                    /* try { // try from 0024fcc8 to 0024fcd7 has its CatchHandler @ 0024fd14 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    param_2 = param_2 + 1;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
    if (uVar3 < uVar13) goto LAB_0024fcc8;
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar3 = uVar3 - uVar13;
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar3 < 0x17) {
    puVar10 = (undefined1 *)((long)puVar9 + 1);
    *(char *)puVar9 = (char)((int)uVar3 << 1);
    if (uVar3 == 0) goto LAB_0024fb30;
  }
  else {
    uVar12 = uVar3 + 0x10 & 0xfffffffffffffff0;
    puVar10 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar12,1);
    *puVar9 = uVar12 | 1;
    puVar9[1] = uVar3;
    puVar9[2] = (ulong)puVar10;
  }
  memcpy(puVar10,param_2 + uVar13,uVar3);
LAB_0024fb30:
  puVar10[uVar3] = 0;
  param_1[1] = (long)(puVar9 + 4);
  return;
}


