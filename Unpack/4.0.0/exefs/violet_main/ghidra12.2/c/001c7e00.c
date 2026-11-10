/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c7e00; name: FUN_001c7e00
 */


void FUN_001c7e00(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    do {
      FUN_001ec308(*(undefined8 *)(param_1 + 0x20));
      FUN_001ec308(*(undefined8 *)(param_1 + 0x18));
      lVar1 = *(long *)(param_1 + 0x28);
      FUN_001ec308(param_1);
      param_1 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}


