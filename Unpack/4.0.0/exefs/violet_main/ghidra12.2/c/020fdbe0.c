/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fdbe0; name: FUN_020fdbe0
 */


undefined4 FUN_020fdbe0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((*(char *)(lVar2 + 0x706) == '\0') && ((*(byte *)(param_1 + 0x9e) >> 4 & 1) == 0)) {
    if (*(uint *)(lVar2 + 0x30) < 2) {
      uVar1 = *(undefined4 *)(lVar2 + 0x4b0);
      *(undefined4 *)(param_1 + 0x84) = uVar1;
    }
    else {
      uVar1 = 0;
    }
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 0x10;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


