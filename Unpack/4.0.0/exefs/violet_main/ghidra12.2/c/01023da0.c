/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01023da0; name: FUN_01023da0
 */


void FUN_01023da0(long *param_1,long param_2)

{
  long lVar1;
  long *local_8;
  
  lVar1 = 0;
  if (param_1[0x1d] != 0) {
    lVar1 = *(long *)(param_1[0x1d] + 0x48);
  }
  if (lVar1 != param_2) {
    FUN_01023e20(param_1 + 0x24,param_2);
    return;
  }
  (**(code **)(*param_1 + 0x150))(&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x38))(local_8,param_2);
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 0x18))();
    }
  }
  return;
}


