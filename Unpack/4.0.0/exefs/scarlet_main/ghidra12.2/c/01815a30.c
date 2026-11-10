/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01815a30; name: FUN_01815a30
 */


/* WARNING: Removing unreachable block (ram,0x01816290) */
/* WARNING: Removing unreachable block (ram,0x01816294) */
/* WARNING: Removing unreachable block (ram,0x0181629c) */
/* WARNING: Removing unreachable block (ram,0x018162a4) */
/* WARNING: Removing unreachable block (ram,0x018166ec) */
/* WARNING: Removing unreachable block (ram,0x018162a8) */
/* WARNING: Removing unreachable block (ram,0x018162ac) */

undefined4
FUN_01815a30(undefined8 *param_1,ulong *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  LightEventType *pLVar3;
  int *piVar4;
  undefined4 uVar5;
  char cVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  bool bVar16;
  ulong uVar17;
  long **pplVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar27;
  long *plVar26;
  long **unaff_x24;
  long **pplVar28;
  long **pplVar29;
  long *plVar30;
  ulong *local_170;
  long local_168;
  long lStack_160;
  undefined8 local_158;
  long local_150;
  long local_148;
  undefined4 local_140;
  long local_138;
  long local_130;
  long local_128;
  long *local_120;
  long local_118;
  long local_110;
  ulong local_108;
  long **local_100;
  code *local_f8;
  undefined1 *local_f0;
  long *local_e8;
  long **local_e0;
  long local_d8;
  long local_d0;
  undefined1 local_c8;
  long local_c0;
  long local_b8;
  undefined4 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  long local_88;
  long local_80;
  ulong local_78;
  
  plVar1 = param_1 + 0x1c;
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[0x1d] == 0) {
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      param_1[0x1d] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01815a80;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
  do {
    if (*plVar1 != 0 || param_1[0x1d] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
        while (*plVar1 == 0 && param_1[0x1d] == 0) {
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar12;
            param_1[0x1d] = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01815a80;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      param_1[0x1d] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01815a80:
  uVar25 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_018168f0;
  *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar25;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  uVar20 = param_1[2];
  plVar2 = param_1 + 1;
  if (uVar20 != 0) {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar17 = *param_2;
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar20 - 1 & uVar17;
    }
    else if (uVar17 < uVar20) {
      uVar22 = uVar17;
    }
    else {
      uVar22 = 0;
      if (uVar20 != 0) {
        uVar22 = uVar17 / uVar20;
      }
      uVar22 = uVar17 - uVar22 * uVar20;
    }
    puVar23 = *(undefined8 **)(*plVar2 + uVar22 * 8);
    if ((puVar23 == (undefined8 *)0x0) || (plVar30 = (long *)*puVar23, plVar30 == (long *)0x0))
    goto LAB_01815b68;
    if (uVar21 < 2) {
      do {
        if (plVar30[1] == uVar17) {
          if (plVar30[2] == uVar17) goto LAB_01815f68;
        }
        else if ((plVar30[1] & uVar20 - 1) != uVar22) break;
        plVar30 = (long *)*plVar30;
      } while (plVar30 != (long *)0x0);
      goto LAB_01815b68;
    }
    while( true ) {
      uVar21 = plVar30[1];
      if (uVar21 == uVar17) {
        if (plVar30[2] != uVar17) goto LAB_01815b60;
        goto LAB_01815f68;
      }
      if (uVar20 <= uVar21) {
        uVar7 = 0;
        if (uVar20 != 0) {
          uVar7 = uVar21 / uVar20;
        }
        uVar21 = uVar21 - uVar7 * uVar20;
      }
      if (uVar21 != uVar22) break;
LAB_01815b60:
      plVar30 = (long *)*plVar30;
      if (plVar30 == (long *)0x0) break;
    }
  }
LAB_01815b68:
  local_170 = (ulong *)((ulong)local_170 & 0xffffffff00000000);
  local_148 = 0;
  local_140 = 0;
  local_108 = 0;
  local_168 = 0;
  lStack_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = (long *)0x0;
  local_118 = 0;
  local_110 = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    unaff_x24 = (long **)&DAT_04865a30;
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
     (plVar30 = *(long **)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), plVar30 == (long *)0x0)) {
    lVar13 = tpidr_el0;
    plVar30 = *(long **)(lVar13 + 0x30);
    if (plVar30 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar30 = DAT_04859430;
      *(long **)(lVar13 + 0x30) = DAT_04859430;
    }
  }
  local_108 = local_108 & 0xffffffff00000000;
  local_118 = 0xaaaaaaaaaaaaaaa;
  local_110 = 0;
  local_100 = (long **)*param_2;
  local_f8 = (code *)param_2[1];
  local_f0 = (undefined1 *)param_2[2];
  local_e8 = (long *)param_2[3];
  local_120 = plVar30;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))();
  }
  lVar24 = local_130;
  lVar13 = local_138;
  local_e0 = (long **)CONCAT44(local_e0._4_4_,local_170._0_4_);
  local_c8 = (undefined1)local_158;
  local_c0 = 0;
  local_d8 = local_168;
  local_d0 = lStack_160;
  if (local_150 != 0) {
    piVar4 = (int *)(local_150 + 0x28);
    do {
      iVar11 = *piVar4;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar16) {
        *piVar4 = iVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_c0 = local_150;
  local_b8 = local_148;
  local_b0 = local_140;
  local_98 = 0;
  local_90 = local_120;
  local_78 = local_108;
  local_88 = local_118;
  local_80 = local_110;
  local_a8 = 0;
  local_a0 = 0;
  if (local_130 - local_138 != 0) {
    FUN_01817a84(&local_a8,(local_130 - local_138 >> 3) * -0x5555555555555555);
    lVar15 = local_a0;
    if (lVar13 != lVar24) {
      unaff_x24 = &local_90;
      do {
        FUN_01816c34(unaff_x24,lVar15,lVar13);
        lVar13 = lVar13 + 0x18;
        lVar15 = lVar15 + 0x18;
      } while (lVar24 != lVar13);
    }
    local_a0 = lVar15;
  }
  pplVar28 = local_100;
  pplVar29 = (long **)param_1[2];
  if (pplVar29 == (long **)0x0) {
LAB_01815d24:
    plVar30 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0xa0,8);
    if (plVar30 == (long *)0x0) {
      (**(code **)(*(long *)param_1[8] + 0xe8))();
    }
    uVar25 = param_1[8];
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar13 != 0) {
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_018168f0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar25;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    }
    plVar30[2] = (long)local_100;
    plVar30[3] = (long)local_f8;
    plVar30[4] = (long)local_f0;
    plVar30[5] = (long)local_e8;
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))();
    }
    lVar24 = local_c0;
    *(undefined4 *)(plVar30 + 6) = local_e0._0_4_;
    plVar30[7] = local_d8;
    *(undefined1 *)(plVar30 + 9) = local_c8;
    plVar30[8] = local_d0;
    local_c0 = 0;
    plVar30[10] = lVar24;
    plVar30[0xd] = 0;
    plVar30[0xe] = 0;
    plVar30[0xf] = 0;
    *(undefined4 *)(plVar30 + 0xc) = local_b0;
    plVar30[0xb] = local_b8;
    plVar30[0x12] = local_80;
    plVar30[0x13] = local_78;
    plVar30[0x10] = (long)local_90;
    plVar30[0x11] = local_88;
    plVar30[0xd] = local_a8;
    plVar30[0xe] = local_a0;
    plVar30[0xf] = local_98;
    local_a0 = 0;
    local_98 = 0;
    local_a8 = 0;
    if (lVar13 != 0) {
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    *plVar30 = 0;
    plVar30[1] = (long)pplVar28;
    if ((pplVar29 == (long **)0x0) ||
       (*(float *)(param_1 + 0xd) * (float)pplVar29 < (float)(param_1[0xc] + 1))) {
      uVar20 = (ulong)(pplVar29 < (long **)0x3 || ((ulong)pplVar29 & (long)pplVar29 - 1U) != 0) |
               (long)pplVar29 << 1;
      uVar21 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
      if (uVar21 <= uVar20) {
        uVar21 = uVar20;
      }
      FUN_01816b30(plVar2,uVar21);
      pplVar29 = (long **)param_1[2];
      if (((ulong)pplVar29 & (long)pplVar29 - 1U) == 0) {
        unaff_x24 = (long **)((long)pplVar29 - 1U & (ulong)pplVar28);
      }
      else if (pplVar28 < pplVar29) {
        unaff_x24 = pplVar28;
      }
      else {
        uVar20 = 0;
        if (pplVar29 != (long **)0x0) {
          uVar20 = (ulong)pplVar28 / (ulong)pplVar29;
        }
        unaff_x24 = (long **)((long)pplVar28 - uVar20 * (long)pplVar29);
      }
    }
    plVar14 = *(long **)(*plVar2 + (long)unaff_x24 * 8);
    if (plVar14 == (long *)0x0) {
      plVar14 = param_1 + 7;
      *plVar30 = *plVar14;
      *plVar14 = (long)plVar30;
      *(long **)(param_1[1] + (long)unaff_x24 * 8) = plVar14;
      if (*plVar30 != 0) {
        pplVar28 = *(long ***)(*plVar30 + 8);
        if (((ulong)pplVar29 & (long)pplVar29 - 1U) == 0) {
          pplVar28 = (long **)((ulong)pplVar28 & (long)pplVar29 - 1U);
        }
        else if (pplVar29 <= pplVar28) {
          uVar20 = 0;
          if (pplVar29 != (long **)0x0) {
            uVar20 = (ulong)pplVar28 / (ulong)pplVar29;
          }
          pplVar28 = (long **)((long)pplVar28 - uVar20 * (long)pplVar29);
        }
        plVar14 = (long *)(*plVar2 + (long)pplVar28 * 8);
        goto LAB_01815f1c;
      }
    }
    else {
      *plVar30 = *plVar14;
LAB_01815f1c:
      *plVar14 = (long)plVar30;
    }
    param_1[0xc] = param_1[0xc] + 1;
  }
  else {
    uVar20 = (long)pplVar29 - 1;
    if (((ulong)pplVar29 & uVar20) == 0) {
      unaff_x24 = (long **)(uVar20 & (ulong)local_100);
      plVar30 = *(long **)(*plVar2 + (long)unaff_x24 * 8);
      if (plVar30 != (long *)0x0) {
        while ((plVar30 = (long *)*plVar30, plVar30 != (long *)0x0 &&
               ((long **)plVar30[1] == local_100 ||
                (long **)((ulong)plVar30[1] & uVar20) == unaff_x24))) {
          if ((long **)plVar30[2] == local_100) goto LAB_01815f2c;
        }
      }
      goto LAB_01815d24;
    }
    unaff_x24 = local_100;
    if (pplVar29 <= local_100) {
      uVar20 = 0;
      if (pplVar29 != (long **)0x0) {
        uVar20 = (ulong)local_100 / (ulong)pplVar29;
      }
      unaff_x24 = (long **)((long)local_100 - uVar20 * (long)pplVar29);
    }
    plVar30 = *(long **)(*plVar2 + (long)unaff_x24 * 8);
    if (plVar30 == (long *)0x0) goto LAB_01815d24;
    do {
      plVar30 = (long *)*plVar30;
      if (plVar30 == (long *)0x0) goto LAB_01815d24;
      pplVar18 = (long **)plVar30[1];
      if (pplVar18 != local_100) {
        if (pplVar29 <= pplVar18) {
          uVar20 = 0;
          if (pplVar29 != (long **)0x0) {
            uVar20 = (ulong)pplVar18 / (ulong)pplVar29;
          }
          pplVar18 = (long **)((long)pplVar18 - uVar20 * (long)pplVar29);
        }
        if (pplVar18 != unaff_x24) goto LAB_01815d24;
      }
    } while ((long **)plVar30[2] != local_100);
  }
