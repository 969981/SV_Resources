/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020beefc; name: FUN_020beefc
 */


undefined8 FUN_020beefc(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x48;
  if (param_2 != 0) {
    lVar1 = 0x50;
  }
  return *(undefined8 *)(param_1 + lVar1);
}


