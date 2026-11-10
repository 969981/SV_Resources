/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291cd98; name: FUN_0291cd98
 */


int FUN_0291cd98(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  
  uVar1 = *param_2;
  bVar2 = *(byte *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x48) = uVar1;
  FUN_00d7684c(param_1 + 0x10,uVar1,0);
  return bVar2 + 1;
}


