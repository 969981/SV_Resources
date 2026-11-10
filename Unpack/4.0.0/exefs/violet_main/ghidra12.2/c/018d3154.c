/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d3154; name: FUN_018d3154
 */


void FUN_018d3154(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar2 = FUN_018d31e0(param_1,uVar1);
  if ((uVar2 & 0xff) != 10 && *(char *)((long)param_3 + 10) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_02986d20(uVar3,uVar2,0x33);
  }
  uVar3 = FUN_01243584(param_1);
  FUN_0124fcd8(uVar3,*param_3,*(undefined2 *)(param_3 + 1),0,0,*(undefined1 *)((long)param_3 + 10));
  return;
}


