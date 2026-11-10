/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005fd8cc; name: FUN_005fd8cc
 */


void FUN_005fd8cc(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_047cec40 + 0x10);
  puVar1 = PTR_DAT_047cba80;
  pbVar4 = (byte *)param_1[0xb];
  if (pbVar4 == PTR_DAT_047cba80 || pbVar4 == (byte *)0x0) {
    pbVar4 = (byte *)param_1[0xc];
    if (pbVar4 != PTR_DAT_047cba80 && pbVar4 != (byte *)0x0) goto LAB_005fd958;
  }
  else {
    if ((*pbVar4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar4);
    pbVar4 = (byte *)param_1[0xc];
    if (pbVar4 != puVar1 && pbVar4 != (byte *)0x0) {
LAB_005fd958:
      if ((*pbVar4 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar4 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar4);
      uVar3 = param_1[1];
      goto joined_r0x005fd918;
    }
  }
  uVar3 = param_1[1];
joined_r0x005fd918:
  if ((((uVar3 & 1) != 0) && (plVar5 = (long *)(uVar3 & 0xfffffffffffffffe), *plVar5 == 0)) &&
     (plVar5 != (long *)0x0)) {
    if ((*(byte *)(plVar5 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar5[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar5);
  }
  FUN_005322a4(param_1 + 8);
  FUN_005322a4(param_1 + 5);
  puVar1 = PTR_LAB_047cba48;
  puVar2 = (uint *)param_1[4];
  if ((puVar2 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar6 = *(long *)puVar2;
        if (lVar6 != 0) {
          FUN_0060f708(lVar6);
          FUN_0049e790(puVar1,lVar6);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[4];
    }
    FUN_0049e700(puVar2);
  }
  param_1[4] = 0;
  return;
}


