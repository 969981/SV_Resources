/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006a9ae4; name: FUN_006a9ae4
 */


void FUN_006a9ae4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar3 = PTR_DAT_047cbe80;
  puVar1 = PTR_DAT_047cf8d0 + 0x50;
  *param_1 = (long)(PTR_DAT_047cf8d0 + 0x10);
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
  if ((char)param_1[4] == '\0') {
    return;
  }
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x006a9bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  return;
}


