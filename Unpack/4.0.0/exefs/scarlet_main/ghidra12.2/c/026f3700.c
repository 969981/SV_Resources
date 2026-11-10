/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f3700; name: FUN_026f3700
 */


bool FUN_026f3700(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_026f3730(*(undefined8 *)(param_1 + 0x90),param_2 & 1);
  return iVar1 != 0;
}


