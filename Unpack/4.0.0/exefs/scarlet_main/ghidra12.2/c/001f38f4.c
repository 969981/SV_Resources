/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f38f4; name: FUN_001f38f4
 */


int FUN_001f38f4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_001f3938();
  if (iVar1 == 0) {
    lVar2 = FUN_001edb18(param_1,1);
    *(ushort *)(lVar2 + 0xe2) = *(ushort *)(lVar2 + 0xe2) | 0x400;
  }
  return iVar1;
}


