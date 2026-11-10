/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038ae90; name: FUN_0038ae90
 */


void FUN_0038ae90(long param_1,uint param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if ((ulong)(*(long *)(param_1 + 0x10) - (long)puVar1) < 0x20) {
    puVar1 = (ulong *)FUN_0038bad0(param_1,0x20);
  }
  else {
    *(ulong **)(param_1 + 8) = puVar1 + 4;
  }
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = (ulong)(byte)(&DAT_03cdb73a)[param_2];
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}


