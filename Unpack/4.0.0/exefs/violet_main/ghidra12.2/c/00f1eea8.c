/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1eea8; name: FUN_00f1eea8
 */


undefined4 FUN_00f1eea8(long param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  uVar2 = (uint)*(byte *)(*(long *)(param_1 + 8) + 0x370);
  if (iVar1 == 2) {
    if (10 < param_2) {
      return 5;
    }
    if (uVar2 == 0) {
      if ((byte)(param_2 - 1) < 3) {
        return 5;
      }
    }
    else if (uVar2 == 1) {
      if ((param_2 & 0xfe) == 2) {
        return 5;
      }
    }
    else if ((uVar2 == 2) && (param_2 == 3)) {
      return 5;
    }
    puVar3 = (undefined4 *)&DAT_03d6a424;
  }
  else if (iVar1 == 0) {
    if (10 < param_2) {
      return 5;
    }
    puVar3 = (undefined4 *)&DAT_03d6a348;
  }
  else {
    if (iVar1 != 1) {
      return 5;
    }
    if (10 < param_2) {
      return 5;
    }
    if (uVar2 == 5) {
      puVar3 = (undefined4 *)&DAT_03d6a3f8;
    }
    else if (uVar2 - 1 < 3) {
      puVar3 = &DAT_03d6a3a0;
    }
    else if (uVar2 == 4) {
      puVar3 = (undefined4 *)&DAT_03d6a3cc;
    }
    else {
      puVar3 = &DAT_03d6a374;
    }
  }
  return puVar3[param_2];
}


