/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f20f4; name: FUN_026f20f4
 */


int FUN_026f20f4(long *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x26);
  uVar2 = (**(code **)(*param_1 + 0x188))();
  return (uint)bVar1 + (uVar2 & 0xff) * 100;
}


