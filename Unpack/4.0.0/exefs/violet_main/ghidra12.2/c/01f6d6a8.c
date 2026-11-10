/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6d6a8; name: FUN_01f6d6a8
 */


uint FUN_01f6d6a8(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int local_28 [5];
  byte local_14 [4];
  
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xc0);
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar2 = 0xfd;
  }
  else {
    uVar2 = 0xfd;
    if (*(long *)PTR_DAT_047d0860 != 0) {
      local_14[0] = 0xfd;
      FUN_00f42ddc(local_28,*(long *)PTR_DAT_047d0860,local_14,uVar1);
      uVar2 = (uint)local_14[0];
      if (DAT_045dfcb0 <= local_14[0] || local_28[0] != 0) {
        uVar2 = 0xfffffffd;
      }
    }
  }
  return uVar2;
}


