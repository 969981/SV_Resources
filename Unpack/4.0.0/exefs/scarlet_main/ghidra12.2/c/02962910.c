/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02962910; name: FUN_02962910
 */


undefined4 FUN_02962910(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x300))(param_1,7);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 7;
  }
  return uVar2;
}


