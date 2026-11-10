/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148ebd0; name: FUN_0148ebd0
 */


void FUN_0148ebd0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0x48) + -1;
  uVar3 = lVar4 + *(long *)(param_1 + 0x40);
  plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar3 >> 4 & 0xffffffffffffff8)) +
                      (uVar3 & 0x7f) * 0x20 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
    lVar4 = *(long *)(param_1 + 0x48) + -1;
  }
  *(long *)(param_1 + 0x48) = lVar4;
  lVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar4 = lVar1 * 0x10 + -1;
  }
  if ((ulong)(lVar4 - (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40))) < 0x100) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar5,0x1000,8);
  }
  else {
    FUN_00c48fe8(plVar2,uVar5,0x1000,8);
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  return;
}


