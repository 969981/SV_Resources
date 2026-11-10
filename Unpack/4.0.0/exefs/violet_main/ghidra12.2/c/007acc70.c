/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007acc70; name: FUN_007acc70
 */


void FUN_007acc70(long *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0x5c;
  puVar1 = PTR_DAT_047d0aa0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_018dd988(param_1 + 4);
  memset((void *)((long)param_1 + 0xe),0,0x10);
  return;
}


