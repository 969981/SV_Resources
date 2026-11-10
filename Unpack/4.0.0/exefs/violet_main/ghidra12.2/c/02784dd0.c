/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02784dd0; name: FUN_02784dd0
 */


void FUN_02784dd0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  FUN_00c4e5a0(auStack_48,0);
  FUN_02785ec8(param_2);
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar5 = param_1[2];
  uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar1,param_2,uVar2,uVar5);
      goto LAB_02784e38;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,uVar2,uVar5);
LAB_02784e38:
  FUN_00c4e70c(auStack_48);
  return;
}


