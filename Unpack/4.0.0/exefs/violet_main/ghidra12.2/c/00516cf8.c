/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00516cf8; name: FUN_00516cf8
 */


uint * FUN_00516cf8(undefined8 param_1,uint *param_2,ulong *param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar14;
  void *pvVar12;
  long lVar13;
  void *pvVar15;
  ulong uVar16;
  uint uVar17;
  byte *pbVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined **local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined **local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_90;
  long *plStack_88;
  void *local_80;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  
  if (param_6 == 0) {
    uVar10 = FUN_004efc34(param_5,param_1);
    puVar20 = (uint *)FUN_00515960(param_4,uVar10,param_2,param_3);
    return puVar20;
  }
  puVar9 = *(ulong **)(param_6 + 0x30);
  uVar14 = (uint)param_4 & 7;
  if ((puVar9 != (ulong *)0x0) &&
     (puStack_70 = PTR_LAB_047cd728, local_78 = param_6, *puVar9 != 0xffffffffffffffff)) {
    local_90 = &puStack_70;
    plStack_88 = &local_78;
    local_68 = &local_90;
    std::__call_once(puVar9,&local_68,(_func_void_void_ptr *)&LAB_0051d550);
  }
  uVar17 = *(uint *)(param_6 + 0x38);
  if (uVar14 != *(uint *)(PTR_DAT_047cdbd0 + (ulong)uVar17 * 4)) {
    if (*(int *)(param_6 + 0x3c) != 3) {
LAB_00516f60:
      uVar10 = FUN_004efc34(param_5,param_1);
      puVar20 = (uint *)FUN_00515960(param_4,uVar10,param_2,param_3);
      return puVar20;
    }
    puVar9 = *(ulong **)(param_6 + 0x30);
    if (puVar9 != (ulong *)0x0) {
      puStack_70 = PTR_LAB_047cd728;
      local_78 = param_6;
      if (*puVar9 != 0xffffffffffffffff) {
        local_90 = &puStack_70;
        plStack_88 = &local_78;
        local_68 = &local_90;
        std::__call_once(puVar9,&local_68,(_func_void_void_ptr *)&LAB_0051d550);
      }
      uVar17 = *(uint *)(param_6 + 0x38);
    }
    if ((uVar14 != 2) || (uVar17 - 9 < 4)) goto LAB_00516f60;
    puVar9 = *(ulong **)(param_6 + 0x30);
    if (puVar9 != (ulong *)0x0) {
      puStack_70 = PTR_LAB_047cd728;
      local_78 = param_6;
      if (*puVar9 != 0xffffffffffffffff) {
        local_90 = &puStack_70;
        plStack_88 = &local_78;
        local_68 = &local_90;
        std::__call_once(puVar9,&local_68,(_func_void_void_ptr *)&LAB_0051d550);
      }
      uVar17 = *(uint *)(param_6 + 0x38);
    }
    switch(uVar17) {
    case 1:
      uVar10 = FUN_004f9034(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052ed90(uVar10,param_2,param_3);
      return puVar20;
    case 2:
      uVar10 = FUN_004f9010(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052ecc0(uVar10,param_2,param_3);
      return puVar20;
    case 3:
      uVar10 = FUN_004f8fa4(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052e920(uVar10,param_2,param_3);
      return puVar20;
    case 4:
      uVar10 = FUN_004f8fec(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052e930(uVar10,param_2,param_3);
      return puVar20;
    case 5:
      uVar10 = FUN_004f8f80(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052e900(uVar10,param_2,param_3);
      return puVar20;
    case 6:
      uVar10 = FUN_004f8fec(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052eb20(uVar10,param_2,param_3);
      return puVar20;
    case 7:
      uVar10 = FUN_004f8fc8(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052e980(uVar10,param_2,param_3);
      return puVar20;
    case 8:
      uVar10 = FUN_004f9058(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052e970(uVar10,param_2,param_3);
      return puVar20;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      return (uint *)0x0;
    case 0xd:
      uVar10 = FUN_004f8fc8(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052e910(uVar10,param_2,param_3);
      return puVar20;
    case 0xe:
      puVar20 = (uint *)FUN_004f8f80(param_5,param_1,param_6);
      if (*(int *)(*(long *)(param_6 + 0x28) + 0x3c) == 3) {
        puVar20 = (uint *)FUN_0052e960(puVar20,param_2,param_3);
        return puVar20;
      }
      if ((char)*param_2 < '\0') {
        auVar31 = FUN_0052e5f0(param_2);
        if (auVar31._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar31[8] = (char)*param_2;
        auVar31._0_8_ = (long)param_2 + 1;
        auVar31._9_3_ = 0;
      }
      puVar19 = auVar31._0_8_;
      uVar14 = auVar31._8_4_ + (auVar31._0_4_ - (int)param_3[1]);
      puVar1 = (uint *)(param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f));
      iVar5 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar14;
      *param_3 = (ulong)puVar1;
      iVar5 = iVar5 - uVar14;
      if (-1 < iVar5) {
        if (puVar19 < puVar1) goto LAB_00517904;
LAB_005178bc:
        if ((long)puVar19 - param_3[1] != (long)*(int *)((long)param_3 + 0x1c)) {
          auVar29 = FUN_0052dd3c(param_3,puVar19,0xffffffff);
          puVar19 = auVar29._0_8_;
          if ((auVar29._8_8_ & 1) != 0) goto LAB_00517944;
LAB_00517904:
          do {
            while( true ) {
              bVar3 = (byte)*puVar19;
              if ((char)bVar3 < '\0') {
                iVar6 = (uint)bVar3 + (uint)*(byte *)((long)puVar19 + 1) * 0x80 + -0x80;
                if ((char)*(byte *)((long)puVar19 + 1) < '\0') {
                  auVar29 = FUN_0052e420(puVar19,iVar6);
                  if (auVar29._0_8_ == 0) {
                    return (uint *)0x0;
                  }
                }
                else {
                  auVar29._8_4_ = iVar6;
                  auVar29._0_8_ = (byte *)((long)puVar19 + 2);
                  auVar29._12_4_ = 0;
                }
              }
              else {
                auVar29[8] = bVar3;
                auVar29._0_8_ = (byte *)((long)puVar19 + 1);
                auVar29._9_7_ = 0;
              }
              puVar19 = auVar29._0_8_;
              uVar10 = FUN_004a86e0(param_6);
              lVar13 = FUN_004a5400(uVar10,auVar29._8_8_ & 0xffffffff);
              if (lVar13 == 0) break;
              uVar14 = *puVar20;
              if (uVar14 == puVar20[1]) {
                FUN_00531134(puVar20,uVar14 + 1);
              }
              *(int *)(*(long *)(puVar20 + 2) + (ulong)uVar14 * 4) = auVar29._8_4_;
              *puVar20 = uVar14 + 1;
              if ((uint *)*param_3 <= puVar19) goto LAB_005178bc;
            }
            uVar2 = *(undefined4 *)(param_6 + 0x44);
            uVar10 = FUN_004efc34(param_5,param_1);
            FUN_00514e00(uVar10,uVar2,auVar29._8_8_);
          } while (puVar19 < (uint *)*param_3);
          goto LAB_005178bc;
        }
LAB_00517944:
        if ((int)param_3[10] == 0) {
          uVar14 = *(int *)((long)param_3 + 0x1c) + iVar5;
          *(uint *)((long)param_3 + 0x1c) = uVar14;
          *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
          return puVar19;
        }
      }
      break;
    case 0xf:
      uVar10 = FUN_004f8f80(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052ea50(uVar10,param_2,param_3);
      return puVar20;
    case 0x10:
      uVar10 = FUN_004f8fa4(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052ebf0(uVar10,param_2,param_3);
      return puVar20;
    case 0x11:
      uVar10 = FUN_004f8f80(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052e940(uVar10,param_2,param_3);
      return puVar20;
    case 0x12:
      uVar10 = FUN_004f8fa4(param_5,param_1,param_6);
      puVar20 = (uint *)FUN_0052e950(uVar10,param_2,param_3);
      return puVar20;
    default:
      goto switchD_00516f3c_default;
    }
    goto switchD_00516e00_default;
  }
switchD_00516f3c_default:
  puVar9 = *(ulong **)(param_6 + 0x30);
  if (puVar9 != (ulong *)0x0) {
    puStack_70 = PTR_LAB_047cd728;
    local_78 = param_6;
    if (*puVar9 != 0xffffffffffffffff) {
      local_90 = &puStack_70;
      plStack_88 = &local_78;
      local_68 = &local_90;
      std::__call_once(puVar9,&local_68,(_func_void_void_ptr *)&LAB_0051d550);
    }
    uVar17 = *(uint *)(param_6 + 0x38);
  }
  bVar7 = false;
  bVar8 = false;
  switch(uVar17) {
  case 1:
    puVar20 = param_2 + 2;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_004f614c();
    }
    else {
      FUN_004f5fa4(*(undefined8 *)param_2,param_5,param_1,param_6);
    }
    break;
  case 2:
    puVar20 = param_2 + 1;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_004f5dcc();
    }
    else {
      FUN_004f5c24(*param_2,param_5,param_1,param_6);
    }
    break;
  case 3:
    bVar3 = (byte)*param_2;
    if ((char)bVar3 < '\0') {
      iVar5 = (uint)bVar3 + (uint)*(byte *)((long)param_2 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_2 + 1) < '\0') {
        auVar24 = FUN_0052e420(param_2,iVar5);
        if (auVar24._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar24._8_4_ = iVar5;
        auVar24._0_8_ = (long)param_2 + 2;
        auVar24._12_4_ = 0;
      }
    }
    else {
      auVar24[8] = bVar3;
      auVar24._0_8_ = (long)param_2 + 1;
      auVar24._9_7_ = 0;
    }
    goto LAB_005174bc;
  case 4:
    bVar3 = (byte)*param_2;
    if ((char)bVar3 < '\0') {
      iVar5 = (uint)bVar3 + (uint)*(byte *)((long)param_2 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)((long)param_2 + 1) < '\0') {
        auVar25 = FUN_0052e420(param_2,iVar5);
        if (auVar25._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar25._8_4_ = iVar5;
        auVar25._0_8_ = (long)param_2 + 2;
        auVar25._12_4_ = 0;
      }
    }
    else {
      auVar25[8] = bVar3;
      auVar25._0_8_ = (long)param_2 + 1;
      auVar25._9_7_ = 0;
    }
    goto LAB_00517114;
  case 5:
    bVar3 = (byte)*param_2;
    auVar22[8] = bVar3;
    auVar22._0_8_ = (byte *)((long)param_2 + 1);
    auVar22._9_7_ = 0;
    if ((char)bVar3 < '\0') {
      bVar4 = *(byte *)((long)param_2 + 1);
      iVar5 = (uint)bVar3 + (uint)bVar4 * 0x80 + -0x80;
      if ((char)bVar4 < '\0') {
        auVar22 = FUN_0052e310(param_2,iVar5);
        if (auVar22._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar22._8_4_ = iVar5;
        auVar22._0_8_ = (long)param_2 + 2;
        auVar22._12_4_ = 0;
      }
    }
    puVar20 = auVar22._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) goto LAB_00516ff8;
    goto LAB_005173d4;
  case 6:
    auVar25._8_8_ = *(undefined8 *)param_2;
    auVar25._0_8_ = param_2 + 2;
LAB_00517114:
    puVar20 = auVar25._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_004f5a54();
    }
    else {
      FUN_004f58ac(param_5,param_1,param_6,auVar25._8_8_);
    }
    break;
  case 7:
    auVar23._8_4_ = *param_2;
    auVar23._0_8_ = param_2 + 1;
    auVar23._12_4_ = 0;
    iVar5 = *(int *)(param_6 + 0x3c);
    goto joined_r0x00517408;
  case 8:
    bVar3 = (byte)*param_2;
    if ((char)bVar3 < '\0') {
      if ((char)*(byte *)((long)param_2 + 1) < '\0') {
        auVar26 = FUN_0052e420(param_2);
        if (auVar26._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar26._8_4_ = (uint)bVar3 + (uint)*(byte *)((long)param_2 + 1) * 0x80 + -0x80;
        auVar26._0_8_ = (long)param_2 + 2;
        auVar26._12_4_ = 0;
      }
    }
    else {
      auVar26[8] = bVar3;
      auVar26._0_8_ = (long)param_2 + 1;
      auVar26._9_7_ = 0;
    }
    puVar20 = auVar26._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_004f64dc(param_5,param_1,param_6,auVar26._8_8_ != 0);
    }
    else {
      FUN_004f6324(param_5,param_1,param_6,auVar26._8_8_ != 0);
    }
    break;
  case 9:
    bVar8 = true;
    bVar7 = *(int *)(*(long *)(param_6 + 0x28) + 0x3c) == 3;
  case 0xc:
    if ((char)*param_2 < '\0') {
      auVar30 = FUN_0052e5f0(param_2);
      if (auVar30._0_8_ == 0) {
        return (uint *)0x0;
      }
    }
    else {
      auVar30[8] = (char)*param_2;
      auVar30._0_8_ = (long)param_2 + 1;
      auVar30._9_3_ = 0;
    }
    lVar13 = auVar30._0_8_;
    local_90 = (undefined **)0x0;
    plStack_88 = (long *)0x0;
    lVar21 = (long)auVar30._8_4_;
    local_80 = (void *)0x0;
    if ((long)((param_3[1] - lVar13) + 0x10) < lVar21) {
                    /* try { // try from 005171dc to 00517207 has its CatchHandler @ 005179b8 */
      puVar20 = (uint *)FUN_0052ddec(param_3,lVar13,auVar30._8_4_,&local_90);
    }
    else {
      FUN_0026c6b8(&local_90,lVar13,lVar21);
      puVar20 = (uint *)(lVar13 + lVar21);
    }
    if (puVar20 != (uint *)0x0) {
      if (bVar8) {
        bVar8 = ((ulong)local_90 & 1) != 0;
        pbVar18 = *(byte **)(param_6 + 8);
        pvVar15 = (void *)((ulong)&local_90 | 1);
        if (bVar8) {
          pvVar15 = local_80;
        }
        uVar14 = (uint)((byte)local_90 >> 1);
        if (bVar8) {
          uVar14 = (uint)plStack_88;
        }
        if ((*pbVar18 & 1) == 0) {
          pbVar18 = pbVar18 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar18 + 0x10);
        }
                    /* try { // try from 00517338 to 0051733f has its CatchHandler @ 005179b8 */
        if ((bVar7) && (uVar16 = FUN_005347a4(pvVar15,uVar14,0,pbVar18), (uVar16 & 1) == 0)) {
          puVar20 = (uint *)0x0;
          goto LAB_005177f8;
        }
      }
      pvVar15 = local_80;
      plVar11 = plStack_88;
      if (*(int *)(param_6 + 0x3c) == 3) {
        if (((ulong)local_90 & 1) == 0) {
          local_a0 = local_80;
          uStack_a8 = (ulong)plStack_88;
          local_b0 = local_90;
        }
        else {
          if (plStack_88 < 0x17) {
            pvVar12 = (void *)((ulong)&local_b0 | 1);
            local_b0 = (undefined **)CONCAT71(local_b0._1_7_,(char)((int)plStack_88 << 1));
          }
          else {
            if (0xffffffffffffffef < plStack_88) {
                    /* try { // try from 00517974 to 00517983 has its CatchHandler @ 005179b8 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar16 = (long)plStack_88 + 0x10U & 0xfffffffffffffff0;
            pvVar12 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
            local_b0 = (undefined **)(uVar16 | 1);
            uStack_a8 = (ulong)plVar11;
            local_a0 = pvVar12;
          }
          memcpy(pvVar12,pvVar15,(long)plVar11 + 1);
        }
                    /* try { // try from 00517770 to 00517783 has its CatchHandler @ 00517998 */
        FUN_004f68e4(param_5,param_1,param_6,&local_b0);
        if (((ulong)local_b0 & 1) != 0) {
          pvVar15 = local_a0;
LAB_005177ec:
          FUN_0049e790(PTR_LAB_047cba48,pvVar15);
        }
      }
      else {
        if (((ulong)local_90 & 1) == 0) {
          local_c0 = local_80;
          uStack_c8 = (ulong)plStack_88;
          local_d0 = local_90;
        }
        else {
          if (plStack_88 < 0x17) {
            pvVar12 = (void *)((ulong)&local_d0 | 1);
            local_d0 = (undefined **)CONCAT71(local_d0._1_7_,(char)((int)plStack_88 << 1));
          }
          else {
            if (0xffffffffffffffef < plStack_88) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar16 = (long)plStack_88 + 0x10U & 0xfffffffffffffff0;
            pvVar12 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
            local_d0 = (undefined **)(uVar16 | 1);
            uStack_c8 = (ulong)plVar11;
            local_c0 = pvVar12;
          }
          memcpy(pvVar12,pvVar15,(long)plVar11 + 1);
        }
                    /* try { // try from 005177cc to 005177df has its CatchHandler @ 00517984 */
        FUN_004f3c00(param_5,param_1,param_6,&local_d0);
        if (((ulong)local_d0 & 1) != 0) {
          pvVar15 = local_c0;
          goto LAB_005177ec;
        }
      }
    }
LAB_005177f8:
    if (((ulong)local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
    break;
  case 10:
    if (*(int *)(param_6 + 0x3c) == 3) {
      plVar11 = (long *)FUN_004f7ed4();
    }
    else {
      plVar11 = (long *)FUN_004f7424(param_5,param_1,param_6,param_3[0xd]);
    }
    uVar16 = param_3[0xb];
    *(int *)(param_3 + 0xb) = (int)uVar16 + -1;
    if (0 < (int)uVar16) {
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
      puVar20 = (uint *)(**(code **)(*plVar11 + 0x58))(plVar11,param_2,param_3);
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + -1;
      uVar16 = param_3[10];
      *(undefined4 *)(param_3 + 10) = 0;
      if ((uint)uVar16 == (uint)param_4) {
        return puVar20;
      }
    }
  default:
switchD_00516e00_default:
    puVar20 = (uint *)0x0;
    break;
  case 0xb:
    if (*(int *)(param_6 + 0x3c) == 3) {
      uVar10 = FUN_004f7ed4();
    }
    else {
      uVar10 = FUN_004f7424(param_5,param_1,param_6,param_3[0xd]);
    }
    puVar20 = (uint *)FUN_0052e304(param_3,uVar10,param_2);
    return puVar20;
  case 0xd:
    bVar3 = (byte)*param_2;
    auVar23[8] = bVar3;
    auVar23._0_8_ = (byte *)((long)param_2 + 1);
    auVar23._9_7_ = 0;
    if ((char)bVar3 < '\0') {
      bVar4 = *(byte *)((long)param_2 + 1);
      iVar5 = (uint)bVar3 + (uint)bVar4 * 0x80 + -0x80;
      if ((char)bVar4 < '\0') {
        auVar23 = FUN_0052e310(param_2,iVar5);
        if (auVar23._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar23._8_4_ = iVar5;
        auVar23._0_8_ = (long)param_2 + 2;
        auVar23._12_4_ = 0;
      }
    }
    iVar5 = *(int *)(param_6 + 0x3c);
joined_r0x00517408:
    puVar20 = auVar23._0_8_;
    if (iVar5 == 3) {
      FUN_004f56dc();
    }
    else {
      FUN_004f5534(param_5,param_1,param_6,auVar23._8_8_);
    }
    break;
  case 0xe:
    bVar3 = (byte)*param_2;
    auVar28[8] = bVar3;
    auVar28._0_8_ = (byte *)((long)param_2 + 1);
    auVar28._9_7_ = 0;
    if ((char)bVar3 < '\0') {
      bVar4 = *(byte *)((long)param_2 + 1);
      iVar5 = (uint)bVar3 + (uint)bVar4 * 0x80 + -0x80;
      if ((char)bVar4 < '\0') {
        auVar28 = FUN_0052e310(param_2,iVar5);
        if (auVar28._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar28._8_4_ = iVar5;
        auVar28._0_8_ = (long)param_2 + 2;
        auVar28._12_4_ = 0;
      }
    }
    puVar20 = auVar28._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_004f71c0();
    }
    else {
      FUN_004f6dc8(param_5,param_1,param_6,auVar28._8_8_);
    }
    break;
  case 0xf:
    puVar20 = param_2 + 1;
    uVar16 = (ulong)*param_2;
    goto LAB_00516fe0;
  case 0x10:
    auVar24._8_8_ = *(undefined8 *)param_2;
    auVar24._0_8_ = param_2 + 2;
    goto LAB_005174bc;
  case 0x11:
    puVar20 = (uint *)((long)param_2 + 1);
    bVar3 = (byte)*param_2;
    uVar14 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      uVar14 = ((uint)bVar3 + (uint)*(byte *)puVar20 * 0x80) - 0x80;
      if ((char)*(byte *)puVar20 < '\0') {
        auVar31 = FUN_0052e420(param_2);
        puVar20 = auVar31._0_8_;
        if (puVar20 == (uint *)0x0) {
          return (uint *)0x0;
        }
        uVar16 = (ulong)(-(auVar31._8_4_ & 1) ^ auVar31._8_4_ >> 1);
        goto LAB_00516fe0;
      }
      puVar20 = (uint *)((long)param_2 + 2);
    }
    uVar16 = (ulong)(-(uVar14 & 1) ^ uVar14 >> 1);
LAB_00516fe0:
    auVar22._8_8_ = uVar16;
    auVar22._0_8_ = puVar20;
    if (*(int *)(param_6 + 0x3c) == 3) {
LAB_00516ff8:
      puVar20 = auVar22._0_8_;
      FUN_004f4fec(param_5,param_1,param_6,auVar22._8_8_);
    }
    else {
LAB_005173d4:
      FUN_004f4e44();
    }
    break;
  case 0x12:
    bVar3 = (byte)*param_2;
    if ((char)bVar3 < '\0') {
      if ((char)*(byte *)((long)param_2 + 1) < '\0') {
        auVar27 = FUN_0052e420(param_2);
        if (auVar27._0_8_ == 0) {
          return (uint *)0x0;
        }
      }
      else {
        auVar27._8_4_ = (uint)bVar3 + (uint)*(byte *)((long)param_2 + 1) * 0x80 + -0x80;
        auVar27._0_8_ = (long)param_2 + 2;
        auVar27._12_4_ = 0;
      }
    }
    else {
      auVar27[8] = bVar3;
      auVar27._0_8_ = (long)param_2 + 1;
      auVar27._9_7_ = 0;
    }
    auVar24._8_8_ = -(auVar27._8_8_ & 1) ^ auVar27._8_8_ >> 1;
    auVar24._0_8_ = auVar27._0_8_;
LAB_005174bc:
    puVar20 = auVar24._0_8_;
    if (*(int *)(param_6 + 0x3c) == 3) {
      FUN_004f5364();
    }
    else {
      FUN_004f51bc(param_5,param_1,param_6,auVar24._8_8_);
    }
  }
  return puVar20;
}


