/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015cc30; name: FUN_0015cc30
 */


int FUN_0015cc30(byte *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2[2] != 0) {
    param_1[0] = 3;
    param_1[1] = 0xff;
    param_1[2] = 0xff;
    iVar3 = FUN_00164b00(param_1 + 3,*(long *)(param_2 + 4) + -1,0xf,7);
    return iVar3 - (int)param_1;
  }
  iVar3 = *param_2;
  if (iVar3 == 0) {
    param_1[0] = 7;
    param_1[1] = 0xff;
    param_1[2] = 0xff;
    param_1[3] = (byte)param_2[1];
    return 4;
  }
  if (iVar3 < param_4) {
    iVar1 = param_2[6];
    iVar2 = param_2[7];
    iVar3 = iVar3 + -1;
    param_1[2] = (byte)iVar3;
    *param_1 = (byte)((uint)iVar3 >> 0x10) | (byte)(((uint)(iVar1 != 0) << 0x12) >> 0x10) |
               (byte)(((uint)(iVar2 != 0) << 0x13) >> 0x10);
    param_1[1] = (byte)((uint)iVar3 >> 8);
  }
  else {
    param_1[0] = 0xb;
    param_1[1] = 0xff;
    param_1[2] = 0xff;
  }
  if (param_3 == 0) {
    return 3;
  }
  iVar3 = param_2[1];
  param_1[3] = (byte)((uint)iVar3 >> 0x10);
  param_1[5] = (byte)iVar3;
  param_1[4] = (byte)((uint)iVar3 >> 8);
  return 6;
}


