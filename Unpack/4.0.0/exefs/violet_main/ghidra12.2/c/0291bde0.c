/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291bde0; name: FUN_0291bde0
 */


undefined8 FUN_0291bde0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar1 = (**(code **)(*(long *)*param_2 + 0x98))();
  uVar2 = (**(code **)(*(long *)param_2[1] + 0x98))();
  plVar3 = (long *)FUN_01021c74(param_1);
  uVar4 = (**(code **)(*plVar3 + 0x478))(plVar3,uVar1);
  if ((uVar4 & 1) != 0) {
    plVar3 = (long *)FUN_01021c74(param_1);
    uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x21);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  plVar3 = (long *)FUN_01021c74(param_1);
  uVar1 = (**(code **)(*plVar3 + 0x250))(plVar3,uVar1,0);
  plVar3 = (long *)FUN_01021c74(param_1);
  uVar1 = (**(code **)(*plVar3 + 0x188))(plVar3,uVar1);
  plVar3 = (long *)FUN_01021c74(param_1);
  uVar4 = (**(code **)(*plVar3 + 0x490))(plVar3,uVar2,uVar1);
  if ((uVar4 & 1) != 0) {
    plVar3 = (long *)FUN_01021c74(param_1);
    uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x32);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


