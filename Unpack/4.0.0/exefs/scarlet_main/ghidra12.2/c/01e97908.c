/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e97908; name: FUN_01e97908
 */


bool FUN_01e97908(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    FUN_01e97944();
    *(undefined8 *)(param_1 + 0x40) = 0x100000001;
    iVar1 = 1;
  }
  return iVar1 == 1;
}


