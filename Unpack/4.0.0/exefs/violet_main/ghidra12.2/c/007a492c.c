/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a492c; name: FUN_007a492c
 */


void FUN_007a492c(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined2 param_5)

{
  undefined *puVar1;
  
  FUN_007a3e24();
  puVar1 = PTR_DAT_047d0b10;
  *(undefined1 *)(param_1 + 0xb) = param_4;
  *(undefined2 *)((long)param_1 + 0x5a) = param_5;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


