/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f781fc; name: FUN_01f781fc
 */


void FUN_01f781fc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2] - param_1[1];
  if (lVar1 != 0) {
    param_1[2] = param_1[2] + (lVar1 - 4U >> 2 ^ 0xffffffffffffffff) * 4;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01f7823c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar1,param_1[3] - lVar1,4);
  return;
}


