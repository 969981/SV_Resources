/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0069344c; name: FUN_0069344c
 */


void FUN_0069344c(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = (long)(PTR_DAT_047cf6b0 + 0x10);
  if ((param_1 != (long *)PTR_DAT_047cf6a8) && (lVar3 = param_1[5], lVar3 != 0)) {
    FUN_00513c68(lVar3);
    FUN_0049e790(PTR_LAB_047cba48,lVar3);
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
    uVar5 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar3 = *(long *)puVar2;
        if (lVar3 != 0) {
          FUN_0069b418(lVar3);
          FUN_0049e790(puVar1,lVar3);
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


