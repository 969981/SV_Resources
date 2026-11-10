/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7e3e0; name: FUN_00f7e3e0
 */


undefined1 FUN_00f7e3e0(long param_1,byte param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  if (iVar1 == 2) {
    if (4 < param_2) {
      return 2;
    }
    puVar2 = &DAT_03d6a45a;
  }
  else if (iVar1 == 1) {
    if (4 < param_2) {
      return 2;
    }
    puVar2 = &DAT_03d6a455;
  }
  else {
    if (iVar1 != 0) {
      return 2;
    }
    if (4 < param_2) {
      return 2;
    }
    puVar2 = &DAT_03d6a450;
  }
  return puVar2[param_2];
}


