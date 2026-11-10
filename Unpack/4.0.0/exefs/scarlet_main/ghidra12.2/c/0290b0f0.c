/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290b0f0; name: FUN_0290b0f0
 */


int FUN_0290b0f0(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x278))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
    iVar1 = -4;
    if ((uVar3 & 1) == 0) {
      iVar1 = 0;
    }
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar4 = iVar1;
  if (0x32 < iVar2) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3e);
    iVar4 = iVar1 + -3;
    if ((uVar3 & 1) == 0) {
      iVar4 = iVar1;
    }
  }
  iVar1 = FUN_02914b2c(param_1);
  if (iVar1 == 1) {
    if (*(short *)(param_1 + 0x9e) != 0x62) {
      iVar4 = iVar4 + -5;
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
  iVar1 = iVar4 + 2;
  if ((uVar3 & 1) == 0) {
    iVar1 = iVar4;
  }
  return iVar1;
}


