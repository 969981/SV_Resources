/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298cbe4; name: FUN_0298cbe4
 */


void FUN_0298cbe4(long param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = FUN_02102a34(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),param_3);
  uVar3 = FUN_02102a34(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),param_4);
  lVar1 = 0;
  if (param_2 < 5) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (ulong)param_2 * 0x38 + 0x28;
  }
  FUN_0124ea98(lVar1,uVar2 & 0xffffffff,uVar3 & 0xffffffff);
  if (((uint)uVar2 & 0xff) < (uint)*(byte *)(lVar1 + 0x30)) {
    plVar5 = *(long **)(lVar1 + (uVar2 & 0xff) * 8);
  }
  else {
    plVar5 = (long *)0x0;
  }
  if (((uint)uVar3 & 0xff) < (uint)*(byte *)(lVar1 + 0x30)) {
    plVar4 = *(long **)(lVar1 + (uVar3 & 0xff) * 8);
  }
  else {
    plVar4 = (long *)0x0;
  }
  uVar2 = (**(code **)(*plVar5 + 0x200))(plVar5);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar5 + 0x508))(plVar5,0xc);
  }
  uVar2 = (**(code **)(*plVar4 + 0x200))(plVar4);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar4 + 0x508))(plVar4,0xc);
  }
  FUN_02923c00(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),param_3,param_4);
  return;
}


