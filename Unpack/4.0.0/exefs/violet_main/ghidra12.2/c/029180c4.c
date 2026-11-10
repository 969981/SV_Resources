/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029180c4; name: FUN_029180c4
 */


undefined4 FUN_029180c4(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  plVar3 = *(long **)(param_1 + 0x30);
  if (iVar2 + iVar1 < 2) {
    iVar1 = (**(code **)(*plVar3 + 0x498))(plVar3,*(undefined4 *)(param_1 + 0x98));
    uVar5 = 0xfffffff8;
    if (iVar1 != 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x4e);
    uVar5 = 2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}


