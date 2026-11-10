/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd7a14; name: FUN_01dd7a14
 */


void FUN_01dd7a14(long param_1,int param_2,uint param_3,int param_4,undefined4 param_5,int param_6)

{
  ulong *puVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  char *pcVar9;
  ulong *puVar10;
  code *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong local_130;
  char *local_128;
  undefined8 local_120;
  long *local_118;
  ulong *local_110;
  undefined8 uStack_108;
  long *local_100;
  long *local_f8;
  ulong local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_48;
  
  local_48 = 0;
  FUN_014e2aa0(param_2,param_4,(long)&local_48 + 4,&local_48);
  if (*(int *)(param_1 + 0x29c) != 0) goto LAB_01dd7a70;
  if (param_2 == 2) {
    uVar15 = *(undefined8 *)(param_1 + 0x1a8);
    if (*(char *)(param_1 + 0x1714) == '\0') {
LAB_01dd7d28:
      uVar20 = 0;
    }
    else {
      uVar20 = 2;
      iVar12 = FUN_014e94fc(param_1,2,param_3,param_4);
      if (iVar12 != 2) goto LAB_01dd7d28;
    }
    uVar18 = 5;
  }
  else if (param_2 == 1) {
    uVar15 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*(char *)(param_1 + 0x1714) == '\0') ||
       (iVar12 = FUN_014e94fc(param_1,1,param_3,param_4), iVar12 != 2)) {
      uVar20 = 0;
    }
    else {
      uVar20 = 2;
    }
    uVar18 = 3;
  }
  else {
    if (param_2 != 0) goto LAB_01dd7a70;
    uVar15 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*(char *)(param_1 + 0x1714) == '\0') ||
       (iVar12 = FUN_014e94fc(param_1,0,param_3,param_4), iVar12 != 2)) {
      uVar20 = 0;
    }
    else {
      uVar20 = 2;
    }
    uVar18 = 0;
  }
  FUN_014e56f4(uVar15,uVar18,param_4,uVar20,0);
