/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb7a60; name: FUN_00cb7a60
 */


void FUN_00cb7a60(long param_1,undefined8 *param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78 [2];
  long local_68;
  
  puVar8 = PTR_DAT_047d3910;
  lVar11 = *(long *)(param_1 + 0x880);
  if (*(long *)(param_1 + 0x888) != lVar11) {
    uVar15 = 0;
    do {
      plVar14 = (long *)(*(long *)(param_1 + 0x8b8) + uVar15 * 0x10);
      if (*plVar14 == 0) {
LAB_00cb7acc:
        lVar12 = *(long *)(*(long *)(param_1 + 0x848) + *(long *)(lVar11 + uVar15 * 0x28) * 0x10);
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) goto LAB_00cb7b2c;
        FUN_00cb7f10(&local_80,lVar12 + 0x18,lVar11 + uVar15 * 0x28 + 8);
        if (local_80 == (long *)0x0) {
          local_78[0] = (long *)0x0;
          (*(code *)*param_2)(param_2 + 4,local_78);
          bVar6 = false;
        }
        else {
          plVar16 = local_80 + 5;
          (**(code **)(*local_80 + 0x18))(local_78);
          local_90 = (undefined8 *)0x0;
          uStack_88 = 0;
          if ((long *)local_78[0][2] == plVar16) {
            FUN_00cbc6dc(&local_90,local_78);
          }
          plVar16 = local_78[0];
          if (local_78[0] != (long *)0x0) {
            plVar2 = local_78[0] + 3;
            do {
              sVar13 = (short)*plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(short *)plVar2 = sVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar13 == 1) {
              piVar3 = (int *)((long)local_78[0] + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)puVar8;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_68 = *plVar16;
                FUN_00c44438(lVar11 + 0x8040,&local_68);
              }
            }
            else if (sVar13 == 0) goto LAB_00cb7d10;
          }
          FUN_00ca1ea4(plVar14,&local_90);
          puVar9 = local_90;
          if (local_90 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_90 + 3);
            do {
              sVar13 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar13 == 1) {
              piVar3 = (int *)((long)local_90 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)puVar8;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_78[0] = (long *)*puVar9;
                FUN_00c44438(lVar11 + 0x8040,local_78);
              }
            }
            else if (sVar13 == 0) {
LAB_00cb7d10:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          plVar16 = local_80;
          if (((DAT_048418a0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_048418a0), iVar10 != 0)) {
            DAT_04841898 = 0;
            DAT_04841880 = 0xfe2577dda2ce8f67;
            DAT_04841888 = "EnableChangeNotify";
            DAT_04841890 = 0x12;
            FUN_00100190(PTR_LAB_047d4118,&DAT_04841880,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_048418a0);
          }
          FUN_00cb84e8(plVar16,&DAT_04841880);
          bVar6 = true;
        }
        if (local_80 != (long *)0x0) {
          lVar11 = local_80[6];
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*local_80 + 0x50))();
          }
          else if (sVar13 == 0) goto LAB_00cb7bd8;
        }
        if (bVar6) goto LAB_00cb7b2c;
      }
      else {
        if (*(short *)(*plVar14 + 0x1a) == 0) {
          lVar11 = *(long *)(param_1 + 0x880);
          goto LAB_00cb7acc;
        }
LAB_00cb7b2c:
        lVar11 = *plVar14;
        if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) {
          plVar14 = (long *)0x0;
        }
        else {
          psVar1 = (short *)(lVar11 + 0x1a);
          sVar13 = *(short *)(lVar11 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar13) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_00cb7e1c;
              bVar6 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00cb7e1c:
              bVar6 = false;
            }
            if (bVar6) {
              plVar14 = (long *)0x0;
              if (*(long *)(lVar11 + 0x10) != 0) {
                plVar14 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
              }
              break;
            }
            plVar14 = (long *)0x0;
            sVar13 = sVar4;
          } while (sVar4 != 0);
        }
        local_78[0] = plVar14;
        (*(code *)*param_2)(param_2 + 4,local_78);
        if (plVar14 != (long *)0x0) {
          lVar11 = plVar14[6];
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar14 + 0x50))(plVar14);
          }
          else if (sVar13 == 0) {
LAB_00cb7bd8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      uVar15 = uVar15 + 1;
      lVar11 = *(long *)(param_1 + 0x880);
    } while (uVar15 < (ulong)((*(long *)(param_1 + 0x888) - lVar11 >> 3) * -0x3333333333333333));
  }
  return;
}


