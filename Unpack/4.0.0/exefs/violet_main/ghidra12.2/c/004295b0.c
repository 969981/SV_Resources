/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004295b0; name: FUN_004295b0
 */


void FUN_004295b0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = uVar1 + uVar2;
  *param_1 = uVar3;
  uVar4 = param_2[1];
  uVar5 = param_3[1];
  uVar1 = (ulong)CARRY8(uVar1,uVar2);
  uVar2 = uVar1 + uVar4;
  uVar12 = uVar2 + uVar5;
  param_1[1] = uVar12;
  uVar6 = param_2[2];
  uVar7 = param_3[2];
  uVar4 = (ulong)CARRY8(uVar1,uVar4) + (ulong)CARRY8(uVar2,uVar5);
  uVar1 = uVar4 + uVar6;
  uVar2 = uVar1 + uVar7;
  param_1[2] = uVar2;
  uVar8 = param_2[3];
  uVar9 = param_3[3];
  uVar5 = (ulong)CARRY8(uVar4,uVar6) + (ulong)CARRY8(uVar1,uVar7);
  uVar1 = uVar5 + uVar8;
  uVar4 = uVar1 + uVar9;
  param_1[3] = uVar4;
  uVar7 = param_2[4];
  uVar10 = param_3[4];
  uVar6 = (ulong)CARRY8(uVar5,uVar8) + (ulong)CARRY8(uVar1,uVar9);
  uVar1 = uVar6 + uVar7;
  uVar5 = uVar1 + uVar10;
  param_1[4] = uVar5;
  uVar8 = param_2[5];
  uVar9 = param_3[5];
  uVar7 = (ulong)CARRY8(uVar6,uVar7) + (ulong)CARRY8(uVar1,uVar10);
  uVar1 = uVar7 + uVar8;
  uVar6 = uVar1 + uVar9;
  param_1[5] = uVar6;
  uVar11 = (ulong)CARRY8(uVar7,uVar8) + (ulong)CARRY8(uVar1,uVar9);
  uVar1 = uVar11 + param_2[6];
  uVar7 = uVar1 + param_3[6];
  uVar9 = (ulong)(0x2378c292ab5844f2 < uVar3) - 1;
  uVar8 = uVar12 + uVar9 + 0xde933d8d723a70ab;
  uVar12 = ((long)uVar9 >> 0x3f) + (ulong)CARRY8(uVar12,uVar9) + -1 +
           (ulong)(0x216cc2728dc58f54 < uVar12 + uVar9);
  uVar9 = uVar2 + uVar12 + 0x3bb124b65129c970;
  uVar2 = ((long)uVar12 >> 0x3f) + (ulong)CARRY8(uVar2,uVar12) + -1 +
          (ulong)(0xc44edb49aed6368f < uVar2 + uVar12);
  uVar10 = uVar4 + uVar2 + 0x8335dc17;
  uVar12 = ((long)uVar2 >> 0x3f) + (ulong)CARRY8(uVar4,uVar2) + -1 +
           (ulong)(0xffffffff7cca23e8 < uVar4 + uVar2);
  uVar2 = uVar5 + uVar12 + 1;
  uVar4 = ((long)uVar12 >> 0x3f) + (ulong)CARRY8(uVar5,uVar12) + -1 +
          (ulong)(0xfffffffffffffffe < uVar5 + uVar12);
  uVar12 = uVar6 + uVar4 + 1;
  uVar5 = ((long)uVar4 >> 0x3f) + (ulong)CARRY8(uVar6,uVar4) + -1 +
          (ulong)(0xfffffffffffffffe < uVar6 + uVar4);
  uVar4 = uVar7 + uVar5;
  uVar5 = ((long)uVar5 >> 0x3f) + (ulong)CARRY8(uVar7,uVar5) + -1 +
          (ulong)(0x3ffffffffffffffe < uVar4) +
          (ulong)CARRY8(uVar11,param_2[6]) + (ulong)CARRY8(uVar1,param_3[6]);
  uVar1 = (ulong)CARRY8(uVar3 + 0xdc873d6d54a7bb0d,uVar5 & 0x2378c292ab5844f3);
  uVar6 = uVar8 + (uVar5 & 0x216cc2728dc58f55);
  uVar8 = (ulong)CARRY8(uVar8,uVar5 & 0x216cc2728dc58f55) + (ulong)CARRY8(uVar6,uVar1);
  *param_1 = uVar3 + 0xdc873d6d54a7bb0d + (uVar5 & 0x2378c292ab5844f3);
  param_1[1] = uVar6 + uVar1;
  uVar1 = uVar9 + (uVar5 & 0xc44edb49aed63690);
  uVar6 = (ulong)CARRY8(uVar9,uVar5 & 0xc44edb49aed63690) + (ulong)CARRY8(uVar1,uVar8);
  uVar3 = uVar10 + (uVar5 & 0xffffffff7cca23e9);
  uVar7 = (ulong)CARRY8(uVar10,uVar5 & 0xffffffff7cca23e9) + (ulong)CARRY8(uVar3,uVar6);
  param_1[2] = uVar1 + uVar8;
  param_1[3] = uVar3 + uVar6;
  uVar1 = uVar2 + uVar5;
  uVar3 = (ulong)CARRY8(uVar2,uVar5) + (ulong)CARRY8(uVar1,uVar7);
  uVar2 = uVar12 + uVar5;
  param_1[4] = uVar1 + uVar7;
  param_1[5] = uVar2 + uVar3;
  param_1[6] = (uVar5 & 0x3fffffffffffffff) +
               (ulong)CARRY8(uVar12,uVar5) + (ulong)CARRY8(uVar2,uVar3) + uVar4 + 0xc000000000000001
  ;
  return;
}


