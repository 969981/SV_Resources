/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00784ef4; name: FUN_00784ef4
 */


void FUN_00784ef4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar3 = PTR_DAT_047cbe80;
  puVar1 = PTR_DAT_047d07f0 + 0x50;
  *param_1 = (long)(PTR_DAT_047d07f0 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[3] = (long)(puVar3 + 0x10);
  puVar1 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x40))(*(long **)PTR_DAT_047cbb08,param_1[5]);
  if (param_1[0xd] != 0) {
    lVar2 = param_1[0xb];
    plVar5 = (long *)param_1[0xc];
    lVar4 = *plVar5;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar4;
    param_1[0xd] = 0;
    puVar3 = PTR_LAB_047cba48;
    while (plVar5 != param_1 + 0xb) {
      plVar5 = (long *)plVar5[1];
      FUN_0049e790(puVar3);
    }
  }
  (**(code **)(**(long **)puVar1 + 0x78))(*(long **)puVar1,param_1 + 7);
  param_1[3] = (long)(PTR_DAT_047cbe78 + 0x10);
  if ((char)param_1[4] != '\0') {
    if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  }
  operator_delete(param_1);
  return;
}


