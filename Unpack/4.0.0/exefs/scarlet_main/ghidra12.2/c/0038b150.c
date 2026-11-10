/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


