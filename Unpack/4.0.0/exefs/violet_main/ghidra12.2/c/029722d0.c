/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029722d0; name: FUN_029722d0
 */


undefined4 FUN_029722d0(short param_1,short param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  
  if (param_1 == 0x206) {
    if (param_2 != 0x207) {
      uVar2 = (ulong)(param_2 != 0x206);
      uVar3 = 1;
LAB_02972334:
      if (param_2 == 0x208) {
        if (param_1 == 0x207) {
          uVar2 = 1;
          goto LAB_029722ec;
        }
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      uVar1 = (uint)uVar2;
      uVar2 = 2;
      if (((uVar3 | uVar1) == 1) && ((bool)(bVar4 | param_1 != 0x206))) {
        return 0;
      }
      goto LAB_029722ec;
    }
  }
  else {
    if (param_2 != 0x206) {
      if (param_1 == 0x208) {
        uVar2 = 1;
        if (param_2 == 0x207) goto LAB_029722ec;
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        uVar2 = 1;
      }
      goto LAB_02972334;
    }
    if (param_1 != 0x207) {
      if (param_1 != 0x208) {
        return 0;
      }
      uVar2 = 2;
      goto LAB_029722ec;
    }
  }
  uVar2 = 0;
LAB_029722ec:
  return (&DAT_03d6a014)[uVar2 * 2];
}


