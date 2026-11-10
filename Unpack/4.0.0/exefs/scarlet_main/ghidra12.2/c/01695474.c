/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01695474; name: FUN_01695474
 */


undefined4 FUN_01695474(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_4c;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar8 = *(long *)(param_1 + 0x50);
  lVar9 = *(long *)(param_1 + 0x58);
  if (lVar8 != lVar9) {
    do {
      if (((*(long *)(lVar8 + 0x78) != 0) && (*(short *)(*(long *)(lVar8 + 0x78) + 0x1a) != 0)) &&
         (*(long *)(lVar8 + 0x78) == *param_2)) goto LAB_016954cc;
      lVar8 = lVar8 + 0xd0;
    } while (lVar9 != lVar8);
    lVar8 = lVar9;
LAB_016954cc:
    if (lVar8 != *(long *)(param_1 + 0x58)) {
      lVar8 = *(long *)(lVar8 + 0x98);
      if (lVar8 == 0) {
        return 0;
      }
      if (*(short *)(lVar8 + 0x1a) == 0) {
        return 0;
      }
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01695598;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01695598:
          bVar6 = false;
        }
        if (bVar6) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
            return 0;
          }
          plVar11 = (long *)(lVar8 + -0x28);
          FUN_00e92dbc(local_48,plVar11);
          if (local_48[0] == (undefined8 *)0x0) goto LAB_016955cc;
          if (*(short *)((long)local_48[0] + 0x1a) == 0) goto LAB_01695664;
          psVar1 = (short *)((long)local_48[0] + 0x1a);
          sVar10 = *(short *)((long)local_48[0] + 0x1a);
          goto LAB_01695630;
        }
        sVar10 = sVar3;
        if (sVar3 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  lVar8 = *(long *)(param_1 + 0x88);
  lVar9 = *(long *)(param_1 + 0x90);
  if (lVar8 == lVar9) {
    return 0;
  }
  do {
    if (((*(long *)(lVar8 + 0x78) != 0) && (*(short *)(*(long *)(lVar8 + 0x78) + 0x1a) != 0)) &&
       (*(long *)(lVar8 + 0x78) == *param_2)) goto LAB_01695550;
    lVar8 = lVar8 + 0xc0;
  } while (lVar9 != lVar8);
  lVar8 = lVar9;
LAB_01695550:
  if (lVar8 == *(long *)(param_1 + 0x90)) {
    return 0;
  }
  return *(undefined4 *)(lVar8 + 0x90);
  while (sVar10 = sVar3, sVar3 != 0) {
LAB_01695630:
    sVar3 = *psVar1;
    if (sVar3 == sVar10) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01695654;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01695654:
      bVar6 = false;
    }
    if (bVar6) {
      plVar12 = (long *)0x0;
      if (local_48[0][2] != 0) {
        plVar12 = (long *)(local_48[0][2] + -0x28);
      }
      goto LAB_01695668;
    }
  }
LAB_01695664:
  plVar12 = (long *)0x0;
LAB_01695668:
  psVar1 = (short *)(local_48[0] + 3);
  do {
    sVar10 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar10 == 1) {
    piVar2 = (int *)((long)local_48[0] + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar9 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar9;
      local_38 = *local_48[0];
      FUN_00c44438(lVar9 + 0x8040,&local_38);
    }
  }
  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar12 == (long *)0x0) {
LAB_016955cc:
    bVar6 = true;
  }
  else {
    local_4c = FUN_01ebcefc(plVar12);
    lVar9 = plVar12[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar10 == 0) goto LAB_01695750;
    bVar6 = false;
  }
  lVar8 = *(long *)(lVar8 + 0x70);
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar10 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar10 == 0) {
LAB_01695750:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (!bVar6) {
    return local_4c;
  }
  return 0;
}


