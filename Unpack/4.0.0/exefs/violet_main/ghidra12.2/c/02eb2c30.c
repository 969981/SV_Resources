/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb2c30; name: FUN_02eb2c30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02eb2c30(long *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined8 *param_8,undefined8 *param_9)

{
  int iVar1;
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
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  if (param_4 < param_6) {
    *param_8 = 0x7f7fffee7f7fffee;
    *param_9 = 0xff7fffeeff7fffee;
    uVar22 = 0x7f7fffee7f7fffee;
    uVar21 = 0xff7fffeeff7fffee;
    if (param_7 <= param_5) {
      if (param_5 == param_3) {
        do {
          (**(code **)(*param_1 + 0x28))
                    (param_1,param_4,param_5 + -1,&local_80,auStack_64,auStack_68);
          auVar9._4_4_ = uStack_7c;
          auVar9._0_4_ = local_80;
          auVar9._8_4_ = uStack_78;
          auVar9._12_4_ = uStack_74;
          auVar19 = NEON_ext(auVar9,auVar9,8,1);
          uVar15 = auVar19._0_8_;
          uVar18 = NEON_fminp(uVar15,uVar15,4);
          uVar15 = NEON_fmaxp(uVar15,uVar15,4);
          uVar22 = NEON_fmin(uVar22,uVar18,4);
          uVar21 = NEON_fmax(uVar21,uVar15,4);
          param_4 = param_4 + 2;
          *param_8 = uVar22;
          *param_9 = uVar21;
        } while (param_4 < param_6);
        if (param_6 != param_4) {
          return;
        }
        (**(code **)(*param_1 + 0x28))
                  (param_1,param_6 + -1,param_5 + -1,&local_80,auStack_64,auStack_68);
        auVar10._4_4_ = uStack_7c;
        auVar10._0_4_ = local_80;
        auVar10._8_4_ = uStack_78;
        auVar10._12_4_ = uStack_74;
        auVar19 = NEON_ext(auVar10,auVar10,8,1);
        uVar18 = auVar19._0_8_;
      }
      else {
        do {
          (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_80,auStack_64,auStack_68);
          uVar15 = CONCAT44(uStack_7c,local_80);
          uVar18 = NEON_fminp(uVar15,uVar15,4);
          uVar15 = NEON_fmaxp(uVar15,uVar15,4);
          uVar22 = NEON_fmin(uVar22,uVar18,4);
          uVar21 = NEON_fmax(uVar21,uVar15,4);
          param_4 = param_4 + 2;
          *param_8 = uVar22;
          *param_9 = uVar21;
        } while (param_4 < param_6);
        if (param_6 != param_4) {
          return;
        }
        (**(code **)(*param_1 + 0x28))(param_1,param_6 + -1,param_5,&local_80,auStack_64,auStack_68)
        ;
        uVar18 = CONCAT44(uStack_7c,local_80);
      }
      goto LAB_02eb30a0;
    }
    do {
      iVar1 = param_4;
      do {
        iVar13 = iVar1;
        (**(code **)(*param_1 + 0x28))(param_1,iVar13,param_5,&local_80,auStack_64,auStack_68);
        auVar4._4_4_ = uStack_7c;
        auVar4._0_4_ = local_80;
        auVar4._8_4_ = uStack_78;
        auVar4._12_4_ = uStack_74;
        iVar1 = iVar13 + 2;
        uVar20 = NEON_fminnmv(auVar4,4);
        uVar14 = NEON_fmaxnmv(auVar4,4);
        uVar22 = NEON_fmin(uVar22,CONCAT44(uVar20,uVar20),4);
        uVar21 = NEON_fmax(uVar21,CONCAT44(uVar14,uVar14),4);
        *param_8 = uVar22;
        *param_9 = uVar21;
      } while (iVar1 < param_6);
      if (param_6 == iVar1) {
        (**(code **)(*param_1 + 0x28))(param_1,iVar13 + 1,param_5,&local_80,auStack_64,auStack_68);
        auVar5._4_4_ = uStack_7c;
        auVar5._0_4_ = local_80;
        auVar5._8_4_ = uStack_78;
        auVar5._12_4_ = uStack_74;
        uVar20 = NEON_fminnmv(auVar5,4);
        uVar14 = NEON_fmaxnmv(auVar5,4);
        uVar22 = NEON_fmin(uVar22,CONCAT44(uVar20,uVar20),4);
        uVar21 = NEON_fmax(uVar21,CONCAT44(uVar14,uVar14),4);
        *param_8 = uVar22;
        *param_9 = uVar21;
      }
      param_5 = param_5 + 2;
    } while (param_5 < param_7);
    if (param_5 != param_7) {
      return;
    }
    do {
      (**(code **)(*param_1 + 0x28))(param_1,param_4,param_7 + -1,&local_80,auStack_64,auStack_68);
      auVar6._4_4_ = uStack_7c;
      auVar6._0_4_ = local_80;
      auVar6._8_4_ = uStack_78;
      auVar6._12_4_ = uStack_74;
      param_4 = param_4 + 2;
      uVar20 = NEON_fminnmv(auVar6,4);
      uVar14 = NEON_fmaxnmv(auVar6,4);
      uVar22 = NEON_fmin(uVar22,CONCAT44(uVar20,uVar20),4);
      uVar21 = NEON_fmax(uVar21,CONCAT44(uVar14,uVar14),4);
      *param_8 = uVar22;
      *param_9 = uVar21;
    } while (param_4 < param_6);
    if (param_6 != param_4) {
      return;
    }
    (**(code **)(*param_1 + 0x28))
              (param_1,param_6 + -1,param_7 + -1,&local_80,auStack_64,auStack_68);
    auVar7._4_4_ = uStack_7c;
    auVar7._0_4_ = local_80;
    auVar7._8_4_ = uStack_78;
    auVar7._12_4_ = uStack_74;
    uVar20 = NEON_fminnmv(auVar7,4);
    uVar14 = NEON_fmaxnmv(auVar7,4);
    uVar18 = NEON_fmin(uVar22,CONCAT44(uVar20,uVar20),4);
    *param_8 = uVar18;
    uVar17 = CONCAT44(uVar14,uVar14);
  }
  else {
    if (param_7 <= param_5) {
      if (param_4 == param_2) {
        if (param_5 == param_3) {
          (**(code **)(*param_1 + 0x28))
                    (param_1,param_4 + -1,param_5 + -1,&local_80,auStack_64,auStack_68);
          uVar18 = CONCAT44(uStack_74,uStack_74);
        }
        else {
          (**(code **)(*param_1 + 0x28))
                    (param_1,param_4 + -1,param_5,&local_80,auStack_64,auStack_68);
          uVar18 = CONCAT44(uStack_7c,uStack_7c);
        }
      }
      else if (param_5 == param_3) {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5 + -1,&local_80,auStack_64,auStack_68)
        ;
        uVar18 = CONCAT44(uStack_78,uStack_78);
      }
      else {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_80,auStack_64,auStack_68);
        uVar18 = CONCAT44(local_80,local_80);
      }
      *param_8 = uVar18;
      goto LAB_02eb314c;
    }
    *param_8 = 0x7f7fffee7f7fffee;
    *param_9 = 0xff7fffeeff7fffee;
    uVar16 = _UNK_03cab698;
    uVar17 = _DAT_03cab690;
    uVar15 = _UNK_03cab418;
    uVar18 = _DAT_03cab410;
    uVar22 = 0x7f7fffee7f7fffee;
    uVar21 = 0xff7fffeeff7fffee;
    if (param_4 == param_2) {
      param_4 = param_4 + -1;
      uStack_88 = _UNK_03cab698;
      local_90 = _DAT_03cab690;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_80,auStack_64,auStack_68);
        auVar2._8_8_ = uVar16;
        auVar2._0_8_ = uVar17;
        auVar8._4_4_ = uStack_7c;
        auVar8._0_4_ = local_80;
        auVar8._8_4_ = uStack_78;
        auVar8._12_4_ = uStack_74;
        auVar19 = a64_TBL(ZEXT816(0),auVar8,auVar2);
        uVar15 = auVar19._0_8_;
        uVar18 = NEON_fminp(uVar15,uVar15,4);
        uVar15 = NEON_fmaxp(uVar15,uVar15,4);
        uVar22 = NEON_fmin(uVar22,uVar18,4);
        uVar21 = NEON_fmax(uVar21,uVar15,4);
        param_5 = param_5 + 2;
        *param_8 = uVar22;
        *param_9 = uVar21;
      } while (param_5 < param_7);
    }
    else {
      uStack_88 = _UNK_03cab418;
      local_90 = _DAT_03cab410;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_80,auStack_64,auStack_68);
        auVar19._8_8_ = uVar15;
        auVar19._0_8_ = uVar18;
        auVar11._4_4_ = uStack_7c;
        auVar11._0_4_ = local_80;
        auVar11._8_4_ = uStack_78;
        auVar11._12_4_ = uStack_74;
        auVar19 = a64_TBL(ZEXT816(0),auVar11,auVar19);
        uVar16 = auVar19._0_8_;
        uVar17 = NEON_fminp(uVar16,uVar16,4);
        uVar16 = NEON_fmaxp(uVar16,uVar16,4);
        uVar22 = NEON_fmin(uVar22,uVar17,4);
        uVar21 = NEON_fmax(uVar21,uVar16,4);
        param_5 = param_5 + 2;
        *param_8 = uVar22;
        *param_9 = uVar21;
      } while (param_5 < param_7);
    }
    if (param_7 != param_5) {
      return;
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_4,param_7 + -1,&local_80,auStack_64,auStack_68);
    auVar3._8_8_ = uStack_88;
    auVar3._0_8_ = local_90;
    auVar12._4_4_ = uStack_7c;
    auVar12._0_4_ = local_80;
    auVar12._8_4_ = uStack_78;
    auVar12._12_4_ = uStack_74;
    auVar19 = a64_TBL(ZEXT816(0),auVar12,auVar3);
    uVar18 = auVar19._0_8_;
LAB_02eb30a0:
    uVar15 = NEON_fminp(uVar18,uVar18,4);
    uVar17 = NEON_fmaxp(uVar18,uVar18,4);
    uVar18 = NEON_fmin(uVar22,uVar15,4);
    *param_8 = uVar18;
  }
  uVar18 = NEON_fmax(uVar21,uVar17,4);
LAB_02eb314c:
  *param_9 = uVar18;
  return;
}


