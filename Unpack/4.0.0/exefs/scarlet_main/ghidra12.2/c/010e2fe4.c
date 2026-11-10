/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e2fe4; name: FUN_010e2fe4
 */


void FUN_010e2fe4(long *param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  undefined8 *puVar31;
  long lVar32;
  long *plVar33;
  ulong local_130;
  ulong local_128;
  ulong uStack_120;
  long *local_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 local_9c [4];
  long local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  
  uVar27 = *(ulong *)(param_2 + 0x48);
  if (uVar27 != 0) {
    uVar28 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    local_130 = *param_3;
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar29 = uVar27 - 1 & local_130;
    }
    else {
      uVar29 = local_130;
      if (uVar27 <= local_130) {
        uVar29 = 0;
        if (uVar27 != 0) {
          uVar29 = local_130 / uVar27;
        }
        uVar29 = local_130 - uVar29 * uVar27;
      }
    }
    plVar30 = *(long **)(*(long *)(param_2 + 0x40) + uVar29 * 8);
    if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
      if (uVar28 < 2) {
        do {
          if (plVar30[1] == local_130) {
            if (plVar30[2] == local_130) goto LAB_010e30c4;
          }
          else if ((plVar30[1] & uVar27 - 1) != uVar29) break;
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar30[1];
          if (uVar28 == local_130) {
            if (plVar30[2] == local_130) {
LAB_010e30c4:
              local_128 = param_3[1];
              uStack_120 = param_3[2];
              plVar30 = (long *)param_3[3];
              local_118 = plVar30;
              if (plVar30 == (long *)0x0) {
                FUN_010e2d6c(param_1,param_2,&local_130);
                return;
              }
              (**(code **)(*plVar30 + 0x18))(plVar30);
              FUN_010e2d6c(param_1,param_2,&local_130);
                    /* WARNING: Could not recover jumptable at 0x010e37f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar30 + 0x20))(plVar30);
              return;
            }
          }
          else {
            if (uVar27 <= uVar28) {
              uVar8 = 0;
              if (uVar27 != 0) {
                uVar8 = uVar28 / uVar27;
              }
              uVar28 = uVar28 - uVar8 * uVar27;
            }
            if (uVar28 != uVar29) break;
          }
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
    }
  }
  lVar32 = *(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 3;
  plVar30 = (long *)FUN_00c8f0cc((long *)(param_2 + 0x40),param_3);
  *plVar30 = lVar32;
  plVar30 = *(long **)(param_2 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_010e3e90;
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar30;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0xd0,0x10);
  if (plVar14 == (long *)0x0) {
LAB_010e3f14:
    (**(code **)(*plVar30 + 0xe8))();
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  uVar27 = *param_3;
  uVar29 = param_3[1];
  uVar28 = param_3[2];
  plVar5 = (long *)param_3[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  puVar9 = PTR_DAT_047d66f8;
  plVar14[2] = 0;
  *(undefined4 *)(plVar14 + 3) = 0;
  *plVar14 = (long)(puVar9 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  puVar9 = PTR_DAT_047d8c78;
  if (lVar15 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = 0;
    if (*(long *)(lVar15 + 0x80) != 0) {
      lVar24 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8);
    }
  }
  *plVar14 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar14[1] = lVar24;
  plVar14[4] = (long)(puVar9 + 0x88);
  plVar33 = plVar14 + 5;
  *plVar33 = (long)(puVar9 + 0xd8);
  plVar14[7] = 0;
  plVar14[6] = 0;
  FUN_00d1a3f4(plVar14 + 6,plVar33);
  *plVar14 = (long)&PTR_LAB_045eb1b0;
  plVar14[4] = (long)&PTR_FUN_045eb228;
  *plVar33 = (long)&DAT_045eb278;
  plVar14[8] = 0;
  plVar14[10] = (long)&LAB_028ebd48;
  plVar14[0xb] = (long)&LAB_02dfbc58;
  plVar14[0xc] = (long)&LAB_02dfbc5c;
  plVar14[0xd] = (long)&LAB_02dfbc68;
  plVar14[0xe] = param_2;
  plVar33 = (long *)plVar14[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_010e3e90;
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar33;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar33 + 0x10))(plVar33,0x2e0,0x10);
  if (plVar16 == (long *)0x0) {
    plVar30 = plVar33;
    goto LAB_010e3f14;
  }
  local_110 = uVar27;
  uStack_108 = uVar29;
  local_100 = uVar28;
  local_f8 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  puVar10 = PTR_DAT_047d66f8;
  plVar16[2] = 0;
  *(undefined4 *)(plVar16 + 3) = 0;
  *plVar16 = (long)(puVar10 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar24 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar24 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = 0;
    if (*(long *)(lVar24 + 0x80) != 0) {
      lVar25 = *(long *)(lVar24 + *(long *)(lVar24 + 0x80) * 8 + -8);
    }
  }
  plVar16[4] = (long)(puVar9 + 0x88);
  *plVar16 = (long)(puVar9 + 0x10);
  plVar16[1] = lVar25;
  plVar17 = plVar16 + 5;
  *plVar17 = (long)(puVar9 + 0xd8);
  plVar16[6] = 0;
  plVar16[7] = 0;
  FUN_00d1a3f4(plVar16 + 6,plVar17);
  *plVar16 = (long)&PTR_FUN_045eb2d0;
  plVar16[4] = (long)&PTR_LAB_045eb348;
  *plVar17 = (long)&DAT_045eb398;
  plVar16[8] = 0;
  *(undefined4 *)((long)plVar16 + 0x54) = 1;
  nn::os::InitializeLightEvent(plVar16 + 9,0,1);
  FUN_00daf940(plVar16 + 0xb,&local_110);
  FUN_010e4094(plVar16 + 0xc);
  plVar16[0x1a] = 0;
  plVar16[0x1b] = 0;
  plVar16[0x19] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar25 = nn::os::GetTlsValue(DAT_04865a30);
  lVar24 = tpidr_el0;
  if ((((lVar25 == 0) || (*(long *)(lVar25 + 0x80) == 0)) ||
      (lVar25 = *(long *)(lVar25 + *(long *)(lVar25 + 0x80) * 8 + -8), lVar25 == 0)) &&
     (lVar25 = *(long *)(lVar24 + 0x30), lVar25 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar25 = DAT_04859430;
    *(long *)(lVar24 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(plVar16 + 0x1f) = 0;
  plVar16[0x1c] = lVar25;
  plVar16[0x1d] = 0x492492492492492;
  plVar16[0x1e] = 0;
  FUN_010e4094(plVar16 + 0x20);
  plVar16[0x2e] = 0;
  plVar16[0x2f] = 0;
  plVar16[0x2d] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar25 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar25 == 0) || (*(long *)(lVar25 + 0x80) == 0)) ||
      (lVar25 = *(long *)(lVar25 + *(long *)(lVar25 + 0x80) * 8 + -8), lVar25 == 0)) &&
     (lVar25 = *(long *)(lVar24 + 0x30), lVar25 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar25 = DAT_04859430;
    *(long *)(lVar24 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(plVar16 + 0x33) = 0;
  plVar16[0x30] = lVar25;
  plVar16[0x31] = 0x1fffffffffffffff;
  plVar16[0x32] = 0;
  FUN_010e4094(plVar16 + 0x34);
  plVar16[0x43] = 0;
  plVar16[0x42] = 0;
  plVar16[0x41] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar25 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar25 == 0) || (*(long *)(lVar25 + 0x80) == 0)) ||
      (lVar25 = *(long *)(lVar25 + *(long *)(lVar25 + 0x80) * 8 + -8), lVar25 == 0)) &&
     (lVar25 = *(long *)(lVar24 + 0x30), lVar25 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar25 = DAT_04859430;
    *(long *)(lVar24 + 0x30) = DAT_04859430;
  }
  plVar16[0x44] = lVar25;
  plVar16[0x45] = 0x3ffffffffffffff;
  plVar16[0x4a] = (long)FUN_017c0814;
  plVar16[0x4b] = (long)&LAB_02dfbff8;
  plVar16[0x4c] = (long)&LAB_02dfbffc;
  plVar16[0x46] = 0;
  *(undefined4 *)(plVar16 + 0x47) = 0;
  plVar16[0x48] = 0;
  plVar16[0x4e] = (long)plVar14;
  plVar16[0x4d] = (long)&LAB_02dfc008;
  plVar16[0x5a] = 0;
  lVar24 = FUN_012d800c(&local_90,plVar16[1]);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x28);
    do {
      iVar12 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar17 = (long *)plVar16[0x5a];
  plVar16[0x5a] = 0;
  if (plVar17 != (long *)0x0) {
    plVar3 = plVar17 + 5;
    do {
      lVar25 = *plVar3;
      iVar12 = (int)lVar25 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
    else if ((int)lVar25 == 0) {
      pcVar20 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar21 = "DecrementReferenceInternal";
      pcVar22 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar23 = "Reference counter underflows.";
      goto LAB_010e3ed4;
    }
  }
  puVar9 = PTR_DAT_047e24f0;
  plVar16[0x5a] = lVar24;
  local_90 = *(undefined8 **)puVar9;
  local_88 = *(undefined8 **)(puVar9 + 8);
  local_80 = *(undefined8 **)(puVar9 + 0x10);
  local_78 = (undefined8 *)0x0;
  lVar24 = FUN_012d6de0(plVar16,&local_90);
  local_d0 = *(undefined8 *)PTR_DAT_047e24f8;
  uStack_c8 = *(undefined8 *)(PTR_DAT_047e24f8 + 8);
  local_c0 = *(undefined8 *)(PTR_DAT_047e24f8 + 0x10);
  uStack_b8 = 0;
  uVar18 = FUN_012d6de0(plVar16,&local_d0);
  local_f0 = *(undefined8 *)PTR_DAT_047e2500;
  uStack_e8 = *(undefined8 *)(PTR_DAT_047e2500 + 8);
  local_e0 = *(undefined8 *)(PTR_DAT_047e2500 + 0x10);
  uStack_d8 = 0;
  FUN_012d6de0(plVar16,&local_f0);
  FUN_012d7020(plVar16,lVar24,uVar18);
  local_98 = *(long *)(plVar16[0x2d] + lVar24 * 8);
  local_a8 = *(long *)(local_98 + 0xb8) + 1;
  *(long *)(local_98 + 0xb8) = local_a8;
  local_9c[0] = 1;
  local_b0 = *(undefined8 *)(local_98 + 0xc0);
  FUN_00f84c44(*(undefined8 *)(local_98 + 200),&local_98,local_9c,&local_a8,&local_b0);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  plVar16[1] = (long)plVar33;
  plVar16[2] = (long)plVar16;
  *(undefined4 *)(plVar16 + 3) = 0x1002e0;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  lVar15 = plVar16[6];
  if (*(long *)(lVar15 + 0x10) == 0) goto LAB_010e3e94;
  psVar2 = (short *)(lVar15 + 0x1a);
  do {
    sVar4 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar4 == 0) {
    uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
    *(undefined8 *)(lVar15 + 8) = uVar18;
    *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
LAB_010e3664:
    plVar33 = (long *)plVar14[8];
    plVar14[8] = 0;
    if (plVar33 != (long *)0x0) {
      lVar15 = plVar33[6];
      psVar2 = (short *)(lVar15 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar33 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar14[8] = (long)plVar16;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    plVar14[1] = (long)plVar30;
    plVar14[2] = (long)plVar14;
    *(undefined4 *)(plVar14 + 3) = 0x1000d0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    lVar13 = plVar14[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_010e3e94;
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar18;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_010e3eb4;
    puVar19 = *(undefined8 **)(param_2 + 0xb0);
    puVar31 = (undefined8 *)(param_2 + 0xc0);
    if (puVar19 < *(undefined8 **)(param_2 + 0xb8)) {
      uVar18 = *puVar31;
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 == 0) {
        *puVar19 = plVar14;
      }
      else {
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_010e3e90;
        *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar18;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        *puVar19 = plVar14;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      }
      *(undefined8 **)(param_2 + 0xb0) = puVar19 + 1;
    }
    else {
      uVar28 = *(ulong *)(param_2 + 200);
      lVar13 = (long)puVar19 - *(long *)(param_2 + 0xa8) >> 3;
      uVar27 = lVar13 + 1;
      if (0x7ffffffffffffffe < uVar28) {
        uVar28 = 0x7fffffffffffffff;
      }
      if (uVar28 < uVar27) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = (long)*(undefined8 **)(param_2 + 0xb8) - *(long *)(param_2 + 0xa8);
      uVar29 = lVar15 >> 2;
      local_78 = (undefined8 *)0x0;
      if (uVar27 <= uVar29) {
        uVar27 = uVar29;
      }
      if (uVar28 >> 1 <= (ulong)(lVar15 >> 3)) {
        uVar27 = uVar28;
      }
      puStack_70 = puVar31;
      if (uVar27 == 0) {
        puVar19 = (undefined8 *)0x0;
      }
      else {
        puVar19 = (undefined8 *)
                  (**(code **)(*(long *)*puVar31 + 0x10))((long *)*puVar31,uVar27 << 3,8);
        if (puVar19 == (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar31 + 0xe8))();
        }
      }
      puVar26 = puVar19 + lVar13;
      local_78 = puVar19 + uVar27;
      uVar18 = *puVar31;
      local_90 = puVar19;
      local_88 = puVar26;
      local_80 = puVar26;
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 == 0) {
        *puVar26 = plVar14;
      }
      else {
        if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_010e3e90:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar18;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        *puVar26 = plVar14;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      }
      puVar9 = PTR_LAB_047d3900;
      local_80 = local_80 + 1;
      puVar19 = *(undefined8 **)(param_2 + 0xa8);
      puVar26 = *(undefined8 **)(param_2 + 0xb0);
      if (puVar26 == puVar19) {
        puVar31 = puVar19;
      }
      else {
        do {
          puVar11 = local_88;
          uVar18 = *puVar31;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(puVar9,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar13 == 0) {
            uVar18 = puVar26[-1];
            puVar26[-1] = 0;
            puVar11[-1] = uVar18;
          }
          else {
            if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_010e3e90;
            *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar18;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
            uVar18 = puVar26[-1];
            puVar26[-1] = 0;
            puVar11[-1] = uVar18;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          }
          puVar26 = puVar26 + -1;
          local_88 = local_88 + -1;
        } while (puVar19 != puVar26);
        puVar19 = *(undefined8 **)(param_2 + 0xa8);
        puVar31 = *(undefined8 **)(param_2 + 0xb0);
      }
      *(undefined8 **)(param_2 + 0xa8) = local_88;
      *(undefined8 **)(param_2 + 0xb0) = local_80;
      puVar26 = *(undefined8 **)(param_2 + 0xb8);
      *(undefined8 **)(param_2 + 0xb8) = local_78;
      local_90 = puVar19;
      local_88 = puVar19;
      local_80 = puVar31;
      local_78 = puVar26;
      FUN_010e41e4(&local_90);
    }
    lVar32 = *(long *)(*(long *)(param_2 + 0xa8) + lVar32 * 8);
    *param_1 = lVar32;
    if (lVar32 == 0) {
      return;
    }
    lVar32 = *(long *)(lVar32 + 0x30);
    if (*(long *)(lVar32 + 0x10) == 0) {
LAB_010e3e94:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar32 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar32 + 0x10))();
      *(undefined8 *)(lVar32 + 8) = uVar18;
      *(undefined4 *)(lVar32 + 0x1c) = 0xfffffffe;
      return;
    }
    if (sVar4 != -1) {
      return;
    }
  }
  else if (sVar4 != -1) goto LAB_010e3664;
LAB_010e3eb4:
  pcVar20 = "count != 0";
  pcVar21 = "AddReference";
  pcVar22 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
  ;
  pcVar23 = "Reference counter overflows.";
LAB_010e3ed4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar20,pcVar21,pcVar22,0x58,pcVar23);
}


