/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011ccc0; name: FUN_0011ccc0
 */


void FUN_0011ccc0(int *param_1,long param_2,undefined4 param_3,undefined8 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int5 iVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int local_80 [4];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  iVar1 = FUN_0011de90(local_80,param_3,param_4);
  if (((((param_5 ^ 0xffffffff) & 0xa8) == 0) && (param_2 == 0)) && (iVar1 == 0)) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar3 = CONCAT44(param_6,param_6);
    uVar2 = CONCAT44(param_7,param_7);
    if ((param_5 >> 5 & 1) == 0) {
      iVar1 = param_1[7];
      uVar5 = CONCAT44(iVar1,iVar1);
      if ((param_5 & 0x88) == 0) {
        iVar6 = *(int *)(param_2 + 0x10);
        uVar12 = CONCAT44(iVar6,iVar6);
        iVar7 = param_1[5];
        uVar10 = CONCAT44(iVar7,iVar7);
        iVar8 = *(int *)(param_2 + 0xc);
        uVar13 = NEON_smin(uVar12,uVar10,4);
        uVar13 = NEON_smin(uVar13,CONCAT44(iVar8,iVar8),4);
        uVar16 = NEON_smax(CONCAT44((iVar7 + iVar6) - iVar8,(iVar7 + iVar6) - iVar8),uVar13,4);
        uVar13 = NEON_smax(uVar12,uVar10,4);
        uVar13 = NEON_smax(uVar13,CONCAT44(iVar8,iVar8),4);
        uVar13 = NEON_smin(uVar16,uVar13,4);
        uVar13 = NEON_smax(CONCAT44(local_80[0] + (int)((ulong)uVar13 >> 0x20),
                                    local_80[0] + (int)uVar13),uVar3,4);
        uVar17 = NEON_smin(uVar13,uVar2,4);
        iVar11 = (int)uVar17;
        *param_1 = iVar11;
        iVar8 = *(int *)(param_2 + 0x14);
        uVar19 = CONCAT44(iVar8,iVar8);
        iVar14 = (int)((ulong)uVar17 >> 0x20);
        uVar13 = NEON_smin(uVar19,uVar17,4);
        uVar13 = NEON_smin(uVar13,uVar12,4);
        uVar13 = NEON_smax(CONCAT44((iVar14 - iVar6) + iVar8,(iVar11 - iVar6) + iVar8),uVar13,4);
        uVar16 = NEON_smax(uVar19,uVar17,4);
        uVar12 = NEON_smax(uVar16,uVar12,4);
        uVar12 = NEON_smin(uVar13,uVar12,4);
        uVar12 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 4) + (int)((ulong)uVar12 >> 0x20),
                                    *(int *)((ulong)local_80 | 4) + (int)uVar12),uVar3,4);
        uVar16 = NEON_smin(uVar12,uVar2,4);
        uVar12 = NEON_smin(uVar17,uVar5,4);
        uVar12 = NEON_smin(uVar12,uVar10,4);
        uVar12 = NEON_smax(CONCAT44((iVar1 - iVar7) + iVar14,(iVar1 - iVar7) + iVar11),uVar12,4);
        uVar13 = NEON_smax(uVar17,uVar5,4);
        uVar10 = NEON_smax(uVar13,uVar10,4);
        uVar12 = NEON_smin(uVar12,uVar10,4);
        uVar12 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 8) + (int)((ulong)uVar12 >> 0x20),
                                    *(int *)((ulong)local_80 | 8) + (int)uVar12),uVar3,4);
        uVar13 = NEON_smin(uVar12,uVar2,4);
        iVar7 = (int)uVar16;
        iVar9 = (int)((ulong)uVar16 >> 0x20);
        uVar12 = NEON_smin(uVar16,uVar13,4);
        uVar12 = NEON_smin(uVar12,uVar17,4);
        uVar12 = NEON_smax(CONCAT44((iVar9 - iVar14) + (int)((ulong)uVar13 >> 0x20),
                                    (iVar7 - iVar11) + (int)uVar13),uVar12,4);
        uVar10 = NEON_smax(uVar16,uVar13,4);
        uVar10 = NEON_smax(uVar10,uVar17,4);
        param_1[1] = iVar7;
        param_1[2] = (int)uVar13;
        uVar12 = NEON_smin(uVar12,uVar10,4);
        iVar6 = *(int *)(param_2 + 0x18);
        uVar20 = CONCAT44(iVar6,iVar6);
        uVar10 = NEON_smin(uVar20,uVar16,4);
        uVar12 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 0xc) + (int)((ulong)uVar12 >> 0x20),
                                    *(int *)((ulong)local_80 | 0xc) + (int)uVar12),uVar3,4);
        uVar17 = NEON_smin(uVar10,uVar19,4);
        uVar10 = NEON_smin(uVar12,uVar2,4);
        uVar12 = NEON_smax(CONCAT44((iVar9 - iVar8) + iVar6,(iVar7 - iVar8) + iVar6),uVar17,4);
        uVar17 = NEON_smax(uVar20,uVar16,4);
        uVar17 = NEON_smax(uVar17,uVar19,4);
        uVar12 = NEON_smin(uVar12,uVar17,4);
        uVar12 = NEON_smax(CONCAT44(local_70 + (int)((ulong)uVar12 >> 0x20),local_70 + (int)uVar12),
                           uVar3,4);
        uVar17 = NEON_smin(uVar12,uVar2,4);
        param_1[3] = (int)uVar10;
        param_1[4] = (int)uVar17;
        iVar7 = *(int *)(param_2 + 0x1c);
        uVar19 = NEON_smin(CONCAT44(iVar7,iVar7),uVar17,4);
        uVar12 = NEON_smax(CONCAT44(iVar7,iVar7),uVar17,4);
        uVar19 = NEON_smin(uVar19,uVar20,4);
        uVar19 = NEON_smax(CONCAT44(((int)((ulong)uVar17 >> 0x20) - iVar6) + iVar7,
                                    ((int)uVar17 - iVar6) + iVar7),uVar19,4);
        uVar12 = NEON_smax(uVar12,uVar20,4);
        uVar12 = NEON_smin(uVar19,uVar12,4);
      }
      else {
        iVar6 = param_1[5];
        uVar10 = CONCAT44(iVar6,iVar6);
        iVar7 = iVar6 * 2 - iVar1;
        uVar12 = NEON_smin(uVar10,uVar10,4);
        uVar12 = NEON_smin(uVar12,uVar5,4);
        uVar12 = NEON_smax(CONCAT44(iVar7,iVar7),uVar12,4);
        uVar13 = NEON_smax(uVar10,uVar10,4);
        uVar13 = NEON_smax(uVar13,uVar5,4);
        uVar12 = NEON_smin(uVar12,uVar13,4);
        uVar12 = NEON_smax(CONCAT44(local_80[0] + (int)((ulong)uVar12 >> 0x20),
                                    local_80[0] + (int)uVar12),uVar3,4);
        uVar12 = NEON_smin(uVar12,uVar2,4);
        uVar13 = NEON_smin(uVar12,uVar5,4);
        iVar7 = (int)uVar12;
        iVar8 = (int)((ulong)uVar12 >> 0x20);
        uVar13 = NEON_smin(uVar13,uVar10,4);
        uVar13 = NEON_smax(CONCAT44((iVar1 - iVar6) + iVar8,(iVar1 - iVar6) + iVar7),uVar13,4);
        uVar16 = NEON_smax(uVar12,uVar5,4);
        uVar10 = NEON_smax(uVar16,uVar10,4);
        iVar6 = *(int *)((ulong)local_80 | 8);
        uVar10 = NEON_smin(uVar13,uVar10,4);
        uVar13 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 4) + iVar8,
                                    *(int *)((ulong)local_80 | 4) + iVar7),uVar3,4);
        uVar16 = NEON_smin(uVar13,uVar2,4);
        iVar9 = (int)uVar16;
        iVar11 = (int)((ulong)uVar16 >> 0x20);
        *param_1 = iVar7;
        param_1[1] = iVar9;
        uVar10 = NEON_smax(CONCAT44(iVar6 + (int)((ulong)uVar10 >> 0x20),iVar6 + (int)uVar10),uVar3,
                           4);
        uVar13 = NEON_smin(uVar10,uVar2,4);
        uVar10 = NEON_smin(uVar16,uVar13,4);
        uVar10 = NEON_smin(uVar10,uVar12,4);
        uVar10 = NEON_smax(CONCAT44((iVar11 - iVar8) + (int)((ulong)uVar13 >> 0x20),
                                    (iVar9 - iVar7) + (int)uVar13),uVar10,4);
        uVar17 = NEON_smax(uVar16,uVar13,4);
        uVar12 = NEON_smax(uVar17,uVar12,4);
        uVar17 = NEON_smin(uVar16,uVar16,4);
        uVar12 = NEON_smin(uVar10,uVar12,4);
        uVar12 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 0xc) + (int)((ulong)uVar12 >> 0x20),
                                    *(int *)((ulong)local_80 | 0xc) + (int)uVar12),uVar3,4);
        uVar10 = NEON_smin(uVar12,uVar2,4);
        uVar12 = NEON_smin(uVar17,uVar10,4);
        uVar12 = NEON_smax(CONCAT44(iVar11 * 2 - (int)((ulong)uVar10 >> 0x20),
                                    iVar9 * 2 - (int)uVar10),uVar12,4);
        uVar17 = NEON_smax(uVar16,uVar16,4);
        uVar17 = NEON_smax(uVar17,uVar10,4);
        uVar12 = NEON_smin(uVar12,uVar17,4);
        uVar12 = NEON_smax(CONCAT44(local_70 + (int)((ulong)uVar12 >> 0x20),local_70 + (int)uVar12),
                           uVar3,4);
        uVar17 = NEON_smin(uVar12,uVar2,4);
        param_1[2] = (int)uVar13;
        param_1[3] = (int)uVar10;
        param_1[4] = (int)uVar17;
        uVar12 = uVar17;
      }
      uVar19 = NEON_smin(uVar17,uVar10,4);
      uVar19 = NEON_smin(uVar19,uVar16,4);
      iVar8 = (int)uVar10;
      iVar9 = (int)((ulong)uVar10 >> 0x20);
      iVar6 = (int)((ulong)uVar17 >> 0x20);
      uVar19 = NEON_smax(CONCAT44((iVar6 + iVar9) - (int)((ulong)uVar16 >> 0x20),
                                  ((int)uVar17 + iVar8) - (int)uVar16),uVar19,4);
      uVar20 = NEON_smax(uVar17,uVar10,4);
      uVar16 = NEON_smax(uVar20,uVar16,4);
      uVar16 = NEON_smin(uVar19,uVar16,4);
      uVar12 = NEON_smax(CONCAT44(local_6c + (int)((ulong)uVar12 >> 0x20),local_6c + (int)uVar12),
                         uVar3,4);
      uVar19 = NEON_smin(uVar12,uVar2,4);
      uVar12 = NEON_smax(CONCAT44(local_68 + (int)((ulong)uVar16 >> 0x20),local_68 + (int)uVar16),
                         uVar3,4);
      uVar16 = NEON_smin(uVar12,uVar2,4);
      uVar20 = NEON_smin(uVar19,uVar16,4);
      param_1[5] = (int)uVar19;
      iVar11 = (int)uVar16;
      param_1[6] = iVar11;
      uVar12 = NEON_smax(uVar19,uVar16,4);
      iVar14 = (int)((ulong)uVar16 >> 0x20);
      uVar20 = NEON_smin(uVar20,uVar17,4);
      uVar12 = NEON_smax(uVar12,uVar17,4);
      uVar17 = NEON_smax(CONCAT44(((int)((ulong)uVar19 >> 0x20) - iVar6) + iVar14,
                                  ((int)uVar19 - (int)uVar17) + iVar11),uVar20,4);
      uVar12 = NEON_smin(uVar17,uVar12,4);
      iVar7 = (int)((ulong)uVar13 >> 0x20);
      uVar12 = NEON_smax(CONCAT44(local_64 + (int)((ulong)uVar12 >> 0x20),local_64 + (int)uVar12),
                         uVar3,4);
      uVar17 = NEON_smin(uVar12,uVar2,4);
      param_1[7] = (int)uVar17;
      iVar6 = param_1[0xd];
      uVar19 = CONCAT44(iVar6,iVar6);
      uVar12 = NEON_smin(uVar13,uVar19,4);
      uVar12 = NEON_smin(uVar12,uVar5,4);
      uVar12 = NEON_smax(CONCAT44((iVar7 - iVar1) + iVar6,((int)uVar13 - iVar1) + iVar6),uVar12,4);
      uVar20 = NEON_smax(uVar13,uVar19,4);
      uVar5 = NEON_smax(uVar20,uVar5,4);
      uVar5 = NEON_smin(uVar12,uVar5,4);
      uVar5 = NEON_smax(CONCAT44(local_60 + (int)((ulong)uVar5 >> 0x20),local_60 + (int)uVar5),uVar3
                        ,4);
      uVar20 = NEON_smin(uVar5,uVar2,4);
      uVar5 = NEON_smin(uVar10,uVar20,4);
      iVar15 = (int)uVar20;
      iVar18 = (int)((ulong)uVar20 >> 0x20);
      uVar5 = NEON_smin(uVar5,uVar13,4);
      uVar5 = NEON_smax(CONCAT44((iVar9 - iVar7) + iVar18,(iVar8 - (int)uVar13) + iVar15),uVar5,4);
      uVar12 = NEON_smax(uVar10,uVar20,4);
      uVar12 = NEON_smax(uVar12,uVar13,4);
      uVar5 = NEON_smin(uVar5,uVar12,4);
      uVar5 = NEON_smax(CONCAT44(local_5c + (int)((ulong)uVar5 >> 0x20),local_5c + (int)uVar5),uVar3
                        ,4);
      uVar5 = NEON_smin(uVar5,uVar2,4);
      param_1[8] = iVar15;
      iVar7 = (int)uVar5;
      param_1[9] = iVar7;
      iVar1 = param_1[0xf];
      uVar13 = NEON_smin(uVar20,CONCAT44(iVar1,iVar1),4);
      uVar12 = NEON_smax(uVar20,CONCAT44(iVar1,iVar1),4);
      uVar13 = NEON_smin(uVar13,uVar19,4);
      uVar12 = NEON_smax(uVar12,uVar19,4);
      uVar13 = NEON_smax(CONCAT44((iVar18 - iVar6) + iVar1,(iVar15 - iVar6) + iVar1),uVar13,4);
      uVar12 = NEON_smin(uVar13,uVar12,4);
      iVar1 = (int)((ulong)uVar5 >> 0x20);
      uVar12 = NEON_smax(CONCAT44(local_58 + (int)((ulong)uVar12 >> 0x20),local_58 + (int)uVar12),
                         uVar3,4);
      uVar12 = NEON_smin(uVar12,uVar2,4);
      uVar13 = NEON_smin(uVar5,uVar12,4);
      uVar13 = NEON_smin(uVar13,uVar20,4);
      uVar13 = NEON_smax(CONCAT44((iVar1 - iVar18) + (int)((ulong)uVar12 >> 0x20),
                                  (iVar7 - iVar15) + (int)uVar12),uVar13,4);
      uVar19 = NEON_smax(uVar5,uVar12,4);
      uVar19 = NEON_smax(uVar19,uVar20,4);
      uVar13 = NEON_smin(uVar13,uVar19,4);
      uVar13 = NEON_smax(CONCAT44(local_54 + (int)((ulong)uVar13 >> 0x20),local_54 + (int)uVar13),
                         uVar3,4);
      uVar19 = NEON_smin(uVar13,uVar2,4);
      param_1[10] = (int)uVar12;
      param_1[0xb] = (int)uVar19;
      uVar12 = NEON_smin(uVar16,uVar5,4);
      uVar12 = NEON_smin(uVar12,uVar10,4);
      uVar13 = NEON_smax(CONCAT44((iVar14 - iVar9) + iVar1,(iVar11 - iVar8) + iVar7),uVar12,4);
      uVar12 = NEON_smax(uVar16,uVar5,4);
      uVar12 = NEON_smax(uVar12,uVar10,4);
      uVar12 = NEON_smin(uVar13,uVar12,4);
      uVar12 = NEON_smax(CONCAT44(local_50 + (int)((ulong)uVar12 >> 0x20),local_50 + (int)uVar12),
                         uVar3,4);
      uVar12 = NEON_smin(uVar12,uVar2,4);
      uVar13 = NEON_smin(uVar17,uVar12,4);
      uVar10 = NEON_smax(uVar17,uVar12,4);
      iVar6 = (int)uVar12;
      iVar8 = (int)((ulong)uVar12 >> 0x20);
      uVar20 = NEON_smin(uVar13,uVar16,4);
      uVar13 = NEON_smax(uVar10,uVar16,4);
      uVar10 = NEON_smax(CONCAT44(((int)((ulong)uVar17 >> 0x20) - iVar14) + iVar8,
                                  ((int)uVar17 - iVar11) + iVar6),uVar20,4);
      uVar10 = NEON_smin(uVar10,uVar13,4);
      uVar13 = NEON_smin(uVar12,uVar19,4);
      uVar13 = NEON_smin(uVar13,uVar5,4);
      uVar13 = NEON_smax(CONCAT44(((int)((ulong)uVar19 >> 0x20) - iVar1) + iVar8,
                                  ((int)uVar19 - iVar7) + iVar6),uVar13,4);
      uVar16 = NEON_smax(uVar12,uVar19,4);
      uVar5 = NEON_smax(uVar16,uVar5,4);
      uVar5 = NEON_smin(uVar13,uVar5,4);
      uVar10 = NEON_smax(CONCAT44(local_4c + (int)((ulong)uVar10 >> 0x20),local_4c + (int)uVar10),
                         uVar3,4);
      uVar10 = NEON_smin(uVar10,uVar2,4);
      param_1[0xc] = iVar6;
      param_1[0xd] = (int)uVar10;
      uVar5 = NEON_smax(CONCAT44(local_48 + (int)((ulong)uVar5 >> 0x20),local_48 + (int)uVar5),uVar3
                        ,4);
      uVar5 = NEON_smin(uVar5,uVar2,4);
      uVar16 = NEON_smin(uVar10,uVar5,4);
      uVar13 = NEON_smax(uVar10,uVar5,4);
      uVar16 = NEON_smin(uVar16,uVar12,4);
      uVar12 = NEON_smax(uVar13,uVar12,4);
      uVar10 = NEON_smax(CONCAT44(((int)((ulong)uVar10 >> 0x20) - iVar8) +
                                  (int)((ulong)uVar5 >> 0x20),((int)uVar10 - iVar6) + (int)uVar5),
                         uVar16,4);
      uVar12 = NEON_smin(uVar10,uVar12,4);
      uVar3 = NEON_smax(CONCAT44(local_44 + (int)((ulong)uVar12 >> 0x20),local_44 + (int)uVar12),
                        uVar3,4);
      uVar2 = NEON_smin(uVar3,uVar2,4);
      iVar1 = (int)uVar2;
      param_1[0xe] = (int)uVar5;
    }
    else {
      if ((param_5 & 0x88) == 0) {
        iVar1 = *(int *)(param_2 + 0x10);
        iVar6 = *(int *)(param_2 + 0x14);
        uVar5 = CONCAT44(iVar1,iVar1);
        uVar16 = CONCAT44(iVar6,iVar6);
        iVar7 = iVar1 * 2 - iVar6;
        uVar12 = NEON_smin(uVar5,uVar5,4);
        uVar12 = NEON_smin(uVar12,uVar16,4);
        uVar12 = NEON_smax(CONCAT44(iVar7,iVar7),uVar12,4);
        uVar10 = NEON_smax(uVar5,uVar5,4);
        uVar10 = NEON_smax(uVar10,uVar16,4);
        uVar12 = NEON_smin(uVar12,uVar10,4);
        uVar12 = NEON_smax(CONCAT44(local_80[0] + (int)((ulong)uVar12 >> 0x20),
                                    local_80[0] + (int)uVar12),uVar3,4);
        uVar17 = NEON_smin(uVar12,uVar2,4);
        uVar12 = NEON_smin(uVar16,uVar17,4);
        iVar9 = (int)uVar17;
        iVar11 = (int)((ulong)uVar17 >> 0x20);
        uVar12 = NEON_smin(uVar12,uVar5,4);
        uVar12 = NEON_smax(CONCAT44((iVar6 - iVar1) + iVar11,(iVar6 - iVar1) + iVar9),uVar12,4);
        uVar10 = NEON_smax(uVar16,uVar17,4);
        uVar5 = NEON_smax(uVar10,uVar5,4);
        uVar5 = NEON_smin(uVar12,uVar5,4);
        uVar12 = NEON_smin(uVar17,uVar17,4);
        uVar5 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 4) + (int)((ulong)uVar5 >> 0x20),
                                   *(int *)((ulong)local_80 | 4) + (int)uVar5),uVar3,4);
        uVar13 = NEON_smin(uVar5,uVar2,4);
        iVar7 = (int)uVar13;
        iVar8 = (int)((ulong)uVar13 >> 0x20);
        uVar5 = NEON_smin(uVar12,uVar13,4);
        uVar5 = NEON_smax(CONCAT44(iVar11 * 2 - iVar8,iVar9 * 2 - iVar7),uVar5,4);
        uVar12 = NEON_smax(uVar17,uVar17,4);
        uVar12 = NEON_smax(uVar12,uVar13,4);
        uVar5 = NEON_smin(uVar5,uVar12,4);
        uVar5 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 8) + (int)((ulong)uVar5 >> 0x20),
                                   *(int *)((ulong)local_80 | 8) + (int)uVar5),uVar3,4);
        uVar10 = NEON_smin(uVar5,uVar2,4);
        uVar5 = NEON_smin(uVar13,uVar10,4);
        uVar5 = NEON_smin(uVar5,uVar17,4);
        uVar5 = NEON_smax(CONCAT44((iVar8 - iVar11) + (int)((ulong)uVar10 >> 0x20),
                                   (iVar7 - iVar9) + (int)uVar10),uVar5,4);
        uVar12 = NEON_smax(uVar13,uVar10,4);
        *param_1 = iVar9;
        param_1[1] = iVar7;
        uVar12 = NEON_smax(uVar12,uVar17,4);
        uVar5 = NEON_smin(uVar5,uVar12,4);
        uVar5 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 0xc) + (int)((ulong)uVar5 >> 0x20),
                                   *(int *)((ulong)local_80 | 0xc) + (int)uVar5),uVar3,4);
        uVar12 = NEON_smin(uVar5,uVar2,4);
        param_1[2] = (int)uVar10;
        param_1[3] = (int)uVar12;
        iVar1 = *(int *)(param_2 + 0x18);
        uVar17 = CONCAT44(iVar1,iVar1);
        uVar5 = NEON_smin(uVar17,uVar13,4);
        uVar5 = NEON_smin(uVar5,uVar16,4);
        uVar19 = NEON_smax(CONCAT44((iVar8 - iVar6) + iVar1,(iVar7 - iVar6) + iVar1),uVar5,4);
        uVar5 = NEON_smax(uVar17,uVar13,4);
        uVar5 = NEON_smax(uVar5,uVar16,4);
        uVar5 = NEON_smin(uVar19,uVar5,4);
        uVar5 = NEON_smax(CONCAT44(local_70 + (int)((ulong)uVar5 >> 0x20),local_70 + (int)uVar5),
                          uVar3,4);
        iVar6 = *(int *)(param_2 + 0x1c);
        uVar16 = NEON_smin(uVar5,uVar2,4);
        iVar7 = (int)uVar16;
        uVar5 = NEON_smin(CONCAT44(iVar6,iVar6),uVar16,4);
        uVar19 = NEON_smin(uVar5,uVar17,4);
        uVar5 = NEON_smax(CONCAT44(iVar6,iVar6),uVar16,4);
        uVar19 = NEON_smax(CONCAT44(((int)((ulong)uVar16 >> 0x20) - iVar1) + iVar6,
                                    (iVar7 - iVar1) + iVar6),uVar19,4);
        uVar5 = NEON_smax(uVar5,uVar17,4);
        uVar5 = NEON_smin(uVar19,uVar5,4);
      }
      else {
        iVar4 = (uint5)(~(byte)(-(ulong)(param_2 == 0) >> 8) & 4) << 8;
        uVar5 = NEON_smax(CONCAT44(local_80[0] +
                                   (uint)((ushort)(CONCAT15(~(byte)(-(ulong)(param_2 == 0) >> 0x28),
                                                            iVar4) >> 0x20) & 0x4ff),
                                   local_80[0] + (int)iVar4),uVar3,4);
        uVar5 = NEON_smin(uVar5,uVar2,4);
        iVar1 = (int)uVar5;
        iVar6 = (int)((ulong)uVar5 >> 0x20);
        uVar12 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 4) + iVar6,
                                    *(int *)((ulong)local_80 | 4) + iVar1),uVar3,4);
        uVar13 = NEON_smin(uVar12,uVar2,4);
        uVar12 = NEON_smin(uVar5,uVar5,4);
        iVar7 = (int)uVar13;
        iVar8 = (int)((ulong)uVar13 >> 0x20);
        uVar12 = NEON_smin(uVar12,uVar13,4);
        uVar12 = NEON_smax(CONCAT44(iVar6 * 2 - iVar8,iVar1 * 2 - iVar7),uVar12,4);
        uVar10 = NEON_smax(uVar5,uVar5,4);
        uVar10 = NEON_smax(uVar10,uVar13,4);
        uVar12 = NEON_smin(uVar12,uVar10,4);
        uVar12 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 8) + (int)((ulong)uVar12 >> 0x20),
                                    *(int *)((ulong)local_80 | 8) + (int)uVar12),uVar3,4);
        uVar10 = NEON_smin(uVar12,uVar2,4);
        uVar12 = NEON_smin(uVar13,uVar10,4);
        uVar12 = NEON_smin(uVar12,uVar5,4);
        uVar12 = NEON_smax(CONCAT44((iVar8 - iVar6) + (int)((ulong)uVar10 >> 0x20),
                                    (iVar7 - iVar1) + (int)uVar10),uVar12,4);
        uVar16 = NEON_smax(uVar13,uVar10,4);
        *param_1 = iVar1;
        param_1[1] = iVar7;
        uVar5 = NEON_smax(uVar16,uVar5,4);
        uVar16 = NEON_smin(uVar13,uVar13,4);
        uVar5 = NEON_smin(uVar12,uVar5,4);
        uVar5 = NEON_smax(CONCAT44(*(int *)((ulong)local_80 | 0xc) + (int)((ulong)uVar5 >> 0x20),
                                   *(int *)((ulong)local_80 | 0xc) + (int)uVar5),uVar3,4);
        uVar12 = NEON_smin(uVar5,uVar2,4);
        uVar5 = NEON_smin(uVar16,uVar12,4);
        uVar5 = NEON_smax(CONCAT44(iVar8 * 2 - (int)((ulong)uVar12 >> 0x20),iVar7 * 2 - (int)uVar12)
                          ,uVar5,4);
        uVar16 = NEON_smax(uVar13,uVar13,4);
        uVar16 = NEON_smax(uVar16,uVar12,4);
        uVar5 = NEON_smin(uVar5,uVar16,4);
        uVar5 = NEON_smax(CONCAT44(local_70 + (int)((ulong)uVar5 >> 0x20),local_70 + (int)uVar5),
                          uVar3,4);
        uVar16 = NEON_smin(uVar5,uVar2,4);
        param_1[2] = (int)uVar10;
        param_1[3] = (int)uVar12;
        iVar7 = (int)uVar16;
        uVar5 = uVar16;
      }
      uVar17 = NEON_smin(uVar16,uVar12,4);
      uVar17 = NEON_smin(uVar17,uVar13,4);
      iVar1 = (int)uVar12;
      iVar6 = (int)((ulong)uVar12 >> 0x20);
      iVar8 = (int)((ulong)uVar16 >> 0x20);
      uVar19 = NEON_smax(CONCAT44((iVar8 + iVar6) - (int)((ulong)uVar13 >> 0x20),
                                  ((int)uVar16 + iVar1) - (int)uVar13),uVar17,4);
      uVar20 = NEON_smax(uVar16,uVar12,4);
      param_1[4] = iVar7;
      uVar5 = NEON_smax(CONCAT44(local_6c + (int)((ulong)uVar5 >> 0x20),local_6c + (int)uVar5),uVar3
                        ,4);
      uVar17 = NEON_smin(uVar5,uVar2,4);
      uVar5 = NEON_smax(uVar20,uVar13,4);
      uVar5 = NEON_smin(uVar19,uVar5,4);
      uVar5 = NEON_smax(CONCAT44(local_68 + (int)((ulong)uVar5 >> 0x20),local_68 + (int)uVar5),uVar3
                        ,4);
      uVar13 = NEON_smin(uVar5,uVar2,4);
      uVar19 = NEON_smin(uVar17,uVar13,4);
      param_1[5] = (int)uVar17;
      iVar9 = (int)uVar13;
      param_1[6] = iVar9;
      uVar5 = NEON_smax(uVar17,uVar13,4);
      iVar11 = (int)((ulong)uVar13 >> 0x20);
      uVar19 = NEON_smin(uVar19,uVar16,4);
      uVar5 = NEON_smax(uVar5,uVar16,4);
      uVar16 = NEON_smax(CONCAT44(((int)((ulong)uVar17 >> 0x20) - iVar8) + iVar11,
                                  ((int)uVar17 - (int)uVar16) + iVar9),uVar19,4);
      uVar16 = NEON_smin(uVar16,uVar5,4);
      uVar5 = NEON_smin(uVar10,uVar10,4);
      iVar7 = (int)((ulong)uVar10 >> 0x20);
      uVar5 = NEON_smin(uVar5,uVar12,4);
      uVar5 = NEON_smax(CONCAT44(iVar7 * 2 - iVar6,(int)uVar10 * 2 - iVar1),uVar5,4);
      uVar17 = NEON_smax(uVar10,uVar10,4);
      uVar17 = NEON_smax(uVar17,uVar12,4);
      uVar5 = NEON_smin(uVar5,uVar17,4);
      uVar5 = NEON_smax(CONCAT44(local_60 + (int)((ulong)uVar5 >> 0x20),local_60 + (int)uVar5),uVar3
                        ,4);
      uVar17 = NEON_smin(uVar5,uVar2,4);
      uVar5 = NEON_smin(uVar12,uVar17,4);
      iVar14 = (int)uVar17;
      iVar15 = (int)((ulong)uVar17 >> 0x20);
      uVar5 = NEON_smin(uVar5,uVar10,4);
      uVar19 = NEON_smax(CONCAT44((iVar6 - iVar7) + iVar15,(iVar1 - (int)uVar10) + iVar14),uVar5,4);
      uVar5 = NEON_smax(uVar12,uVar17,4);
      uVar5 = NEON_smax(uVar5,uVar10,4);
      uVar20 = NEON_smin(uVar17,uVar17,4);
      uVar5 = NEON_smin(uVar19,uVar5,4);
      uVar16 = NEON_smax(CONCAT44(local_64 + (int)((ulong)uVar16 >> 0x20),local_64 + (int)uVar16),
                         uVar3,4);
      uVar5 = NEON_smax(CONCAT44(local_5c + (int)((ulong)uVar5 >> 0x20),local_5c + (int)uVar5),uVar3
                        ,4);
      uVar10 = NEON_smin(uVar5,uVar2,4);
      iVar7 = (int)uVar10;
      iVar8 = (int)((ulong)uVar10 >> 0x20);
      uVar5 = NEON_smin(uVar20,uVar10,4);
      uVar5 = NEON_smax(CONCAT44(iVar15 * 2 - iVar8,iVar14 * 2 - iVar7),uVar5,4);
      uVar19 = NEON_smax(uVar17,uVar17,4);
      uVar19 = NEON_smax(uVar19,uVar10,4);
      uVar5 = NEON_smin(uVar5,uVar19,4);
      uVar5 = NEON_smax(CONCAT44(local_58 + (int)((ulong)uVar5 >> 0x20),local_58 + (int)uVar5),uVar3
                        ,4);
      uVar19 = NEON_smin(uVar5,uVar2,4);
      uVar20 = NEON_smin(uVar10,uVar19,4);
      uVar16 = NEON_smin(uVar16,uVar2,4);
      param_1[9] = iVar7;
      param_1[10] = (int)uVar19;
      uVar5 = NEON_smax(uVar10,uVar19,4);
      param_1[7] = (int)uVar16;
      param_1[8] = iVar14;
      uVar20 = NEON_smin(uVar20,uVar17,4);
      uVar5 = NEON_smax(uVar5,uVar17,4);
      uVar17 = NEON_smax(CONCAT44((iVar8 - iVar15) + (int)((ulong)uVar19 >> 0x20),
                                  (iVar7 - iVar14) + (int)uVar19),uVar20,4);
      uVar17 = NEON_smin(uVar17,uVar5,4);
      uVar5 = NEON_smin(uVar13,uVar10,4);
      uVar5 = NEON_smin(uVar5,uVar12,4);
      uVar19 = NEON_smax(CONCAT44((iVar11 - iVar6) + iVar8,(iVar9 - iVar1) + iVar7),uVar5,4);
      uVar5 = NEON_smax(uVar13,uVar10,4);
      uVar5 = NEON_smax(uVar5,uVar12,4);
      uVar5 = NEON_smin(uVar19,uVar5,4);
      uVar5 = NEON_smax(CONCAT44(local_50 + (int)((ulong)uVar5 >> 0x20),local_50 + (int)uVar5),uVar3
                        ,4);
      uVar5 = NEON_smin(uVar5,uVar2,4);
      uVar19 = NEON_smin(uVar16,uVar5,4);
      uVar12 = NEON_smax(uVar16,uVar5,4);
      iVar1 = (int)uVar5;
      iVar6 = (int)((ulong)uVar5 >> 0x20);
      uVar19 = NEON_smin(uVar19,uVar13,4);
      uVar12 = NEON_smax(uVar12,uVar13,4);
      uVar13 = NEON_smax(CONCAT44(local_54 + (int)((ulong)uVar17 >> 0x20),local_54 + (int)uVar17),
                         uVar3,4);
      uVar17 = NEON_smin(uVar13,uVar2,4);
      param_1[0xb] = (int)uVar17;
      param_1[0xc] = iVar1;
      uVar13 = NEON_smax(CONCAT44(((int)((ulong)uVar16 >> 0x20) - iVar11) + iVar6,
                                  ((int)uVar16 - iVar9) + iVar1),uVar19,4);
      uVar13 = NEON_smin(uVar13,uVar12,4);
      uVar16 = NEON_smin(uVar5,uVar17,4);
      uVar12 = NEON_smax(uVar5,uVar17,4);
      uVar16 = NEON_smin(uVar16,uVar10,4);
      uVar12 = NEON_smax(uVar12,uVar10,4);
      uVar10 = NEON_smax(CONCAT44(((int)((ulong)uVar17 >> 0x20) - iVar8) + iVar6,
                                  ((int)uVar17 - iVar7) + iVar1),uVar16,4);
      uVar12 = NEON_smin(uVar10,uVar12,4);
      uVar10 = NEON_smax(CONCAT44(local_4c + (int)((ulong)uVar13 >> 0x20),local_4c + (int)uVar13),
                         uVar3,4);
      uVar13 = NEON_smin(uVar10,uVar2,4);
      uVar12 = NEON_smax(CONCAT44(local_48 + (int)((ulong)uVar12 >> 0x20),local_48 + (int)uVar12),
                         uVar3,4);
      uVar12 = NEON_smin(uVar12,uVar2,4);
      uVar16 = NEON_smin(uVar13,uVar12,4);
      param_1[0xd] = (int)uVar13;
      param_1[0xe] = (int)uVar12;
      uVar10 = NEON_smax(uVar13,uVar12,4);
      uVar16 = NEON_smin(uVar16,uVar5,4);
      uVar5 = NEON_smax(uVar10,uVar5,4);
      uVar12 = NEON_smax(CONCAT44(((int)((ulong)uVar13 >> 0x20) - iVar6) +
                                  (int)((ulong)uVar12 >> 0x20),((int)uVar13 - iVar1) + (int)uVar12),
                         uVar16,4);
      uVar5 = NEON_smin(uVar12,uVar5,4);
      uVar3 = NEON_smax(CONCAT44(local_44 + (int)((ulong)uVar5 >> 0x20),local_44 + (int)uVar5),uVar3
                        ,4);
      uVar2 = NEON_smin(uVar3,uVar2,4);
      iVar1 = (int)uVar2;
    }
    param_1[0xf] = iVar1;
  }
  return;
}


