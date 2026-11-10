/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01556758; name: FUN_01556758
 */


undefined8 FUN_01556758(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (uVar1 = FUN_00fb3a58(), (uVar1 & 1) != 0)) &&
      ((*(long *)(param_1 + 0x48) == 0 || (uVar1 = FUN_00fb3a58(), (uVar1 & 1) != 0)))) &&
     ((*(long *)(param_1 + 0x50) == 0 || (uVar1 = FUN_00fb3a58(), (uVar1 & 1) != 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


