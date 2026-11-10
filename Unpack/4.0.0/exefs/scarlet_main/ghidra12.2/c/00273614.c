/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00273614; name: FUN_00273614
 */


void FUN_00273614(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    lVar4 = *plVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar4;
    param_1[2] = 0;
    puVar3 = PTR_LAB_047cba48;
    while (plVar2 != param_1) {
      plVar5 = (long *)plVar2[1];
      if ((*(byte *)(plVar2 + 2) & 1) != 0) {
        FUN_0049e790(puVar3,plVar2[4]);
      }
      FUN_0049e790(puVar3,plVar2);
      plVar2 = plVar5;
    }
  }
  return;
}