LAB_01dd7a70:
  FUN_01dc0d88(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3,local_48._4_4_,local_48 & 0xffffffff
               ,param_5,param_6);
  if (*(int *)(param_1 + 0x298) == 2) {
    iVar12 = 0;
    if (param_2 == 0) {
      do {
        lVar19 = *(long *)(param_1 + 0x1a8);
        if ((*(int *)(lVar19 + 0x6c38) == 0) && (*(byte *)(lVar19 + 0x6c3c) == param_3)) {
          local_f0 = local_f0 & 0xffffffff00000000;
          local_130 = local_130 & 0xffffffff00000000;
          FUN_014e2aa0(0,iVar12,&local_f0,&local_130);
          uVar5 = *(uint *)(lVar19 + 0x6c3c);
          uVar8 = uVar5 >> 8 & 0x3f;
          if (((int)uVar8 <= (int)local_f0 && (int)local_f0 < (int)(uVar8 + (uVar5 >> 0x14 & 0x3f)))
             && ((uVar8 = uVar5 >> 0xe & 0x3f,
                 (int)uVar8 <= (int)local_130 && (int)local_130 < (int)(uVar8 + (uVar5 >> 0x1a)) &&
                 (plVar16 = (long *)FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),0,param_3,iVar12),
                 plVar16 != (long *)0x0)))) {
            uVar15 = *(undefined8 *)(param_1 + 0x1a8);
            plVar2 = plVar16 + 5;
            do {
              lVar19 = *plVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *(int *)plVar2 = (int)lVar19 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            local_f8 = plVar16;
            if ((int)lVar19 == -1) goto LAB_01dd8184;
            FUN_014e63f0(uVar15,&local_f8,0,iVar12,0);
            if (local_f8 != (long *)0x0) {
              plVar16 = local_f8 + 5;
              do {
                lVar19 = *plVar16;
                iVar14 = (int)lVar19 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar7) {
                  *(int *)plVar16 = iVar14;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar14 == 0) {
                (**(code **)(*local_f8 + 0x10))();
              }
              else if ((int)lVar19 == 0) goto LAB_01dd81ac;
            }
            uVar15 = *(undefined8 *)(param_1 + 0x1a8);
            if ((*(char *)(param_1 + 0x1714) == '\0') ||
               (iVar14 = FUN_014e94fc(param_1,0,param_3,iVar12), iVar14 != 2)) {
              uVar20 = 0;
            }
            else {
              uVar20 = 2;
            }
            FUN_014e56f4(uVar15,0,iVar12,uVar20,1);
            uVar15 = *(undefined8 *)(param_1 + 0x1a8);
            uVar13 = FUN_014e5f50(param_1,0,param_3,iVar12);
            FUN_014e6ddc(uVar15,0,iVar12,uVar13);
            if (*(int *)(param_1 + 0x298) == 2) {
              uVar15 = FUN_01195854();
              uVar17 = FUN_014e61a4(uVar15,param_3,iVar12,*(int *)(param_1 + 0x2a4) + -1);
              uVar13 = 0x3f800000;
              if ((uVar17 & 1) == 0) {
                uVar13 = 0;
              }
              FUN_014e6294(uVar13,*(undefined8 *)(param_1 + 0x1a8),iVar12);
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0x1e);
    }
    else {
      do {
        lVar19 = *(long *)(param_1 + 0x1a8);
        if ((*(int *)(lVar19 + 0x6c38) == 1) && (*(byte *)(lVar19 + 0x6c3c) == param_3)) {
          local_f0 = local_f0 & 0xffffffff00000000;
          local_130 = local_130 & 0xffffffff00000000;
          FUN_014e2aa0(1,iVar12,&local_f0,&local_130);
          uVar5 = *(uint *)(lVar19 + 0x6c3c);
          uVar8 = uVar5 >> 8 & 0x3f;
          if ((int)uVar8 <= (int)local_f0 && (int)local_f0 < (int)(uVar8 + (uVar5 >> 0x14 & 0x3f)))
          {
            uVar8 = uVar5 >> 0xe & 0x3f;
            if ((((int)uVar8 <= (int)local_130) && ((int)local_130 < (int)(uVar8 + (uVar5 >> 0x1a)))
                ) && (plVar16 = (long *)FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,param_3,
                                                     iVar12), plVar16 != (long *)0x0)) {
              uVar15 = *(undefined8 *)(param_1 + 0x1a8);
              plVar2 = plVar16 + 5;
              do {
                lVar19 = *plVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(int *)plVar2 = (int)lVar19 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              local_100 = plVar16;
              if ((int)lVar19 == -1) {
LAB_01dd8184:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
              FUN_014e63f0(uVar15,&local_100,5,iVar12,0);
              if (local_100 != (long *)0x0) {
                plVar16 = local_100 + 5;
                do {
                  lVar19 = *plVar16;
                  iVar14 = (int)lVar19 + -1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar7) {
                    *(int *)plVar16 = iVar14;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar14 == 0) {
                  (**(code **)(*local_100 + 0x10))();
                }
                else if ((int)lVar19 == 0) {
LAB_01dd81ac:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint32_t>::max()",
                             "DecrementReferenceInternal",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                             ,0x58,"Reference counter underflows.");
                }
              }
              uVar15 = *(undefined8 *)(param_1 + 0x1a8);
              if (*(char *)(param_1 + 0x1714) == '\0') {
LAB_01dd7e38:
                uVar20 = 0;
              }
              else {
                uVar20 = 2;
                iVar14 = FUN_014e94fc(param_1,2,param_3,iVar12);
                if (iVar14 != 2) goto LAB_01dd7e38;
              }
              FUN_014e56f4(uVar15,5,iVar12,uVar20,1);
              FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),5,iVar12,0);
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 6);
    }
  }
  else if (param_2 - 1U < 2) {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      FUN_014e36f0(param_1,0,param_4);
      param_4 = param_4 + 1;
    }
  }
  FUN_01dc20c8(*(undefined8 *)(param_1 + 0x1a8));
  local_110 = (ulong *)0x0;
  uStack_108 = 0;
  uVar15 = FUN_01870d18(&local_110,param_1 + 0xa8);
  FUN_01870b64(uVar15,&local_110,0);
  puVar10 = local_110;
  if (local_110 != (ulong *)0x0) {
    puVar1 = local_110 + 3;
    do {
      sVar4 = (short)*puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *(short *)puVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_f0 = *puVar10;
        FUN_00c44438(lVar19 + 0x8040,&local_f0);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar19 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar19;
  local_130 = 0x898ac1bbdbe7b512;
  local_128 = "PLAY_UI_COMMON_CATCH";
  local_120 = 0x14;
  local_118 = (long *)0x0;
  if (*(long *)(lVar19 + 0x48) == 0) {
    uVar15 = 0xffffffffffffffff;
  }
  else {
    uVar15 = FUN_00cf8198();
  }
  pcVar9 = local_128;
  memset(&local_f0,0,0x80);
  plVar16 = *(long **)(*(long *)(lVar19 + 0x200) + 0x60);
  iVar12 = (**(code **)(*plVar16 + 0xd0))(plVar16,pcVar9,uVar15,1,&LAB_01080c70,lVar19,0,0,0);
  if ((iVar12 != 0) &&
     (FUN_0104f218(*(undefined8 *)(lVar19 + 0x220),&local_130,iVar12,uVar15,0,&local_f0,0),
     pcVar11 = local_e8, local_e8 != (code *)0x0)) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar11)(auStack_d0);
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  return;
}


