/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a37a58; name: FUN_00a37a58
 */


void FUN_00a37a58(undefined4 param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40);
  *(undefined4 *)(lVar1 + (long)param_3 * 0x44 + 0xdc) = param_1;
  *(undefined1 *)(lVar1 + 0x1b0) = 1;
  return;
}


