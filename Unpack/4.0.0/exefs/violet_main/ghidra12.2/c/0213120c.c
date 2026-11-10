/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213120c; name: FUN_0213120c
 */


void FUN_0213120c(long *param_1,long param_2)

{
  long lVar1;
  long local_40;
  long lStack_38;
  
  lVar1 = param_1[1];
  local_40 = param_2;
  (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_40);
  lStack_38 = FUN_02131274(param_2);
  if ((lStack_38 != 0) && (lStack_38 != lVar1)) {
    local_40 = *param_1;
    FUN_021310f8(lStack_38,&local_40);
  }
  return;
}


