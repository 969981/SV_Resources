/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a8698; name: FUN_019a8698
 */


void FUN_019a8698(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_14;
  
  local_14 = param_2;
  lVar1 = FUN_019b7e00(param_1 + 0x1a0,&local_14);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  return;
}


