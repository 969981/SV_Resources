/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006036c4; name: FUN_006036c4
 */


void FUN_006036c4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047ced20;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)PTR_DAT_047ced28 != 0) {
    FUN_0052b230(PTR_DAT_047ced28);
  }
  param_1[5] = (long)PTR_DAT_047cba80;
  param_1[6] = 0;
  return;
}


