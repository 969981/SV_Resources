/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d21ec; name: FUN_001d21ec
 */


void FUN_001d21ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x658) != 0) {
    FUN_001ec308();
    *(undefined8 *)(lVar1 + 0x658) = 0;
  }
  return;
}


