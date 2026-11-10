/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00481590; name: FUN_00481590
 */


undefined8 FUN_00481590(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_004807b0();
  uVar2 = 0;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x244) == *(int *)(lVar1 + 0x240)) {
      return 0;
    }
    lVar3 = (long)*(int *)(lVar1 + 0x240) * 4;
    *(uint *)(lVar1 + lVar3) = *(uint *)(lVar1 + lVar3) | 1;
    uVar2 = 1;
  }
  return uVar2;
}


