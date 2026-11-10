/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00460840; name: FUN_00460840
 */


void FUN_00460840(ulong *param_1,ulong *param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar16 = *param_1;
  uVar17 = param_1[1];
  uVar18 = param_1[2];
  if (0xf < param_3) {
    uVar5 = param_1[3];
    uVar6 = param_1[4];
    uVar1 = uVar6 + (uVar6 >> 2);
    do {
      uVar15 = *param_2 + uVar16;
      uVar16 = (ulong)CARRY8(*param_2,uVar16);
      uVar2 = uVar16 + uVar17;
      uVar3 = uVar2 + param_2[1];
      lVar4 = uVar18 + param_4 + (ulong)CARRY8(uVar16,uVar17) + (ulong)CARRY8(uVar2,param_2[1]);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar5;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar3;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar1;
      uVar17 = uVar3 * uVar1 + uVar15 * uVar5;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar3;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar5;
      uVar19 = SUB168(auVar8 * auVar12,8) + SUB168(auVar7 * auVar11,8) +
               (ulong)CARRY8(uVar3 * uVar1,uVar15 * uVar5);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar15;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar6;
      uVar16 = uVar3 * uVar5 + uVar15 * uVar6;
      uVar20 = lVar4 * uVar1;
      uVar18 = uVar16 + uVar19;
      uVar2 = uVar18 + uVar20;
      uVar15 = SUB168(auVar9 * auVar13,8) + SUB168(auVar10 * auVar14,8) +
               (ulong)CARRY8(uVar3 * uVar5,uVar15 * uVar6) + (ulong)CARRY8(uVar16,uVar19) +
               (ulong)CARRY8(uVar18,uVar20) + lVar4 * uVar5;
      uVar18 = (uVar15 & 0xfffffffffffffffc) + (uVar15 >> 2);
      uVar16 = uVar18 + uVar17;
      uVar17 = uVar2 - ((long)((uVar16 ^ uVar18 | uVar18 ^ uVar17) ^ uVar16) >> 0x3f);
      uVar18 = (uVar15 & 3) - ((long)(uVar2 & (uVar17 ^ 0xffffffffffffffff)) >> 0x3f);
      param_3 = param_3 - 0x10;
      param_2 = param_2 + 2;
    } while (0xf < param_3);
  }
  *param_1 = uVar16;
  param_1[1] = uVar17;
  param_1[2] = uVar18;
  return;
}


