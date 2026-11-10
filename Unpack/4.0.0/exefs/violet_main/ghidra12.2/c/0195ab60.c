/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0195ab60; name: FUN_0195ab60
 */


void FUN_0195ab60(long *param_1)

{
  undefined *puVar1;
  
  FUN_00798198();
  puVar1 = PTR_DAT_047d0db0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((long)param_1 + 0x202) = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0x5c;
  param_1[3] = (long)param_1 + 0x81;
  memset((void *)((long)param_1 + 0x81),0,0x180);
  memset(param_1 + 8,0,0x40);
  return;
}


