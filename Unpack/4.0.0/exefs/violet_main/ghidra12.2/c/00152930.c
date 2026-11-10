/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00152930; name: FUN_00152930
 */


int FUN_00152930(long param_1,int param_2,long param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (0x7ffffffe < param_1) {
    param_1 = 0x7fffffff;
  }
  uVar3 = (uint)param_1;
  if (param_1 < -0x7fffffff) {
    uVar3 = 0x80000000;
  }
  uVar1 = uVar3;
  if ((*(int *)(param_3 + 8) != 0) &&
     (uVar1 = *(uint *)(param_3 + 0xc), (int)uVar3 <= (int)*(uint *)(param_3 + 0xc))) {
    uVar1 = uVar3;
  }
  iVar2 = FUN_001560d0((float)uVar1);
  iVar4 = iVar2;
  if (param_7 <= iVar2) {
    iVar4 = param_7;
  }
  if (iVar4 <= param_6) {
    iVar4 = param_6;
  }
  iVar5 = iVar2 + -1;
  if (param_5 <= iVar2 + -1) {
    iVar5 = param_5;
  }
  if (iVar5 <= param_4) {
    iVar5 = param_4;
  }
  if (param_2 < 3) {
    iVar4 = iVar5;
  }
  iVar2 = *(int *)(param_3 + 0x2c);
  if (0 < iVar2) {
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
    if (0x19 < iVar4) {
      iVar4 = 0x1a;
    }
    if (iVar4 < 0xd) {
      iVar4 = 0xc;
    }
    iVar5 = iVar2;
    if (0x7f < iVar2) {
      iVar5 = 0x80;
    }
    if (iVar5 < 0x6d) {
      iVar5 = 0x6c;
    }
    if (100 < iVar2) {
      iVar4 = iVar5 + -100;
    }
  }
  return iVar4;
}


