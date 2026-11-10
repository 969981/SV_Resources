/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e61a4; name: FUN_014e61a4
 */


undefined8 FUN_014e61a4(long param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (((param_2 < 0x21) && (param_3 < 0x1e)) && (param_4 < 6)) {
    uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x526);
    if ((param_2 != uVar1 >> 8) || (param_3 != (uVar1 & 0xff))) {
      uVar3 = (ulong)param_4;
      uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x528);
      if (((((param_2 != uVar1 >> 8) || (param_3 != (uVar1 & 0xff))) &&
           ((uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52a), param_2 != uVar1 >> 8 ||
            (param_3 != (uVar1 & 0xff))))) &&
          ((uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52c), param_2 != uVar1 >> 8 ||
           (param_3 != (uVar1 & 0xff))))) &&
         (((uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52e), param_2 != uVar1 >> 8 ||
           (param_3 != (uVar1 & 0xff))) &&
          ((uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x530), param_2 != uVar1 >> 8 ||
           (param_3 != (uVar1 & 0xff))))))) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


