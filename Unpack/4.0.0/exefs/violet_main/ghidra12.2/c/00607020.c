/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00607020; name: FUN_00607020
 */


void FUN_00607020(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  puVar2 = PTR_LAB_047cba48;
  puVar3 = (uint *)param_1[2];
  if ((puVar3 != (uint *)0x0) && (*param_1 == 0)) {
    uVar6 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar1 = PTR_DAT_047cee48 + 0x10;
      do {
        puVar3 = puVar3 + 2;
        plVar4 = *(long **)puVar3;
        if (plVar4 != (long *)0x0) {
          *plVar4 = (long)puVar1;
          FUN_0060f774(plVar4);
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
      puVar3 = (uint *)param_1[2];
    }
    FUN_0049e700(puVar3);
  }
  param_1[2] = 0;
  return;
}


