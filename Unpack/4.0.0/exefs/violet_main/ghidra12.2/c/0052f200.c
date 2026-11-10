/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052f200; name: FUN_0052f200
 */


byte * FUN_0052f200(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    *param_2 = (ulong)bVar1;
    return param_1 + 1;
  }
  uVar2 = (ulong)(((uint)bVar1 + (uint)param_1[1] * 0x80) - 0x80);
  if (-1 < (char)param_1[1]) {
    *param_2 = uVar2;
    return param_1 + 2;
  }
  uVar2 = (uVar2 + (ulong)param_1[2] * 0x4000) - 0x4000;
  if (-1 < (char)param_1[2]) {
    *param_2 = uVar2;
    return param_1 + 3;
  }
  uVar2 = (uVar2 + (ulong)param_1[3] * 0x200000) - 0x200000;
  if (-1 < (char)param_1[3]) {
    *param_2 = uVar2;
    return param_1 + 4;
  }
  uVar2 = (uVar2 + (ulong)param_1[4] * 0x10000000) - 0x10000000;
  if (-1 < (char)param_1[4]) {
    *param_2 = uVar2;
    return param_1 + 5;
  }
  uVar2 = (uVar2 + ((ulong)param_1[5] << 0x23)) - 0x800000000;
  if (-1 < (char)param_1[5]) {
    *param_2 = uVar2;
    return param_1 + 6;
  }
  uVar2 = (uVar2 + ((ulong)param_1[6] << 0x2a)) - 0x40000000000;
  if (-1 < (char)param_1[6]) {
    *param_2 = uVar2;
    return param_1 + 7;
  }
  uVar2 = uVar2 + ((ulong)param_1[7] << 0x31) + 0xfffe000000000000;
  if (-1 < (char)param_1[7]) {
    *param_2 = uVar2;
    return param_1 + 8;
  }
  uVar2 = uVar2 + ((ulong)param_1[8] << 0x38) + 0xff00000000000000;
  if (-1 < (char)param_1[8]) {
    *param_2 = uVar2;
    return param_1 + 9;
  }
  if ((char)param_1[9] < 0) {
    *param_2 = 0;
    return (byte *)0x0;
  }
  *param_2 = uVar2 + ((ulong)(uint)~(int)(char)param_1[9] << 0x3f);
  return param_1 + 10;
}


