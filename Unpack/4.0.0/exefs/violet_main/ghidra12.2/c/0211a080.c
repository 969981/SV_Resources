/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0211a080; name: FUN_0211a080
 */


undefined1  [16] FUN_0211a080(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  undefined1 auVar10 [16];
  undefined8 local_80;
  float fStack_78;
  long *local_60;
  undefined8 local_58;
  char *local_50;
  long *local_40;
  undefined8 *local_38 [3];
  
  lVar6 = *(long *)(param_1 + 0x40);
  local_80 = 0;
  fStack_78 = 0.0;
  if (lVar6 != 0) {
    if (*(short *)(lVar6 + 0x1a) != 0) {
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar9 = *(short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0211a100;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0211a100:
          bVar8 = false;
        }
        if (bVar8) {
          fStack_78 = 0.0;
          local_80 = 0;
          plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
          if (*(long *)(lVar6 + 0x10) != 0) {
            fStack_78 = 0.0;
            FUN_01ea5784(local_38,plVar7);
            if (local_38[0] == (undefined8 *)0x0) {
              fStack_78 = 0.0;
              local_80 = 0;
            }
            else {
              if (*(short *)((long)local_38[0] + 0x1a) == 0) {
                fStack_78 = 0.0;
                local_80 = 0;
              }
              else {
                FUN_0211a310(&local_58,plVar7);
                if (*local_50 == '\0') {
                  FUN_00cb0348(&local_60,local_38);
                  (**(code **)(*local_60 + 0x40))();
                }
                else {
                  FUN_00cb0348(&local_60,local_38);
                  (**(code **)(*local_60 + 0x50))(local_60,&local_58);
                }
                if (local_60 != (long *)0x0) {
                  (**(code **)(*local_60 + 0x18))();
                }
                if (local_40 != (long *)0x0) {
                  (**(code **)(*local_40 + 0x20))();
                }
              }
              if (local_38[0] != (undefined8 *)0x0) {
                psVar1 = (short *)(local_38[0] + 3);
                do {
                  sVar9 = *psVar1;
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar8) {
                    *psVar1 = sVar9 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar9 == 1) {
                  piVar2 = (int *)((long)local_38[0] + 0x1c);
                  do {
                    iVar5 = *piVar2;
                    cVar4 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar8) {
                      *piVar2 = -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar5 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar6 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar6;
                    local_58 = *local_38[0];
                    FUN_00c44438(lVar6 + 0x8040,&local_58);
                  }
                }
                else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
            }
            (**(code **)(*plVar7 + 0x60))(plVar7);
          }
          goto LAB_0211a09c;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    fStack_78 = 0.0;
    local_80 = 0;
  }
LAB_0211a09c:
  auVar10._0_4_ =
       (float)local_80 +
       (float)*(undefined8 *)(param_1 + 0x90) +
       (float)*(undefined8 *)(param_1 + 0x80) +
       (float)*(undefined8 *)(param_1 + 0x60) + (float)*(undefined8 *)(param_1 + 0x50);
  auVar10._4_4_ =
       (float)((ulong)local_80 >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  auVar10._8_4_ =
       fStack_78 +
       (float)*(undefined8 *)(param_1 + 0x98) +
       (float)*(undefined8 *)(param_1 + 0x88) +
       (float)*(undefined8 *)(param_1 + 0x68) + (float)*(undefined8 *)(param_1 + 0x58);
  auVar10._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) + 0.0;
  return auVar10;
}


