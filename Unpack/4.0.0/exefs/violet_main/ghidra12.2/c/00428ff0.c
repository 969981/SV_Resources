/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00428ff0; name: FUN_00428ff0
 */


void FUN_00428ff0(undefined8 param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar24 = 0;
  local_70 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar23 = 0;
  do {
    uVar34 = *(ulong *)(param_2 + lVar24);
    lVar24 = lVar24 + 8;
    uVar35 = *param_3 * uVar34;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *param_3;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar34;
    uVar1 = uVar35 + local_a0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3[1];
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar34;
    uVar22 = param_3[1] * uVar34;
    uVar25 = SUB168(auVar2 * auVar15,8) + (ulong)CARRY8(uVar35,local_a0);
    uVar35 = uVar25 + uStack_98;
    uVar27 = uVar35 + uVar22;
    uVar25 = (ulong)CARRY8(uVar25,uStack_98) + SUB168(auVar3 * auVar16,8) +
             (ulong)CARRY8(uVar35,uVar22);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3[2];
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar34;
    uVar29 = param_3[2] * uVar34;
    uVar35 = uVar25 + local_90;
    uVar22 = uVar35 + uVar29;
    uVar30 = param_3[3] * uVar34;
    uVar29 = (ulong)CARRY8(uVar25,local_90) + SUB168(auVar4 * auVar17,8) +
             (ulong)CARRY8(uVar35,uVar29);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_3[3];
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    uVar35 = uVar29 + uStack_88;
    uVar25 = uVar35 + uVar30;
    uVar31 = param_3[4] * uVar34;
    uVar30 = (ulong)CARRY8(uVar29,uStack_88) + SUB168(auVar5 * auVar18,8) +
             (ulong)CARRY8(uVar35,uVar30);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_3[4];
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar35 = uVar30 + local_80;
    uVar29 = uVar35 + uVar31;
    uVar32 = param_3[5] * uVar34;
    uVar31 = (ulong)CARRY8(uVar30,local_80) + SUB168(auVar6 * auVar19,8) +
             (ulong)CARRY8(uVar35,uVar31);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_3[5];
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    uVar35 = uVar31 + uStack_78;
    uVar30 = uVar35 + uVar32;
    uVar33 = param_3[6] * uVar34;
    uVar28 = (ulong)CARRY8(uVar31,uStack_78) + SUB168(auVar7 * auVar20,8) +
             (ulong)CARRY8(uVar35,uVar32);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_3[6];
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar34;
    uVar32 = uVar1 * 0x3bd440fae918bc5;
    uVar35 = uVar28 + local_70;
    uVar31 = uVar35 + uVar33;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar32;
    uStack_68 = (ulong)CARRY8(uVar28,local_70) + SUB168(auVar8 * auVar21,8) +
                (ulong)CARRY8(uVar35,uVar33);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar32;
    uVar28 = SUB168(auVar9 * ZEXT816(0x2378c292ab5844f3),8) + (ulong)CARRY8(uVar1,-uVar1);
    uVar35 = uVar28 + uVar27;
    local_a0 = uVar35 + uVar1 * 0x5eeb636e52ff7369;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32;
    uVar27 = (ulong)CARRY8(uVar28,uVar27) + SUB168(auVar10 * ZEXT816(0x216cc2728dc58f55),8) +
             (ulong)CARRY8(uVar35,uVar1 * 0x5eeb636e52ff7369);
    uVar35 = uVar27 + uVar22;
    uStack_98 = uVar35 + uVar1 * 0x48acd47ca2082cd0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar32;
    uVar22 = (ulong)CARRY8(uVar27,uVar22) + SUB168(auVar11 * ZEXT816(0xc44edb49aed63690),8) +
             (ulong)CARRY8(uVar35,uVar1 * 0x48acd47ca2082cd0);
    uVar35 = uVar22 + uVar25;
    local_90 = uVar35 + uVar1 * -0x1a12361581f9dab3;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar32;
    lVar26 = SUB168(auVar13 * ZEXT816(0xffffffffffffffff),8);
    uVar27 = uVar1 * -0x3bd440fae918bc5;
    uVar22 = (ulong)CARRY8(uVar22,uVar25) + SUB168(auVar12 * ZEXT816(0xffffffff7cca23e9),8) +
             (ulong)CARRY8(uVar35,uVar1 * -0x1a12361581f9dab3);
    uVar35 = uVar22 + uVar29;
    uStack_88 = uVar35 + uVar27;
    uVar22 = (ulong)CARRY8(uVar22,uVar29) + lVar26 + (ulong)CARRY8(uVar35,uVar27);
    uVar35 = uVar22 + uVar30;
    local_80 = uVar35 + uVar27;
    uVar27 = (ulong)CARRY8(uVar22,uVar30) + lVar26 + (ulong)CARRY8(uVar35,uVar27);
    uVar35 = uVar27 + uVar31;
    uStack_78 = uVar35 + uVar1 * 0x3c42bbf0516e743b;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar32;
    uVar35 = (ulong)CARRY8(uVar27,uVar31) + SUB168(auVar14 * ZEXT816(0x3fffffffffffffff),8) +
             (ulong)CARRY8(uVar35,uVar1 * 0x3c42bbf0516e743b);
    uVar1 = uVar35 + uVar23;
    local_70 = uVar1 + uStack_68;
    uVar23 = (ulong)CARRY8(uVar35,uVar23) + (ulong)CARRY8(uVar1,uStack_68);
  } while (lVar24 != 0x38);
  FUN_00429410(param_1,&local_a0,&DAT_03cf2a48);
  return;
}


