/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01461bb0; name: FUN_01461bb0
 */


void FUN_01461bb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [32];
  long *local_18;
  
  uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar3 = FUN_0124e480(param_1);
  uVar4 = FUN_01582534(param_1);
  FUN_01247754(auStack_50,uVar3,uVar4);
  while (uVar5 = FUN_01460dbc(auStack_50,&local_18), (uVar5 & 1) != 0) {
    uVar2 = (**(code **)(*local_18 + 0x98))();
    uVar5 = FUN_016c04a4(param_1,uVar1,uVar2);
    if ((uVar5 & 1) == 0) {
      FUN_02984b18(param_1,local_18);
    }
  }
  return;
}


