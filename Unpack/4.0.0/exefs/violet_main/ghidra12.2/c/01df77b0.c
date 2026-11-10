/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df77b0; name: FUN_01df77b0
 */


void FUN_01df77b0(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_50 [24];
  long *local_38;
  
  lVar6 = *(long *)(param_1 + 0x48);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar8 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01df790c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df790c:
        bVar4 = false;
      }
      if (bVar4) {
        plVar8 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar8 = (long *)0x0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  plVar5 = (long *)FUN_01df7498();
  lVar6 = *plVar5;
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01df78ac;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df78ac:
        bVar4 = false;
      }
      if (bVar4) {
        plVar5 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar5 = (long *)0x0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01df7970;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df7970:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar9 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
          if ((plVar8 != (long *)0x0) && (plVar5 != (long *)0x0)) {
            FUN_00dfba48(plVar9,plVar8);
            FUN_00d8fb98(auStack_50,&DAT_045435c8);
            FUN_01df7a00(plVar9,plVar5 + 0x25,auStack_50);
            if (local_38 != (long *)0x0) {
              (**(code **)(*local_38 + 0x20))();
            }
          }
          (**(code **)(*plVar9 + 0x60))(plVar9);
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x60))();
  }
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


