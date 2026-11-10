/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00330340; name: FUN_00330340
 */


ulong * FUN_00330340(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if (param_2 != param_1) {
    puVar2 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      puVar2 = (ulong *)param_2[1];
    }
    FUN_0027b208(param_1,puVar2,*param_2 >> 1);
  }
  if (param_2[0x13] == 0) {
    uVar8 = 0;
    puVar7 = (undefined8 *)param_1[0x13];
  }
  else {
    plVar1 = (long *)(param_2[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = param_2[0x13];
    puVar7 = (undefined8 *)param_1[0x13];
  }
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = puVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
      uVar5 = param_1[0x14];
      param_1[0x13] = uVar8;
      goto joined_r0x003303d8;
    }
  }
  uVar5 = param_1[0x14];
  param_1[0x13] = uVar8;
joined_r0x003303d8:
  if (4 < uVar5) {
    FUN_00350fd0();
  }
  uVar8 = param_2[0x14];
  if (4 < uVar8) {
    uVar8 = FUN_00350fb0();
  }
  param_1[0x14] = uVar8;
  FUN_00343d90(param_1[0x15]);
  uVar8 = FUN_003438f0(param_2[0x15]);
  param_1[0x15] = uVar8;
  return param_1;
}


