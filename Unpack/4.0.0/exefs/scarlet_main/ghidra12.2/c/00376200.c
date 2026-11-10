/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00376200; name: FUN_00376200
 */


ulong FUN_00376200(long *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (*param_1 == 0) {
    bVar1 = true;
    lVar6 = *param_2;
  }
  else {
    bVar1 = 1 < *(uint *)(*param_1 + 8);
    lVar6 = *param_2;
  }
  if ((lVar6 != 0) && ((bool)(*(uint *)(lVar6 + 8) < 2 & (bVar1 ^ 1U)))) {
    uVar3 = FUN_00376930(param_1,param_2);
    return uVar3;
  }
  if (param_3 != 0) {
    return param_3;
  }
  plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x80);
  if (plVar4 != (long *)0x0) {
    if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
       (plVar5 = *(long **)*param_1, plVar5 != (long *)0x0)) {
      do {
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar1) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (((undefined8 *)*param_2 != (undefined8 *)0x0) &&
       (plVar5 = *(long **)*param_2, plVar5 != (long *)0x0)) {
      do {
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar1) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar6 = *param_1;
    lVar8 = param_1[3];
    lVar7 = param_1[2];
    plVar4[1] = param_1[1];
    *plVar4 = lVar6;
    plVar4[3] = lVar8;
    plVar4[2] = lVar7;
    lVar7 = param_2[1];
    lVar6 = *param_2;
    lVar9 = param_2[3];
    lVar8 = param_2[2];
    plVar4[8] = 1;
    *(undefined4 *)(plVar4 + 9) = 0;
    plVar4[5] = lVar7;
    plVar4[4] = lVar6;
    plVar4[7] = lVar9;
    plVar4[6] = lVar8;
    FUN_0038db00(plVar4 + 10);
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
  }
  return (ulong)plVar4 | 2;
}


