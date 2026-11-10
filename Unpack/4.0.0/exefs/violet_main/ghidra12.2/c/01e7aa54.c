/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7aa54; name: FUN_01e7aa54
 */


void FUN_01e7aa54(long param_1,long *param_2)

{
  long lVar1;
  
  if (((*(char *)(param_1 + 0x140) != '\0') && (*param_2 != 0)) &&
     (lVar1 = *(long *)(*param_2 + 0x10), lVar1 != 0)) {
    (**(code **)(*(long *)(lVar1 + -0x28) + 0x78))();
  }
  FUN_0154631c(param_1 + 0x130,param_2);
  return;
}


