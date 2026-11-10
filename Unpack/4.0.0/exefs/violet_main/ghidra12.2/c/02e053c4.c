/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e053c4; name: FUN_02e053c4
 */


int FUN_02e053c4(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x90))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar3 & 1) == 0) {
    iVar2 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0xa4));
    plVar4 = *(long **)(param_1 + 0x30);
    if (0x31 < iVar2) {
      iVar2 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0xa4));
      if ((0x45 < iVar2) ||
         (iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar2 < 2)
         ) {
        return 0;
      }
      plVar4 = *(long **)(param_1 + 0x30);
    }
    uVar3 = (**(code **)(*plVar4 + 0x4c8))(plVar4,0x32);
    iVar2 = 2;
    if ((uVar3 & 1) == 0) {
      iVar2 = 0;
    }
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 0x4c8))(plVar4,0x50);
    iVar2 = -(uVar1 & 1);
  }
  return iVar2;
}


