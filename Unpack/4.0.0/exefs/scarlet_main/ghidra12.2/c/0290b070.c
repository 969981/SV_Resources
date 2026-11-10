/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290b070; name: FUN_0290b070
 */


uint FUN_0290b070(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if ((byte)(cVar1 - 1U) < 3) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar4 = 2;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
  return uVar4 | uVar2 & 1;
}


