/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295d430; name: FUN_0295d430
 */


bool FUN_0295d430(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,0x36b);
  if ((uVar2 & 1) != 0) {
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,0x36b,0);
    if ((uVar2 & 1) == 0) {
      return false;
    }
    uVar2 = (**(code **)(*plVar1 + 0x5b0))(plVar1);
    if ((uVar2 & 1) == 0) {
      return *(int *)(*(long *)(param_1 + 0x48) + 0x48) == 0;
    }
  }
  return false;
}


