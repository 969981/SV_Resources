/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b2e570; name: FUN_02b2e570
 */


undefined8 FUN_02b2e570(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x3f4);
  if (2 < iVar1 - 1U) {
    if ((iVar1 == 5) || (iVar1 == 4)) {
      uVar2 = *(uint *)(param_1 + 0x3f8);
    }
    else {
      uVar2 = 1;
      if (*(char *)(param_1 + 0x2b8) == '\0') {
        uVar2 = 2;
      }
    }
    if (*(uint *)(param_1 + 0x414) < uVar2) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x128) = 0x11;
  return 1;
}


