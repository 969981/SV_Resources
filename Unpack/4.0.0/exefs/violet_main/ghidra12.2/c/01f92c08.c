/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f92c08; name: FUN_01f92c08
 */


undefined1  [16] FUN_01f92c08(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  short sVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 *local_58 [3];
  long *local_40;
  undefined8 local_38;
  
  lVar7 = *(long *)(param_1 + 0x28);
  if ((lVar7 == 0) || (**(char **)(lVar7 + 0x38) == '\0')) {
    lVar7 = *(long *)(param_1 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01f92ca4;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01f92ca4:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar7 + 0x10) == 0) {
            return ZEXT816(0);
          }
          plVar10 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
          lVar7 = (**(code **)(*plVar10 + 0x68))(0,plVar10);
          auVar11._8_8_ = *(ulong *)(lVar7 + 0x38) & 0xffffffff;
          auVar11._0_8_ = *(undefined8 *)(lVar7 + 0x30);
          pcVar8 = *(code **)(*plVar10 + 0x60);
          goto LAB_01f92d70;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
  }
  else {
    FUN_01f92738(local_58,param_1);
    if (local_58[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_58[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_58[0] + 0x1a);
        sVar9 = *(short *)((long)local_58[0] + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01f92cf0;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01f92cf0:
            bVar5 = false;
          }
          if (bVar5) {
            plVar10 = (long *)0x0;
            if (local_58[0][2] != 0) {
              plVar10 = (long *)(local_58[0][2] + -0x28);
            }
            goto LAB_01f92d18;
          }
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
      plVar10 = (long *)0x0;
LAB_01f92d18:
      psVar1 = (short *)(local_58[0] + 3);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        piVar2 = (int *)((long)local_58[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_38 = *local_58[0];
          FUN_00c44438(lVar7 + 0x8040,&local_38);
        }
      }
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar10 != (long *)0x0) {
        FUN_0135d26c(local_58,(long *)(param_1 + 0x28));
        auVar11 = FUN_01f92e8c(param_1 + 0x18,local_58);
        if (local_40 != (long *)0x0) {
          (**(code **)(*local_40 + 0x20))();
        }
        pcVar8 = *(code **)(*plVar10 + 0x60);
LAB_01f92d70:
        (*pcVar8)(plVar10);
        return auVar11;
      }
    }
  }
  return ZEXT816(0);
}


