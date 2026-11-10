/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddc5e8; name: FUN_01ddc5e8
 */


long FUN_01ddc5e8(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  
  if (5 < param_2) {
    return 6;
  }
  if (5 < param_3) {
    return 6;
  }
  if (0x20 < param_4) {
    return 6;
  }
  if (0x1d < param_5) {
    return 6;
  }
  uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 0xc + 0x526);
  uVar3 = (ulong)param_2;
  if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x528);
    if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
      lVar2 = 1;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52a);
      if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
        lVar2 = 2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52c);
        if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
          lVar2 = 3;
        }
        else {
          uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52e);
          if ((param_4 == uVar1 >> 8) && ((uVar1 & 0xff) == param_5)) {
            lVar2 = 4;
          }
          else {
            uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x530);
            lVar2 = 6;
            if ((param_4 != uVar1 >> 8) || ((uVar1 & 0xff) != param_5)) goto LAB_01ddc648;
            lVar2 = 5;
          }
        }
      }
    }
  }
  *(undefined2 *)(param_1 + uVar3 * 0xc + lVar2 * 2 + 0x526) = 0xffff;
LAB_01ddc648:
  *(short *)(param_1 + uVar3 * 0xc + (ulong)param_3 * 2 + 0x526) =
       (short)param_5 + (short)param_4 * 0x100;
  return lVar2;
}


