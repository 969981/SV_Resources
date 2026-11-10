/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fac4c8; name: FUN_00fac4c8
 */


void FUN_00fac4c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar2 = FUN_00fac5d0(param_2);
  plVar6 = *(long **)(param_1 + 8);
  uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar2,8);
  lVar7 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  if (lVar7 != 0) {
    plVar1 = *(long **)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar7,uVar3,uVar8);
        goto LAB_00fac51c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,uVar3,uVar8);
  }
LAB_00fac51c:
  *(long **)(param_1 + 0x40) = plVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = 8;
  FUN_00fac5dc(param_1 + 0x58,*(undefined8 *)(param_1 + 0x38),uVar2);
  FUN_00fad338(param_1 + 0x58,&DAT_00003010 + *(long *)(*(long *)(param_1 + 0x30) + 0x30),param_2);
  return;
}


