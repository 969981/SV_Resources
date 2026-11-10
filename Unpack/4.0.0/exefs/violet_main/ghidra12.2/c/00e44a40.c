/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e44a40; name: FUN_00e44a40
 */


void FUN_00e44a40(undefined8 *param_1,long param_2)

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
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00c43ef0(&local_48,param_2 + 0x30);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00c96b7c(&local_58,&local_48);
  puVar10 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
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
      piVar2 = (int *)((long)local_48 + 0x1c);
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
        local_38 = *puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_00e44b20;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (local_58 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)local_58[1];
    if (puVar10 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)PTR_DAT_047dddf8;
      if (((*PTR_DAT_047dddf0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047dddf0), puVar8 = PTR_DAT_047d3ab0,
         puVar12 = (undefined8 *)PTR_DAT_047dddf8, iVar9 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar6 = PTR_DAT_047d39b8, iVar9 != 0)) {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar7 = PTR_DAT_047d39c8, iVar9 != 0))
          {
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
        puVar12 = (undefined8 *)PTR_DAT_047dddf8;
        *(undefined **)PTR_DAT_047dddf8 = puVar8;
        __cxa_guard_release(PTR_DAT_047dddf0);
      }
      do {
        if (puVar10 == puVar12) {
          FUN_00d9b0b0(param_1,&local_58);
          break;
        }
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
    puVar10 = local_58;
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
          local_48 = (undefined8 *)*puVar10;
          FUN_00c44438(lVar11 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
LAB_00e44b20:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


