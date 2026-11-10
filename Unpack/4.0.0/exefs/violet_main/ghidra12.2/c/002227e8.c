/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002227e8; name: FUN_002227e8
 */


void FUN_002227e8(long *param_1)

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
  if ((char)param_1[1] != '\0') {
    if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  }
  operator_delete(param_1);
  return;
}


