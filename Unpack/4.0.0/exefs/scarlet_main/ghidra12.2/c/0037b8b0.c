/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037b8b0; name: FUN_0037b8b0
 */


long FUN_0037b8b0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0038c7b0(0x100);
  *(undefined1 **)(lVar1 + 8) = &LAB_0037b8f0;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(long *)(lVar1 + 0x28) = lVar1;
  *(long *)(lVar1 + 0x30) = lVar1 + 0x68;
  return lVar1 + 0x28;
}


