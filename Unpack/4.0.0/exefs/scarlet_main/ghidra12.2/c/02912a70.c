/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02912a70; name: FUN_02912a70
 */


int FUN_02912a70(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),3);
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*plVar4 + 0x3d0))(plVar4,1);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*plVar4 + 0x3d0))(plVar4,4);
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
        goto LAB_02912acc;
      }
      plVar4 = *(long **)(param_1 + 0x30);
    }
  }
  uVar1 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x4e);
LAB_02912acc:
  uVar1 = uVar1 & 1;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1);
  if ((uVar3 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar1 = (uVar2 & 1) + uVar1;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x21);
  if ((uVar3 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
    uVar1 = uVar1 + (uVar2 & 1);
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x43);
  if ((uVar3 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
    uVar1 = uVar1 + (uVar2 & 1);
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xa7);
  if ((uVar3 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
    uVar1 = uVar1 + (uVar2 & 1);
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
  return uVar1 + (uVar2 & 1);
}


