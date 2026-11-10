/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a1ab0; name: FUN_004a1ab0
 */


void FUN_004a1ab0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  std::mutex::~mutex((mutex *)(param_1 + 0x28));
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x25];
  while (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    if ((*(byte *)(plVar2 + 2) & 1) != 0) {
      FUN_0049e790(puVar1,plVar2[4]);
    }
    FUN_0049e790(puVar1,plVar2);
    plVar2 = (long *)lVar4;
  }
  lVar4 = param_1[0x23];
  param_1[0x23] = 0;
  if (lVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x1f];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar4 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x1a];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar4 = param_1[0x18];
  param_1[0x18] = 0;
  if (lVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x15];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar4 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  plVar2 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  puVar1 = PTR_LAB_047cba48;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)plVar2[2];
    while (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      FUN_0049e790(puVar1);
    }
    lVar4 = *plVar2;
    *plVar2 = 0;
    if (lVar4 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0xe];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar4 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  plVar2 = (long *)param_1[10];
  param_1[10] = 0;
  puVar1 = PTR_LAB_047cba48;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)plVar2[2];
    while (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      FUN_0049e790(puVar1);
    }
    lVar4 = *plVar2;
    *plVar2 = 0;
    if (lVar4 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[7];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar4 = param_1[5];
  param_1[5] = 0;
  if (lVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


