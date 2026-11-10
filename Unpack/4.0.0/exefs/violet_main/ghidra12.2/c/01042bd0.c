/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01042bd0; name: FUN_01042bd0
 */


void FUN_01042bd0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_01043400(param_2 + 0x20,*(undefined8 *)(param_1 + 8),param_2);
  lVar2 = *(long *)(param_1 + 8);
  if ((((lVar2 != lVar1) && (FUN_0118da34(lVar2 + -0x20), lVar2 + -0x20 != lVar1)) &&
      (FUN_0118da34(lVar2 + -0x40), lVar2 + -0x40 != lVar1)) &&
     ((FUN_0118da34(lVar2 + -0x60), lVar2 + -0x60 != lVar1 &&
      (FUN_0118da34(lVar2 + -0x80), lVar2 + -0x80 != lVar1)))) {
    do {
      FUN_0118da34(lVar2 + -0xa0);
      lVar2 = lVar2 + -0x20;
    } while (lVar1 + 0x80 != lVar2);
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}


