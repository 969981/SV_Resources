/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01234d34; name: FUN_01234d34
 */


undefined8 FUN_01234d34(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  undefined8 uVar10;
  undefined8 *local_48 [2];
  long *local_38;
  undefined8 local_18;
  
  FUN_00d2f4e8(&local_38);
  if (local_38 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*local_38 + 0x90))(local_48);
  if (local_48[0] == (undefined8 *)0x0) {
LAB_01234d70:
    uVar10 = 0;
  }
  else {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      if (local_48[0] == (undefined8 *)0x0) goto LAB_01234d70;
      if (*(short *)((long)local_48[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_48[0] + 0x1a);
        sVar9 = *(short *)((long)local_48[0] + 0x1a);
LAB_01234de0:
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01234e04;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01234e04:
          bVar5 = false;
        }
        if (!bVar5) goto code_r0x01234e0c;
        lVar7 = local_48[0][2];
        if (lVar7 != 0) {
          uVar10 = FUN_00ded3a0(lVar7 + 0xe0,&local_18);
          lVar8 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
          }
          else if (sVar9 == 0) goto LAB_01234ecc;
          goto LAB_01234e74;
        }
      }
    }
LAB_01234ec4:
    uVar10 = 0;
LAB_01234e74:
    if (local_48[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48[0] + 3);
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
        piVar2 = (int *)((long)local_48[0] + 0x1c);
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
          local_18 = *local_48[0];
          FUN_00c44438(lVar7 + 0x8040,&local_18);
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
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar9 == 0) {
LAB_01234ecc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return uVar10;
code_r0x01234e0c:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_01234ec4;
  goto LAB_01234de0;
}


