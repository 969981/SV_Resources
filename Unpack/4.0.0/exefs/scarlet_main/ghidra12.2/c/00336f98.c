/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00336f98; name: FUN_00336f98
 */


void FUN_00336f98(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  
  plVar8 = (long *)param_1[0x16];
  *param_1 = (long)(PTR_DAT_047ccc80 + 0x10);
  for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    puVar10 = (undefined8 *)plVar8[2];
    if ((puVar10 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar10, plVar6 != (long *)0x0)) {
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
                    /* try { // try from 00337008 to 0033700b has its CatchHandler @ 00337144 */
        (*(code *)puVar10[3])(puVar10[4]);
      }
    }
  }
  puVar9 = (ulong *)(param_1 + 0x1a);
  if ((*puVar9 & 1) == 0) {
    plVar8 = param_1 + 0x1b;
  }
  else {
    plVar8 = (long *)param_1[0x1b];
  }
                    /* try { // try from 00337018 to 0033701f has its CatchHandler @ 00337140 */
  FUN_003384c0(puVar9,plVar8,*puVar9 >> 1);
  if ((*puVar9 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x1b]);
  }
  puVar3 = PTR_LAB_047cba48;
  plVar8 = (long *)param_1[0x16];
  while (plVar8 != (long *)0x0) {
    plVar8 = (long *)*plVar8;
    FUN_0049e790(puVar3);
  }
  lVar4 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar3 = PTR_LAB_047cba48;
  uVar7 = param_1[0xf];
  uVar5 = uVar7 & 1;
  if ((uVar7 & 1) == 0) {
    plVar8 = param_1 + 0x10;
  }
  else {
    plVar8 = (long *)param_1[0x10];
  }
  if ((uVar7 >> 1 != 0) && (uVar7 = uVar7 >> 1, plVar8 != (long *)0x0)) {
    do {
      uVar5 = uVar7 - 1;
      puVar10 = (undefined8 *)plVar8[uVar7 - 1];
      plVar8[uVar7 - 1] = 0;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10);
        FUN_0049e790(puVar3,puVar10);
      }
      uVar7 = uVar5;
    } while (uVar5 != 0);
    uVar5 = param_1[0xf] & 1;
  }
  if (uVar5 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x10]);
  }
  FUN_00288048(param_1 + 5);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[4]);
  return;
}


