/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02913754; name: FUN_02913754
 */


int FUN_02913754(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2);
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*plVar4 + 0x3d0))(plVar4,3);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*plVar4 + 0x3d0))(plVar4,1);
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
        goto LAB_029137b0;
      }
      plVar4 = *(long **)(param_1 + 0x30);
    }
  }
  uVar1 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x4e);
LAB_029137b0:
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
  return (uVar2 & 1) + (uVar1 & 1);
}


