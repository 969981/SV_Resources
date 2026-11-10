/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124fe20; name: FUN_0124fe20
 */


void FUN_0124fe20(long param_1,undefined4 *param_2)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_2);
  cVar1 = (**(code **)(*plVar2 + 0x540))(plVar2,3);
  if (cVar1 != '\0') {
    FUN_01243a30(*(undefined8 *)(param_1 + 0x20),plVar2,3,0);
  }
  FUN_0292fd90(*(undefined8 *)(param_1 + 0x38),param_2);
  return;
}


