/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003744ac; name: FUN_003744ac
 */


void FUN_003744ac(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar4 = (long *)param_1[1];
    lVar3 = *plVar4;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[2] = 0;
    puVar2 = PTR_LAB_047cba48;
    while (plVar4 != param_1) {
      plVar4 = (long *)plVar4[1];
      FUN_0049e790(puVar2);
    }
  }
  return;
}


