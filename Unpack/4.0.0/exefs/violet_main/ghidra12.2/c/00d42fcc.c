/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d42fcc; name: FUN_00d42fcc
 */


void FUN_00d42fcc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = *param_2;
  lVar8 = *(long *)(param_1 + 2);
  if (lVar8 == 0) goto LAB_00d43004;
  lVar2 = *(long *)(param_1 + 6);
  plVar5 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 4) = lVar8;
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar6 & 1) == 0) {
LAB_00d430b0:
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar2 - lVar8,0x10);
  }
  else {
    lVar7 = FUN_00c4e600();
    if (*(int *)(lVar7 + 0x12c8) < 1) goto LAB_00d430b0;
    FUN_00c48fe8(plVar5,lVar8,lVar2 - lVar8,0x10);
  }
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long *)(param_1 + 2) = 0;
LAB_00d43004:
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 10);
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  FUN_00d42734(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  return;
}


