/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038b150; name: FUN_0038b150
 */


undefined1 * FUN_0038b150(long param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if ((ulong)(*(long *)(param_1 + 0x10) - (long)puVar1) < 0x30) {
    puVar1 = (undefined1 *)FUN_0038bad0(param_1,0x30);
  }
  else {
    *(undefined1 **)(param_1 + 8) = puVar1 + 0x30;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_0038b1d0(puVar1 + 8,1,param_1);
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  return puVar1;
}


