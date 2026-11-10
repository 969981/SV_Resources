/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c12ee4; name: FUN_00c12ee4
 */


undefined4 FUN_00c12ee4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x80))();
  lVar1 = 0;
  if (*(char *)(lVar2 + 0xc) != '\0') {
    lVar1 = 0x28;
  }
  return *(undefined4 *)(*(long *)(lVar2 + 0x10) + lVar1);
}


