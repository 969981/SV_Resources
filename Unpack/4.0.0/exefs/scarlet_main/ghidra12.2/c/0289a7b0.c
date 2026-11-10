/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289a7b0; name: FUN_0289a7b0
 */


void FUN_0289a7b0(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_8;
  
  *param_1 = &PTR_FUN_045e56f8;
  param_1[4] = &PTR_LAB_045e5730;
  param_1[5] = &PTR_LAB_045e5750;
  FUN_0289a918(param_1 + 0x6a);
  FUN_0289a9b8(param_1 + 99);
  FUN_0289aa58(param_1 + 0x5c);
  FUN_0289aaf8(param_1 + 0x55);
  FUN_0289ab98(param_1 + 0x4e);
  FUN_0289ac38(param_1 + 0x47);
  FUN_0289acd8(param_1 + 0x40);
  FUN_0289ad78(param_1 + 0x39);
  FUN_019ab920(param_1 + 0x17);
  FUN_0289ae18(param_1 + 0x10);
  FUN_0289ae7c(param_1 + 8);
  puVar8 = (undefined8 *)param_1[6];
  if (puVar8 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar8 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar8 + 0x1c);
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
        local_8 = *puVar8;
        FUN_00c44438(lVar7 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


