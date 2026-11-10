/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02913654; name: FUN_02913654
 */


undefined4 FUN_02913654(long param_1)

{
  short sVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_1 + 0xb6);
  if ((sVar1 == 4) || (sVar1 == 0x4b)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    uVar3 = 0xfffffffc;
  }
  else {
    if (sVar1 != 0x53) {
      return 0;
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    uVar3 = 0xfffffffb;
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


