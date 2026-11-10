/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c2dd64; name: FUN_01c2dd64
 */


void FUN_01c2dd64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_b8 [4];
  undefined2 local_98 [4];
  undefined8 *local_90 [4];
  undefined8 *local_70 [2];
  undefined1 auStack_60 [24];
  long local_48;
  long *local_28;
  
  uVar8 = FUN_0126a9c0();
  uVar8 = FUN_01e6e060(uVar8,param_2,param_3,param_4,param_5);
  FUN_01e6d32c(&local_48,uVar8);
  if (local_48 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_01e6d3f0(auStack_60);
    uVar9 = FUN_019c7a40(auStack_60);
    if ((uVar9 & 1) == 0) {
      if (((*PTR_DAT_047d6c98 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar10 = *(long *)PTR_DAT_047d6ca0;
      *(long *)PTR_DAT_047d6ca8 = lVar10;
      if (lVar10 != 0) {
        local_98[0] = 3;
        FUN_01e6d4c0(local_b8,local_48);
        FUN_0178e4dc(&local_28,lVar10,local_98,local_b8);
        if (local_b8[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_b8[0] + 3);
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
            piVar2 = (int *)((long)local_b8[0] + 0x1c);
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
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_70[0] = (undefined8 *)*local_b8[0];
              FUN_00c44438(lVar11 + 0x8040,local_70);
            }
          }
          else if (sVar3 == 0) goto LAB_01c2df70;
        }
        FUN_01e6d92c(local_48 + 0x48,local_28);
        uVar8 = FUN_0156cb10(lVar10);
        *(undefined8 *)(local_48 + 0x60) = uVar8;
        if (local_28 != (long *)0x0) {
          lVar10 = local_28[6];
          psVar1 = (short *)(lVar10 + 0x1a);
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
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_28 + 0x50))();
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
    else {
      FUN_01e6d4c0(local_90,local_48);
      FUN_01e66630(local_70,auStack_60,3,local_90);
      if (local_90[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_90[0] + 3);
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
          piVar2 = (int *)((long)local_90[0] + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_28 = (long *)*local_90[0];
            FUN_00c44438(lVar10 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) goto LAB_01c2df70;
      }
      FUN_01e6d610(local_48 + 0x50,local_70);
      uVar8 = FUN_019965ec(auStack_60);
      puVar6 = local_70[0];
      *(undefined8 *)(local_48 + 0x60) = uVar8;
      if (local_70[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70[0] + 3);
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
          piVar2 = (int *)((long)local_70[0] + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_28 = (long *)*puVar6;
            FUN_00c44438(lVar10 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) {
LAB_01c2df70:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    FUN_01e6da68(param_1,&local_48);
    FUN_00d8e444(auStack_60);
  }
  FUN_01c2bd24(&local_48);
  return;
}


