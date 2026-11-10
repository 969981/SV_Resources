/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290ecd0; name: FUN_0290ecd0
 */


uint FUN_0290ecd0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar3 = 0;
  if ((lVar5 != 0) && (*(short *)(param_1 + 0xb6) != 0x3c)) {
    if (*(short *)(param_1 + 0xb6) == 5) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
      iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if (iVar1 < iVar2) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
        uVar3 = uVar3 & 1;
      }
      else {
        uVar3 = 0;
      }
    }
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if ((uVar6 & 1) != 0) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
      uVar3 = uVar3 + (uVar4 & 1);
    }
  }
  return uVar3;
}


