/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290cf8c; name: FUN_0290cf8c
 */


uint FUN_0290cf8c(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((*(short *)(param_1 + 0xb6) == 0x8b) &&
     (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d),
     (uVar4 & 1) != 0)) {
    return 0;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0);
  plVar5 = *(long **)(param_1 + 0x30);
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x27);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x5a);
    if ((uVar4 & 1) != 0) {
      return 0xffffffff;
    }
  }
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = 0;
  if (uVar1 < 0x71) {
    if ((uVar1 != 0x19) && (uVar1 != 0x69)) goto LAB_0290d07c;
  }
  else if ((uVar1 != 0x71) && ((uVar1 != 0x164 && (uVar1 != 0xe9)))) goto LAB_0290d07c;
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
  uVar2 = uVar2 & 1;
LAB_0290d07c:
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((uVar4 & 1) == 0) {
    return uVar2;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
  return uVar2 + (uVar3 & 1);
}


