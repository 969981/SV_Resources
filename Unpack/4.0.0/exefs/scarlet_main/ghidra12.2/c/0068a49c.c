/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068a49c; name: FUN_0068a49c
 */


void FUN_0068a49c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  *param_1 = (long)(PTR_DAT_047cf550 + 0x10);
  FUN_0068a668();
  if (((param_1[1] & 1U) == 0) ||
     (plVar4 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar4 != 0 || plVar4 == (long *)0x0)) {
    puVar3 = (uint *)param_1[7];
    puVar2 = PTR_LAB_047cba48;
    plVar4 = (long *)PTR_DAT_047cf5d8;
  }
  else {
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
    puVar3 = (uint *)param_1[7];
    puVar2 = PTR_LAB_047cba48;
    plVar4 = (long *)PTR_DAT_047cf5d8;
  }
  PTR_LAB_047cba48 = puVar2;
  PTR_DAT_047cf5d8 = (undefined *)plVar4;
  if ((puVar3 != (uint *)0x0) && (param_1[5] == 0)) {
    uVar8 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar1 = PTR_DAT_047cf5e0 + 0x10;
      do {
        puVar3 = puVar3 + 2;
        plVar5 = *(long **)puVar3;
        if (plVar5 != (long *)0x0) {
          *plVar5 = (long)puVar1;
          if ((plVar5 != plVar4) && (lVar6 = plVar5[2], lVar6 != 0)) {
            FUN_006896fc(lVar6);
            FUN_0049e790(puVar2,lVar6);
          }
          if (((plVar5[1] & 1U) != 0) &&
             (plVar7 = (long *)(plVar5[1] & 0xfffffffffffffffe),
             *plVar7 == 0 && plVar7 != (long *)0x0)) {
            if ((*(byte *)(plVar7 + 1) & 1) != 0) {
              FUN_0049e790(puVar2,plVar7[3]);
            }
            FUN_0049e790(puVar2,plVar7);
          }
          FUN_0049e790(puVar2,plVar5);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      puVar3 = (uint *)param_1[7];
    }
    FUN_0049e700(puVar3);
  }
  puVar3 = (uint *)param_1[4];
  param_1[7] = 0;
  puVar2 = PTR_LAB_047cba48;
  if ((puVar3 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar8 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        lVar6 = *(long *)puVar3;
        if (lVar6 != 0) {
          FUN_00685ce4(lVar6);
          FUN_0049e790(puVar2,lVar6);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      puVar3 = (uint *)param_1[4];
    }
    FUN_0049e700(puVar3);
  }
  param_1[4] = 0;
  return;
}


