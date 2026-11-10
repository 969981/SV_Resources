/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01907cc4; name: FUN_01907cc4
 */


void FUN_01907cc4(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = *param_2;
  uVar2 = FUN_00f7e284(*(undefined8 *)(param_1 + 0x10));
  plVar3 = (long *)FUN_018d5cec(uVar2,uVar1);
  if ((plVar3 == (long *)0x0) ||
     (((short)plVar3[0xe3] == *(short *)(param_2 + 1) && (*(char *)((long)param_2 + 10) == '\0'))))
  {
    return;
  }
  if (*(char *)(param_2 + 2) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
    FUN_018ce0ec(uVar2,uVar1,0);
  }
  if (*(char *)((long)param_2 + 10) == '\0') {
    FUN_0197fe48(*(undefined8 *)(param_1 + 0x20),*param_2,*(undefined2 *)(param_2 + 1),
                 *(undefined1 *)((long)param_2 + 6));
  }
  if (*(char *)((long)param_2 + 9) != '\0') {
    FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xac,*param_2);
    FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),*param_2,param_2 + 3);
  }
  if (*(char *)(param_2 + 2) != '\0') {
    FUN_018521d8(*(undefined8 *)(param_1 + 0x20),plVar3);
  }
  FUN_0124f348(*(undefined8 *)(param_1 + 8),plVar3);
  return;
}


