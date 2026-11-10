/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00896078; name: FUN_00896078
 */


void FUN_00896078(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  FUN_008926d8();
  *param_1 = (long)(PTR_DAT_047d2218 + 0x10);
  plVar2 = (long *)FUN_00896e78(0xd8);
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 2) = 0;
    puVar1 = PTR_DAT_047d2100 + 0x10;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[7] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    *plVar2 = (long)puVar1;
    plVar2[1] = -1;
    FUN_012abe74(plVar2 + 8);
    FUN_008f2548(plVar2 + 0x11);
    plVar2[0x1a] = -0x100000000;
  }
  param_1[8] = 0xb0100000000;
  param_1[4] = (long)plVar2;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


