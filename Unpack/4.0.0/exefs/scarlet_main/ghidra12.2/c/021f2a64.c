/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f2a64; name: FUN_021f2a64
 */


void FUN_021f2a64(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00eee950(*(undefined8 *)(param_1 + 0x70));
  FUN_021f2abc(param_1,param_2);
  iVar2 = FUN_00eee950(*(undefined8 *)(param_1 + 0x70),param_2);
  FUN_00deb2ac(param_1,param_2,iVar2 - iVar1);
  return;
}


