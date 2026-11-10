/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd29cc; name: FUN_01dd29cc
 */


void FUN_01dd29cc(long *param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  bool bVar14;
  short sVar15;
  char *pcVar16;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 *local_e0 [2];
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  uVar12 = *(uint *)(param_2 + 0x108);
  if (2 < uVar12) {
    uVar12 = 3;
  }
  FUN_01dc3e78(*(undefined8 *)(param_2 + 0x1a8),uVar12,0);
  if (*(int *)(param_2 + 0x108) == 2) {
    local_d0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    uVar9 = FUN_01870d18(&local_d0,param_2 + 0xf8);
    FUN_01870b64(uVar9,&local_d0,0);
    puVar6 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_d0 + 3);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar1 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_c0 = *puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_c0);
        }
      }
      else if (sVar15 == 0) goto LAB_01dd2d6c;
    }
  }
  FUN_01195bb4(local_e0,param_2,*(undefined4 *)(param_2 + 0x108));
  if ((local_e0[0] != (undefined8 *)0x0) && (*(short *)((long)local_e0[0] + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_e0[0] + 0x1a);
    sVar15 = *(short *)((long)local_e0[0] + 0x1a);
LAB_01dd302c:
    sVar4 = *psVar2;
    if (sVar4 == sVar15) {
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01dd3050;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01dd3050:
      bVar14 = false;
    }
    if (!bVar14) goto code_r0x01dd3058;
    lVar11 = local_e0[0][2];
    plVar13 = (long *)(lVar11 + -0x28);
    if (lVar11 != 0) {
      FUN_01560aa4(plVar13);
      plVar3 = (long *)(lVar11 + 0xb0);
      lVar10 = nn::os::GetCurrentThread();
      do {
        if (*plVar3 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xb8));
            while (*plVar3 == 0) {
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar14) {
                *plVar3 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01dd30e4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar14) {
          *plVar3 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01dd30e4:
      if (*(char *)(lVar11 + 0x5a) != '\0') {
        *(undefined1 *)(lVar11 + 0x5a) = 0;
        (**(code **)(*plVar13 + 0xd8))(plVar13,0);
      }
      *(undefined8 *)(lVar11 + 0xb0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xb8));
      lVar11 = *(long *)(lVar11 + 8);
      psVar2 = (short *)(lVar11 + 0x1a);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar15 == 0) goto LAB_01dd31a8;
    }
  }
