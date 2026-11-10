/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013571b4; name: FUN_013571b4
 */


void FUN_013571b4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_029b0014(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 0x40;
  }
  else {
    FUN_029b01b4(param_1,param_2);
  }
  return;
}


