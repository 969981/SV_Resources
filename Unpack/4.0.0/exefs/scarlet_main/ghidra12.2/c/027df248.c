/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027df248; name: FUN_027df248
 */


void FUN_027df248(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 local_28;
  
  plVar9 = (long *)param_1[0x22];
  *param_1 = &PTR_FUN_045e24a0;
  param_1[4] = &PTR_LAB_045e2520;
  param_1[5] = &PTR_LAB_045e2570;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_027c2bd0(param_1 + 0x1c,param_1[0x1d]);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x1b] + 0x18))
              ((long *)param_1[0x1b],param_1[0x1a],param_1[0x18] & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(param_1 + 0x17);
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],param_1[0x15],param_1[0x13] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
  }
  puVar10 = (undefined8 *)param_1[10];
  if (puVar10 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar10 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *puVar10;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  FUN_016c9dc0(param_1);
  return;
}


