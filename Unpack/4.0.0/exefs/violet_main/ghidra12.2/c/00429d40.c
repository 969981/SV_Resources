/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00429d40; name: FUN_00429d40
 */


void FUN_00429d40(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  puVar4 = &local_d0;
  if (param_3 == 0) {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    uVar5 = (param_3 / 0x38) * 0x38;
    uVar13 = uVar5 - 0x38;
    if (param_3 != uVar5) {
      uVar13 = uVar5;
    }
    FUN_004297f0(&local_98,param_2 + uVar13,param_3 - uVar13);
    if (param_3 == 0x38) {
      FUN_00428ff0(param_1,&local_98,PTR_DAT_047cd2f0);
      FUN_00428ff0(param_1,param_1,&DAT_03cf2a10);
      puVar4 = &local_98;
    }
    else {
      if (uVar13 != 0) {
        do {
          uVar14 = uVar13 - 0x38;
          FUN_00428ff0(&local_98,&local_98,&DAT_03cf2a10);
          FUN_004297f0(&local_d0,param_2 + -0x38 + uVar13,0x38);
          FUN_00428ff0(&local_d0,&local_d0,PTR_DAT_047cd2f0);
          FUN_00428ff0(&local_d0,&local_d0,&DAT_03cf2a10);
          uVar13 = CARRY8(local_d0,local_98) + uStack_90;
          uVar5 = uVar13 + uStack_c8;
          uVar6 = (ulong)CARRY8((ulong)CARRY8(local_d0,local_98),uStack_90) +
                  (ulong)CARRY8(uVar13,uStack_c8);
          uVar13 = uVar6 + local_88;
          uVar12 = uVar13 + local_c0;
          uVar7 = (ulong)CARRY8(uVar6,local_88) + (ulong)CARRY8(uVar13,local_c0);
          uVar13 = uVar7 + uStack_80;
          uVar6 = uVar13 + uStack_b8;
          uVar8 = (ulong)CARRY8(uVar7,uStack_80) + (ulong)CARRY8(uVar13,uStack_b8);
          uVar13 = uVar8 + local_78;
          uVar7 = uVar13 + local_b0;
          uVar9 = (ulong)CARRY8(uVar8,local_78) + (ulong)CARRY8(uVar13,local_b0);
          uVar13 = uVar9 + uStack_70;
          uVar8 = uVar13 + uStack_a8;
          uVar10 = (ulong)CARRY8(uVar9,uStack_70) + (ulong)CARRY8(uVar13,uStack_a8);
          uVar13 = uVar10 + local_68;
          uVar9 = uVar13 + local_a0;
          uVar1 = local_d0 + local_98 + 0xdc873d6d54a7bb0d;
          uVar11 = (ulong)(0x2378c292ab5844f2 < local_d0 + local_98) - 1;
          uVar2 = uVar11 + uVar5;
          uVar3 = uVar2 + 0xde933d8d723a70ab;
          uVar11 = ((long)uVar11 >> 0x3f) + (ulong)CARRY8(uVar11,uVar5) + -1 +
                   (ulong)(0x216cc2728dc58f54 < uVar2);
          uVar5 = uVar12 + uVar11;
          uVar2 = uVar5 + 0x3bb124b65129c970;
          uVar12 = ((long)uVar11 >> 0x3f) + (ulong)CARRY8(uVar12,uVar11) + -1 +
                   (ulong)(0xc44edb49aed6368f < uVar5);
          uVar5 = uVar6 + uVar12;
          uVar11 = uVar5 + 0x8335dc17;
          uVar6 = ((long)uVar12 >> 0x3f) + (ulong)CARRY8(uVar6,uVar12) + -1 +
                  (ulong)(0xffffffff7cca23e8 < uVar5);
          uVar12 = uVar7 + uVar6;
          uVar5 = uVar12 + 1;
          uVar7 = ((long)uVar6 >> 0x3f) + (ulong)CARRY8(uVar7,uVar6) + -1 +
                  (ulong)(0xfffffffffffffffe < uVar12);
          uVar6 = uVar8 + uVar7;
          uVar12 = uVar6 + 1;
          uVar7 = ((long)uVar7 >> 0x3f) + (ulong)CARRY8(uVar8,uVar7) + -1 +
                  (ulong)(0xfffffffffffffffe < uVar6);
          uVar6 = uVar9 + uVar7;
          uVar7 = ((long)uVar7 >> 0x3f) + (ulong)CARRY8(uVar9,uVar7) + -1 +
                  (ulong)(0x3ffffffffffffffe < uVar6) +
                  (ulong)CARRY8(uVar10,local_68) + (ulong)CARRY8(uVar13,local_a0);
          local_98 = uVar1 + (uVar7 & 0x2378c292ab5844f3);
          uVar13 = (ulong)CARRY8(uVar1,uVar7 & 0x2378c292ab5844f3);
          uVar8 = uVar3 + (uVar7 & 0x216cc2728dc58f55);
          uStack_90 = uVar8 + uVar13;
          uVar8 = (ulong)CARRY8(uVar3,uVar7 & 0x216cc2728dc58f55) + (ulong)CARRY8(uVar8,uVar13);
          uVar13 = uVar2 + (uVar7 & 0xc44edb49aed63690);
          local_88 = uVar13 + uVar8;
          uVar8 = (ulong)CARRY8(uVar2,uVar7 & 0xc44edb49aed63690) + (ulong)CARRY8(uVar13,uVar8);
          uVar13 = uVar11 + (uVar7 & 0xffffffff7cca23e9);
          uStack_80 = uVar13 + uVar8;
          uVar8 = (ulong)CARRY8(uVar11,uVar7 & 0xffffffff7cca23e9) + (ulong)CARRY8(uVar13,uVar8);
          uVar13 = uVar5 + uVar7;
          local_78 = uVar13 + uVar8;
          uVar5 = (ulong)CARRY8(uVar5,uVar7) + (ulong)CARRY8(uVar13,uVar8);
          uVar13 = uVar12 + uVar7;
          uStack_70 = uVar13 + uVar5;
          local_68 = (uVar7 & 0x3fffffffffffffff) +
                     (ulong)CARRY8(uVar12,uVar7) + (ulong)CARRY8(uVar13,uVar5) +
                     uVar6 + 0xc000000000000001;
          uVar13 = uVar14;
        } while (uVar14 != 0);
      }
      param_1[6] = local_68;
      param_1[3] = uStack_80;
      param_1[2] = local_88;
      param_1[5] = uStack_70;
      param_1[4] = local_78;
      param_1[1] = uStack_90;
      *param_1 = local_98;
      FUN_00453300(&local_98,0x38);
    }
    FUN_00453300(puVar4,0x38);
  }
  return;
}


