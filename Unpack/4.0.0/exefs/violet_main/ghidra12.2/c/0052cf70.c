/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052cf70; name: FUN_0052cf70
 */


void FUN_0052cf70(long *param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cdc50;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  if (param_4 < 1) {
    param_4 = param_3;
  }
  *(int *)(param_1 + 2) = param_3;
  *(int *)((long)param_1 + 0x14) = param_4;
  return;
}


