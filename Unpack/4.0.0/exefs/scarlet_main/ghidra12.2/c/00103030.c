/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00103030; name: FUN_00103030
 */


void FUN_00103030(long param_1)

{
  long lVar1;
  
  FUN_001003e0();
  FUN_001209d0(&DAT_047ec2a8);
  for (lVar1 = DAT_047ec4b8; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0xb8)) {
    if (lVar1 == param_1) goto LAB_00103078;
  }
  *(long *)(param_1 + 0xb8) = DAT_047ec4b8;
  DAT_047ec4b8 = param_1;
LAB_00103078:
  FUN_00120750(&DAT_047ec2a8);
  return;
}


