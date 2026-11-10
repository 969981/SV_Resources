/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027547f8; name: FUN_027547f8
 */


void FUN_027547f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_045daf70;
  param_1[4] = &PTR_LAB_045dafa0;
  if (*(char *)(param_1 + 5) == '\0') {
    return;
  }
  nv::FinalizeGraphics();
  if (DAT_0485ca00 != 0) {
    *(undefined1 *)(DAT_0485ca00 + 0x19) = 1;
    lVar3 = DAT_0485ca08;
    FUN_021d88fc(*(undefined8 *)(DAT_0485ca08 + 8));
    (**(code **)**(undefined8 **)(lVar3 + 8))();
    *(undefined8 *)(lVar3 + 8) = 0;
    plVar6 = *(long **)(lVar3 + 0x10);
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar1,uVar2,8);
    }
    else {
      FUN_00c48fe8(plVar6,uVar1,uVar2,8);
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  lVar3 = DAT_0485c9e0;
  DAT_0485c9e0 = 0;
  if (lVar3 == 0) {
    DAT_0485c9e0 = 0;
    return;
  }
  FUN_027546cc(&DAT_0485c9e8);
  return;
}


