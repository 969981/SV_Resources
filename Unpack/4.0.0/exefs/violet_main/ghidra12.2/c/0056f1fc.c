/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056f1fc; name: FUN_0056f1fc
 */


void FUN_0056f1fc(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047ce128;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047ce130 == 0) {
    param_1[2] = 0;
    return;
  }
  FUN_0052b230(PTR_DAT_047ce130);
  param_1[2] = 0;
  return;
}


