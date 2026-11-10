/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057dda4; name: FUN_0057dda4
 */


void FUN_0057dda4(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = (long)(PTR_DAT_047ce328 + 0x10);
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
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
    puVar2 = (uint *)param_1[4];
    puVar1 = PTR_LAB_047cba48;
  }
  PTR_LAB_047cba48 = puVar1;
  if ((puVar2 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar6 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar5 = *(long *)puVar2;
        if (lVar5 != 0) {
          FUN_0057f834(lVar5);
          FUN_0049e790(puVar1,lVar5);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar2 = (uint *)param_1[4];
    }
    FUN_0049e700(puVar2);
  }
  param_1[4] = 0;
  return;
}


