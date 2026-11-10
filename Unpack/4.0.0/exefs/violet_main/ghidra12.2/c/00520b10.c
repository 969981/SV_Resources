/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00520b10; name: FUN_00520b10
 */


void FUN_00520b10(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = param_1[5];
  lVar7 = param_1[6];
  plVar8 = (long *)param_1[2];
  do {
    plVar8[1] = (plVar8[2] - lVar7) + lVar9;
    lVar9 = *param_1;
    if (plVar8 == (long *)0x0) {
      uVar6 = *(ulong *)(lVar9 + 0x28);
    }
    else {
      uVar5 = plVar8[2] << 1;
      uVar6 = *(ulong *)(lVar9 + 0x30);
      if (uVar5 <= *(ulong *)(lVar9 + 0x30)) {
        uVar6 = uVar5;
      }
    }
    uVar5 = param_2 + 0x18;
    if (param_2 + 0x18 <= uVar6) {
      uVar5 = uVar6;
    }
    plVar4 = (long *)(**(code **)(lVar9 + 0x48))(uVar5);
    plVar1 = (long *)(lVar9 + 0x10);
    plVar4[2] = uVar5;
    *plVar4 = (long)plVar8;
    plVar4[1] = 0x18;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[2] = (long)plVar4;
    lVar9 = (long)plVar4 + plVar4[1];
    param_1[5] = lVar9;
    lVar7 = (long)plVar4 + plVar4[2];
    param_1[6] = lVar7;
    plVar8 = plVar4;
  } while ((ulong)(lVar7 - lVar9) < param_2);
  param_1[5] = lVar9 + param_2;
  return;
}


