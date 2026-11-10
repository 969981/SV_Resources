/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0182a09c; name: FUN_0182a09c
 */


void FUN_0182a09c(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_4c [4];
  char local_48 [4];
  undefined1 local_44 [4];
  
  *param_2 = 0;
  local_44[0] = *(undefined1 *)(param_3 + 2);
  plVar1 = (long *)*param_3;
  uVar4 = param_3[1];
  FUN_0182a19c(*(undefined8 *)(param_1 + 0x38),plVar1,local_44,local_48,local_4c);
  if (local_48[0] != '\0') {
    FUN_01582534(param_1);
    uVar3 = FUN_014813ec();
    uVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
    uVar2 = FUN_010e161c(uVar3,uVar2);
    if (local_4c[0] == '\0') {
      uVar4 = FUN_01243584(param_1);
      uVar2 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_0167a95c(uVar4,uVar2);
    }
    else {
      FUN_0182a5f0(param_1,uVar2,local_44[0],uVar4);
      FUN_0182a670(*(undefined8 *)(param_1 + 0x38),plVar1);
      *(undefined1 *)((long)param_2 + 1) = 1;
    }
    *(undefined1 *)param_2 = 1;
  }
  return;
}