LAB_01dd2a74:
  FUN_01195bb4(param_1,param_2,param_3);
  lVar11 = *param_1;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar11 + 0x1a);
    sVar15 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar15) {
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01dd3098;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dd3098:
        bVar14 = false;
      }
      if (bVar14) {
        lVar11 = *(long *)(lVar11 + 0x10);
        plVar13 = (long *)(lVar11 + -0x28);
        if (lVar11 != 0) {
          plVar3 = (long *)(lVar11 + 0xb0);
          lVar10 = nn::os::GetCurrentThread();
          do {
            if (*plVar3 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xb8));
                while (*plVar3 == 0) {
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar14) {
                    *plVar3 = lVar10;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_01dd3158;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar14) {
              *plVar3 = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_01dd3158:
          if (*(char *)(lVar11 + 0x5a) != '\x01') {
            *(undefined1 *)(lVar11 + 0x5a) = 1;
            (**(code **)(*plVar13 + 0xd8))(plVar13,1);
          }
          *(undefined8 *)(lVar11 + 0xb0) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xb8));
          (**(code **)(*plVar13 + 0x88))(plVar13);
          lVar11 = *(long *)(lVar11 + 8);
          psVar2 = (short *)(lVar11 + 0x1a);
          do {
            sVar15 = *psVar2;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar14) {
              *psVar2 = sVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
          }
          else if (sVar15 == 0) {
LAB_01dd31a8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar15 = sVar4;
    } while (sVar4 != 0);
  }
  *(undefined4 *)(param_2 + 0x108) = param_3;
  switch(param_3) {
  case 0:
  case 1:
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    pcVar16 = "SET_STATE_BOX_PM";
    local_100 = 0x2a61fcefe7006747;
    local_f8 = "SET_STATE_BOX_PM";
    local_f0 = 0x10;
    goto LAB_01dd2b48;
  case 2:
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    local_100 = 0x2a61fcefe7006747;
    local_f8 = "SET_STATE_BOX_PM";
    local_f0 = 0x10;
    local_e8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar9 = 0xffffffffffffffff;
    }
    else {
      uVar9 = FUN_00cf8198();
    }
    pcVar16 = local_f8;
    memset(&local_c0,0,0x80);
    plVar13 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    iVar8 = (**(code **)(*plVar13 + 0xd0))(plVar13,pcVar16,uVar9,1,&LAB_01080c70,lVar11,0,0,0);
    if ((iVar8 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_100,iVar8,uVar9,0,&local_c0,0),
       pcVar7 = local_b8, local_b8 != (code *)0x0)) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar7)(auStack_a0);
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    local_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    uVar9 = FUN_01870d18(&local_110,param_2 + 0xf8);
    FUN_01870b64(uVar9,&local_110,*(char *)(param_2 + 0x19c) == '\0');
    puVar6 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_110 + 3);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar1 = (int *)((long)local_110 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_c0 = *puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_c0);
        }
      }
      else if (sVar15 == 0) goto LAB_01dd2d6c;
    }
    break;
  case 3:
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    local_100 = 0x6b51bc212aaba608;
    local_f8 = "SET_STATE_BOX_FUNCTION";
    local_f0 = 0x16;
    local_e8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar9 = 0xffffffffffffffff;
    }
    else {
      uVar9 = FUN_00cf8198();
    }
    pcVar16 = local_f8;
    memset(&local_c0,0,0x80);
    plVar13 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    iVar8 = (**(code **)(*plVar13 + 0xd0))(plVar13,pcVar16,uVar9,1,&LAB_01080c70,lVar11,0,0,0);
    if ((iVar8 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_100,iVar8,uVar9,0,&local_c0,0),
       pcVar7 = local_b8, local_b8 != (code *)0x0)) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar7)(auStack_a0);
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    FUN_0119544c(param_2,4);
    if ((*(int *)(param_2 + 0x29c) == 2) && (*(char *)(param_2 + 0x19c) != '\0')) {
      FUN_01dd18b0(param_2,0);
    }
    break;
  case 4:
  case 5:
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    pcVar16 = "SET_STATE_BOX_FUNCTION";
    local_100 = 0x6b51bc212aaba608;
    local_f8 = "SET_STATE_BOX_FUNCTION";
    local_f0 = 0x16;
LAB_01dd2b48:
    local_e8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar9 = 0xffffffffffffffff;
    }
    else {
      uVar9 = FUN_00cf8198();
      pcVar16 = local_f8;
    }
    memset(&local_c0,0,0x80);
    plVar13 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    iVar8 = (**(code **)(*plVar13 + 0xd0))(plVar13,pcVar16,uVar9,1,&LAB_01080c70,lVar11,0,0,0);
    if ((iVar8 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_100,iVar8,uVar9,0,&local_c0,0),
       pcVar7 = local_b8, local_b8 != (code *)0x0)) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar7)(auStack_a0);
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
  }
  if (local_e0[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_e0[0] + 3);
    do {
      sVar15 = *psVar2;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar1 = (int *)((long)local_e0[0] + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_c0 = *local_e0[0];
        FUN_00c44438(lVar11 + 0x8040,&local_c0);
      }
    }
    else if (sVar15 == 0) {
LAB_01dd2d6c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01dd3058:
  sVar15 = sVar4;
  if (sVar4 == 0) goto LAB_01dd2a74;
  goto LAB_01dd302c;
}


