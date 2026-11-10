/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f2740; name: FUN_026f2740
 */


void FUN_026f2740(undefined4 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_026f2e08(*param_2);
  if (*(ulong *)(param_3 + 8) < (ulong)(*(long *)(param_3 + 0x10) + lVar1)) {
    *param_1 = 0xd;
    return;
  }
  FUN_026f2e3c(param_1,param_2,param_3);
  return;
}


