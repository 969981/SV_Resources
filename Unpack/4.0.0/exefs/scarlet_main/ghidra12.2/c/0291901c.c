/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291901c; name: FUN_0291901c
 */


undefined4 FUN_0291901c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (*(ushort *)(param_1 + 0xaa) - 0x39 < 2) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if (((iVar1 < 10) ||
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)), iVar1 < 10)
        ) || (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                (*(long **)(param_1 + 0x30),0x5d), (uVar2 & 1) == 0)) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
      if (((iVar1 < 8) ||
          (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)), iVar1 < 8
          )) || (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                   (*(long **)(param_1 + 0x30),0x32), (uVar2 & 1) == 0)) {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        uVar3 = 2;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


