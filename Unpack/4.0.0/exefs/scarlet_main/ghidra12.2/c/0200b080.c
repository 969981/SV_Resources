/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0200b080; name: FUN_0200b080
 */


void FUN_0200b080(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar15 = *param_4;
  lVar13 = *(long *)(lVar15 + (ulong)*(uint *)(param_2 + 0xe4));
  if ((lVar13 == 0) && (lVar13 = *(long *)(lVar15 + (ulong)*(uint *)(param_2 + 8)), lVar13 != 0)) {
    plVar14 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x28))((undefined8 *)(lVar13 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047db160), iVar7 != 0)) {
      uVar9 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar9;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if (plVar14 == (long *)PTR_DAT_047db168) goto LAB_0200b148;
    }
    lVar13 = 0;
LAB_0200b148:
    *(long *)(lVar15 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar13;
  }
  if ((((*(long *)(lVar13 + 0x88) == 0) || (*(short *)(*(long *)(lVar13 + 0x88) + 0x1a) == 0)) &&
      (uVar8 = FUN_013f7d04(lVar13 + 0x70), (uVar8 & 1) == 0)) ||
     (lVar13 = *(long *)(lVar13 + 0x80), lVar13 == 0)) {
LAB_0200b0dc:
    *param_1 = *PTR_DAT_047db188;
    return;
  }
  FUN_00e92dbc(local_48,lVar13);
  puVar6 = local_48[0];
  if (local_48[0] == (undefined8 *)0x0) goto LAB_0200b0dc;
  if (*(short *)((long)local_48[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_48[0] + 0x1a);
    sVar11 = *(short *)((long)local_48[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0200b19c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0200b19c:
        bVar5 = false;
      }
      if (bVar5) {
        plVar14 = (long *)0x0;
        if (local_48[0][2] != 0) {
          plVar14 = (long *)(local_48[0][2] + -0x28);
        }
        goto LAB_0200b1b0;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  plVar14 = (long *)0x0;
LAB_0200b1b0:
  psVar1 = (short *)(local_48[0] + 3);
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
    piVar2 = (int *)((long)local_48[0] + 0x1c);
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
      lVar15 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar15;
      local_38 = *puVar6;
      FUN_00c44438(lVar15 + 0x8040,&local_38);
    }
  }
  else if (sVar11 == 0) goto LAB_0200b4a0;
  if (plVar14 == (long *)0x0) goto LAB_0200b0dc;
  FUN_00e3353c(local_48,lVar13);
  if (local_48[0] == (undefined8 *)0x0) {
LAB_0200b1e8:
    *param_1 = *PTR_DAT_047db188;
  }
  else {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48[0] + 0x1a);
      sVar11 = *(short *)((long)local_48[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0200b358;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0200b358:
          bVar5 = false;
        }
        if (bVar5) {
          plVar12 = (long *)0x0;
          if (local_48[0][2] != 0) {
            plVar12 = (long *)(local_48[0][2] + -0x28);
          }
          goto LAB_0200b380;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
    plVar12 = (long *)0x0;
LAB_0200b380:
    psVar1 = (short *)(local_48[0] + 3);
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
      piVar2 = (int *)((long)local_48[0] + 0x1c);
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
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_38 = *local_48[0];
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar11 == 0) {
LAB_0200b4a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar12 == (long *)0x0) goto LAB_0200b1e8;
    FUN_0200b034(plVar14);
    FUN_01e163ac(0x3f800000,plVar12);
    puVar10 = (undefined1 *)FUN_013e253c();
    *param_1 = *puVar10;
    lVar13 = plVar12[6];
    psVar1 = (short *)(lVar13 + 0x1a);
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
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar11 == 0) goto LAB_0200b21c;
  }
  lVar13 = plVar14[6];
  psVar1 = (short *)(lVar13 + 0x1a);
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
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))(plVar14);
    return;
  }
  if (sVar11 != 0) {
    return;
  }
LAB_0200b21c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


