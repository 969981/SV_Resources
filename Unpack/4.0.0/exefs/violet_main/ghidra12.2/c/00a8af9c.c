/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a8af9c; name: FUN_00a8af9c
 */


void FUN_00a8af9c(long param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  *(int *)(param_1 + 0x114) = param_2;
  if (((param_2 == -1) && (*(long *)(param_1 + 0xe8) != 0)) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48), plVar2 != (long *)0x0)) {
    uVar1 = (**(code **)(*plVar2 + 0xd0))();
    *(undefined4 *)(param_1 + 0x114) = uVar1;
  }
  return;
}


