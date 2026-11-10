/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308031c; name: FUN_0308031c
 */


void FUN_0308031c(long *param_1,uint *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar11 = (long)(int)param_1[1] + -1;
  uVar6 = param_2[1];
  if (uVar6 != (uint)lVar11) {
    lVar11 = FUN_030802ac(param_1,*param_1 + lVar11 * 0x10);
    *(uint *)(lVar11 + 4) = uVar6;
  }
  plVar9 = *(long **)(*param_1 + (long)(int)uVar6 * 0x10 + 8);
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar1 = plVar9 + 2;
    do {
      lVar11 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  lVar11 = (long)(int)param_1[1] + -1;
  uVar10 = (uint)lVar11;
  *(uint *)(param_1 + 1) = uVar10;
  if (uVar10 != uVar6) {
    puVar2 = (undefined4 *)(*param_1 + lVar11 * 0x10);
    puVar3 = (undefined4 *)(*param_1 + (long)(int)uVar6 * 0x10);
    *puVar3 = *puVar2;
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
    *(undefined8 *)(puVar2 + 2) = 0;
  }
  lVar11 = param_1[2];
  uVar12 = (ulong)(int)param_1[3];
  uVar13 = ((long)param_2 - lVar11 >> 3) + 1U & uVar12;
  while (puVar4 = (uint *)(lVar11 + uVar13 * 8), -1 < (int)puVar4[1]) {
    lVar5 = lVar11 + ((ulong)*puVar4 & uVar12 & 0xffffffff) * 8;
    uVar13 = (ulong)(int)uVar12;
    if ((uVar13 & (long)param_2 - lVar5 >> 3) < (uVar13 & (long)puVar4 - lVar5 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar4;
      uVar12 = (ulong)*(uint *)(param_1 + 3);
      lVar11 = param_1[2];
      uVar13 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar4;
    }
    uVar13 = ((ulong)((long)puVar4 - lVar11) >> 3) + 1 & uVar13;
  }
  param_2[1] = 0xffffffff;
  return;
}


