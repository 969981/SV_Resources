/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eda580; name: FUN_01eda580
 */


void FUN_01eda580(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x318;
    if (*(char *)(lVar1 + -0x2d8) != '\0') {
      *(char *)(lVar1 + -0x2d8) = '\0';
    }
    FUN_01ed9328(lVar1 + -0x310);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


