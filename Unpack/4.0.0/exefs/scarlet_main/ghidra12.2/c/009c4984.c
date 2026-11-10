/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009c4984; name: FUN_009c4984
 */


/* WARNING: Removing unreachable block (ram,0x009c4a58) */
/* WARNING: Removing unreachable block (ram,0x009c4a5c) */
/* WARNING: Removing unreachable block (ram,0x009c4a64) */
/* WARNING: Removing unreachable block (ram,0x009c4a6c) */
/* WARNING: Removing unreachable block (ram,0x009c4abc) */
/* WARNING: Removing unreachable block (ram,0x009c4ac4) */
/* WARNING: Removing unreachable block (ram,0x009c4ac8) */
/* WARNING: Removing unreachable block (ram,0x009c4ad0) */
/* WARNING: Removing unreachable block (ram,0x009c4ad8) */
/* WARNING: Removing unreachable block (ram,0x009c4b1c) */
/* WARNING: Removing unreachable block (ram,0x009c4b2c) */
/* WARNING: Removing unreachable block (ram,0x009c4ae8) */
/* WARNING: Removing unreachable block (ram,0x009c4a74) */
/* WARNING: Removing unreachable block (ram,0x009c4a78) */

void FUN_009c4984(long *param_1,undefined1 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *local_58;
  long local_50;
  undefined8 *local_48 [3];
  undefined8 local_28;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) == 0) goto switchD_009c49b8_default;
    break;
  case 2:
  case 3:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_009c49b8_default;
    break;
  default:
    goto switchD_009c49b8_default;
  }
  switch(*param_2) {
  case 0:
  case 1:
    (**(code **)(**(long **)(param_2 + 8) + 0x20))(&local_58);
    *param_1 = 0;
    param_1[1] = 0;
    puVar7 = PTR_DAT_047d6a30;
    if (local_58 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)local_58[1];
      if (puVar13 != (undefined8 *)0x0) {
        if (((*PTR_DAT_047d6a28 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6a28), iVar9 != 0)) {
          uVar10 = FUN_01ca0cfc();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(PTR_DAT_047d6a28);
        }
LAB_009c4bb0:
        puVar6 = PTR_DAT_047d3908;
        if (puVar13 != (undefined8 *)puVar7) goto code_r0x009c4bb8;
        do {
          lVar11 = local_50;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(&local_50,0x10);
          if (bVar5) {
            local_50 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        puVar8 = PTR_DAT_047d3918;
        puVar7 = PTR_DAT_047d3910;
        uVar10 = *(undefined8 *)PTR_DAT_047d3910;
        *(undefined8 *)PTR_DAT_047d3918 = uVar10;
        FUN_00c44204(local_48,uVar10,lVar11);
        puVar13 = local_58;
        local_58 = (undefined8 *)0x0;
        if (puVar13 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar13 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)puVar13 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)puVar7;
              *(long *)puVar8 = lVar12;
              local_28 = *puVar13;
              FUN_00c44438(lVar12 + 0x8040,&local_28);
            }
          }
          else if (sVar3 == 0) goto LAB_009c5000;
        }
        puVar13 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (local_48[0] == (undefined8 *)0x0) {
          if (puVar13 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar13 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)puVar13 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*puVar6 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)puVar7;
                *(long *)puVar8 = lVar11;
                local_28 = *puVar13;
                FUN_00c44438(lVar11 + 0x8040,&local_28);
              }
            }
            else if (sVar3 == 0) goto LAB_009c5000;
          }
          lVar11 = 0;
        }
        else {
          if (puVar13 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar13 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)puVar13 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*puVar6 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)puVar7;
                *(long *)puVar8 = lVar12;
                local_28 = *puVar13;
                FUN_00c44438(lVar12 + 0x8040,&local_28);
              }
            }
            else if (sVar3 == 0) goto LAB_009c5000;
          }
          puVar13 = local_48[0];
          local_48[0] = (undefined8 *)0x0;
          *param_1 = (long)puVar13;
        }
        puVar13 = local_48[0];
        param_1[1] = lVar11;
        if (local_48[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_48[0] + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_48[0] + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)puVar7;
              *(long *)puVar8 = lVar11;
              local_28 = *puVar13;
              FUN_00c44438(lVar11 + 0x8040,&local_28);
            }
          }
          else if (sVar3 == 0) goto LAB_009c5000;
        }
      }
LAB_009c4cd4:
      puVar13 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_58 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_28 = *puVar13;
            FUN_00c44438(lVar11 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) {
LAB_009c5000:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    return;
  case 2:
    local_28 = 0;
    FUN_009c5070(local_48 + 3,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_009c42d0(param_1,local_48 + 3);
    return;
  case 3:
    *param_1 = 0;
    param_1[1] = 0;
    FUN_009c5070(param_1,param_2 + 8);
    return;
  }
switchD_009c49b8_default:
  *param_1 = 0;
  param_1[1] = 0;
  return;
code_r0x009c4bb8:
  puVar13 = (undefined8 *)*puVar13;
  if (puVar13 == (undefined8 *)0x0) goto LAB_009c4cd4;
  goto LAB_009c4bb0;
}


