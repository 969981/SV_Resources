/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01864bb4; name: FUN_01864bb4
 */


void FUN_01864bb4(long param_1,long *param_2)

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
  undefined4 *puVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *local_58 [2];
  undefined4 local_44;
  
  lVar6 = FUN_01864edc(param_1,*param_2);
  if (((*(long *)(lVar6 + 0xd8) == 0) || (*(short *)(*(long *)(lVar6 + 0xd8) + 0x1a) == 0)) &&
     (uVar9 = FUN_01473a8c(lVar6 + 0xc0), (uVar9 & 1) == 0)) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 0xd0);
  if (lVar6 == 0) {
    return;
  }
  plVar7 = (long *)FUN_01489b28();
  lVar11 = *plVar7;
  if (lVar11 == 0) {
    return;
  }
  if (*(short *)(lVar11 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar12 = *(short *)(lVar11 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01864c68;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01864c68:
      bVar5 = false;
    }
    if (bVar5) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        return;
      }
      plVar7 = (long *)(lVar11 + -0x28);
      uVar8 = FUN_01e1bd14(lVar6);
      FUN_01a82804(local_58,plVar7,uVar8);
      if (local_58[0] == (long *)0x0) goto LAB_01864ca8;
      if (*(short *)((long)local_58[0] + 0x1a) == 0) goto LAB_01864d50;
      psVar1 = (short *)((long)local_58[0] + 0x1a);
      sVar12 = *(short *)((long)local_58[0] + 0x1a);
      break;
    }
    sVar12 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
  while (sVar12 = sVar3, sVar3 != 0) {
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01864d40;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01864d40:
      bVar5 = false;
    }
    if (bVar5) {
      plVar13 = (long *)0x0;
      if (local_58[0][2] != 0) {
        plVar13 = (long *)(local_58[0][2] + -0x28);
      }
      goto LAB_01864d54;
    }
  }
LAB_01864d50:
  plVar13 = (long *)0x0;
LAB_01864d54:
  plVar2 = local_58[0] + 3;
  do {
    sVar12 = (short)*plVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(short *)plVar2 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    FUN_0116e168();
  }
  else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)plVar13[5])(plVar13 + 5);
    uVar9 = FUN_020615c8();
    if ((uVar9 & 1) != 0) {
      puVar10 = (undefined4 *)FUN_0206175c(plVar13);
      FUN_014410c0(local_58,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x4c)));
      if (local_58[0] != (long *)0x0) {
        local_44 = *puVar10;
        FUN_010c641c(local_58[0],*param_2 + (ulong)*(uint *)(param_1 + 0x60),&local_44);
        local_44 = puVar10[1];
        FUN_010c641c(local_58[0],*param_2 + (ulong)*(uint *)(param_1 + 100),&local_44);
        local_44 = puVar10[2];
        FUN_010c641c(local_58[0],*param_2 + (ulong)*(uint *)(param_1 + 0x68),&local_44);
        if (local_58[0] != (long *)0x0) {
          lVar6 = local_58[0][6];
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*local_58[0] + 0x50))();
          }
          else if (sVar12 == 0) goto LAB_01864ccc;
        }
      }
    }
    lVar6 = plVar13[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar12 == 0) goto LAB_01864ccc;
  }
LAB_01864ca8:
  lVar6 = *(long *)(lVar11 + 8);
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*plVar7 + 0x50))(plVar7);
  }
  else if (sVar12 == 0) {
LAB_01864ccc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


