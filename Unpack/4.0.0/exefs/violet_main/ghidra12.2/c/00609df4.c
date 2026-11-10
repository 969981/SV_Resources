/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00609df4; name: FUN_00609df4
 */


void FUN_00609df4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047ced98;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047ceda0 != 0) {
    FUN_0052b230(PTR_DAT_047ceda0);
  }
  puVar1 = PTR_DAT_047cba80;
  param_1[4] = 0;
  param_1[2] = (long)puVar1;
  param_1[3] = (long)puVar1;
  return;
}


