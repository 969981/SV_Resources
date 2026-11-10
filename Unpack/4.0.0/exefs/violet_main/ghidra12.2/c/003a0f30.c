/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a0f30; name: FUN_003a0f30
 */


void FUN_003a0f30(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118));
  if (lVar1 != 0) {
    do {
      FUN_003c9930(*(undefined8 *)(lVar1 + 8));
      FUN_003a2cd0(lVar1);
      lVar1 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118));
    } while (lVar1 != 0);
  }
  return;
}


