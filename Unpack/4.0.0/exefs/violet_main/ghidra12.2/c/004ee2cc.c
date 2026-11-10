/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ee2cc; name: FUN_004ee2cc
 */


undefined8 FUN_004ee2cc(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)FUN_00521710(param_1,*(undefined4 *)(param_2 + 0x44));
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((*(byte *)((long)puVar1 + 10) >> 4 & 1) == 0) {
      uVar2 = *puVar1;
    }
    else {
      plVar3 = (long *)*puVar1;
      uVar2 = FUN_004a5124(param_2);
      uVar2 = (**(code **)(*param_3 + 0x10))(param_3,uVar2);
      uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar2);
      if ((*param_1 == 0) && (puVar1 = (undefined8 *)*puVar1, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1);
        FUN_0049e790(PTR_LAB_047cba48,puVar1);
      }
    }
    FUN_00523558(param_1,*(undefined4 *)(param_2 + 0x44));
  }
  return uVar2;
}


