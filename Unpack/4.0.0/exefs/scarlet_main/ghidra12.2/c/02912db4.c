/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02912db4; name: FUN_02912db4
 */


int FUN_02912db4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((iVar2 < 5) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
     (uVar3 & 1) != 0)) {
    iVar1 = -2;
  }
  else {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((iVar2 < 0x32) &&
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar3 & 1) != 0)) {
      iVar1 = -1;
    }
    else {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      iVar2 = 2;
      if ((uVar3 & 1) == 0) {
        iVar2 = 0;
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                         *(undefined4 *)(param_1 + 0x98));
      iVar1 = iVar2;
      if ((uVar3 & 1) != 0) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
        iVar1 = iVar2 + 2;
        if ((uVar3 & 1) == 0) {
          iVar1 = iVar2;
        }
      }
    }
  }
  return iVar1;
}


