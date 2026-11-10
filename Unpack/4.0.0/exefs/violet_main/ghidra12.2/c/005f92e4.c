/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f92e4; name: FUN_005f92e4
 */


void FUN_005f92e4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047cebe8;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = param_2;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  if (*(int *)PTR_DAT_047cebf0 != 0) {
    FUN_0052b230(PTR_DAT_047cebf0);
  }
  puVar1 = PTR_DAT_047cba80;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = (long)puVar1;
  param_1[6] = 0;
  return;
}


