/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02598d74; name: FUN_02598d74
 */


void FUN_02598d74(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar9 = *(long *)(param_2 + 0x1c8);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02598dd8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02598dd8:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          local_38 = (undefined8 *)0x0;
          uStack_30 = 0;
          FUN_00c43ef0(&local_38,lVar9 + 8);
          *param_1 = 0;
          param_1[1] = 0;
          if (local_38[2] == lVar9) {
            FUN_00e29918(param_1,&local_38);
          }
          puVar6 = local_38;
          if (local_38 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_38 + 3);
            do {
              sVar10 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar10 == 1) {
              piVar2 = (int *)((long)local_38 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar8 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar8;
                local_28 = *puVar6;
                FUN_00c44438(lVar8 + 0x8040,&local_28);
              }
            }
            else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
          return;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


