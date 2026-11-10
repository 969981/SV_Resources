/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00335e90; name: FUN_00335e90
 */


void FUN_00335e90(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  
  *param_1 = 0;
                    /* try { // try from 00335eb4 to 00335ebf has its CatchHandler @ 00336058 */
  FUN_0038db40(&DAT_047ef4e0);
                    /* try { // try from 00335ecc to 00335ed7 has its CatchHandler @ 0033605c */
  lVar6 = FUN_003427d0(DAT_047ef4d0,DAT_047ef4d8,param_2,0);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x10) == param_3)) && (*(long *)(lVar6 + 0x18) == param_4)
     ) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = lVar6;
    auVar11._8_8_ = DAT_047ef4d8;
    auVar11._0_8_ = DAT_047ef4d0;
    goto LAB_00335ff8;
  }
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (plVar7 == (long *)0x0) {
LAB_00335f98:
    puVar10 = (undefined8 *)*param_1;
  }
  else {
    plVar9 = plVar7 + 1;
    *plVar9 = 1;
    puVar3 = PTR_DAT_047ccc78;
    plVar7[5] = 0;
    plVar7[2] = param_3;
    plVar7[3] = param_4;
    *plVar7 = (long)(puVar3 + 0x10);
    if (lVar6 != 0) {
      plVar7[4] = (long)(((double)*(long *)(lVar6 + 0x20) / (double)*(long *)(lVar6 + 0x10)) *
                        (double)param_3);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *(long **)(lVar6 + 0x28) = plVar7;
      goto LAB_00335f98;
    }
    plVar7[4] = param_3;
    puVar10 = (undefined8 *)*param_1;
  }
  if (puVar10 != (undefined8 *)0x0) {
    plVar9 = puVar10 + 1;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
  }
  uVar5 = DAT_047ef4d8;
  uVar4 = DAT_047ef4d0;
  *param_1 = (long)plVar7;
                    /* try { // try from 00335fc0 to 00335fc7 has its CatchHandler @ 00336054 */
  uVar8 = FUN_0038ccb0(param_2);
  plVar9 = plVar7 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
                    /* try { // try from 00335fe0 to 00335ff3 has its CatchHandler @ 00336050 */
  auVar11 = FUN_00342850(uVar4,uVar5,uVar8,plVar7,0);
LAB_00335ff8:
                    /* try { // try from 00335ff8 to 00336003 has its CatchHandler @ 0033605c */
  DAT_047ef4d8 = auVar11._8_8_;
  DAT_047ef4d0 = auVar11._0_8_;
  FUN_0038db60(&DAT_047ef4e0);
  return;
}


