/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c5080; name: FUN_002c5080
 */


ulong * FUN_002c5080(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_2 != param_1) {
    if ((*param_2 & 1) != 0) {
      uVar6 = *param_1;
      uVar8 = uVar6 & 1;
      if ((uVar6 & 1) == 0) {
        puVar4 = param_1 + 1;
      }
      else {
        puVar4 = (ulong *)param_1[1];
      }
      if ((uVar6 >> 1 != 0) && (uVar6 = uVar6 >> 1, puVar4 != (ulong *)0x0)) {
        puVar4 = puVar4 + uVar6 * 3;
        do {
          uVar6 = uVar6 - 1;
          FUN_0028bf34(puVar4 + -3,puVar4[-2]);
          puVar4 = puVar4 + -3;
        } while (uVar6 != 0);
        uVar8 = *param_1 & 1;
      }
      if (uVar8 != 0) {
        FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      }
      *param_1 = *param_2;
      uVar6 = param_2[2];
      uVar8 = param_2[1];
      uVar10 = param_2[4];
      uVar9 = param_2[3];
      uVar11 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar11;
      param_1[4] = uVar10;
      param_1[3] = uVar9;
      param_1[2] = uVar6;
      param_1[1] = uVar8;
      *param_2 = 0;
      uVar8 = param_2[7];
      puVar7 = (undefined8 *)param_1[7];
      goto joined_r0x002c50bc;
    }
    FUN_00290edc(param_1,param_2 + 1,*param_2 >> 1);
  }
  uVar8 = param_2[7];
  puVar7 = (undefined8 *)param_1[7];
joined_r0x002c50bc:
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = puVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
    }
  }
  param_1[7] = uVar8;
  param_2[7] = 0;
  return param_1;
}


