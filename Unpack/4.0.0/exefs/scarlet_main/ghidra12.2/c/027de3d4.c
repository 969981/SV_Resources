/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027de3d4; name: FUN_027de3d4
 */


void FUN_027de3d4(long param_1,char *param_2)

{
  undefined8 uVar1;
  size_t sVar2;
  
  uVar1 = FUN_01cf7e20();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  sVar2 = strlen(param_2);
  FUN_01e9f270(param_1,param_2,sVar2);
  return;
}


