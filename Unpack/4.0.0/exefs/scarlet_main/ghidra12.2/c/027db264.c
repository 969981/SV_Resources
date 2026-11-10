/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027db264; name: FUN_027db264
 */


void FUN_027db264(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 local_28;
  
  *param_1 = (long)&PTR_FUN_045e2220;
  param_1[4] = (long)&PTR_LAB_045e22a0;
  param_1[5] = (long)&DAT_045e22f0;
  FUN_027db5e4(param_1 + 0x39);
  if ((char)param_1[0x20] != '\0') {
    FUN_01e75064(param_1 + 0x34);
    if ((*(byte *)(param_1 + 0x2f) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x32] + 0x18))
                ((long *)param_1[0x32],param_1[0x31],param_1[0x2f] & 0xfffffffffffffffe,1);
    }
    FUN_01cfa410(param_1 + 0x2d);
    if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x2c] + 0x18))
                ((long *)param_1[0x2c],param_1[0x2b],param_1[0x29] & 0xfffffffffffffffe,1);
    }
    if ((*(byte *)(param_1 + 0x25) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x28] + 0x18))
                ((long *)param_1[0x28],param_1[0x27],param_1[0x25] & 0xfffffffffffffffe,1);
    }
    FUN_027db654(param_1 + 0x21);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  plVar12 = (long *)param_1[0x1f];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar12 = (long *)param_1[0x1d];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar12 = (long *)param_1[0x1b];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar12 = (long *)param_1[0x19];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar12 = (long *)param_1[0x17];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((char)param_1[0x13] != '\0') {
    FUN_01e9eb34(param_1 + 0x14);
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  FUN_01f6f1b0(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  plVar12 = (long *)param_1[0xb];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar12 = (long *)param_1[9];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar11 = (undefined8 *)param_1[6];
  if (puVar11 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar11 + 3);
    do {
      sVar6 = *psVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar8) {
        *psVar4 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


