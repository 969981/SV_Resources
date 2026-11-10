/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015c9b0; name: FUN_0015c9b0
 */


int FUN_0015c9b0(byte *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2[2] != 0) {
    param_1[0] = 0x3f;
    param_1[1] = 0xff;
    iVar3 = FUN_00164b00(param_1 + 2,*(long *)(param_2 + 4) + -1,0xf,7);
LAB_0015c9e8:
    return iVar3 - (int)param_1;
  }
  iVar3 = *param_2;
  if (iVar3 == 0) {
    param_1[0] = 0x7f;
    param_1[1] = 0xff;
    param_1[2] = (byte)param_2[1];
    return 3;
  }
  if (iVar3 < param_4) {
    iVar1 = param_2[6];
    iVar2 = param_2[7];
    param_1[1] = (byte)(iVar3 + 0xffff);
    *param_1 = (byte)((uint)(iVar3 + 0xffff) >> 8) | (byte)(((uint)(iVar1 != 0) << 0xe) >> 8) |
               (byte)(((uint)(iVar2 != 0) << 0xf) >> 8);
    if (param_3 == 0) {
      return 2;
    }
  }
  else {
    iVar3 = (int)param_1 + 2;
    param_1[0] = 0xbf;
    param_1[1] = 0xff;
    if (param_3 == 0) goto LAB_0015c9e8;
  }
  iVar3 = param_2[1];
  param_1[2] = (byte)((uint)iVar3 >> 0x10);
  param_1[3] = (byte)((uint)iVar3 >> 8);
  param_1[4] = (byte)iVar3;
  return 5;
}


