/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a4d14; name: FUN_007a4d14
 */


void FUN_007a4d14(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d0b20;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 10) = 0;
  FUN_00796584(param_1 + 2);
  return;
}


