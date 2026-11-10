/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fda34; name: FUN_020fda34
 */


undefined8 FUN_020fda34(long param_1,int *param_2)

{
  ulong uVar1;
  int local_14;
  
  if (*param_2 == 1) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x218) + 0x448))
                      (*(long **)(param_1 + 0x218),&local_14);
    if ((uVar1 & 1) != 0) {
      *(bool *)(param_1 + 0x121) = local_14 != 0;
      FUN_0132746c(param_1,param_1 + 0x121,1);
      return 1;
    }
  }
  else if (*param_2 == 0) {
    (**(code **)(**(long **)(param_1 + 0x218) + 0x440))(*(long **)(param_1 + 0x218),0,1);
    *param_2 = *param_2 + 1;
    return 0;
  }
  return 0;
}


