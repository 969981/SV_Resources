/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a3f0c8; name: FUN_01a3f0c8
 */


int FUN_01a3f0c8(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_01a3f190(param_1,&local_4);
  if (iVar1 == 1) {
    return local_4 + -3;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar2 = *(long **)(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*plVar2 + 0x4c0))(plVar2,0x32);
    if ((uVar3 & 1) == 0) {
      return local_4;
    }
    local_4 = local_4 + -1;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x4b8))
                      (plVar2,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xb0),0);
    if ((uVar3 & 1) == 0) {
      return local_4;
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    if ((uVar3 & 1) == 0) {
      return local_4;
    }
    local_4 = local_4 + 1;
  }
  return local_4;
}


