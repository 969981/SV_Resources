/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b9cc0; name: FUN_003b9cc0
 */


undefined8 FUN_003b9cc0(long param_1)

{
  int iVar1;
  
  if ((((*(long *)(param_1 + 0x5d0) == 0) || ((*(byte *)(param_1 + 0x44) & 1) != 0)) ||
      (iVar1 = FUN_003c38d0(param_1), iVar1 != 0)) || (iVar1 = FUN_003c3900(param_1), iVar1 != 0)) {
    return 0;
  }
  FUN_003b9ad0(*(undefined8 *)(param_1 + 0x878),*(undefined8 *)(param_1 + 0x5d0),1);
  return 1;
}


