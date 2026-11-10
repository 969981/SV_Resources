/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02038448; name: FUN_02038448
 */


void FUN_02038448(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  short sVar11;
  long *plVar12;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_18;
  
  lVar8 = FUN_020358b0(param_2,*param_4);
  if ((((*(long *)(lVar8 + 0x88) != 0) && (*(short *)(*(long *)(lVar8 + 0x88) + 0x1a) != 0)) ||
      (uVar10 = FUN_013f7d04(lVar8 + 0x70), (uVar10 & 1) != 0)) && (*(long *)(lVar8 + 0x80) != 0)) {
    FUN_00e3353c(&local_40);
    puVar6 = (undefined8 *)CONCAT44(uStack_3c,local_40);
    if (puVar6 != (undefined8 *)0x0) {
      if (*(short *)((long)puVar6 + 0x1a) != 0) {
        psVar1 = (short *)((long)puVar6 + 0x1a);
        sVar11 = *(short *)((long)puVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_02038504;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02038504:
            bVar5 = false;
          }
          if (bVar5) {
            plVar12 = (long *)0x0;
            if (puVar6[2] != 0) {
              plVar12 = (long *)(puVar6[2] + -0x28);
            }
            goto LAB_0203852c;
          }
          sVar11 = sVar3;
        } while (sVar3 != 0);
      }
      plVar12 = (long *)0x0;
LAB_0203852c:
      psVar1 = (short *)(puVar6 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)puVar6 + 0x1c);
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
          local_18 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_18);
        }
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar12 != (long *)0x0) {
        local_40 = 0;
        FUN_01552cc4(plVar12,&local_40);
        puVar9 = (undefined1 *)FUN_013e253c();
        *param_1 = *puVar9;
        lVar8 = plVar12[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
          return;
        }
        if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
    }
  }
  puVar9 = (undefined1 *)FUN_00f6866c();
  *param_1 = *puVar9;
  return;
}


