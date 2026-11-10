/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eafd4c; name: FUN_02eafd4c
 */


void FUN_02eafd4c(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  
  *param_1 = (long)(PTR_DAT_047e3478 + 0x10);
  lVar8 = param_1[4];
  if (((lVar8 != 0) && (plVar1 = (long *)(lVar8 + (long)(param_1 + 4)), plVar1 != (long *)0x0)) &&
     (plVar1[1] != 0)) {
    plVar6 = plVar1 + 2;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  iVar7 = (int)param_1[6];
  plVar1 = param_1 + 5;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      plVar6 = *(long **)((long)plVar1 + lVar8 * 8 + *plVar1);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))();
        iVar7 = (int)param_1[6];
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar7);
  }
  puVar5 = PTR_DAT_047d1a08;
  lVar8 = param_1[7];
  if (*(int *)((long)param_1 + 0x44) < 0) {
    lVar2 = 0;
    if (lVar8 != 0) {
      lVar2 = lVar8 + (long)(param_1 + 7);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar2,0);
  }
  if (*(int *)((long)param_1 + 0x34) < 0) {
    lVar8 = 0;
    if (param_1[5] != 0) {
      lVar8 = param_1[5] + (long)plVar1;
    }
    (**(code **)(puVar5 + 8))(0,lVar8,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x02eafe78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar5 + 8))(0,param_1,0);
  return;
}


