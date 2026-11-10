/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc26b0; name: FUN_00fc26b0
 */


byte * FUN_00fc26b0(undefined8 *param_1,undefined8 *param_2,int *param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  *param_3 = 0;
  pbVar3 = (byte *)*param_1;
  if ((((byte *)*param_2 != pbVar3) && (bVar1 = *pbVar3, -1 < (char)bVar1)) &&
     ((*(ushort *)(param_4[2] + (ulong)bVar1 * 2) >> 0xb & 1) != 0)) {
    do {
      pbVar3 = pbVar3 + 1;
      uVar2 = (**(code **)(*param_4 + 0x48))(param_4,(long)(char)bVar1,0);
      *param_3 = *param_3 * 10 + (uVar2 & 0xff) + -0x30;
      if (pbVar3 == (byte *)*param_2) {
        return pbVar3;
      }
      bVar1 = *pbVar3;
      if ((char)bVar1 < '\0') {
        return pbVar3;
      }
    } while ((*(ushort *)(param_4[2] + (ulong)bVar1 * 2) >> 0xb & 1) != 0);
  }
  return pbVar3;
}


