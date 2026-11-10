/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00264004; name: FUN_00264004
 */


void FUN_00264004(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_1 = (long)(PTR_DAT_047cc270 + 0x10);
  pbVar3 = (byte *)param_1[5];
  if (pbVar3 != PTR_DAT_047cba80 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  if (((param_1[1] & 1U) == 0) ||
     (plVar4 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar4 != 0 || plVar4 == (long *)0x0)) {
    puVar2 = (uint *)param_1[4];
    puVar1 = PTR_LAB_047cba48;
  }
  else {
    plVar6 = plVar4 + 1;
    lVar5 = *plVar6;
    if (lVar5 != plVar4[2]) {
                    /* try { // try from 00264108 to 0026410f has its CatchHandler @ 00264144 */
      FUN_00514600(plVar6);
      lVar5 = *plVar6;
    }
    if (lVar5 != 0) {
      plVar4[2] = lVar5;
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
    puVar2 = (uint *)param_1[4];
    puVar1 = PTR_LAB_047cba48;
  }
  PTR_LAB_047cba48 = puVar1;
  if ((puVar2 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar7 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar5 = *(long *)puVar2;
        if (lVar5 != 0) {
          FUN_0049e898(lVar5);
          FUN_0049e790(puVar1,lVar5);
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      puVar2 = (uint *)param_1[4];
    }
    FUN_0049e700(puVar2);
  }
  param_1[4] = 0;
  return;
}


