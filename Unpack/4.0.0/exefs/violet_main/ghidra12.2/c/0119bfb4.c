/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119bfb4; name: FUN_0119bfb4
 */


void FUN_0119bfb4(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar5 == 0) goto LAB_0119bfdc;
  FUN_00c4e5a0(auStack_58,0);
  FUN_010cc26c(lVar5);
  plVar1 = *(long **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar3 & 1) == 0) {
LAB_0119c03c:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar6);
  }
  else {
    lVar4 = FUN_00c4e600();
    if (*(int *)(lVar4 + 0x12c8) < 1) goto LAB_0119c03c;
    FUN_00c48fe8(plVar1,lVar5,uVar2,uVar6);
  }
  FUN_00c4e70c(auStack_58);
LAB_0119bfdc:
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  return;
}


