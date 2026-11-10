/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b4b94; name: FUN_007b4b94
 */


void FUN_007b4b94(long *param_1)

{
  undefined *puVar1;
  
  FUN_0079a668();
  param_1[0x23a] = 0;
  puVar1 = PTR_DAT_047d0e28;
  param_1[0x23b] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x23c) = 0;
  FUN_0078cfe4(param_1 + 0x23d,0x14);
  FUN_0078cfe4(param_1 + 0x241,0x15);
  param_1[0x245] = 0;
  *(undefined2 *)(param_1 + 0x246) = 0;
  *(undefined1 *)((long)param_1 + 0x1232) = 0;
  *(undefined1 *)(param_1 + 0x232) = 1;
  return;
}


