/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029093dc; name: FUN_029093dc
 */


uint FUN_029093dc(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar3 = *(long **)(param_1 + 0x30);
  if (iVar1 < 0x51) {
    iVar1 = (**(code **)(*plVar3 + 0xa0))(plVar3,*(undefined4 *)(param_1 + 0x98));
    if (0x31 < iVar1) {
      uVar5 = 0;
      goto LAB_0290942c;
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar5 = 0xfffffffe;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x4e);
    uVar5 = 2;
  }
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
LAB_0290942c:
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xe0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  plVar3 = *(long **)(param_1 + 0x30);
  if ((uVar4 & 1) == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x27);
    uVar2 = uVar5 | uVar2 & 1;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x4e);
    uVar2 = uVar5 - 3;
    if ((uVar4 & 1) == 0) {
      uVar2 = uVar5;
    }
  }
  return uVar2;
}


