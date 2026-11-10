/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a3200; name: FUN_004a3200
 */


void FUN_004a3200(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar1 = PTR_LAB_047cba48;
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)plVar4[2];
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      FUN_0049e790(puVar1);
    }
    lVar3 = *plVar4;
    *plVar4 = 0;
    if (lVar3 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
  }
  plVar4 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  puVar1 = PTR_LAB_047cba48;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)plVar4[2];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = *plVar4;
  *plVar4 = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar4);
  return;
}


