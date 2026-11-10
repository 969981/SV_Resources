/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a8438; name: FUN_017a8438
 */


undefined8 FUN_017a8438(long param_1)

{
  ushort uVar1;
  int extraout_var;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_8;
  
  local_8 = 0x8de83c68a2080fd6;
  uVar1 = FUN_00f724ec(param_1,&local_8);
  if (uVar1 < 0x100) {
    return 0;
  }
  local_8 = 0x1f845d2da2c823e4;
  FUN_0133edbc(param_1,&local_8);
  local_8 = 0x3e23fc930cabc85a;
  FUN_017a8564(param_1,&local_8);
  if (extraout_var == 0) {
    return 1;
  }
  uVar2 = 0;
  switch(extraout_var) {
  case 1:
    uVar2 = 2;
    break;
  case 2:
    lVar3 = FUN_017a8550(param_1);
    if (lVar3 != 0) {
      uVar2 = 0;
LAB_017a8510:
      FUN_017a8558(lVar3,uVar2);
    }
    goto LAB_017a8514;
  case 3:
    uVar2 = 3;
    break;
  case 9:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) != 0) {
      return 9;
    }
    lVar3 = FUN_017a8550(param_1);
    if (lVar3 != 0) {
      uVar2 = 1;
      goto LAB_017a8510;
    }
LAB_017a8514:
    uVar2 = 5;
  }
  return uVar2;
}


