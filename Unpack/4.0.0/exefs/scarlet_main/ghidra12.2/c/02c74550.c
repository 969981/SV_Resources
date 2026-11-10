/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c74550; name: FUN_02c74550
 */


void FUN_02c74550(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long local_b8;
  long *local_a8;
  long *local_98 [4];
  long *local_78;
  long *local_68;
  
  plVar17 = param_1 + 0x25;
  lVar9 = nn::os::GetCurrentThread();
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26));
        while (*plVar17 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02c74598;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar7) {
      *plVar17 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02c74598:
  pcVar15 = (code *)param_1[0x15];
  if (pcVar15 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar15)(param_1 + 0x18);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x18);
    uVar16 = param_3[3];
    param_1[0x15] = param_3[1];
    param_1[0x17] = uVar16;
    uVar16 = *param_3;
    param_1[0x16] = param_3[2];
    param_1[0x14] = uVar16;
  }
  plVar17 = (long *)*param_2;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar10 = (long *)param_1[0xe];
  param_1[0xe] = plVar17;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  param_1[0xf] = param_2[1];
  param_1[0x10] = param_2[2];
  param_1[0x11] = param_2[3];
  plVar17 = (long *)param_2[4];
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar10 = (long *)param_1[0x12];
  param_1[0x12] = plVar17;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 5);
  plVar17 = (long *)param_1[7];
  if (plVar17 != (long *)0x0) {
    puVar1 = PTR_DAT_047d8e88 + 0x10;
    do {
      if ((char)plVar17[5] != '\0') {
        plVar10 = (long *)plVar17[6];
        if (plVar10 == (long *)0x0) {
          plVar20 = (long *)*param_1;
          plVar10 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x40,8);
          if (plVar10 == (long *)0x0) {
            plVar20 = (long *)0x0;
            lVar19 = 0;
            lVar9 = 0;
          }
          else {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar20;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            lVar19 = 0x40;
            plVar10[6] = 0;
            plVar10[7] = 0;
            lVar9 = 8;
            plVar10[4] = 0;
            plVar10[5] = 0;
            plVar10[2] = 0;
            plVar10[3] = 0;
            *plVar10 = (long)puVar1;
            plVar10[1] = 0;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          lVar11 = plVar17[6];
          plVar17[6] = (long)plVar10;
          if (lVar11 != 0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar12 = FUN_00c4e600();
            iVar5 = *(int *)(lVar12 + 0x12c8);
            iVar8 = iVar5 + 1;
            *(int *)(lVar12 + 0x12c8) = iVar8;
            if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
              *(int *)(lVar12 + 0x12cc) = iVar8;
            }
            FUN_00db239c(lVar11);
            plVar10 = (long *)plVar17[7];
            lVar12 = plVar17[8];
            lVar21 = plVar17[9];
            uVar13 = (**(code **)(*plVar10 + 0xf8))(plVar10);
            if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
              (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar12,lVar21);
            }
            else {
              FUN_00c48fe8(plVar10,lVar11,lVar12,lVar21);
            }
            lVar11 = FUN_00c4e600();
            iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
            *(int *)(lVar11 + 0x12c8) = iVar8;
            if (iVar8 == 0) {
              plVar10 = (long *)FUN_00c4e600();
              if (plVar10[600] != 0) {
                local_68 = plVar10 + plVar10[600] * 3;
                local_98[0] = plVar10;
                FUN_00c4ea30(local_98,&local_68);
                local_a8 = (long *)*plVar10;
                plVar3 = plVar10;
                if (plVar10[600] != 0) {
                  plVar3 = plVar10 + plVar10[600] * 3;
                }
                if (plVar3 == plVar10) {
                  lVar12 = 0;
                  local_b8 = 0;
                }
                else {
                  lVar12 = 0;
                  local_b8 = 0;
                  plVar18 = plVar10;
                  do {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != local_a8) {
                      (**(code **)(*local_a8 + 0x100))(local_a8,plVar10 + local_b8 * 3,plVar18);
                      local_a8 = (long *)*plVar18;
                      local_b8 = lVar12;
                    }
                    plVar18 = plVar18 + 3;
                    lVar12 = lVar12 + 1;
                  } while (plVar3 != plVar18);
                }
                (**(code **)(*local_a8 + 0x100))
                          (local_a8,plVar10 + local_b8 * 3,plVar10 + lVar12 * 3);
                plVar10[600] = 0;
              }
              *(undefined4 *)(lVar11 + 0x12cc) = 0;
            }
            plVar10 = (long *)plVar17[6];
          }
          plVar17[7] = (long)plVar20;
          plVar17[8] = lVar19;
          plVar17[9] = lVar9;
        }
        FUN_02c73e34(local_98,plVar17 + 2,param_2 + 1);
        uVar13 = FUN_00dc5c18(plVar10,1,local_98,0,0);
        if (((uVar13 & 1) != 0) && (plVar10 = (long *)plVar10[4], plVar10 != (long *)0x0)) {
          lVar9 = plVar10[6];
          if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar2 = (short *)(lVar9 + 0x1a);
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
            uVar16 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            *(undefined8 *)(lVar9 + 8) = uVar16;
            *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
          }
          else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          lVar9 = plVar10[6];
          psVar2 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_98[0] != (long *)0x0) {
          (**(code **)(*local_98[0] + 0x20))();
        }
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  param_1[0x25] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x26));
  return;
}


