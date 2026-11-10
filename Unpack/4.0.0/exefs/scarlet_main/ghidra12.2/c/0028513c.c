/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028513c; name: FUN_0028513c
 */


void FUN_0028513c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  *param_1 = (long)&PTR_LAB_0448d2d0;
                    /* try { // try from 00285158 to 0028515b has its CatchHandler @ 0028524c */
  FUN_00343d90(param_1[0x18]);
  if ((param_1[5] & 1U) == 0) {
    plVar8 = param_1 + 6;
LAB_00285174:
    uVar7 = (ulong)param_1[5] >> 1;
    plVar8 = plVar8 + uVar7 * 0x12 + -1;
    lVar6 = uVar7 + 1;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      lVar5 = *plVar8;
      plVar8 = plVar8 + -0x12;
                    /* try { // try from 00285198 to 0028519b has its CatchHandler @ 00285268 */
      FUN_00343d90(lVar5);
    }
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_002851c4;
    lVar6 = param_1[6];
  }
  else {
    plVar8 = (long *)param_1[6];
    if (plVar8 != (long *)0x0) goto LAB_00285174;
    lVar6 = 0;
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar6);
LAB_002851c4:
  puVar4 = PTR_DAT_047cc5b0;
  puVar9 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9);
    FUN_0049e790(PTR_LAB_047cba48,puVar9);
  }
  plVar8 = (long *)param_1[3];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


