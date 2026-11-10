/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6f374; name: FUN_01e6f374
 */


void FUN_01e6f374(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  byte bVar9;
  long *plVar10;
  long *local_d0;
  long *local_c8;
  undefined7 local_c0;
  undefined4 uStack_b9;
  undefined1 auStack_b4 [116];
  
  if (*param_2 == 0) {
    *(undefined4 *)((long)param_1 + 7) = 0;
    *param_1 = 0;
    memset((void *)((long)param_1 + 0xc),0,0x72);
    return;
  }
  uVar6 = FUN_0126a9c0();
  plVar7 = (long *)FUN_0167513c(&local_c0,uVar6);
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 5;
    do {
      lVar5 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_01e6f610;
  }
  (**(code **)(*plVar7 + 0x80))(plVar7);
  plVar10 = (long *)*param_3;
  if ((char)plVar10[0x12] != '\0') {
    bVar9 = 0;
    do {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x60))(plVar10,bVar9);
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 5;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar5 == -1) goto LAB_01e6f610;
      }
      uVar8 = FUN_00cf4cfc(plVar10[0xe]);
      if (((uVar8 & 1) == 0) && ((*(ushort *)(*(long *)(plVar10[0xe] + 0x10) + 4) >> 2 & 1) == 0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,plVar10);
      }
      plVar1 = plVar10 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      else if ((int)lVar5 == 0) goto LAB_01e6f5cc;
      plVar10 = (long *)*param_3;
      bVar9 = bVar9 + 1;
    } while (bVar9 < *(byte *)(plVar10 + 0x12));
  }
  local_c0 = 0;
  uStack_b9 = 0;
  memset(auStack_b4,0,0x72);
  local_c8 = plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 5;
    do {
      lVar5 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_01e6f610;
  }
  local_d0 = plVar7;
  if (plVar7 == (long *)0x0) {
    FUN_01e6f688(param_2,&local_c8,&local_d0,&local_c0);
  }
  else {
    plVar10 = plVar7 + 5;
    do {
      lVar5 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
LAB_01e6f610:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_01e6f688(param_2,&local_c8,&local_d0,&local_c0);
    if (plVar7 != (long *)0x0) {
      plVar10 = plVar7 + 5;
      do {
        lVar5 = *plVar10;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar5 == 0) goto LAB_01e6f5cc;
    }
  }
  if (local_c8 != (long *)0x0) {
    plVar10 = local_c8 + 5;
    do {
      lVar5 = *plVar10;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01e6f5cc;
  }
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 5;
    do {
      lVar5 = *plVar10;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar5 == 0) {
LAB_01e6f5cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  memcpy(param_1,&local_c0,0x7e);
  return;
}


