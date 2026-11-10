/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00364974; name: FUN_00364974
 */


void FUN_00364974(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == lVar2) {
      lVar1 = lVar2;
    }
    else {
      do {
        lVar1 = lVar1 + -0x50;
        FUN_00364974(lVar1);
      } while (lVar2 != lVar1);
      lVar1 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x40) = lVar2;
    FUN_0049e790(PTR_LAB_047cba48,lVar1);
  }
  FUN_0025cef0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x18));
  return;
}


