/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0e878; name: FUN_00e0e878
 */


long FUN_00e0e878(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long local_38;
  long local_30;
  ulong local_28;
  
  FUN_0221cbb0(&local_38);
  lVar3 = local_38;
  if ((local_38 != 0) &&
     (((local_30 == 0 || (uVar2 = FUN_0221d7c0(local_30,PTR_DAT_047e3300), (uVar2 & 1) == 0)) ||
      (uVar1 = FUN_0221d8c0(local_30), (uVar1 >> 3 & 1) != 0)))) {
    FUN_0221d90c(&local_38,3,1);
    lVar3 = 0;
  }
  if ((local_28 & 1) != 0) {
    FUN_0221da20(local_28 & 0xfffffffffffffffe);
  }
  return lVar3;
}


