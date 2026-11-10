/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a07c0; name: FUN_007a07c0
 */


bool FUN_007a07c0(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00796784(param_1 + 0x98);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  uVar1 = FUN_007a8280(*(undefined8 *)(param_1 + 0x120));
  return 1 < uVar1;
}


