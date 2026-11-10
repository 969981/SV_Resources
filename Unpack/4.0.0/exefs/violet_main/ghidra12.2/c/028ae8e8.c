/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ae8e8; name: FUN_028ae8e8
 */


void FUN_028ae8e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  FUN_028ae998();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar6 = *(long **)(param_1 + 0x50);
    uVar5 = *puVar1;
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar6,uVar5,0x1000,8);
    }
  }
  FUN_028aeb60(param_1);
  return;
}


