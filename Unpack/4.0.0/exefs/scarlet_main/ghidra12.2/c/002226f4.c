/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002226f4; name: FUN_002226f4
 */


void FUN_002226f4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_047cbe80 + 0x10);
  puVar3 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x40))(*(long **)PTR_DAT_047cbb08,param_1[2]);
  if (param_1[10] != 0) {
    lVar1 = param_1[8];
    plVar5 = (long *)param_1[9];
    lVar4 = *plVar5;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar4;
    param_1[10] = 0;
    puVar2 = PTR_LAB_047cba48;
    while (plVar5 != param_1 + 8) {
      plVar5 = (long *)plVar5[1];
      FUN_0049e790(puVar2);
    }
  }
  (**(code **)(**(long **)puVar3 + 0x78))(*(long **)puVar3,param_1 + 4);
  *param_1 = (long)(PTR_DAT_047cbe78 + 0x10);
  if ((char)param_1[1] == '\0') {
    return;
  }
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x002227d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  return;
}


