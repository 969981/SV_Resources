/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009f8640; name: FUN_009f8640
 */


/* WARNING: Removing unreachable block (ram,0x009f8714) */
/* WARNING: Removing unreachable block (ram,0x009f8718) */
/* WARNING: Removing unreachable block (ram,0x009f8720) */
/* WARNING: Removing unreachable block (ram,0x009f8728) */
/* WARNING: Removing unreachable block (ram,0x009f8778) */
/* WARNING: Removing unreachable block (ram,0x009f8780) */
/* WARNING: Removing unreachable block (ram,0x009f8784) */
/* WARNING: Removing unreachable block (ram,0x009f878c) */
/* WARNING: Removing unreachable block (ram,0x009f8794) */
/* WARNING: Removing unreachable block (ram,0x009f87d8) */
/* WARNING: Removing unreachable block (ram,0x009f87e8) */
/* WARNING: Removing unreachable block (ram,0x009f87a4) */
/* WARNING: Removing unreachable block (ram,0x009f8730) */
/* WARNING: Removing unreachable block (ram,0x009f8734) */

void FUN_009f8640(long *param_1,undefined1 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [3];
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) == 0) goto switchD_009f8674_default;
    break;
  case 2:
  case 3:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_009f8674_default;
    break;
  default:
    goto switchD_009f8674_default;
  }
  switch(*param_2) {
  case 0:
  case 1:
    goto switchD_009f86bc_caseD_0;
  case 2:
    FUN_009f8eac(local_48 + 3,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_009f91c0(param_1,local_48 + 3);
    return;
  case 3:
    *param_1 = 0;
    param_1[1] = 0;
    FUN_009f8eac(param_1,param_2 + 8);
    return;
  default:
switchD_009f8674_default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
code_r0x009f88ac:
  puVar14 = (undefined8 *)*puVar14;
  if (puVar14 == (undefined8 *)0x0) goto LAB_009f89c8;
  goto LAB_009f88a4;
switchD_009f86bc_caseD_0:
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,*(long *)(param_2 + 8) + 0x30);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_00c96b7c(&local_68,&local_58);
  puVar14 = local_58;
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
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48[0] = (undefined8 *)*puVar14;
        FUN_00c44438(lVar12 + 0x8040,local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_009f8d5c;
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = PTR_DAT_047d6eb0;
  if (local_68 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)local_68[1];
    if (puVar14 != (undefined8 *)0x0) {
      if (((*PTR_DAT_047d6ea8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6ea8), puVar6 = PTR_DAT_047d3ab0, iVar10 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar8 = PTR_DAT_047d39b8, iVar10 != 0))
        {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar9 = PTR_DAT_047d39c8, iVar10 != 0
             )) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar10 != 0)) {
              *(undefined8 *)puVar9 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)puVar8 = puVar9;
            __cxa_guard_release(PTR_DAT_047d39b0);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
        *(undefined **)puVar7 = puVar6;
        __cxa_guard_release(PTR_DAT_047d6ea8);
      }
LAB_009f88a4:
      puVar6 = PTR_DAT_047d3908;
      if (puVar14 != (undefined8 *)puVar7) goto code_r0x009f88ac;
      do {
        lVar12 = local_60;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(&local_60,0x10);
        if (bVar5) {
          local_60 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      puVar8 = PTR_DAT_047d3918;
      puVar7 = PTR_DAT_047d3910;
      uVar11 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar11;
      FUN_00c44204(local_48,uVar11,lVar12);
      puVar14 = local_68;
      local_68 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar14 + 3);
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
          piVar2 = (int *)((long)puVar14 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_58 = (undefined8 *)*puVar14;
            FUN_00c44438(lVar13 + 0x8040,&local_58);
          }
        }
        else if (sVar3 == 0) goto LAB_009f8d5c;
      }
      puVar14 = (undefined8 *)*param_1;
      *param_1 = 0;
      if (local_48[0] == (undefined8 *)0x0) {
        if (puVar14 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar14 + 3);
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
            piVar2 = (int *)((long)puVar14 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)puVar7;
              *(long *)puVar8 = lVar12;
              local_58 = (undefined8 *)*puVar14;
              FUN_00c44438(lVar12 + 0x8040,&local_58);
            }
          }
          else if (sVar3 == 0) goto LAB_009f8d5c;
        }
        lVar12 = 0;
      }
      else {
        if (puVar14 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar14 + 3);
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
            piVar2 = (int *)((long)puVar14 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)puVar7;
              *(long *)puVar8 = lVar13;
              local_58 = (undefined8 *)*puVar14;
              FUN_00c44438(lVar13 + 0x8040,&local_58);
            }
          }
          else if (sVar3 == 0) goto LAB_009f8d5c;
        }
        puVar14 = local_48[0];
        local_48[0] = (undefined8 *)0x0;
        *param_1 = (long)puVar14;
      }
      puVar14 = local_48[0];
      param_1[1] = lVar12;
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
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_58 = (undefined8 *)*puVar14;
            FUN_00c44438(lVar12 + 0x8040,&local_58);
          }
        }
        else if (sVar3 == 0) goto LAB_009f8d5c;
      }
    }
LAB_009f89c8:
    puVar14 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
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
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_58 = (undefined8 *)*puVar14;
          FUN_00c44438(lVar12 + 0x8040,&local_58);
        }
      }
      else if (sVar3 == 0) {
LAB_009f8d5c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


