/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02169e7c; name: FUN_02169e7c
 */


void FUN_02169e7c(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0216ab88(param_1 + 0xe0);
  if (lVar1 == 0) {
    return;
  }
  FUN_015e3a74(*param_2);
  FUN_0216aca4(param_1 + 0xe0,lVar1);
  return;
}


