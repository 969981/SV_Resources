/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bd2e8; name: FUN_028bd2e8
 */


void FUN_028bd2e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x8000);
  if (lVar2 != 0) {
    param_1 = param_1 + 8;
    do {
      lVar1 = *(long *)(param_1 + -8);
      lVar2 = lVar2 + -1;
      *(undefined8 *)(param_1 + -8) = 0;
      if (lVar1 != 0) {
        FUN_028bd45c(param_1);
      }
      param_1 = param_1 + 0x20;
    } while (lVar2 != 0);
  }
  return;
}


