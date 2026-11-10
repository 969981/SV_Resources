/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6d940; name: FUN_01f6d940
 */


void FUN_01f6d940(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [24];
  
  puVar7 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  plVar1 = (long *)puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = *(undefined2 *)(puVar7 + 3);
  uVar4 = *(undefined2 *)((long)puVar7 + 0x1a);
  FUN_00c4e5a0(auStack_58,0);
  (**(code **)*puVar7)(puVar7);
  uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,uVar3,uVar4);
  }
  else {
    FUN_00c48fe8(plVar1,uVar2,uVar3,uVar4);
  }
  FUN_00c4e70c(auStack_58);
  return;
}


