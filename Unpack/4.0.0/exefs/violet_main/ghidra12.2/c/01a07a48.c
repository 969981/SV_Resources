/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a07a48; name: FUN_01a07a48
 */


void FUN_01a07a48(void)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30 [4];
  
  if (((DAT_04839720 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04839720), iVar6 != 0)) {
    FUN_00100190(&LAB_00b1b6d8,&DAT_04839710,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839720);
  }
  lVar8 = DAT_04839710;
  DAT_04839708 = DAT_04839710;
  if (DAT_04839710 == 0) {
    return;
  }
  *(undefined1 *)(DAT_04839710 + 0x38) = 1;
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar7 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar7;
  if (lVar7 != 0) {
    FUN_01793e80(lVar7,lVar8 + 0x28);
  }
  FUN_01a07d80();
  FUN_01a07e18();
  FUN_01a07e90();
  FUN_01a07f08();
  FUN_01a07f80();
  FUN_01a07ff8();
  FUN_01a08070();
  FUN_01a080e8();
  FUN_01a07d60();
  FUN_01a07da0();
  local_50 = &DAT_b1686d3e6def5684;
  pcStack_48 = "playables";
  local_40 = 9;
  local_38 = (long *)0x0;
  FUN_00e25df8(local_30,&local_50);
  plVar10 = (long *)0x0;
  if (local_30[0] != (long *)0x0) {
    if (*(short *)((long)local_30[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_30[0] + 0x1a);
      sVar9 = *(short *)((long)local_30[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01a07ce8;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a07ce8:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (local_30[0][2] != 0) {
            plVar10 = (long *)(local_30[0][2] + -0x28);
          }
          goto LAB_01a07d10;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_01a07d10:
    plVar2 = local_30[0] + 3;
    do {
      sVar9 = (short)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(short *)plVar2 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      FUN_0116e168();
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    local_50 = (undefined1 *)0x47088aab577207bb;
    pcStack_48 = "obon_floater";
    local_40 = 0xc;
    local_38 = (long *)0x0;
    FUN_00cb7f10(local_30,plVar10 + 8,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((local_30[0] != (long *)0x0) && (FUN_01076be8(local_30), local_30[0] != (long *)0x0)) {
      lVar8 = local_30[0][6];
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
        (**(code **)(*local_30[0] + 0x50))();
      }
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar10 + 0x60))(plVar10);
  }
  return;
}


