/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c52d4; name: FUN_002c52d4
 */


void FUN_002c52d4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_002c52d4(param_1,*param_2);
  FUN_002c52d4(param_1,param_2[1]);
  puVar7 = (undefined8 *)param_2[0xe];
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
      uVar6 = param_2[7];
      goto joined_r0x002c5324;
    }
  }
  uVar6 = param_2[7];
joined_r0x002c5324:
  uVar4 = uVar6 & 1;
  if ((uVar6 & 1) == 0) {
    puVar7 = param_2 + 8;
  }
  else {
    puVar7 = (undefined8 *)param_2[8];
  }
  uVar6 = uVar6 >> 1;
  if ((uVar6 != 0) && (puVar7 != (undefined8 *)0x0)) {
    puVar7 = puVar7 + uVar6 * 3;
    do {
      uVar6 = uVar6 - 1;
      FUN_0028bf34(puVar7 + -3,puVar7[-2]);
      puVar7 = puVar7 + -3;
    } while (uVar6 != 0);
    uVar4 = param_2[7] & 1;
  }
  if (uVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[8]);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[6]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


