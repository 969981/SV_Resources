/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00376460; name: FUN_00376460
 */


ulong FUN_00376460(long *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (*param_1 == 0) {
    bVar1 = true;
    lVar6 = *param_2;
  }
  else {
    bVar1 = 1 < *(uint *)(*param_1 + 8);
    lVar6 = *param_2;
  }
  if ((lVar6 == 0) || (!(bool)(*(uint *)(lVar6 + 8) < 2 & (bVar1 ^ 1U)))) {
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x80);
    if (plVar3 != (long *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (plVar4 = *(long **)*param_1, plVar4 != (long *)0x0)) {
        do {
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar1) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (((undefined8 *)*param_2 != (undefined8 *)0x0) &&
         (plVar4 = *(long **)*param_2, plVar4 != (long *)0x0)) {
        do {
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar1) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar6 = *param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      plVar3[1] = param_1[1];
      *plVar3 = lVar6;
      plVar3[3] = lVar9;
      plVar3[2] = lVar8;
      lVar8 = param_2[1];
      lVar6 = *param_2;
      lVar10 = param_2[3];
      lVar9 = param_2[2];
      plVar3[8] = 1;
      *(undefined4 *)(plVar3 + 9) = 0;
      plVar3[5] = lVar8;
      plVar3[4] = lVar6;
      plVar3[7] = lVar10;
      plVar3[6] = lVar9;
      FUN_0038db00(plVar3 + 10);
      plVar3[0xe] = 0;
      plVar3[0xf] = 0;
    }
    uVar7 = (ulong)plVar3 | 2;
    puVar5 = (undefined8 *)*param_1;
  }
  else {
    uVar7 = FUN_00376930(param_1,param_2);
    puVar5 = (undefined8 *)*param_1;
  }
  if ((puVar5 != (undefined8 *)0x0) && (plVar3 = (long *)*puVar5, plVar3 != (long *)0x0)) {
    do {
      lVar6 = *plVar3;
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar1) {
        *plVar3 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)puVar5[3])(puVar5[4]);
    }
  }
  puVar5 = (undefined8 *)*param_2;
  if ((puVar5 != (undefined8 *)0x0) && (plVar3 = (long *)*puVar5, plVar3 != (long *)0x0)) {
    do {
      lVar6 = *plVar3;
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar1) {
        *plVar3 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)puVar5[3])(puVar5[4]);
    }
  }
  return uVar7;
}


