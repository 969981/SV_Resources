/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e4694; name: FUN_001e4694
 */


void FUN_001e4694(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    FUN_001ec308(*(undefined8 *)(param_1 + 0xc80 + lVar2));
    *(undefined8 *)(param_1 + 0xc80 + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x1f0);
  bVar1 = *(byte *)(param_1 + 0xf68);
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_001ec308(*(undefined8 *)(param_1 + 0xf50));
    bVar1 = *(byte *)(param_1 + 0xf68) & 0xfd;
    *(undefined8 *)(param_1 + 0xf50) = 0;
    *(byte *)(param_1 + 0xf68) = bVar1;
  }
  *(undefined8 *)(param_1 + 0xf50) = 0;
  if ((bVar1 & 1) != 0) {
    FUN_001ec308(*(undefined8 *)(param_1 + 0xf48));
    *(undefined8 *)(param_1 + 0xf48) = 0;
    *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfe;
  }
  *(undefined8 *)(param_1 + 0xf48) = 0;
  FUN_001cb790(param_1 + 0x820);
  return;
}


