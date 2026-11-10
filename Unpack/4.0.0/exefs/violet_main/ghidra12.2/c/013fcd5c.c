/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fcd5c; name: FUN_013fcd5c
 */


void FUN_013fcd5c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_013fcdf0(param_2 + 8,*(undefined8 *)(param_1 + 8),param_2);
  lVar2 = *(long *)(param_1 + 8);
  if (((lVar2 != lVar1) && (FUN_019b5bd8(lVar2 + -8), lVar2 + -8 != lVar1)) &&
     (FUN_019b5bd8(lVar2 + -0x10), lVar2 + -0x10 != lVar1)) {
    do {
      FUN_019b5bd8(lVar2 + -0x18);
      lVar2 = lVar2 + -8;
    } while (lVar1 + 0x10 != lVar2);
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}


