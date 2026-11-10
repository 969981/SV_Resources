/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009389cc; name: FUN_009389cc
 */


/* WARNING: Removing unreachable block (ram,0x00938aa0) */
/* WARNING: Removing unreachable block (ram,0x00938aa4) */
/* WARNING: Removing unreachable block (ram,0x00938aac) */
/* WARNING: Removing unreachable block (ram,0x00938ab4) */
/* WARNING: Removing unreachable block (ram,0x00938b04) */
/* WARNING: Removing unreachable block (ram,0x00938b0c) */
/* WARNING: Removing unreachable block (ram,0x00938b10) */
/* WARNING: Removing unreachable block (ram,0x00938b18) */
/* WARNING: Removing unreachable block (ram,0x00938b20) */
/* WARNING: Removing unreachable block (ram,0x00938b64) */
/* WARNING: Removing unreachable block (ram,0x00938b74) */
/* WARNING: Removing unreachable block (ram,0x00938b30) */
/* WARNING: Removing unreachable block (ram,0x00938abc) */
/* WARNING: Removing unreachable block (ram,0x00938ac0) */

void FUN_009389cc(long *param_1,undefined1 *param_2)

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
  undefined8 *local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  undefined8 *local_28;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) == 0) goto switchD_00938a00_default;
    break;
  case 2:
  case 3:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_00938a00_default;
    break;
  default:
    goto switchD_00938a00_default;
  }
  switch(*param_2) {
  case 0:
  case 1:
    goto switchD_00938a48_caseD_0;
  case 2:
    local_28 = (undefined8 *)0x0;
    FUN_0093918c(local_40 + 0x10,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_009394a0(param_1,local_40 + 0x10);
    return;
  case 3:
    *param_1 = 0;
    param_1[1] = 0;
    FUN_0093918c(param_1,param_2 + 8);
    return;
  default:
switchD_00938a00_default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
code_r0x00938c38:
  puVar13 = (undefined8 *)*puVar13;
  if (puVar13 == (undefined8 *)0x0) goto LAB_00938d54;
  goto LAB_00938c30;
switchD_00938a48_caseD_0:
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,*(long *)(param_2 + 8) + 0x30);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_00c96b7c(&local_60,&local_50);
  puVar13 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
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
      piVar2 = (int *)((long)local_50 + 0x1c);
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
        local_28 = (undefined8 *)*puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_009390d4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = PTR_DAT_047d4b10;
  if (local_60 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)local_60[1];
    if (puVar13 != (undefined8 *)0x0) {
      if (((*PTR_DAT_047d4b08 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4b08), iVar9 != 0)) {
        uVar10 = FUN_01b3fb0c();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(PTR_DAT_047d4b08);
      }
LAB_00938c30:
      puVar6 = PTR_DAT_047d3908;
      if (puVar13 != (undefined8 *)puVar7) goto code_r0x00938c38;
      do {
        lVar11 = local_58;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(&local_58,0x10);
        if (bVar5) {
          local_58 = 0;
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
      FUN_00c44204(&local_28,uVar10,lVar11);
      puVar13 = local_60;
      local_60 = (undefined8 *)0x0;
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
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_50 = (undefined8 *)*puVar13;
            FUN_00c44438(lVar12 + 0x8040,&local_50);
          }
        }
        else if (sVar3 == 0) goto LAB_009390d4;
      }
      puVar13 = (undefined8 *)*param_1;
      *param_1 = 0;
      if (local_28 == (undefined8 *)0x0) {
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
              local_50 = (undefined8 *)*puVar13;
              FUN_00c44438(lVar11 + 0x8040,&local_50);
            }
          }
          else if (sVar3 == 0) goto LAB_009390d4;
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
              local_50 = (undefined8 *)*puVar13;
              FUN_00c44438(lVar12 + 0x8040,&local_50);
            }
          }
          else if (sVar3 == 0) goto LAB_009390d4;
        }
        puVar13 = local_28;
        local_28 = (undefined8 *)0x0;
        *param_1 = (long)puVar13;
      }
      puVar13 = local_28;
      param_1[1] = lVar11;
      if (local_28 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_28 + 3);
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
          piVar2 = (int *)((long)local_28 + 0x1c);
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
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_50 = (undefined8 *)*puVar13;
            FUN_00c44438(lVar11 + 0x8040,&local_50);
          }
        }
        else if (sVar3 == 0) goto LAB_009390d4;
      }
    }
LAB_00938d54:
    puVar13 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
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
        piVar2 = (int *)((long)local_60 + 0x1c);
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
          local_50 = (undefined8 *)*puVar13;
          FUN_00c44438(lVar11 + 0x8040,&local_50);
        }
      }
      else if (sVar3 == 0) {
LAB_009390d4:
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


