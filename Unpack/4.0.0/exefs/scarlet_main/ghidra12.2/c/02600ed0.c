/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02600ed0; name: FUN_02600ed0
 */


void FUN_02600ed0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_026010dc(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 0x100;
  }
  else {
    FUN_026011dc(param_1,param_2);
  }
  return;
}


