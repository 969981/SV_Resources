/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027ea3dc; name: FUN_027ea3dc
 */


void FUN_027ea3dc(long param_1,long *param_2)

{
  long lVar1;
  
  if (((*(char *)(param_1 + 0x638) != '\0') && (*param_2 != 0)) &&
     (lVar1 = *(long *)(*param_2 + 0x10), lVar1 != 0)) {
    (**(code **)(*(long *)(lVar1 + -0x28) + 0x78))();
  }
  FUN_0154631c(param_1 + 0x628,param_2);
  return;
}


