/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003169c0; name: FUN_003169c0
 */


void FUN_003169c0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  plVar6 = (long *)(param_2 & 0xfffffffffffffffc);
  if (*plVar6 == 0) {
    uVar5 = (ulong)*(byte *)(plVar6 + 1);
    lVar8 = plVar6[4];
  }
  else {
    uVar5 = plVar6[1];
    lVar8 = plVar6[4];
  }
  if (lVar8 == 0) {
    uVar7 = (ulong)*(byte *)(plVar6 + 5);
  }
  else {
    uVar7 = plVar6[5];
  }
  uVar1 = param_1[2];
  param_1[1] = uVar5 + uVar7 + param_1[1] + 0x20;
  if (uVar1 < 10) {
    param_1[2] = uVar1 + 1;
    puVar4 = param_1 + uVar1 * 4 + 3;
  }
  else {
    puVar4 = (ulong *)*param_1;
    do {
      uVar7 = *puVar4;
      uVar5 = uVar7 + 0x20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *puVar4 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar4[1] < uVar5) {
      puVar4 = (ulong *)FUN_0038e7c0(puVar4,0x20);
    }
    else {
      puVar4 = (ulong *)((long)puVar4 + uVar7 + 0x20);
    }
  }
  *puVar4 = param_2;
  FUN_00377370(param_1 + 0x2b);
  return;
}


