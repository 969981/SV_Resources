/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005fae1c; name: FUN_005fae1c
 */


void FUN_005fae1c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047cebd0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047cebd8 != 0) {
    FUN_0052b230(PTR_DAT_047cebd8);
  }
  param_1[2] = (long)PTR_DAT_047cba80;
  return;
}


