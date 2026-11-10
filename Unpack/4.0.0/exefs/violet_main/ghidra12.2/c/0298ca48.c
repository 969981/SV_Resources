/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298ca48; name: FUN_0298ca48
 */


void FUN_0298ca48(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3);
  (**(code **)(*plVar1 + 0x360))(plVar1,param_4);
  (**(code **)(*plVar2 + 0x360))(plVar2,param_5);
  uVar3 = FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),param_2,param_3);
  if ((uVar3 & 1) == 0) {
    FUN_018ce178(param_1,plVar1);
    FUN_018ce178(param_1,plVar2);
    return;
  }
  return;
}


