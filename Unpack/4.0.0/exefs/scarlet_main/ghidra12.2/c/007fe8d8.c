/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fe8d8; name: FUN_007fe8d8
 */


void FUN_007fe8d8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d0860;
  lVar2 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  *(undefined1 *)(*(long *)(lVar2 + 0x10) + 0xa8) = 1;
  lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
  *(undefined1 *)(*(long *)(lVar2 + 8) + 0x82) = 1;
  return;
}