LAB_01815f2c:
  plVar14 = local_90;
  lVar13 = local_a8;
  if (local_a8 != 0) {
    local_a0 = local_a8;
    lVar24 = local_98 - local_a8;
    uVar20 = (**(code **)(*local_90 + 0xf8))(local_90);
    if (((uVar20 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,lVar24,8);
    }
    else {
      FUN_00c48fe8(plVar14,lVar13,lVar24,8);
    }
  }
  FUN_01816968(&local_d8);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  plVar14 = local_120;
  lVar13 = local_138;
  if (local_138 != 0) {
    local_130 = local_138;
    lVar24 = local_128 - local_138;
    uVar20 = (**(code **)(*local_120 + 0xf8))(local_120);
    if (((uVar20 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,lVar24,8);
    }
    else {
      FUN_00c48fe8(plVar14,lVar13,lVar24,8);
    }
  }
  FUN_01816968(&local_168);
LAB_01815f68:
  *(int *)(plVar30 + 6) = (int)plVar30[6] + 1;
  lVar13 = *param_4;
  *(int *)(plVar30 + 0xc) = (int)param_4[1];
  plVar30[0xb] = lVar13;
  if (*(char *)param_3[1] != '\0') {
    FUN_018174c4(&local_100,*param_1,(char *)param_3[1],0x10000,1);
    *(undefined1 *)(plVar30 + 9) = local_f0._0_1_;
    plVar14 = (long *)plVar30[10];
    plVar30[10] = 0;
    plVar30[7] = (long)local_100;
    plVar30[8] = (long)local_f8;
    if (plVar14 != (long *)0x0) {
      plVar19 = plVar14 + 5;
      do {
        lVar13 = *plVar19;
        iVar11 = (int)lVar13 + -1;
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar16) {
          *(int *)plVar19 = iVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
      else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    plVar14 = local_e8;
    local_e8 = (long *)0x0;
    plVar30[10] = (long)plVar14;
    FUN_01816968(&local_100);
  }
  puVar9 = PTR_DAT_047d3e30;
  puVar8 = PTR_DAT_047d3e28;
  for (plVar14 = (long *)param_1[0x14]; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar8);
    }
    if ((plVar14[0xd] == *(long *)puVar9) && (plVar30[10] != 0)) {
      plVar19 = (long *)plVar14[7];
      if ((long *)plVar14[6] != plVar19) {
        param_3 = plVar30 + 7;
        plVar26 = (long *)plVar14[6];
        do {
          plVar27 = plVar26 + 1;
          puVar23 = (undefined8 *)PTR_PTR_047d4508;
          if (*plVar26 != 0) {
            puVar23 = (undefined8 *)(*plVar26 + 0x38);
          }
          uVar20 = FUN_00e3d990(param_3,*puVar23);
          if ((uVar20 & 1) != 0) {
            (*(code *)plVar14[0xe])(plVar14 + 0x12,param_2);
            plVar14[0xd] = *param_2;
            break;
          }
          plVar26 = plVar27;
        } while (plVar19 != plVar27);
      }
    }
  }
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  do {
    lVar12 = *plVar1;
    lVar13 = param_1[0x1d];
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      param_1[0x1d] = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar24 = *plVar1;
    lVar15 = param_1[0x1d];
    if (lVar24 != lVar12 || lVar15 != lVar13) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_018160c4;
    }
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0xe4) = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar16 = true;
LAB_018160c4:
  if (!bVar16) {
    do {
      lVar12 = *plVar1;
      lVar13 = param_1[0x1d];
      if (lVar12 != lVar24 || lVar13 != lVar15) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x018168ac;
      }
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0xe4) = lVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar16 = true;
joined_r0x018168ac:
    if (!bVar16) {
      do {
        lVar24 = *plVar1;
        lVar15 = param_1[0x1d];
        if (lVar24 != lVar12 || lVar15 != lVar13) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar12 = lVar24;
          lVar13 = lVar15;
          goto joined_r0x018168ac;
        }
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0xe4) = lVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar16 = true;
      lVar12 = lVar24;
      lVar13 = lVar15;
      goto joined_r0x018168ac;
    }
  }
  pLVar3 = (LightEventType *)(param_1 + 0x1e);
  nn::os::SignalLightEvent(pLVar3);
  lVar12 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar1;
    lVar24 = param_1[0x1d];
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar13;
      param_1[0x1d] = lVar24;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    while ((lVar13 != 0 && (lVar12 != lVar13))) {
      nn::os::WaitLightEvent(pLVar3);
      do {
        lVar13 = *plVar1;
        lVar24 = param_1[0x1d];
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = lVar13;
          param_1[0x1d] = lVar24;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      lVar15 = *plVar1;
      if (lVar15 != lVar13 || param_1[0x1d] != lVar24) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto LAB_01816124;
      }
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = lVar13;
        *(long *)((long)param_1 + 0xe4) = lVar24 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar16 = true;
LAB_01816124:
    lVar13 = lVar15;
    lVar24 = param_1[0x1d];
  } while (!bVar16);
  plVar14 = (long *)*param_2;
  plVar30 = (long *)param_1[2];
  local_170 = param_2;
  if (plVar30 == (long *)0x0) {
LAB_01816380:
    FUN_018179f8(&local_100,plVar2,plVar14,&local_170);
    if ((plVar30 == (long *)0x0) ||
       (*(float *)(param_1 + 0xd) * (float)plVar30 < (float)(param_1[0xc] + 1))) {
      uVar20 = (ulong)(plVar30 < (long *)0x3 || ((ulong)plVar30 & (long)plVar30 - 1U) != 0) |
               (long)plVar30 << 1;
      uVar21 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
      if (uVar21 <= uVar20) {
        uVar21 = uVar20;
      }
      FUN_01816b30(plVar2,uVar21);
      plVar30 = (long *)param_1[2];
      if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
        param_3 = (long *)((long)plVar30 - 1U & (ulong)plVar14);
      }
      else if (plVar14 < plVar30) {
        param_3 = plVar14;
      }
      else {
        uVar20 = 0;
        if (plVar30 != (long *)0x0) {
          uVar20 = (ulong)plVar14 / (ulong)plVar30;
        }
        param_3 = (long *)((long)plVar14 - uVar20 * (long)plVar30);
      }
    }
    puVar23 = *(undefined8 **)(*plVar2 + (long)param_3 * 8);
    if (puVar23 == (undefined8 *)0x0) {
      puVar23 = param_1 + 7;
      *local_100 = (long *)*puVar23;
      *puVar23 = local_100;
      *(undefined8 **)(param_1[1] + (long)param_3 * 8) = puVar23;
      if (*local_100 != (long *)0x0) {
        plVar14 = (long *)(*local_100)[1];
        if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
          plVar14 = (long *)((ulong)plVar14 & (long)plVar30 - 1U);
        }
        else if (plVar30 <= plVar14) {
          uVar20 = 0;
          if (plVar30 != (long *)0x0) {
            uVar20 = (ulong)plVar14 / (ulong)plVar30;
          }
          plVar14 = (long *)((long)plVar14 - uVar20 * (long)plVar30);
        }
        *(long ***)(*plVar2 + (long)plVar14 * 8) = local_100;
      }
    }
    else {
      *local_100 = (long *)*puVar23;
      *puVar23 = local_100;
    }
    param_1[0xc] = param_1[0xc] + 1;
    pplVar28 = local_100;
  }
  else {
    uVar20 = (long)plVar30 - 1;
    if (((ulong)plVar30 & uVar20) != 0) {
      param_3 = plVar14;
      if (plVar30 <= plVar14) {
        uVar20 = 0;
        if (plVar30 != (long *)0x0) {
          uVar20 = (ulong)plVar14 / (ulong)plVar30;
        }
        param_3 = (long *)((long)plVar14 - uVar20 * (long)plVar30);
      }
      pplVar28 = *(long ***)(*plVar2 + (long)param_3 * 8);
      if (pplVar28 != (long **)0x0) {
        while (pplVar28 = (long **)*pplVar28, pplVar28 != (long **)0x0) {
          plVar19 = pplVar28[1];
          if (plVar19 != plVar14) {
            if (plVar30 <= plVar19) {
              uVar20 = 0;
              if (plVar30 != (long *)0x0) {
                uVar20 = (ulong)plVar19 / (ulong)plVar30;
              }
              plVar19 = (long *)((long)plVar19 - uVar20 * (long)plVar30);
            }
            if (plVar19 != param_3) break;
          }
          if (pplVar28[2] == plVar14) goto LAB_01816194;
        }
      }
      goto LAB_01816380;
    }
    param_3 = (long *)(uVar20 & (ulong)plVar14);
    pplVar28 = *(long ***)(*plVar2 + (long)param_3 * 8);
    if (pplVar28 == (long **)0x0) goto LAB_01816380;
    do {
      pplVar28 = (long **)*pplVar28;
      if ((pplVar28 == (long **)0x0) ||
         (pplVar28[1] != plVar14 && (long *)((ulong)pplVar28[1] & uVar20) != param_3))
      goto LAB_01816380;
    } while (pplVar28[2] != plVar14);
  }
