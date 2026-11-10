/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00578044; name: FUN_00578044
 */


void FUN_00578044(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte *pbVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_1 = (long)(PTR_DAT_047ce210 + 0x10);
  pbVar4 = (byte *)param_1[5];
  if (pbVar4 != PTR_DAT_047cba80 && pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar4);
  }
  if (((param_1[1] & 1U) == 0) ||
     (plVar5 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar5 != 0 || plVar5 == (long *)0x0)) {
    puVar3 = (uint *)param_1[4];
    puVar2 = PTR_LAB_047cba48;
  }
  else {
    if ((*(byte *)(plVar5 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar5[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar5);
    puVar3 = (uint *)param_1[4];
    puVar2 = PTR_LAB_047cba48;
  }
  PTR_LAB_047cba48 = puVar2;
  if ((puVar3 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar7 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar1 = PTR_DAT_047ce390 + 0x10;
      do {
        puVar3 = puVar3 + 2;
        plVar5 = *(long **)puVar3;
        if (plVar5 != (long *)0x0) {
          *plVar5 = (long)puVar1;
          if (*(int *)((long)plVar5 + 0x1c) != 0) {
            FUN_005799fc(plVar5);
          }
          if (((plVar5[1] & 1U) != 0) &&
             (plVar6 = (long *)(plVar5[1] & 0xfffffffffffffffe),
             *plVar6 == 0 && plVar6 != (long *)0x0)) {
            if ((*(byte *)(plVar6 + 1) & 1) != 0) {
              FUN_0049e790(puVar2,plVar6[3]);
            }
            FUN_0049e790(puVar2,plVar6);
          }
          FUN_0049e790(puVar2,plVar5);
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      puVar3 = (uint *)param_1[4];
    }
    FUN_0049e700(puVar3);
  }
  param_1[4] = 0;
  return;
}


