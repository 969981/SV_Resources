/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011e0f0; name: FUN_0011e0f0
 */


void FUN_0011e0f0(int *param_1,long param_2,undefined4 param_3,undefined8 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int5 iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_50 [4];
  
  FUN_0011e4c0(local_50,param_3,param_4);
  uVar2 = CONCAT44(param_6,param_6);
  uVar1 = CONCAT44(param_7,param_7);
  if ((param_5 >> 5 & 1) == 0) {
    iVar3 = param_1[1];
    uVar5 = CONCAT44(iVar3,iVar3);
    if ((param_5 & 0x88) == 0) {
      iVar6 = *(int *)(param_2 + 8);
      uVar10 = CONCAT44(iVar6,iVar6);
      iVar7 = *(int *)(param_2 + 4);
      uVar11 = NEON_smin(uVar10,uVar5,4);
      uVar11 = NEON_smin(uVar11,CONCAT44(iVar7,iVar7),4);
      uVar13 = NEON_smax(CONCAT44((iVar6 + iVar3) - iVar7,(iVar6 + iVar3) - iVar7),uVar11,4);
      uVar11 = NEON_smax(uVar10,uVar5,4);
      uVar11 = NEON_smax(uVar11,CONCAT44(iVar7,iVar7),4);
      uVar11 = NEON_smin(uVar13,uVar11,4);
      iVar7 = *(int *)(param_2 + 0xc);
      uVar11 = NEON_smax(CONCAT44(local_50[0] + (int)((ulong)uVar11 >> 0x20),
                                  local_50[0] + (int)uVar11),uVar2,4);
      uVar13 = NEON_smin(uVar11,uVar1,4);
      iVar8 = (int)uVar13;
      iVar9 = (int)((ulong)uVar13 >> 0x20);
      uVar12 = NEON_smin(CONCAT44(iVar7,iVar7),uVar13,4);
      uVar11 = NEON_smax(CONCAT44(iVar7,iVar7),uVar13,4);
      uVar12 = NEON_smin(uVar12,uVar10,4);
      uVar10 = NEON_smax(uVar11,uVar10,4);
      uVar11 = NEON_smax(CONCAT44((iVar9 - iVar6) + iVar7,(iVar8 - iVar6) + iVar7),uVar12,4);
      uVar10 = NEON_smin(uVar11,uVar10,4);
      uVar10 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 4) + (int)((ulong)uVar10 >> 0x20),
                                  *(int *)((ulong)local_50 | 4) + (int)uVar10),uVar2,4);
      uVar11 = NEON_smin(uVar10,uVar1,4);
      *param_1 = iVar8;
      param_1[1] = (int)uVar11;
      iVar6 = param_1[3];
      uVar12 = NEON_smin(uVar13,CONCAT44(iVar6,iVar6),4);
      uVar10 = NEON_smax(uVar13,CONCAT44(iVar6,iVar6),4);
      uVar12 = NEON_smin(uVar12,uVar5,4);
      uVar5 = NEON_smax(uVar10,uVar5,4);
      uVar10 = NEON_smax(CONCAT44((iVar9 - iVar3) + iVar6,(iVar8 - iVar3) + iVar6),uVar12,4);
      uVar5 = NEON_smin(uVar10,uVar5,4);
      uVar5 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 8) + (int)((ulong)uVar5 >> 0x20),
                                 *(int *)((ulong)local_50 | 8) + (int)uVar5),uVar2,4);
      uVar5 = NEON_smin(uVar5,uVar1,4);
      uVar12 = NEON_smin(uVar11,uVar5,4);
      param_1[2] = (int)uVar5;
      uVar10 = NEON_smax(uVar11,uVar5,4);
      uVar12 = NEON_smin(uVar12,uVar13,4);
      uVar11 = NEON_smax(CONCAT44(((int)((ulong)uVar11 >> 0x20) - iVar9) +
                                  (int)((ulong)uVar5 >> 0x20),((int)uVar11 - iVar8) + (int)uVar5),
                         uVar12,4);
      uVar5 = NEON_smax(uVar10,uVar13,4);
      uVar5 = NEON_smin(uVar11,uVar5,4);
    }
    else {
      iVar6 = param_1[3];
      uVar13 = CONCAT44(iVar6,iVar6);
      iVar7 = iVar3 * 2 - iVar6;
      uVar10 = NEON_smin(uVar5,uVar5,4);
      uVar10 = NEON_smin(uVar10,uVar13,4);
      uVar10 = NEON_smax(CONCAT44(iVar7,iVar7),uVar10,4);
      uVar11 = NEON_smax(uVar5,uVar5,4);
      uVar11 = NEON_smax(uVar11,uVar13,4);
      uVar10 = NEON_smin(uVar10,uVar11,4);
      uVar10 = NEON_smax(CONCAT44(local_50[0] + (int)((ulong)uVar10 >> 0x20),
                                  local_50[0] + (int)uVar10),uVar2,4);
      uVar11 = NEON_smin(uVar10,uVar1,4);
      uVar12 = NEON_smin(uVar11,uVar13,4);
      uVar10 = NEON_smax(uVar11,uVar13,4);
      iVar7 = (int)uVar11;
      iVar8 = (int)((ulong)uVar11 >> 0x20);
      uVar13 = NEON_smin(uVar12,uVar5,4);
      uVar5 = NEON_smax(uVar10,uVar5,4);
      uVar10 = NEON_smax(CONCAT44((iVar6 - iVar3) + iVar8,(iVar6 - iVar3) + iVar7),uVar13,4);
      iVar3 = *(int *)((ulong)local_50 | 8);
      uVar5 = NEON_smin(uVar10,uVar5,4);
      uVar10 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 4) + iVar8,
                                  *(int *)((ulong)local_50 | 4) + iVar7),uVar2,4);
      uVar13 = NEON_smin(uVar10,uVar1,4);
      *param_1 = iVar7;
      param_1[1] = (int)uVar13;
      uVar5 = NEON_smax(CONCAT44(iVar3 + (int)((ulong)uVar5 >> 0x20),iVar3 + (int)uVar5),uVar2,4);
      uVar5 = NEON_smin(uVar5,uVar1,4);
      uVar12 = NEON_smin(uVar13,uVar5,4);
      param_1[2] = (int)uVar5;
      uVar10 = NEON_smax(uVar13,uVar5,4);
      uVar12 = NEON_smin(uVar12,uVar11,4);
      uVar13 = NEON_smax(CONCAT44(((int)((ulong)uVar13 >> 0x20) - iVar8) +
                                  (int)((ulong)uVar5 >> 0x20),((int)uVar13 - iVar7) + (int)uVar5),
                         uVar12,4);
      uVar5 = NEON_smax(uVar10,uVar11,4);
      uVar5 = NEON_smin(uVar13,uVar5,4);
    }
    uVar2 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 0xc) + (int)((ulong)uVar5 >> 0x20),
                               *(int *)((ulong)local_50 | 0xc) + (int)uVar5),uVar2,4);
    uVar1 = NEON_smin(uVar2,uVar1,4);
    iVar3 = (int)uVar1;
  }
  else {
    if ((param_5 & 0x88) == 0) {
      iVar3 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      uVar5 = CONCAT44(iVar3,iVar3);
      uVar11 = CONCAT44(iVar6,iVar6);
      iVar7 = iVar3 * 2 - iVar6;
      uVar10 = NEON_smin(uVar5,uVar5,4);
      uVar10 = NEON_smin(uVar10,uVar11,4);
      uVar10 = NEON_smax(CONCAT44(iVar7,iVar7),uVar10,4);
      uVar13 = NEON_smax(uVar5,uVar5,4);
      uVar13 = NEON_smax(uVar13,uVar11,4);
      uVar10 = NEON_smin(uVar10,uVar13,4);
      uVar10 = NEON_smax(CONCAT44(local_50[0] + (int)((ulong)uVar10 >> 0x20),
                                  local_50[0] + (int)uVar10),uVar2,4);
      uVar10 = NEON_smin(uVar10,uVar1,4);
      uVar13 = NEON_smin(uVar11,uVar10,4);
      uVar11 = NEON_smax(uVar11,uVar10,4);
      iVar7 = (int)uVar10;
      iVar8 = (int)((ulong)uVar10 >> 0x20);
      uVar13 = NEON_smin(uVar13,uVar5,4);
      uVar5 = NEON_smax(uVar11,uVar5,4);
      uVar11 = NEON_smax(CONCAT44((iVar6 - iVar3) + iVar8,(iVar6 - iVar3) + iVar7),uVar13,4);
      uVar5 = NEON_smin(uVar11,uVar5,4);
      uVar11 = NEON_smin(uVar10,uVar10,4);
      uVar5 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 4) + (int)((ulong)uVar5 >> 0x20),
                                 *(int *)((ulong)local_50 | 4) + (int)uVar5),uVar2,4);
      uVar5 = NEON_smin(uVar5,uVar1,4);
      iVar3 = (int)uVar5;
      iVar6 = (int)((ulong)uVar5 >> 0x20);
      uVar11 = NEON_smin(uVar11,uVar5,4);
      uVar11 = NEON_smax(CONCAT44(iVar8 * 2 - iVar6,iVar7 * 2 - iVar3),uVar11,4);
      uVar13 = NEON_smax(uVar10,uVar10,4);
      uVar13 = NEON_smax(uVar13,uVar5,4);
      uVar11 = NEON_smin(uVar11,uVar13,4);
      uVar11 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 8) + (int)((ulong)uVar11 >> 0x20),
                                  *(int *)((ulong)local_50 | 8) + (int)uVar11),uVar2,4);
      uVar11 = NEON_smin(uVar11,uVar1,4);
      uVar13 = NEON_smin(uVar5,uVar11,4);
      *param_1 = iVar7;
      param_1[1] = iVar3;
      uVar5 = NEON_smax(uVar5,uVar11,4);
      param_1[2] = (int)uVar11;
      uVar13 = NEON_smin(uVar13,uVar10,4);
      uVar11 = NEON_smax(CONCAT44((iVar6 - iVar8) + (int)((ulong)uVar11 >> 0x20),
                                  (iVar3 - iVar7) + (int)uVar11),uVar13,4);
      uVar5 = NEON_smax(uVar5,uVar10,4);
    }
    else {
      iVar4 = (uint5)(~(byte)(-(ulong)(param_2 == 0) >> 8) & 4) << 8;
      uVar5 = NEON_smax(CONCAT44(local_50[0] +
                                 (uint)((ushort)(CONCAT15(~(byte)(-(ulong)(param_2 == 0) >> 0x28),
                                                          iVar4) >> 0x20) & 0x4ff),
                                 local_50[0] + (int)iVar4),uVar2,4);
      uVar5 = NEON_smin(uVar5,uVar1,4);
      iVar3 = (int)uVar5;
      iVar6 = (int)((ulong)uVar5 >> 0x20);
      uVar10 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 4) + iVar6,
                                  *(int *)((ulong)local_50 | 4) + iVar3),uVar2,4);
      uVar10 = NEON_smin(uVar10,uVar1,4);
      uVar11 = NEON_smin(uVar5,uVar5,4);
      iVar7 = (int)uVar10;
      iVar8 = (int)((ulong)uVar10 >> 0x20);
      uVar11 = NEON_smin(uVar11,uVar10,4);
      uVar11 = NEON_smax(CONCAT44(iVar6 * 2 - iVar8,iVar3 * 2 - iVar7),uVar11,4);
      uVar13 = NEON_smax(uVar5,uVar5,4);
      uVar13 = NEON_smax(uVar13,uVar10,4);
      uVar11 = NEON_smin(uVar11,uVar13,4);
      *param_1 = iVar3;
      param_1[1] = iVar7;
      uVar11 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 8) + (int)((ulong)uVar11 >> 0x20),
                                  *(int *)((ulong)local_50 | 8) + (int)uVar11),uVar2,4);
      uVar13 = NEON_smin(uVar11,uVar1,4);
      uVar11 = NEON_smin(uVar10,uVar13,4);
      uVar11 = NEON_smin(uVar11,uVar5,4);
      uVar10 = NEON_smax(uVar10,uVar13,4);
      uVar5 = NEON_smax(uVar10,uVar5,4);
      uVar11 = NEON_smax(CONCAT44((iVar8 - iVar6) + (int)((ulong)uVar13 >> 0x20),
                                  (iVar7 - iVar3) + (int)uVar13),uVar11,4);
      param_1[2] = (int)uVar13;
    }
    uVar5 = NEON_smin(uVar11,uVar5,4);
    uVar2 = NEON_smax(CONCAT44(*(int *)((ulong)local_50 | 0xc) + (int)((ulong)uVar5 >> 0x20),
                               *(int *)((ulong)local_50 | 0xc) + (int)uVar5),uVar2,4);
    uVar1 = NEON_smin(uVar2,uVar1,4);
    iVar3 = (int)uVar1;
  }
  param_1[3] = iVar3;
  return;
}