LAB_01816194:
  local_e0 = pplVar28 + 6;
  local_100 = (long **)&LAB_02195a80;
  local_f8 = FUN_02b4b748;
  local_f0 = &LAB_02b4b74c;
  local_e8 = (long *)&LAB_02b4b758;
  (*(code *)*param_5)(param_5 + 4,&local_100);
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (long *)0x0;
    local_100 = (long **)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  FUN_01817030(pplVar28[0xd],pplVar28[0xe]);
  uVar5 = *(undefined4 *)(pplVar28 + 6);
  do {
    lVar12 = *plVar1;
    lVar13 = param_1[0x1d];
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      param_1[0x1d] = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar24 = *plVar1;
    lVar15 = param_1[0x1d];
    if (lVar24 != lVar12 || lVar15 != lVar13) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_01816238;
    }
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      *(long *)((long)param_1 + 0xe4) = lVar13 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar16 = true;
LAB_01816238:
  if (!bVar16) {
    do {
      lVar12 = *plVar1;
      lVar13 = param_1[0x1d];
      if (lVar12 != lVar24 || lVar13 != lVar15) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x018165fc;
      }
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = lVar24;
        *(long *)((long)param_1 + 0xe4) = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar16 = true;
joined_r0x018165fc:
    if (!bVar16) {
      do {
        lVar24 = *plVar1;
        lVar15 = param_1[0x1d];
        if (lVar24 != lVar12 || lVar15 != lVar13) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar12 = lVar24;
          lVar13 = lVar15;
          goto joined_r0x018165fc;
        }
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = lVar12;
          *(long *)((long)param_1 + 0xe4) = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar16 = true;
      lVar12 = lVar24;
      lVar13 = lVar15;
      goto joined_r0x018165fc;
    }
  }
  nn::os::SignalLightEvent(pLVar3);
  return uVar5;
}


