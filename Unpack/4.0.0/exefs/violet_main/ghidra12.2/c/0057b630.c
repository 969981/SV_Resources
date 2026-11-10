/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057b630; name: FUN_0057b630
 */


void FUN_0057b630(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = (long)(PTR_DAT_047ce338 + 0x10);
  if (((param_1[1] & 1U) == 0) ||
     (plVar3 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar3 != 0 || plVar3 == (long *)0x0)) {
    puVar2 = (uint *)param_1[4];
    puVar1 = PTR_LAB_047cba48;
  }
  else {
    if ((*(byte *)(plVar3 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar3);
    puVar2 = (uint *)param_1[4];
    puVar1 = PTR_LAB_047cba48;
  }
  PTR_LAB_047cba48 = puVar1;
  if ((puVar2 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar5 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar4 = *(long *)puVar2;
        if (lVar4 != 0) {
          FUN_00267ec4(lVar4);
          FUN_0049e790(puVar1,lVar4);
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar2 = (uint *)param_1[4];
    }
    FUN_0049e700(puVar2);
  }
  param_1[4] = 0;
  return;
}


