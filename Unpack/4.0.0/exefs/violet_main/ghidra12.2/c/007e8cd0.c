/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e8cd0; name: FUN_007e8cd0
 */


void FUN_007e8cd0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_00797f68();
    lVar1 = *(long *)(param_1 + 0xe0);
    if (lVar1 != 0) {
      FUN_00797ee0(lVar1);
      FUN_007bfaa0(lVar1);
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_007e89e8(param_1);
  return;
}


