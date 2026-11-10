/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029141b4; name: FUN_029141b4
 */


uint FUN_029141b4(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  iVar1 = FUN_0157defc();
  if (((iVar1 == 1) && (iVar1 = FUN_02914cc8(param_1), iVar1 == 0)) &&
     (*(short *)(param_1 + 0xb6) != 0x62)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar2 = uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x14);
  uVar4 = uVar2;
  if ((uVar3 & 1) != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    uVar4 = uVar2 | 2;
    if ((uVar3 & 1) == 0) {
      uVar4 = uVar2;
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
  if ((uVar3 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar4 = uVar4 + (uVar2 & 1);
  }
  return uVar4;
}


