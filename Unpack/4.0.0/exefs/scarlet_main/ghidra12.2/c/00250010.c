/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00250010; name: FUN_00250010
 */


ulong * FUN_00250010(long *param_1,ulong *param_2,byte *param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  void *__dest;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong *local_88;
  ulong *puStack_80;
  ulong *local_78;
  ulong *local_70;
  long *local_68;
  
  lVar9 = *param_1;
  puVar3 = (ulong *)param_1[1];
  lVar21 = (long)param_2 - lVar9 >> 5;
  if ((ulong *)param_1[2] <= puVar3) {
    uVar18 = ((long)puVar3 - lVar9 >> 5) + 1;
    if (uVar18 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - lVar9;
    uVar20 = lVar9 >> 4;
    if (uVar18 <= uVar20) {
      uVar18 = uVar20;
    }
    local_68 = param_1 + 3;
    if (0x3fffffffffffffe < (ulong)(lVar9 >> 5)) {
      uVar18 = 0x7ffffffffffffff;
    }
    local_70 = (ulong *)0x0;
    if (uVar18 == 0) {
      local_88 = (ulong *)0x0;
    }
    else {
      local_88 = (ulong *)(**(code **)(*(long *)*local_68 + 0x10))((long *)*local_68,uVar18 << 5,8);
    }
    puStack_80 = local_88 + lVar21 * 4;
    local_70 = local_88 + uVar18 * 4;
                    /* try { // try from 00250134 to 00250147 has its CatchHandler @ 0025055c */
    local_78 = puStack_80;
    FUN_0025103c(&local_88,param_3,param_4,param_5);
    puVar3 = puStack_80;
    puVar7 = (ulong *)*param_1;
    if (puVar7 != param_2) {
      puVar14 = param_2;
      do {
        uVar18 = puVar14[-4];
        uVar6 = puVar14[-1];
        uVar20 = puVar14[-2];
        puStack_80[-3] = puVar14[-3];
        puStack_80[-4] = uVar18;
        puStack_80[-1] = uVar6;
        puStack_80[-2] = uVar20;
        puVar14[-4] = 0;
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14 = puVar14 + -4;
        puStack_80 = puStack_80 + -4;
      } while (puVar7 != puVar14);
    }
    puVar7 = (ulong *)param_1[1];
    if (puVar7 != param_2) {
      do {
        uVar18 = *param_2;
        uVar6 = param_2[3];
        uVar20 = param_2[2];
        local_78[1] = param_2[1];
        *local_78 = uVar18;
        local_78[3] = uVar6;
        local_78[2] = uVar20;
        param_2[1] = 0;
        param_2[2] = 0;
        puVar14 = param_2 + 4;
        *param_2 = 0;
        local_78 = local_78 + 4;
        param_2 = puVar14;
      } while (puVar7 != puVar14);
      puVar7 = (ulong *)param_1[1];
    }
    puVar14 = (ulong *)*param_1;
    *param_1 = (long)puStack_80;
    param_1[1] = (long)local_78;
    lVar9 = param_1[2];
    param_1[2] = (long)local_70;
    local_88 = puVar14;
    puStack_80 = puVar14;
    local_70 = (ulong *)lVar9;
    while (puVar4 = puVar7, puVar4 != puVar14) {
      local_78 = puVar4 + -4;
      puVar7 = local_78;
      if ((puVar4[-4] & 1) != 0) {
        (**(code **)(*(long *)puVar4[-1] + 0x18))
                  ((long *)puVar4[-1],puVar4[-2],puVar4[-4] & 0xfffffffffffffffe,1);
        puVar7 = local_78;
      }
    }
    if (local_88 != (ulong *)0x0) {
      local_78 = puVar4;
      (**(code **)(*(long *)*local_68 + 0x18))
                ((long *)*local_68,local_88,(long)local_70 - (long)local_88,8);
    }
    return puVar3;
  }
  if (param_2 == puVar3) {
    uVar20 = *param_4;
    uVar18 = *param_5;
    plVar5 = (long *)FUN_01cf7e20();
    lVar9 = lVar9 + lVar21 * 0x20;
    *(long **)(lVar9 + 0x18) = plVar5;
    if ((*param_3 & 1) == 0) {
      uVar6 = (ulong)(*param_3 >> 1);
      if (uVar6 < uVar20) goto LAB_00250540;
      param_3 = param_3 + 1;
    }
    else {
      uVar6 = *(ulong *)(param_3 + 8);
      if (uVar6 < uVar20) {
LAB_00250540:
                    /* try { // try from 00250540 to 0025054f has its CatchHandler @ 00250550 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      param_3 = *(byte **)(param_3 + 0x10);
    }
    uVar2 = uVar6 - uVar20;
    if (uVar18 <= uVar6 - uVar20) {
      uVar2 = uVar18;
    }
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar2 < 0x17) {
      pbVar22 = (byte *)((long)puVar3 + 1);
      *(byte *)puVar3 = (byte)((int)uVar2 << 1);
      if (uVar2 == 0) goto LAB_002504f8;
    }
    else {
      uVar18 = uVar2 + 0x10 & 0xfffffffffffffff0;
      pbVar22 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar18,1);
      *(ulong *)(lVar9 + 8) = uVar2;
      *(byte **)(lVar9 + 0x10) = pbVar22;
      *param_2 = uVar18 | 1;
    }
    memcpy(pbVar22,param_3 + uVar20,uVar2);
LAB_002504f8:
    pbVar22[uVar2] = 0;
    param_1[1] = (long)(param_2 + 4);
    return param_2;
  }
  local_68 = param_1 + 3;
  uVar20 = *param_4;
  uVar18 = *param_5;
  local_70 = (ulong *)FUN_01cf7e20();
  if ((*param_3 & 1) == 0) {
    uVar6 = (ulong)(*param_3 >> 1);
    if (uVar6 < uVar20) goto LAB_00250530;
    param_3 = param_3 + 1;
  }
  else {
    uVar6 = *(ulong *)(param_3 + 8);
    if (uVar6 < uVar20) {
LAB_00250530:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    param_3 = *(byte **)(param_3 + 0x10);
  }
  uVar2 = uVar6 - uVar20;
  if (uVar18 <= uVar6 - uVar20) {
    uVar2 = uVar18;
  }
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    local_88 = (ulong *)CONCAT71(local_88._1_7_,(char)((int)uVar2 << 1));
    __dest = (void *)((ulong)&local_88 | 1);
    if (uVar2 == 0) goto LAB_002502f0;
  }
  else {
    uVar18 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*local_70 + 0x10))(local_70,uVar18,1);
    local_88 = (ulong *)(uVar18 | 1);
    puStack_80 = (ulong *)uVar2;
    local_78 = __dest;
  }
  memcpy(__dest,param_3 + uVar20,uVar2);
LAB_002502f0:
  *(undefined1 *)((long)__dest + uVar2) = 0;
  puVar17 = (undefined8 *)param_1[1];
  puVar19 = puVar17 + -4;
  lVar8 = (long)puVar17 + (-0x20 - (long)param_2);
  puVar11 = puVar17;
  if (puVar19 < puVar17) {
    puVar10 = puVar17;
    puVar12 = puVar19;
    do {
      uVar23 = *puVar12;
      uVar25 = puVar12[3];
      uVar24 = puVar12[2];
      puVar11 = puVar10 + 4;
      puVar10[1] = puVar12[1];
      *puVar10 = uVar23;
      puVar10[3] = uVar25;
      puVar10[2] = uVar24;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar13 = puVar12 + 4;
      *puVar12 = 0;
      puVar10 = puVar11;
      puVar12 = puVar13;
    } while (puVar13 < puVar17);
  }
  param_1[1] = (long)puVar11;
  if (lVar8 != 0) {
    lVar8 = lVar8 >> 5;
    lVar15 = 0;
    do {
      lVar1 = lVar9 + (lVar21 + lVar8) * 0x20 + lVar15;
      plVar5 = *(long **)((long)puVar17 + lVar15 + -8);
      if ((plVar5 == *(long **)(lVar1 + -8)) ||
         (uVar18 = (**(code **)(*plVar5 + 0x20))(), (uVar18 & 1) != 0)) {
        pbVar22 = (byte *)((long)puVar17 + lVar15 + -0x20);
        if ((*pbVar22 & 1) != 0) {
          plVar5 = *(long **)((long)puVar17 + lVar15 + -8);
          (**(code **)(*plVar5 + 0x18))
                    (plVar5,*(undefined8 *)((long)puVar17 + lVar15 + -0x10),
                     *(ulong *)((long)puVar17 + lVar15 + -0x20) & 0xfffffffffffffffe,1);
          *pbVar22 = 0;
          *(undefined1 *)((long)puVar17 + lVar15 + -0x1f) = 0;
        }
        uVar24 = *(undefined8 *)(lVar1 + -0x18);
        uVar23 = *(undefined8 *)(lVar1 + -0x20);
        *(undefined8 *)((long)puVar17 + lVar15 + -0x10) = *(undefined8 *)(lVar1 + -0x10);
        *(undefined8 *)((long)puVar17 + lVar15 + -0x18) = uVar24;
        *(undefined8 *)pbVar22 = uVar23;
        *(undefined2 *)(lVar1 + -0x20) = 0;
      }
      else {
                    /* try { // try from 002503d8 to 002503db has its CatchHandler @ 002505cc */
        FUN_01d0e1a8((long)puVar17 + lVar15 + -0x20,(long)puVar19 + lVar15 + -0x20);
      }
      lVar15 = lVar15 + -0x20;
    } while (-lVar15 != lVar8 * 0x20);
  }
  lVar9 = lVar9 + lVar21 * 0x20;
  plVar16 = (long *)(lVar9 + 0x18);
  plVar5 = (long *)*plVar16;
  if (((ulong *)plVar5 == local_70) || (uVar18 = (**(code **)(*plVar5 + 0x20))(), (uVar18 & 1) != 0)
     ) {
    if ((*param_2 & 1) != 0) {
      plVar16 = (long *)*plVar16;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,*(undefined8 *)(lVar9 + 0x10),*param_2 & 0xfffffffffffffffe,1);
      *(undefined2 *)param_2 = 0;
    }
    param_2[2] = (ulong)local_78;
    param_2[1] = (ulong)puStack_80;
    *param_2 = (ulong)local_88;
  }
  else {
                    /* try { // try from 0025044c to 00250457 has its CatchHandler @ 00250558 */
    FUN_01d0e1a8(param_2,&local_88);
    if (((ulong)local_88 & 1) != 0) {
      (**(code **)(*local_70 + 0x18))(local_70,local_78,(ulong)local_88 & 0xfffffffffffffffe,1);
    }
  }
  return param_2;
}


