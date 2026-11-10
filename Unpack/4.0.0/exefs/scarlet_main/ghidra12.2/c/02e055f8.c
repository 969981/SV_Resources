/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e055f8; name: FUN_02e055f8
 */


undefined4 FUN_02e055f8(long param_1)

{
  short sVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_1 + 0xaa);
  if (((sVar1 == 0x18) || (sVar1 == 0xa0)) || (sVar1 == 0x82)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar3 = 2;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


