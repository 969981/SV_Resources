/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e7fe8; name: FUN_018e7fe8
 */


void FUN_018e7fe8(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 extraout_w1;
  long lVar10;
  short sVar11;
  long *plVar12;
  long *local_68 [2];
  uint local_54;
  
  lVar6 = FUN_018e8318(param_1,*param_2);
  if (((*(long *)(lVar6 + 0xd8) == 0) || (*(short *)(*(long *)(lVar6 + 0xd8) + 0x1a) == 0)) &&
     (uVar9 = FUN_01473a8c(lVar6 + 0xc0), (uVar9 & 1) == 0)) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 0xd0);
  if (lVar6 == 0) {
    return;
  }
  plVar7 = (long *)FUN_01489b28();
  lVar10 = *plVar7;
  if (lVar10 == 0) {
    return;
  }
  if (*(short *)(lVar10 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  sVar11 = *(short *)(lVar10 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_018e80a4;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_018e80a4:
      bVar5 = false;
    }
    if (bVar5) {
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) {
        return;
      }
      plVar7 = (long *)(lVar10 + -0x28);
      uVar8 = FUN_01e1bd14(lVar6);
      FUN_01a82804(local_68,plVar7,uVar8);
      if (local_68[0] == (long *)0x0) goto LAB_018e80e4;
      if (*(short *)((long)local_68[0] + 0x1a) == 0) goto LAB_018e818c;
      psVar1 = (short *)((long)local_68[0] + 0x1a);
      sVar11 = *(short *)((long)local_68[0] + 0x1a);
      break;
    }
    sVar11 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
  while (sVar11 = sVar3, sVar3 != 0) {
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_018e817c;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_018e817c:
      bVar5 = false;
    }
    if (bVar5) {
      plVar12 = (long *)0x0;
      if (local_68[0][2] != 0) {
        plVar12 = (long *)(local_68[0][2] + -0x28);
      }
      goto LAB_018e8190;
    }
  }
LAB_018e818c:
  plVar12 = (long *)0x0;
LAB_018e8190:
  plVar2 = local_68[0] + 3;
  do {
    sVar11 = (short)*plVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(short *)plVar2 = sVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar11 == 1) {
    FUN_0116e168();
  }
  else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)plVar12[5])(plVar12 + 5);
    uVar9 = FUN_02076a7c();
    if ((uVar9 & 1) != 0) {
      uVar8 = FUN_02076c10(plVar12);
      FUN_014410c0(local_68,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x4c)));
      if (local_68[0] != (long *)0x0) {
        local_54 = (uint)uVar8;
        FUN_00d96aec(local_68[0],*param_2 + (ulong)*(uint *)(param_1 + 0x60),&local_54);
        local_54 = (uint)((ulong)uVar8 >> 0x20);
        FUN_00d96aec(local_68[0],*param_2 + (ulong)*(uint *)(param_1 + 100),&local_54);
        local_54 = CONCAT31(local_54._1_3_,extraout_w1) & 0xffffff01;
        FUN_00d8d2c8(local_68[0],*param_2 + (ulong)*(uint *)(param_1 + 0x68),&local_54);
        if (local_68[0] != (long *)0x0) {
          lVar6 = local_68[0][6];
          psVar1 = (short *)(lVar6 + 0x1a);
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
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*local_68[0] + 0x50))();
          }
          else if (sVar11 == 0) goto LAB_018e8108;
        }
      }
    }
    lVar6 = plVar12[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar11 == 0) goto LAB_018e8108;
  }
LAB_018e80e4:
  lVar6 = *(long *)(lVar10 + 8);
  psVar1 = (short *)(lVar6 + 0x1a);
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
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*plVar7 + 0x50))(plVar7);
  }
  else if (sVar11 == 0) {
LAB_018e8108:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


