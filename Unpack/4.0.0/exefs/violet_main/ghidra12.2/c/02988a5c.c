/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02988a5c; name: FUN_02988a5c
 */


void FUN_02988a5c(long param_1,undefined1 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = FUN_014df9d4(*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    return;
  }
  FUN_0298da88();
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x4c,param_2,param_3);
  return;
}


