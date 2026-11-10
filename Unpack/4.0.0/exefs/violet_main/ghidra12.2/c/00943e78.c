/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00943e78; name: FUN_00943e78
 */


void FUN_00943e78(undefined8 *param_1,undefined1 *param_2)

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
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_48 [2];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) == 0) goto switchD_00943eac_default;
    break;
  case 2:
  case 3:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_00943eac_default;
    break;
  default:
    goto switchD_00943eac_default;
  }
  switch(*param_2) {
  case 0:
  case 1:
    (**(code **)(**(long **)(param_2 + 8) + 0x20))(local_48);
    *param_1 = 0;
    param_1[1] = 0;
    if (local_48[0] != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)local_48[0][1];
      if (puVar11 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)PTR_DAT_047d4dc8;
        if (((*PTR_DAT_047d4dc0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4dc0), puVar8 = PTR_DAT_047d3ab0,
           puVar12 = (undefined8 *)PTR_DAT_047d4dc8, iVar9 != 0)) {
          if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar6 = PTR_DAT_047d39b8, iVar9 != 0))
          {
            if (((*PTR_DAT_047d39b0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar7 = PTR_DAT_047d39c8, iVar9 != 0
               )) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
                *(undefined8 *)puVar7 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar6 = puVar7;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
            *(undefined **)puVar8 = puVar6;
            __cxa_guard_release(PTR_DAT_047d3aa8);
          }
          puVar12 = (undefined8 *)PTR_DAT_047d4dc8;
          *(undefined **)PTR_DAT_047d4dc8 = puVar8;
          __cxa_guard_release(PTR_DAT_047d4dc0);
        }
        do {
          if (puVar11 == puVar12) {
            FUN_009442b8(param_1,local_48);
            break;
          }
          puVar11 = (undefined8 *)*puVar11;
        } while (puVar11 != (undefined8 *)0x0);
      }
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
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_38 = *local_48[0];
            FUN_00c44438(lVar10 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) {
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
    local_30 = (undefined8 *)0x0;
    uStack_28 = 0;
    FUN_0092181c(&local_30,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00921b30(param_1,&local_30);
    puVar11 = local_30;
    if (local_30 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_30 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) {
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_30 + 0x1c);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar10 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar10;
    local_8 = *puVar11;
    FUN_00c44438(lVar10 + 0x8040,&local_8);
    return;
  case 3:
    *param_1 = 0;
    param_1[1] = 0;
    FUN_0092181c(param_1,param_2 + 8);
    return;
  }
switchD_00943eac_default:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


