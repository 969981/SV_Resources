/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011e670; name: FUN_0011e670
 */


void FUN_0011e670(long param_1,long param_2,long param_3,uint *param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  if (uVar1 != 0) {
    lVar5 = (long)(param_5 << 3);
    FUN_0010ccf0(uVar1 & 0xff,(param_1 - lVar5) + -0x10,param_5);
    FUN_0010ccf0(uVar1 >> 8 & 0xff,param_1 + -0x10,param_5);
    FUN_0010ccf0(uVar1 >> 0x10 & 0xff,param_1 + lVar5 + -0x10,param_5);
    FUN_0010ccf0(uVar1 >> 0x18,param_1 + lVar5 + lVar5 + -0x10,param_5);
  }
  iVar4 = param_6 << 3;
  if (uVar2 != 0) {
    FUN_0010ccf0(uVar2 >> 0x18,param_1 + (long)(param_5 << 3) * 3 + -0x10,param_5);
    FUN_0010ccf0(uVar2 & 0xff,(param_2 - iVar4) + -0x10,param_6);
    FUN_0010ccf0(uVar2 >> 8 & 0xff,param_2 + -0x10,param_6);
    FUN_0010ccf0(uVar2 >> 0x10 & 0xff,param_2 + iVar4 + -0x10,param_6);
  }
  if (uVar3 == 0) {
    return;
  }
  FUN_0010ccf0(uVar3 & 0xff,(param_3 - iVar4) + -0x10,param_6);
  FUN_0010ccf0(uVar3 >> 8 & 0xff,param_3 + -0x10,param_6);
  FUN_0010ccf0(uVar3 >> 0x10 & 0xff,param_3 + iVar4 + -0x10,param_6);
  return;
}


