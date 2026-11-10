/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0168aa80; name: FUN_0168aa80
 */


void FUN_0168aa80(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  puVar9 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  plVar2 = (long *)puVar9[1];
  uVar3 = puVar9[2];
  uVar5 = *(undefined2 *)(puVar9 + 3);
  uVar6 = *(undefined2 *)((long)puVar9 + 0x1a);
  local_58 = 0;
  lVar7 = FUN_00c4e600();
  local_50 = *(undefined4 *)(lVar7 + 0x12c8);
  lVar7 = FUN_00c4e600();
  local_48 = *(undefined8 *)(lVar7 + 0x12c0);
  lVar7 = FUN_00c4e600();
  iVar4 = *(int *)(lVar7 + 0x12c8);
  iVar1 = iVar4 + 1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (*(int *)(lVar7 + 0x12cc) <= iVar4) {
    *(int *)(lVar7 + 0x12cc) = iVar1;
  }
  (**(code **)*puVar9)(puVar9);
  uVar8 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar3,uVar5,uVar6);
  }
  else {
    FUN_00c48fe8(plVar2,uVar3,uVar5,uVar6);
  }
  FUN_00c4e70c(&local_58);
  return;
}


