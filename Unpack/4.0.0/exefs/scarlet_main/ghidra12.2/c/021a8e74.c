/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a8e74; name: FUN_021a8e74
 */


undefined8 FUN_021a8e74(long *param_1,int *param_2)

{
  uint *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_38;
  long *local_30;
  long *local_28;
  
  (**(code **)(*param_1 + 0x40))(&local_28);
  plVar2 = local_28;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_38 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_38 = 0;
    if (uVar4 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar4);
      local_38 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00ea0a7c(&local_30,&local_38);
  uVar3 = FUN_021a8f30(plVar2,&local_30);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  return uVar3;
}


