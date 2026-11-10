/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1f538; name: FUN_00d1f538
 */


void FUN_00d1f538(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((lVar1 != 0) || (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
LAB_00d1f57c:
    FUN_00d1f59c(lVar1);
    return;
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) != 0) {
      FUN_00d1f59c();
    }
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_00d1f59c();
    }
    lVar1 = *(long *)(lVar1 + 0x88);
    if (lVar1 != 0) goto LAB_00d1f57c;
  }
  return;
}


