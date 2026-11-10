/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021636a4; name: FUN_021636a4
 */


undefined8 FUN_021636a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_50 [24];
  long *local_38;
  
  if (**(char **)(param_1 + 0xd8) == '\0') {
    *(undefined8 *)(param_1 + 0xd0) = *param_2;
    *(undefined8 *)(param_1 + 0xd8) = param_2[1];
    *(undefined8 *)(param_1 + 0xe0) = param_2[2];
    plVar3 = (long *)param_2[3];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = *(long **)(param_1 + 0xe8);
    *(long **)(param_1 + 0xe8) = plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    FUN_0148e234(auStack_50,param_1,*(long *)(param_1 + 0xa8) == 0,1);
    FUN_0148e4d4(*(undefined8 *)(param_1 + 0x40),param_1 + 0xd0,auStack_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


