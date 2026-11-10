/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ebba8; name: FUN_020ebba8
 */


undefined8 FUN_020ebba8(long param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x526);
  if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
    return 0;
  }
  uVar2 = (ulong)param_4;
  uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x528);
  if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
    return 1;
  }
  uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52a);
  if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
    return 2;
  }
  uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52c);
  if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
    return 3;
  }
  uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
  if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
    return 4;
  }
  uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x530);
  if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
    return 5;
  }
  return 6;
}


