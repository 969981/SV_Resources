/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029160b8; name: FUN_029160b8
 */


undefined8 FUN_029160b8(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)FUN_01021c74();
  uVar3 = (**(code **)(*plVar2 + 800))(plVar2,*(undefined2 *)(param_1 + 0x90));
  if ((uVar3 & 1) != 0) {
    plVar2 = (long *)FUN_01021c74(param_1);
    uVar3 = (**(code **)(*plVar2 + 0x1a0))(plVar2,*(undefined4 *)(param_1 + 0x98));
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    plVar2 = (long *)FUN_01021c74(param_1);
    iVar1 = (**(code **)(*plVar2 + 0xa0))(plVar2,*(undefined4 *)(param_1 + 0xb0));
    if (iVar1 < 0x14) {
      plVar2 = (long *)FUN_01021c74(param_1);
      uVar3 = (**(code **)(*plVar2 + 0x4c0))(plVar2,0x55);
      if ((uVar3 & 1) != 0) {
        return 0xffffffff;
      }
    }
    else if (0x27 < iVar1) {
      return 0;
    }
    plVar2 = (long *)FUN_01021c74(param_1);
    uVar3 = (**(code **)(*plVar2 + 0x4c0))(plVar2,0x3a);
    if ((uVar3 & 1) != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}


