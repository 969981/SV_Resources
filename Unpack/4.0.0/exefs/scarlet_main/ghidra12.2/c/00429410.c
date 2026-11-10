/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00429410; name: FUN_00429410
 */


void FUN_00429410(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

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
  
  uVar3 = *param_2;
  uVar4 = *param_3;
  uVar5 = uVar3 - uVar4;
  *param_1 = uVar5;
  uVar6 = param_2[1];
  uVar4 = -(ulong)(uVar3 < uVar4);
  uVar3 = uVar4 + uVar6;
  uVar7 = param_3[1];
  uVar11 = uVar3 - uVar7;
  param_1[1] = uVar11;
  uVar8 = param_2[2];
  uVar4 = (((long)uVar4 >> 0x3f) + (ulong)CARRY8(uVar4,uVar6)) - (ulong)(uVar3 < uVar7);
  uVar3 = uVar4 + uVar8;
  uVar6 = param_3[2];
  uVar1 = uVar3 - uVar6;
  param_1[2] = uVar1;
  uVar7 = param_2[3];
  uVar4 = (((long)uVar4 >> 0x3f) + (ulong)CARRY8(uVar4,uVar8)) - (ulong)(uVar3 < uVar6);
  uVar3 = uVar4 + uVar7;
  uVar6 = param_3[3];
  uVar8 = uVar3 - uVar6;
  param_1[3] = uVar8;
  uVar9 = param_2[4];
  uVar4 = (((long)uVar4 >> 0x3f) + (ulong)CARRY8(uVar4,uVar7)) - (ulong)(uVar3 < uVar6);
  uVar3 = uVar4 + uVar9;
  uVar6 = param_3[4];
  uVar2 = uVar3 - uVar6;
  param_1[4] = uVar2;
  uVar7 = param_2[5];
  uVar4 = (((long)uVar4 >> 0x3f) + (ulong)CARRY8(uVar4,uVar9)) - (ulong)(uVar3 < uVar6);
  uVar3 = uVar4 + uVar7;
  uVar6 = param_3[5];
  uVar9 = uVar3 - uVar6;
  param_1[5] = uVar9;
  uVar3 = (((long)uVar4 >> 0x3f) + (ulong)CARRY8(uVar4,uVar7)) - (ulong)(uVar3 < uVar6);
  uVar4 = uVar3 + param_2[6];
  uVar10 = param_3[6];
  uVar6 = ((((long)uVar3 >> 0x3f) + (ulong)CARRY8(uVar3,param_2[6])) - (ulong)(uVar4 < uVar10)) +
          param_4;
  uVar3 = (ulong)CARRY8(uVar5,uVar6 & 0x2378c292ab5844f3);
  uVar7 = uVar3 + uVar11;
  uVar11 = (ulong)CARRY8(uVar3,uVar11) + (ulong)CARRY8(uVar7,uVar6 & 0x216cc2728dc58f55);
  *param_1 = uVar5 + (uVar6 & 0x2378c292ab5844f3);
  param_1[1] = uVar7 + (uVar6 & 0x216cc2728dc58f55);
  uVar3 = uVar11 + uVar1;
  uVar5 = (ulong)CARRY8(uVar11,uVar1) + (ulong)CARRY8(uVar3,uVar6 & 0xc44edb49aed63690);
  uVar7 = uVar5 + uVar8;
  uVar5 = (ulong)CARRY8(uVar5,uVar8) + (ulong)CARRY8(uVar7,uVar6 & 0xffffffff7cca23e9);
  param_1[2] = uVar3 + (uVar6 & 0xc44edb49aed63690);
  param_1[3] = uVar7 + (uVar6 & 0xffffffff7cca23e9);
  uVar3 = uVar5 + uVar2;
  uVar5 = (ulong)CARRY8(uVar5,uVar2) + (ulong)CARRY8(uVar3,uVar6);
  uVar7 = uVar5 + uVar9;
  param_1[4] = uVar3 + uVar6;
  param_1[5] = uVar7 + uVar6;
  param_1[6] = (uVar6 & 0x3fffffffffffffff) +
               (ulong)CARRY8(uVar5,uVar9) + (ulong)CARRY8(uVar7,uVar6) + (uVar4 - uVar10);
  return;
}


