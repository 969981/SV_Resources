/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01579c50; name: FUN_01579c50
 */


void FUN_01579c50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 < *(ulong *)(param_1 + 0x50)) {
    FUN_01579ca4(param_1 + 0x58,uVar1);
    *(ulong *)(param_1 + 0x48) = uVar1 + 8;
    return;
  }
  FUN_0157a0d4(param_1 + 0x40,param_2);
  return;
}


