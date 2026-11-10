/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00429280; name: FUN_00429280
 */


void FUN_00429280(ulong *param_1,ulong *param_2,ulong *param_3)

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
  uVar3 = uVar1 - uVar2;
  *param_1 = uVar3;
  uVar5 = param_2[1];
  uVar2 = -(ulong)(uVar1 < uVar2);
  uVar1 = uVar2 + uVar5;
  uVar6 = param_3[1];
  uVar4 = uVar1 - uVar6;
  param_1[1] = uVar4;
  uVar7 = param_2[2];
  uVar2 = (((long)uVar2 >> 0x3f) + (ulong)CARRY8(uVar2,uVar5)) - (ulong)(uVar1 < uVar6);
  uVar1 = uVar2 + uVar7;
  uVar5 = param_3[2];
  uVar6 = uVar1 - uVar5;
  param_1[2] = uVar6;
  uVar8 = param_2[3];
  uVar2 = (((long)uVar2 >> 0x3f) + (ulong)CARRY8(uVar2,uVar7)) - (ulong)(uVar1 < uVar5);
  uVar1 = uVar2 + uVar8;
  uVar5 = param_3[3];
  uVar7 = uVar1 - uVar5;
  param_1[3] = uVar7;
  uVar9 = param_2[4];
  uVar2 = (((long)uVar2 >> 0x3f) + (ulong)CARRY8(uVar2,uVar8)) - (ulong)(uVar1 < uVar5);
  uVar1 = uVar2 + uVar9;
  uVar5 = param_3[4];
  uVar8 = uVar1 - uVar5;
  param_1[4] = uVar8;
  uVar10 = param_2[5];
  uVar2 = (((long)uVar2 >> 0x3f) + (ulong)CARRY8(uVar2,uVar9)) - (ulong)(uVar1 < uVar5);
  uVar1 = uVar2 + uVar10;
  uVar5 = param_3[5];
  uVar9 = uVar1 - uVar5;
  param_1[5] = uVar9;
  uVar1 = (((long)uVar2 >> 0x3f) + (ulong)CARRY8(uVar2,uVar10)) - (ulong)(uVar1 < uVar5);
  uVar2 = uVar1 + param_2[6];
  uVar11 = param_3[6];
  uVar10 = (((long)uVar1 >> 0x3f) + (ulong)CARRY8(uVar1,param_2[6])) - (ulong)(uVar2 < uVar11);
  uVar1 = (ulong)CARRY8(uVar10 & 0x2378c292ab5844f3,uVar3);
  uVar5 = (uVar10 & 0x216cc2728dc58f55) + uVar4;
  *param_1 = (uVar10 & 0x2378c292ab5844f3) + uVar3;
  param_1[1] = uVar5 + uVar1;
  uVar12 = (ulong)CARRY8(uVar10 & 0x216cc2728dc58f55,uVar4) + (ulong)CARRY8(uVar5,uVar1);
  uVar1 = (uVar10 & 0xc44edb49aed63690) + uVar6;
  uVar3 = (ulong)CARRY8(uVar10 & 0xc44edb49aed63690,uVar6) + (ulong)CARRY8(uVar1,uVar12);
  uVar5 = (uVar10 & 0xffffffff7cca23e9) + uVar7;
  uVar4 = (ulong)CARRY8(uVar10 & 0xffffffff7cca23e9,uVar7) + (ulong)CARRY8(uVar5,uVar3);
  param_1[2] = uVar1 + uVar12;
  param_1[3] = uVar5 + uVar3;
  uVar1 = (ulong)CARRY8(uVar10,uVar8) + (ulong)CARRY8(uVar10 + uVar8,uVar4);
  param_1[4] = uVar10 + uVar8 + uVar4;
  param_1[5] = uVar10 + uVar9 + uVar1;
  param_1[6] = (uVar10 & 0x3fffffffffffffff) +
               (ulong)CARRY8(uVar10,uVar9) + (ulong)CARRY8(uVar10 + uVar9,uVar1) + (uVar2 - uVar11);
  return;
}


