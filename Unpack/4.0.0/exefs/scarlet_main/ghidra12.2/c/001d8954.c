/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d8954; name: FUN_001d8954
 */


bool FUN_001d8954(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1[0x12] == 0) && (iVar2 = FUN_001f2df4(*param_1), iVar2 == 0)) {
    iVar2 = FUN_001f32ac(*param_1);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


