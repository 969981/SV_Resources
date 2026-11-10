/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352df60; name: FUN_0352df60
 */


undefined8 * FUN_0352df60(void)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = DAT_048d2090;
  if (DAT_048d2090 == 0) {
    if (DAT_048d2094 == 0) {
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,DAT_048d2088,4);
      uVar2 = DAT_048d2090;
      if (lVar3 == 0) goto LAB_0352dfe4;
      DAT_048d2094 = 1;
      DAT_048d2088 = lVar3;
    }
    else {
      DAT_048d2090 = 0;
    }
    uVar2 = DAT_048d2090 + 1;
    if (DAT_048d2088 != 0) {
      uVar1 = (ulong)DAT_048d2090;
      DAT_048d2090 = DAT_048d2090 + 1;
      *(undefined4 *)(DAT_048d2088 + uVar1 * 4) = 0xffffffff;
      uVar2 = DAT_048d2090;
    }
  }
LAB_0352dfe4:
  DAT_048d2090 = uVar2;
  DAT_048d20a8 = 0;
  DAT_048d20b0 = 0;
  DAT_048d20b8 = DAT_048d20b8 & 0xc0 | 0x27;
  uVar2 = DAT_048d20a0;
  if (DAT_048d20a0 == 0) {
    if (DAT_048d20a4 == 0) {
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,DAT_048d2098,4);
      uVar2 = DAT_048d20a0;
      if (lVar3 == 0) goto LAB_0352e080;
      DAT_048d20a4 = 1;
      DAT_048d2098 = lVar3;
    }
    else {
      DAT_048d20a0 = 0;
    }
    uVar2 = DAT_048d20a0 + 1;
    if (DAT_048d2098 != 0) {
      uVar1 = (ulong)DAT_048d20a0;
      DAT_048d20a0 = DAT_048d20a0 + 1;
      *(undefined4 *)(DAT_048d2098 + uVar1 * 4) = 0xffffffff;
      uVar2 = DAT_048d20a0;
    }
  }
LAB_0352e080:
  DAT_048d20a0 = uVar2;
  DAT_048d20bc = 0;
  DAT_048d20c4 = 0;
  DAT_048d20cc = 0;
  DAT_048d20d8 = 0;
  DAT_048d20e0 = 0;
  DAT_048d20d0 = DAT_048d20d0 & 7;
  return &DAT_048d2088;
}


