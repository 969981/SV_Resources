/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00611f6c; name: FUN_00611f6c
 */


void FUN_00611f6c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  *param_1 = (long)(PTR_DAT_047cedb0 + 0x10);
  FUN_006120a8();
  if (((param_1[1] & 1U) == 0) ||
     (plVar4 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar4 != 0 || plVar4 == (long *)0x0)) {
    puVar3 = (uint *)param_1[4];
    puVar2 = PTR_LAB_047cba48;
  }
  else {
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
    puVar3 = (uint *)param_1[4];
    puVar2 = PTR_LAB_047cba48;
  }
  PTR_LAB_047cba48 = puVar2;
  if ((puVar3 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar6 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar1 = PTR_DAT_047cee38 + 0x10;
      do {
        puVar3 = puVar3 + 2;
        plVar4 = *(long **)puVar3;
        if (plVar4 != (long *)0x0) {
          *plVar4 = (long)puVar1;
          FUN_00613ec8(plVar4);
          if (((plVar4[1] & 1U) != 0) &&
             (plVar5 = (long *)(plVar4[1] & 0xfffffffffffffffe),
             *plVar5 == 0 && plVar5 != (long *)0x0)) {
            if ((*(byte *)(plVar5 + 1) & 1) != 0) {
              FUN_0049e790(puVar2,plVar5[3]);
            }
            FUN_0049e790(puVar2,plVar5);
          }
          FUN_0049e790(puVar2,plVar4);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar3 = (uint *)param_1[4];
    }
    FUN_0049e700(puVar3);
  }
  param_1[4] = 0;
  return;
}


