/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02858900; name: FUN_02858900
 */


void FUN_02858900(long *param_1)

{
  undefined *puVar1;
  
  FUN_00798198();
  puVar1 = PTR_DAT_047d0eb0;
  *(undefined4 *)(param_1 + 4) = 0x7c;
  param_1[3] = (long)param_1 + 0x35;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0x35),0,0x200);
  return;
}


