/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005b1dc4; name: FUN_005b1dc4
 */


void FUN_005b1dc4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_047ce5f0 + 0x60;
  puVar2 = PTR_DAT_047ce5f0 + 0x88;
  *param_1 = (long)(PTR_DAT_047ce5f0 + 0x10);
  param_1[1] = (long)puVar1;
  puVar1 = PTR_DAT_047cbe80;
  param_1[2] = (long)puVar2;
  param_1[4] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x40))(*(long **)PTR_DAT_047cbb08,param_1[6]);
  if (param_1[0xe] != 0) {
    lVar3 = param_1[0xc];
    plVar5 = (long *)param_1[0xd];
    lVar4 = *plVar5;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    param_1[0xe] = 0;
    puVar2 = PTR_LAB_047cba48;
    while (plVar5 != param_1 + 0xc) {
      plVar5 = (long *)plVar5[1];
      FUN_0049e790(puVar2);
    }
  }
  (**(code **)(**(long **)puVar1 + 0x78))(*(long **)puVar1,param_1 + 8);
  param_1[4] = (long)(PTR_DAT_047cbe78 + 0x10);
  if ((char)param_1[5] != '\0') {
    if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  }
  operator_delete(param_1);
  return;
}


