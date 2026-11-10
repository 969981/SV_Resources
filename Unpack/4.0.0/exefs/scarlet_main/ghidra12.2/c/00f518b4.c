/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f518b4; name: FUN_00f518b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f518b4(float param_1,long param_2,ulong param_3)

{
  MutexType *pMVar1;
  float *pfVar2;
  long *plVar3;
  short sVar4;
  ulong uVar5;
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
  undefined *puVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float extraout_s0;
  undefined1 auVar54 [12];
  undefined8 uVar53;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar59 [16];
  float fVar52;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar55 [12];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar58 [12];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float extraout_var_01;
  undefined1 auVar84 [12];
  undefined8 uVar83;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar85 [12];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  undefined8 uVar111;
  float fVar128;
  float fVar129;
  float fVar131;
  float fVar132;
  undefined1 auVar112 [12];
  float fVar133;
  undefined1 auVar114 [16];
  undefined1 auVar113 [12];
  float fVar134;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined4 uVar130;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined8 uVar135;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar153 [12];
  undefined8 uVar152;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar154 [12];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar166 [12];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined8 uVar167;
  float fVar180;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  uint uVar181;
  undefined8 uVar182;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  byte bVar190;
  byte bVar192;
  byte bVar191;
  byte bVar198;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  int iVar199;
  float fVar200;
  undefined8 uVar201;
  int iVar205;
  float fVar206;
  int iVar207;
  float fVar208;
  int iVar209;
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  float fVar210;
  float fVar211;
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  int iVar222;
  undefined1 auVar223 [12];
  int iVar232;
  int iVar233;
  int iVar234;
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  int iVar238;
  byte bVar244;
  int iVar245;
  byte bVar246;
  int iVar247;
  byte bVar249;
  undefined1 auVar239 [16];
  float fVar248;
  float fVar250;
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  float fVar251;
  undefined1 auVar252 [12];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  float fVar260;
  float fVar263;
  float fVar264;
  undefined1 auVar261 [16];
  float fVar265;
  undefined1 auVar262 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  byte bVar270;
  byte bVar271;
  byte bVar272;
  byte bVar273;
  uint uVar274;
  byte bVar275;
  byte bVar276;
  byte bVar277;
  byte bVar278;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  byte bVar282;
  float local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float local_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float local_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float local_490;
  undefined4 uStack_488;
  float local_480;
  float fStack_47c;
  float local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  float local_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float local_44c;
  float local_448 [3];
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  ulong local_408;
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  ulong local_3c8;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  ulong local_388;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  ulong local_348;
  undefined8 local_340;
  undefined8 *local_338;
  undefined2 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  undefined4 local_2a0;
  ulong auStack_298 [68];
  int local_74;
  
  if ((param_3 & 1) == 0) {
    if ((int)(uint)*(byte *)(*(long *)(param_2 + 0x58) + 0x1fc) <= *(int *)(param_2 + 0xd8)) {
      fVar211 = *(float *)(param_2 + 0xdc);
      *(undefined8 *)(param_2 + 0xd8) = 0;
      if (*(long *)(param_2 + 0xd0) != 0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar199 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar199 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        uVar22 = *(ulong *)(param_2 + 0x68);
        plVar28 = *(long **)(*(long *)(param_2 + 0xd0) + 0x30);
        plVar3 = *(long **)(*(long *)(param_2 + 0xd0) + 0x38);
        if (uVar22 == *(ulong *)PTR_DAT_047d3e30) {
          if (plVar28 != plVar3) {
            plVar26 = plVar28;
LAB_00f51ab4:
            uVar22 = *(ulong *)(*plVar26 + 0x40);
            if (uVar22 != 0) {
              uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
              uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar23 < 2) {
                uVar24 = uVar22 - 1 & 0x94aeaab4737159ef;
              }
              else {
                uVar24 = 0x94aeaab4737159ef;
                if (uVar22 < 0x94aeaab4737159f0) {
                  uVar24 = 0;
                  if (uVar22 != 0) {
                    uVar24 = 0x94aeaab4737159ef / uVar22;
                  }
                  uVar24 = 0x94aeaab4737159ef - uVar24 * uVar22;
                }
              }
              plVar27 = *(long **)(*(long *)(*plVar26 + 0x38) + uVar24 * 8);
              if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0))
              {
                if (uVar23 < 2) {
                  do {
                    if (plVar27[1] == 0x94aeaab4737159ef) {
                      if (plVar27[2] == -0x6b51554b8c8ea611) goto LAB_00f51ba8;
                    }
                    else if ((plVar27[1] & uVar22 - 1) != uVar24) break;
                    plVar27 = (long *)*plVar27;
                  } while (plVar27 != (long *)0x0);
                }
                else {
                  do {
                    uVar23 = plVar27[1];
                    if (uVar23 == 0x94aeaab4737159ef) {
                      if (plVar27[2] == -0x6b51554b8c8ea611) goto LAB_00f51ba8;
                    }
                    else {
                      if (uVar22 <= uVar23) {
                        uVar25 = 0;
                        if (uVar22 != 0) {
                          uVar25 = uVar23 / uVar22;
                        }
                        uVar23 = uVar23 - uVar25 * uVar22;
                      }
                      if (uVar23 != uVar24) break;
                    }
                    plVar27 = (long *)*plVar27;
                  } while (plVar27 != (long *)0x0);
                }
              }
            }
            goto LAB_00f51bb0;
          }
        }
        else if (plVar28 != plVar3) {
LAB_00f51948:
          uVar23 = *(ulong *)(*plVar28 + 0x40);
          if (uVar23 != 0) {
            uVar24 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
            uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
            uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar24 < 2) {
              uVar25 = uVar23 - 1 & uVar22;
            }
            else {
              uVar25 = uVar22;
              if (uVar23 <= uVar22) {
                uVar25 = 0;
                if (uVar23 != 0) {
                  uVar25 = uVar22 / uVar23;
                }
                uVar25 = uVar22 - uVar25 * uVar23;
              }
            }
            plVar26 = *(long **)(*(long *)(*plVar28 + 0x38) + uVar25 * 8);
            if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
              if (uVar24 < 2) {
                do {
                  if (plVar26[1] == uVar22) {
                    if (plVar26[2] == uVar22) goto LAB_00f51a3c;
                  }
                  else if ((plVar26[1] & uVar23 - 1) != uVar25) break;
                  plVar26 = (long *)*plVar26;
                } while (plVar26 != (long *)0x0);
              }
              else {
                do {
                  uVar24 = plVar26[1];
                  if (uVar24 == uVar22) {
                    if (plVar26[2] == uVar22) goto LAB_00f51a3c;
                  }
                  else {
                    if (uVar23 <= uVar24) {
                      uVar5 = 0;
                      if (uVar23 != 0) {
                        uVar5 = uVar24 / uVar23;
                      }
                      uVar24 = uVar24 - uVar5 * uVar23;
                    }
                    if (uVar24 != uVar25) break;
                  }
                  plVar26 = (long *)*plVar26;
                } while (plVar26 != (long *)0x0);
              }
            }
          }
          goto LAB_00f51a44;
        }
      }
      goto LAB_00f51a50;
    }
    *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + 1;
  }
  *(float *)(param_2 + 0xdc) = *(float *)(param_2 + 0xdc) + param_1;
  return;
LAB_00f51ba8:
  if (-1 < (short)plVar27[6]) {
    iVar199 = (int)(short)(*(short *)((long)plVar26 + 10) + (short)plVar27[6]);
    if (-1 < iVar199) goto LAB_00f51cf4;
    goto LAB_00f51bbc;
  }
LAB_00f51bb0:
  plVar26 = plVar26 + 2;
  if (plVar26 == plVar3) goto LAB_00f51bbc;
  goto LAB_00f51ab4;
LAB_00f51ccc:
  sVar4 = (short)plVar26[6];
  if (-1 < sVar4) goto LAB_00f51ce4;
LAB_00f51cd4:
  plVar28 = plVar28 + 2;
  if (plVar28 == plVar3) goto LAB_00f51a50;
  goto LAB_00f51bd8;
LAB_00f51a3c:
  sVar4 = (short)plVar26[6];
  if (-1 < sVar4) goto LAB_00f51ce4;
LAB_00f51a44:
  plVar28 = plVar28 + 2;
  if (plVar28 == plVar3) goto LAB_00f51a50;
  goto LAB_00f51948;
LAB_00f51ce4:
  iVar199 = (int)(short)(*(short *)((long)plVar28 + 10) + sVar4);
  if (-1 < iVar199) {
LAB_00f51cf4:
    fVar211 = fVar211 + param_1;
    if (1.0 < fVar211) {
      fVar211 = 1.0;
    }
    auVar59 = NEON_fmov(0x3f800000,4);
    fStack_458 = auVar59._8_4_;
    fStack_454 = auVar59._12_4_;
    local_460 = auVar59._0_4_;
    fStack_45c = auVar59._4_4_;
    if (*(char *)(param_2 + 200) == '\0') {
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar205 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar205 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar20 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar20;
      lVar20 = *(long *)(lVar20 + 0x70);
      if (((lVar20 == 0) ||
          (lVar21 = *(long *)(*(long *)(*(long *)(param_2 + 0x58) + 0x30) + 0xe8), lVar21 == 0)) ||
         (plVar28 = *(long **)(lVar21 + 0x48), plVar28 == (long *)0x0)) {
        fVar52 = *(float *)(param_2 + 0xa0);
        fVar80 = *(float *)(param_2 + 0xa4);
        fVar81 = *(float *)(param_2 + 0xa8);
        fVar82 = *(float *)(param_2 + 0xac);
      }
      else {
        fVar79 = *(float *)(param_2 + 0xb4);
        local_74 = iVar199;
        lVar21 = (**(code **)(*plVar28 + 0x68))(plVar28);
        auVar178 = *(undefined1 (*) [16])(lVar21 + 0x30);
        local_480 = auVar178._0_4_;
        fStack_47c = auVar178._4_4_;
        pfVar19 = (float *)(**(code **)(*plVar28 + 0x68))(plVar28);
        puVar18 = PTR_DAT_047d9310;
        fVar52 = *pfVar19;
        fVar80 = pfVar19[1];
        fVar81 = pfVar19[2];
        fVar82 = pfVar19[3];
        fVar109 = pfVar19[4];
        fVar128 = pfVar19[5];
        fVar131 = pfVar19[6];
        fVar133 = pfVar19[7];
        fVar110 = pfVar19[8];
        fVar129 = pfVar19[9];
        fVar132 = pfVar19[10];
        fVar180 = pfVar19[0xb] * pfVar19[0xb];
        auVar168._0_4_ = fVar109 * fVar109 + fVar128 * fVar128;
        auVar168._4_4_ = fVar131 * fVar131 + fVar133 * fVar133;
        auVar168._8_4_ = fVar109 * fVar109 + fVar128 * fVar128;
        auVar168._12_4_ = fVar131 * fVar131 + fVar133 * fVar133;
        auVar254._0_4_ = fVar110 * fVar110 + fVar129 * fVar129;
        auVar254._4_4_ = fVar132 * fVar132 + fVar180;
        auVar254._8_4_ = fVar110 * fVar110 + fVar129 * fVar129;
        auVar254._12_4_ = fVar132 * fVar132 + fVar180;
        auVar227._0_4_ = fVar52 * fVar52 + fVar80 * fVar80;
        auVar227._4_4_ = fVar81 * fVar81 + fVar82 * fVar82;
        auVar227._8_4_ = fVar52 * fVar52 + fVar80 * fVar80;
        auVar227._12_4_ = fVar81 * fVar81 + fVar82 * fVar82;
        auVar155 = NEON_ext(auVar168,auVar168,4,1);
        auVar168 = NEON_ext(auVar254,auVar254,4,1);
        auVar86 = NEON_ext(auVar227,auVar227,4,1);
        auVar241._0_4_ = auVar155._0_4_ + auVar155._4_4_;
        auVar241._4_4_ = auVar155._8_4_ + auVar155._12_4_;
        auVar241._8_4_ = auVar155._0_4_ + auVar155._4_4_;
        auVar241._12_4_ = auVar155._8_4_ + auVar155._12_4_;
        auVar29._0_4_ = auVar168._0_4_ + auVar168._4_4_;
        auVar29._4_4_ = auVar168._8_4_ + auVar168._12_4_;
        auVar29._8_4_ = auVar168._0_4_ + auVar168._4_4_;
        auVar29._12_4_ = auVar168._8_4_ + auVar168._12_4_;
        auVar30._0_4_ = auVar86._0_4_ + auVar86._4_4_;
        auVar30._4_4_ = auVar86._8_4_ + auVar86._12_4_;
        auVar30._8_4_ = auVar86._0_4_ + auVar86._4_4_;
        auVar30._12_4_ = auVar86._8_4_ + auVar86._12_4_;
        auVar155 = NEON_frsqrte(auVar241,4);
        auVar168 = NEON_frsqrte(auVar29,4);
        iVar199 = -(uint)(auVar30._0_4_ == 0.0);
        iVar205 = -(uint)(auVar30._4_4_ == 0.0);
        iVar207 = -(uint)(auVar30._8_4_ == 0.0);
        iVar209 = -(uint)(auVar30._12_4_ == 0.0);
        auVar86 = NEON_frsqrte(auVar30,4);
        auVar261._0_4_ = auVar241._0_4_ * auVar155._0_4_;
        auVar261._4_4_ = auVar241._4_4_ * auVar155._4_4_;
        auVar261._8_4_ = auVar241._8_4_ * auVar155._8_4_;
        auVar261._12_4_ = auVar241._12_4_ * auVar155._12_4_;
        iVar222 = -(uint)(auVar241._0_4_ == 0.0);
        iVar232 = -(uint)(auVar241._4_4_ == 0.0);
        iVar233 = -(uint)(auVar241._8_4_ == 0.0);
        iVar234 = -(uint)(auVar241._12_4_ == 0.0);
        iVar238 = -(uint)(auVar29._0_4_ == 0.0);
        iVar245 = -(uint)(auVar29._4_4_ == 0.0);
        iVar247 = -(uint)(auVar29._8_4_ == 0.0);
        auVar253._0_4_ = auVar30._0_4_ * auVar86._0_4_;
        auVar253._4_4_ = auVar30._4_4_ * auVar86._4_4_;
        auVar253._8_4_ = auVar30._8_4_ * auVar86._8_4_;
        auVar253._12_4_ = auVar30._12_4_ * auVar86._12_4_;
        auVar254 = NEON_frsqrts(auVar86,auVar253,4);
        auVar183._0_4_ = auVar86._0_4_ * auVar254._0_4_;
        auVar183._4_4_ = auVar86._4_4_ * auVar254._4_4_;
        auVar183._8_4_ = auVar86._8_4_ * auVar254._8_4_;
        auVar183._12_4_ = auVar86._12_4_ * auVar254._12_4_;
        auVar254 = NEON_frsqrts(auVar155,auVar261,4);
        auVar86._4_4_ = auVar29._4_4_ * auVar168._4_4_;
        auVar86._0_4_ = auVar29._0_4_ * auVar168._0_4_;
        auVar86._8_4_ = auVar29._8_4_ * auVar168._8_4_;
        auVar86._12_4_ = auVar29._12_4_ * auVar168._12_4_;
        auVar86 = NEON_frsqrts(auVar168,auVar86,4);
        auVar87._0_4_ = auVar30._0_4_ * auVar183._0_4_;
        auVar87._4_4_ = auVar30._4_4_ * auVar183._4_4_;
        auVar87._8_4_ = auVar30._8_4_ * auVar183._8_4_;
        auVar87._12_4_ = auVar30._12_4_ * auVar183._12_4_;
        auVar214._0_4_ = auVar155._0_4_ * auVar254._0_4_;
        auVar214._4_4_ = auVar155._4_4_ * auVar254._4_4_;
        auVar214._8_4_ = auVar155._8_4_ * auVar254._8_4_;
        auVar214._12_4_ = auVar155._12_4_ * auVar254._12_4_;
        auVar235._0_4_ = auVar168._0_4_ * auVar86._0_4_;
        auVar235._4_4_ = auVar168._4_4_ * auVar86._4_4_;
        auVar235._8_4_ = auVar168._8_4_ * auVar86._8_4_;
        auVar235._12_4_ = auVar168._12_4_ * auVar86._12_4_;
        auVar168 = NEON_frsqrts(auVar183,auVar87,4);
        auVar156._0_4_ = auVar241._0_4_ * auVar214._0_4_;
        auVar156._4_4_ = auVar241._4_4_ * auVar214._4_4_;
        auVar156._8_4_ = auVar241._8_4_ * auVar214._8_4_;
        auVar156._12_4_ = auVar241._12_4_ * auVar214._12_4_;
        auVar169._0_4_ = auVar29._0_4_ * auVar235._0_4_;
        auVar169._4_4_ = auVar29._4_4_ * auVar235._4_4_;
        auVar169._8_4_ = auVar29._8_4_ * auVar235._8_4_;
        auVar169._12_4_ = auVar29._12_4_ * auVar235._12_4_;
        auVar86 = NEON_frsqrts(auVar214,auVar156,4);
        auVar155 = NEON_frsqrts(auVar235,auVar169,4);
        fVar52 = fVar52 * auVar183._0_4_ * auVar168._0_4_;
        fVar80 = fVar80 * auVar183._4_4_ * auVar168._4_4_;
        fVar81 = fVar81 * auVar183._8_4_ * auVar168._8_4_;
        fVar82 = fVar82 * auVar183._12_4_ * auVar168._12_4_;
        fStack_4b8 = (float)_UNK_03cab3a8;
        fStack_4b4 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
        local_4c0 = (float)_DAT_03cab3a0;
        fStack_4bc = (float)((ulong)_DAT_03cab3a0 >> 0x20);
        auVar168 = NEON_fmov(0x40800000,4);
        fVar109 = fVar109 * auVar214._0_4_ * auVar86._0_4_;
        fVar128 = fVar128 * auVar214._4_4_ * auVar86._4_4_;
        fVar131 = fVar131 * auVar214._8_4_ * auVar86._8_4_;
        fVar133 = fVar133 * auVar214._12_4_ * auVar86._12_4_;
        fVar180 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar199 >> 0x18),
                                  CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                           ~(byte)((uint)iVar199 >> 0x10),
                                           CONCAT11((byte)((uint)fVar52 >> 8) &
                                                    ~(byte)((uint)iVar199 >> 8),
                                                    SUB41(fVar52,0) & ~(byte)iVar199)));
        auVar153._0_8_ =
             CONCAT17((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                      CONCAT16((byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar205 >> 0x10),
                               CONCAT15((byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar205 >> 8),
                                        CONCAT14(SUB41(fVar80,0) & ~(byte)iVar205,fVar180))));
        auVar153[8] = SUB41(fVar81,0) & ~(byte)iVar207;
        auVar153[9] = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar207 >> 8);
        auVar153[10] = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10);
        auVar153[0xb] = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18);
        auVar157[0xc] = SUB41(fVar82,0) & ~(byte)iVar209;
        auVar157._0_12_ = auVar153;
        auVar157[0xd] = (byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar209 >> 8);
        auVar157[0xe] = (byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
        auVar157[0xf] = (byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
        fVar80 = (float)CONCAT13((byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar222 >> 0x18),
                                 CONCAT12((byte)((uint)fVar109 >> 0x10) &
                                          ~(byte)((uint)iVar222 >> 0x10),
                                          CONCAT11((byte)((uint)fVar109 >> 8) &
                                                   ~(byte)((uint)iVar222 >> 8),
                                                   SUB41(fVar109,0) & ~(byte)iVar222)));
        auVar60._0_8_ =
             CONCAT17((byte)((uint)fVar128 >> 0x18) & ~(byte)((uint)iVar232 >> 0x18),
                      CONCAT16((byte)((uint)fVar128 >> 0x10) & ~(byte)((uint)iVar232 >> 0x10),
                               CONCAT15((byte)((uint)fVar128 >> 8) & ~(byte)((uint)iVar232 >> 8),
                                        CONCAT14(SUB41(fVar128,0) & ~(byte)iVar232,fVar80))));
        auVar60[8] = SUB41(fVar131,0) & ~(byte)iVar233;
        auVar60[9] = (byte)((uint)fVar131 >> 8) & ~(byte)((uint)iVar233 >> 8);
        auVar60[10] = (byte)((uint)fVar131 >> 0x10) & ~(byte)((uint)iVar233 >> 0x10);
        auVar60[0xb] = (byte)((uint)fVar131 >> 0x18) & ~(byte)((uint)iVar233 >> 0x18);
        auVar60[0xc] = SUB41(fVar133,0) & ~(byte)iVar234;
        auVar60[0xd] = (byte)((uint)fVar133 >> 8) & ~(byte)((uint)iVar234 >> 8);
        auVar60[0xe] = (byte)((uint)fVar133 >> 0x10) & ~(byte)((uint)iVar234 >> 0x10);
        auVar60[0xf] = (byte)((uint)fVar133 >> 0x18) & ~(byte)((uint)iVar234 >> 0x18);
        fVar110 = fVar110 * auVar235._0_4_ * auVar155._0_4_;
        fVar129 = fVar129 * auVar235._4_4_ * auVar155._4_4_;
        fVar132 = fVar132 * auVar235._8_4_ * auVar155._8_4_;
        fVar52 = (float)((ulong)auVar60._0_8_ >> 0x20);
        fVar131 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar238 >> 0x18),
                                  CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                           ~(byte)((uint)iVar238 >> 0x10),
                                           CONCAT11((byte)((uint)fVar110 >> 8) &
                                                    ~(byte)((uint)iVar238 >> 8),
                                                    SUB41(fVar110,0) & ~(byte)iVar238)));
        auVar112._0_8_ =
             CONCAT17((byte)((uint)fVar129 >> 0x18) & ~(byte)((uint)iVar245 >> 0x18),
                      CONCAT16((byte)((uint)fVar129 >> 0x10) & ~(byte)((uint)iVar245 >> 0x10),
                               CONCAT15((byte)((uint)fVar129 >> 8) & ~(byte)((uint)iVar245 >> 8),
                                        CONCAT14(SUB41(fVar129,0) & ~(byte)iVar245,fVar131))));
        auVar112[8] = SUB41(fVar132,0) & ~(byte)iVar247;
        auVar112[9] = (byte)((uint)fVar132 >> 8) & ~(byte)((uint)iVar247 >> 8);
        auVar112[10] = (byte)((uint)fVar132 >> 0x10) & ~(byte)((uint)iVar247 >> 0x10);
        auVar112[0xb] = (byte)((uint)fVar132 >> 0x18) & ~(byte)((uint)iVar247 >> 0x18);
        auVar86 = NEON_ext(auVar60,auVar60,8,1);
        fVar248 = (float)((ulong)auVar153._0_8_ >> 0x20);
        fVar128 = auVar112._8_4_;
        fVar81 = local_460 + local_4c0 * fVar180 + (float)_DAT_03cac210 * fVar52 +
                 (float)_DAT_03cabb00 * fVar128;
        fVar82 = fStack_45c + fStack_4bc * fVar180 + (float)((ulong)_DAT_03cac210 >> 0x20) * fVar52
                 + (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar128;
        fVar109 = fStack_458 + fStack_4b8 * fVar180 + (float)_UNK_03cac218 * fVar52 +
                  (float)_UNK_03cabb08 * fVar128;
        fVar128 = fStack_454 + fStack_4b4 * fVar180 + (float)((ulong)_UNK_03cac218 >> 0x20) * fVar52
                  + (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar128;
        fVar129 = (float)((ulong)auVar112._0_8_ >> 0x20);
        auVar155 = NEON_ext(auVar157,auVar157,8,1);
        fVar52 = auVar86._0_4_;
        auVar215._0_4_ = SQRT(fVar81) * 0.5 * auVar168._0_4_;
        auVar215._4_4_ = SQRT(fVar82) * 0.5 * auVar168._4_4_;
        auVar215._8_4_ = SQRT(fVar109) * 0.5 * auVar168._8_4_;
        auVar215._12_4_ = SQRT(fVar128) * 0.5 * auVar168._12_4_;
        auVar168 = NEON_frecpe(auVar215,4);
        fVar133 = auVar155._0_4_ + fVar131;
        auVar166._8_4_ = fVar52 + -fVar129;
        auVar166._4_4_ = fVar133;
        auVar86 = NEON_frecps(auVar168,auVar215,4);
        auVar171._4_4_ = fVar81;
        auVar171._0_4_ = fVar81;
        auVar171._8_4_ = fVar81;
        auVar171._12_4_ = fVar81;
        auVar158._4_4_ = fVar82;
        auVar158._0_4_ = fVar82;
        auVar158._8_4_ = fVar82;
        auVar158._12_4_ = fVar82;
        auVar170._12_4_ = -(uint)(fVar81 <= fVar82);
        auVar170._8_4_ = -(uint)(fVar81 <= fVar82);
        auVar170._4_4_ = -(uint)(fVar81 <= fVar82);
        auVar170._0_4_ = -(uint)(fVar81 <= fVar82);
        auVar171 = auVar171 ^ (auVar171 ^ auVar158) & auVar170;
        auVar114._0_4_ = auVar168._0_4_ * auVar86._0_4_;
        auVar114._4_4_ = auVar168._4_4_ * auVar86._4_4_;
        auVar114._8_4_ = auVar168._8_4_ * auVar86._8_4_;
        auVar114._12_4_ = auVar168._12_4_ * auVar86._12_4_;
        auVar86 = NEON_frecps(auVar114,auVar215,4);
        auVar216._4_4_ = fVar109;
        auVar216._0_4_ = fVar109;
        auVar216._8_4_ = fVar109;
        auVar216._12_4_ = fVar109;
        fVar110 = auVar114._0_4_ * auVar86._0_4_;
        fVar132 = auVar114._4_4_ * auVar86._4_4_;
        fVar180 = auVar114._8_4_ * auVar86._8_4_;
        fVar134 = auVar114._12_4_ * auVar86._12_4_;
        auVar159._0_8_ =
             CONCAT44(-(uint)(auVar171._4_4_ <= fVar109),-(uint)(auVar171._0_4_ <= fVar109));
        auVar159._8_4_ = -(uint)(auVar171._8_4_ <= fVar109);
        auVar159._12_4_ = -(uint)(auVar171._12_4_ <= fVar109);
        auVar184._8_8_ = auVar159._8_8_;
        auVar184._0_8_ = auVar159._0_8_;
        auVar171 = auVar171 ^ (auVar171 ^ auVar216) & auVar184;
        auVar217._0_4_ = (fVar248 + fVar80) * fVar132;
        auVar217._4_4_ = fVar132 * 0.0;
        auVar217._8_4_ = (fVar52 + fVar129) * fVar132;
        auVar217._12_4_ = (fVar131 + -auVar153._8_4_) * fVar132;
        auVar61._8_8_ = _UNK_03cabe68;
        auVar61._0_8_ = _DAT_03cabe60;
        auVar166._0_4_ = (fVar248 + fVar80) * fVar110;
        auVar202._0_8_ = auVar166._0_8_ << 0x20;
        auVar202._8_4_ = fVar133 * fVar110;
        auVar202._12_4_ = (fVar52 + -fVar129) * fVar110;
        auVar172._0_4_ = (auVar155._0_4_ + fVar131) * fVar180;
        auVar172._4_4_ = (fVar52 + fVar129) * fVar180;
        auVar172._12_4_ = (fVar248 - fVar80) * fVar180;
        auVar203._4_12_ = auVar202._4_12_;
        auVar203._0_4_ = SQRT(fVar81) * 0.5;
        auVar218._8_8_ = auVar217._8_8_;
        auVar218._4_4_ = SQRT(fVar82) * 0.5;
        auVar218._0_4_ = auVar217._0_4_;
        auVar224._0_4_ = (fVar52 - fVar129) * fVar134;
        auVar224._4_4_ = (fVar131 - auVar153._8_4_) * fVar134;
        auVar224._8_4_ = (fVar248 - fVar80) * fVar134;
        auVar172._8_4_ = SQRT(fVar109) * 0.5;
        auVar224._12_4_ = SQRT(fVar128) * 0.5;
        auVar155._4_4_ = -(uint)(fVar81 <= fVar82);
        auVar155._0_4_ = -(uint)(fVar81 <= fVar82);
        auVar155._8_4_ = -(uint)(fVar81 <= fVar82);
        auVar155._12_4_ = -(uint)(fVar81 <= fVar82);
        auVar203 = auVar203 ^ (auVar203 ^ auVar218) & auVar155;
        auVar88._0_4_ = -(uint)(auVar171._0_4_ <= fVar128);
        auVar88._4_4_ = -(uint)(auVar171._4_4_ <= fVar128);
        auVar88._8_4_ = -(uint)(auVar171._8_4_ <= fVar128);
        auVar88._12_4_ = -(uint)(auVar171._12_4_ <= fVar128);
        auVar185._8_8_ = _UNK_03caa5b8;
        auVar185._0_8_ = _DAT_03caa5b0;
        auVar203 = auVar203 ^ (auVar203 ^ auVar172) & auVar159;
        auVar203 = auVar203 ^ (auVar203 ^ auVar224) & auVar88;
        fVar52 = auVar203._0_4_;
        fVar129 = -fVar52;
        fVar80 = auVar203._4_4_;
        fVar132 = -fVar80;
        fVar81 = auVar203._8_4_;
        fVar180 = -fVar81;
        fVar128 = auVar203._12_4_;
        auVar225._4_4_ = fVar81;
        auVar225._0_4_ = fVar81;
        auVar225._8_4_ = fVar81;
        auVar225._12_4_ = fVar81;
        auVar239._4_4_ = fVar80;
        auVar239._0_4_ = fVar80;
        auVar239._8_4_ = fVar80;
        auVar239._12_4_ = fVar80;
        auVar86 = NEON_ext(auVar225,auVar203,0xc,1);
        auVar155 = NEON_ext(auVar239,auVar86,0xc,1);
        fVar131 = (float)_DAT_03cab640;
        fVar109 = auVar155._0_4_ * fVar131;
        fVar133 = (float)((ulong)_DAT_03cab640 >> 0x20);
        fVar134 = auVar155._4_4_ * fVar133;
        fVar110 = (float)_UNK_03cab648;
        fVar248 = auVar155._8_4_ * fVar110;
        fVar82 = (float)((ulong)_UNK_03cab648 >> 0x20);
        fVar250 = auVar155._12_4_ * fVar82;
        auVar89._0_4_ = fVar52 * fVar131;
        auVar89._4_4_ = fVar80 * fVar133;
        auVar89._8_4_ = fVar81 * fVar110;
        auVar89._12_4_ = fVar52 * fVar82;
        fVar52 = (float)((ulong)DAT_03cab620 >> 0x20);
        fVar80 = (float)((ulong)DAT_03cab628 >> 0x20);
        auVar236._0_4_ =
             ((float)_DAT_03cabe60 * fVar128 + auVar89._0_4_ * 0.0 + (float)_DAT_03caaaa0 * fVar109)
             - auVar86._0_4_ * (float)DAT_03cab620;
        auVar236._4_4_ =
             ((float)((ulong)_DAT_03cabe60 >> 0x20) * fVar128 + auVar89._4_4_ * 0.0 +
             (float)((ulong)_DAT_03caaaa0 >> 0x20) * fVar134) - auVar86._4_4_ * fVar52;
        auVar236._8_4_ =
             ((float)_UNK_03cabe68 * fVar128 + auVar89._8_4_ * 0.0 + (float)_UNK_03caaaa8 * fVar248)
             - auVar86._8_4_ * (float)DAT_03cab628;
        auVar236._12_4_ =
             ((float)((ulong)_UNK_03cabe68 >> 0x20) * fVar128 + auVar89._12_4_ * 0.0 +
             (float)((ulong)_UNK_03caaaa8 >> 0x20) * fVar250) - auVar86._12_4_ * fVar80;
        auVar255._0_4_ =
             (float)_DAT_03caa5b0 * fVar128 + auVar89._0_4_ * 0.0 + (float)DAT_03cab620 * fVar109 +
             (float)_DAT_03caad80 * auVar86._0_4_;
        auVar255._4_4_ =
             (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar128 + auVar89._4_4_ * 0.0 +
             fVar52 * fVar134 + (float)((ulong)_DAT_03caad80 >> 0x20) * auVar86._4_4_;
        auVar255._8_4_ =
             (float)_UNK_03caa5b8 * fVar128 + auVar89._8_4_ * 0.0 + (float)DAT_03cab628 * fVar248 +
             (float)_UNK_03caad88 * auVar86._8_4_;
        auVar255._12_4_ =
             (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar128 + auVar89._12_4_ * 0.0 +
             fVar80 * fVar250 + (float)((ulong)_UNK_03caad88 >> 0x20) * auVar86._12_4_;
        auVar136._4_4_ = auVar236._8_4_;
        auVar136._0_4_ = auVar236._8_4_;
        auVar136._8_4_ = auVar236._8_4_;
        auVar136._12_4_ = auVar236._8_4_;
        auVar90._4_12_ = auVar89._4_12_;
        auVar90._0_4_ = fVar129;
        auVar92._0_8_ = auVar90._0_8_;
        auVar92._8_4_ = fVar132;
        auVar92._12_4_ = auVar89._12_4_;
        auVar91._8_8_ = auVar92._8_8_;
        auVar91._4_4_ = fVar180;
        auVar91._0_4_ = fVar129;
        auVar93._0_12_ = auVar91._0_12_;
        auVar93._12_4_ = fVar180;
        auVar219._4_4_ = auVar236._4_4_;
        auVar219._0_4_ = auVar236._4_4_;
        auVar219._8_4_ = auVar236._4_4_;
        auVar219._12_4_ = auVar236._4_4_;
        auVar155 = NEON_ext(auVar136,auVar236,0xc,1);
        auVar168 = NEON_ext(auVar219,auVar155,0xc,1);
        auVar254 = NEON_ext(auVar93,auVar93,8,1);
        fVar52 = auVar254._0_4_;
        auVar94._4_12_ = auVar93._4_12_;
        auVar94._0_4_ = fVar52;
        fVar80 = auVar254._8_4_;
        auVar96._0_8_ = auVar94._0_8_;
        auVar96._8_4_ = fVar80;
        auVar96._12_4_ = fVar180;
        auVar95._8_8_ = auVar96._8_8_;
        auVar95._4_4_ = fVar129;
        auVar95._0_4_ = fVar52;
        auVar97._0_12_ = auVar95._0_12_;
        auVar97._12_4_ = fVar132;
        auVar226._4_4_ = auVar255._8_4_;
        auVar226._0_4_ = auVar255._8_4_;
        auVar226._8_4_ = auVar255._8_4_;
        auVar226._12_4_ = auVar255._8_4_;
        auVar240._4_4_ = auVar255._4_4_;
        auVar240._0_4_ = auVar255._4_4_;
        auVar240._8_4_ = auVar255._4_4_;
        auVar240._12_4_ = auVar255._4_4_;
        auVar227 = NEON_ext(auVar226,auVar255,0xc,1);
        auVar241 = NEON_ext(auVar240,auVar227,0xc,1);
        auVar86 = NEON_ext(auVar97,auVar254,8,1);
        auVar86 = NEON_ext(auVar86,auVar86,0xc,1);
        fVar81 = (fVar129 * auVar236._12_4_ + fVar128 * auVar236._0_4_ * fVar131 +
                 auVar86._0_4_ * auVar168._0_4_ * fVar131) - auVar155._0_4_ * fVar52;
        fVar82 = (fVar132 * auVar236._12_4_ + fVar128 * auVar236._4_4_ * fVar133 +
                 auVar86._4_4_ * auVar168._4_4_ * fVar133) - auVar155._4_4_ * auVar254._4_4_;
        fVar109 = (fVar180 * auVar236._12_4_ + fVar128 * auVar236._8_4_ * fVar110 +
                  auVar86._8_4_ * auVar168._8_4_ * fVar110) - auVar155._8_4_ * fVar80;
        fVar131 = (fVar129 * auVar255._12_4_ + fVar128 * auVar255._0_4_ * fVar131 +
                  auVar86._0_4_ * auVar241._0_4_ * fVar131) - auVar227._0_4_ * fVar52;
        fVar133 = (fVar132 * auVar255._12_4_ + fVar128 * auVar255._4_4_ * fVar133 +
                  auVar86._4_4_ * auVar241._4_4_ * fVar133) - auVar227._4_4_ * auVar254._4_4_;
        fVar80 = (fVar180 * auVar255._12_4_ + fVar128 * auVar255._8_4_ * fVar110 +
                 auVar86._8_4_ * auVar241._8_4_ * fVar110) - auVar227._8_4_ * fVar80;
        auVar31._0_4_ = fVar81 * fVar81 + fVar82 * fVar82;
        auVar31._4_4_ = fVar109 * fVar109 + 0.0;
        auVar31._8_4_ = fVar81 * fVar81 + fVar82 * fVar82;
        auVar31._12_4_ = fVar109 * fVar109 + 0.0;
        auVar32._0_4_ = fVar131 * fVar131 + fVar133 * fVar133;
        auVar32._4_4_ = fVar80 * fVar80 + 0.0;
        auVar32._8_4_ = fVar131 * fVar131 + fVar133 * fVar133;
        auVar32._12_4_ = fVar80 * fVar80 + 0.0;
        auVar86 = NEON_ext(auVar31,auVar31,4,1);
        auVar155 = NEON_ext(auVar32,auVar32,4,1);
        auVar33._0_4_ = auVar86._0_4_ + auVar86._4_4_;
        auVar33._4_4_ = auVar86._8_4_ + auVar86._12_4_;
        auVar33._8_4_ = auVar86._0_4_ + auVar86._4_4_;
        auVar33._12_4_ = auVar86._8_4_ + auVar86._12_4_;
        auVar34._0_4_ = auVar155._0_4_ + auVar155._4_4_;
        auVar34._4_4_ = auVar155._8_4_ + auVar155._12_4_;
        auVar34._8_4_ = auVar155._0_4_ + auVar155._4_4_;
        auVar34._12_4_ = auVar155._8_4_ + auVar155._12_4_;
        auVar86 = NEON_frsqrte(auVar33,4);
        auVar155 = NEON_frsqrte(auVar34,4);
        auVar220._0_4_ = auVar33._0_4_ * auVar86._0_4_;
        auVar220._4_4_ = auVar33._4_4_ * auVar86._4_4_;
        auVar220._8_4_ = auVar33._8_4_ * auVar86._8_4_;
        auVar220._12_4_ = auVar33._12_4_ * auVar86._12_4_;
        auVar228._0_4_ = auVar34._0_4_ * auVar155._0_4_;
        auVar228._4_4_ = auVar34._4_4_ * auVar155._4_4_;
        auVar228._8_4_ = auVar34._8_4_ * auVar155._8_4_;
        auVar228._12_4_ = auVar34._12_4_ * auVar155._12_4_;
        auVar168 = NEON_frsqrts(auVar86,auVar220,4);
        auVar254 = NEON_frsqrts(auVar155,auVar228,4);
        auVar137._0_4_ = auVar86._0_4_ * auVar168._0_4_;
        auVar137._4_4_ = auVar86._4_4_ * auVar168._4_4_;
        auVar137._8_4_ = auVar86._8_4_ * auVar168._8_4_;
        auVar137._12_4_ = auVar86._12_4_ * auVar168._12_4_;
        iVar222 = -(uint)(auVar33._0_4_ == 0.0);
        iVar232 = -(uint)(auVar33._4_4_ == 0.0);
        iVar233 = -(uint)(auVar33._8_4_ == 0.0);
        iVar234 = -(uint)(auVar33._12_4_ == 0.0);
        auVar204._0_4_ = auVar155._0_4_ * auVar254._0_4_;
        auVar204._4_4_ = auVar155._4_4_ * auVar254._4_4_;
        auVar204._8_4_ = auVar155._8_4_ * auVar254._8_4_;
        auVar204._12_4_ = auVar155._12_4_ * auVar254._12_4_;
        auVar98._0_4_ = auVar33._0_4_ * auVar137._0_4_;
        auVar98._4_4_ = auVar33._4_4_ * auVar137._4_4_;
        auVar98._8_4_ = auVar33._8_4_ * auVar137._8_4_;
        auVar98._12_4_ = auVar33._12_4_ * auVar137._12_4_;
        auVar221._0_4_ = auVar34._0_4_ * auVar204._0_4_;
        auVar221._4_4_ = auVar34._4_4_ * auVar204._4_4_;
        auVar221._8_4_ = auVar34._8_4_ * auVar204._8_4_;
        auVar221._12_4_ = auVar34._12_4_ * auVar204._12_4_;
        iVar199 = -(uint)(auVar34._0_4_ == 0.0);
        iVar205 = -(uint)(auVar34._4_4_ == 0.0);
        iVar207 = -(uint)(auVar34._8_4_ == 0.0);
        iVar209 = -(uint)(auVar34._12_4_ == 0.0);
        auVar86 = NEON_frsqrts(auVar137,auVar98,4);
        auVar155 = NEON_frsqrts(auVar204,auVar221,4);
        fVar81 = auVar137._0_4_ * auVar86._0_4_ * fVar81;
        fVar82 = auVar137._4_4_ * auVar86._4_4_ * fVar82;
        fVar109 = auVar137._8_4_ * auVar86._8_4_ * fVar109;
        fVar52 = auVar137._12_4_ * auVar86._12_4_ * 0.0;
        fVar110 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar222 >> 0x18),
                                  CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                           ~(byte)((uint)iVar222 >> 0x10),
                                           CONCAT11((byte)((uint)fVar81 >> 8) &
                                                    ~(byte)((uint)iVar222 >> 8),
                                                    SUB41(fVar81,0) & ~(byte)iVar222)));
        auVar154._0_8_ =
             CONCAT17((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar232 >> 0x18),
                      CONCAT16((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar232 >> 0x10),
                               CONCAT15((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar232 >> 8),
                                        CONCAT14(SUB41(fVar82,0) & ~(byte)iVar232,fVar110))));
        auVar154[8] = SUB41(fVar109,0) & ~(byte)iVar233;
        auVar154[9] = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar233 >> 8);
        auVar154[10] = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar233 >> 0x10);
        auVar154[0xb] = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar233 >> 0x18);
        auVar160[0xc] = SUB41(fVar52,0) & ~(byte)iVar234;
        auVar160._0_12_ = auVar154;
        auVar160[0xd] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar234 >> 8);
        auVar160[0xe] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar234 >> 0x10);
        auVar160[0xf] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar234 >> 0x18);
        fVar131 = auVar204._0_4_ * auVar155._0_4_ * fVar131;
        fVar133 = auVar204._4_4_ * auVar155._4_4_ * fVar133;
        fVar80 = auVar204._8_4_ * auVar155._8_4_ * fVar80;
        fVar52 = auVar204._12_4_ * auVar155._12_4_ * 0.0;
        fVar82 = (float)CONCAT13((byte)((uint)fVar131 >> 0x18) & ~(byte)((uint)iVar199 >> 0x18),
                                 CONCAT12((byte)((uint)fVar131 >> 0x10) &
                                          ~(byte)((uint)iVar199 >> 0x10),
                                          CONCAT11((byte)((uint)fVar131 >> 8) &
                                                   ~(byte)((uint)iVar199 >> 8),
                                                   SUB41(fVar131,0) & ~(byte)iVar199)));
        auVar113._0_8_ =
             CONCAT17((byte)((uint)fVar133 >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                      CONCAT16((byte)((uint)fVar133 >> 0x10) & ~(byte)((uint)iVar205 >> 0x10),
                               CONCAT15((byte)((uint)fVar133 >> 8) & ~(byte)((uint)iVar205 >> 8),
                                        CONCAT14(SUB41(fVar133,0) & ~(byte)iVar205,fVar82))));
        auVar113[8] = SUB41(fVar80,0) & ~(byte)iVar207;
        auVar113[9] = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar207 >> 8);
        auVar113[10] = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10);
        auVar113[0xb] = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18);
        auVar62[0xc] = SUB41(fVar52,0) & ~(byte)iVar209;
        auVar62._0_12_ = auVar113;
        auVar62[0xd] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar209 >> 8);
        auVar62[0xe] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
        auVar62[0xf] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
        fVar52 = (float)((ulong)auVar154._0_8_ >> 0x20);
        fVar52 = fVar52 * fVar52;
        fVar80 = auVar154._8_4_ * auVar154._8_4_;
        fVar81 = auVar160._12_4_ * auVar160._12_4_;
        fVar109 = (float)((ulong)auVar113._0_8_ >> 0x20);
        fVar109 = fVar109 * fVar109;
        fVar128 = auVar113._8_4_ * auVar113._8_4_;
        fVar131 = auVar62._12_4_ * auVar62._12_4_;
        auVar35._0_4_ = fVar110 * fVar110 + fVar52;
        auVar35._4_4_ = fVar80 + fVar81;
        auVar35._8_4_ = fVar110 * fVar110 + fVar52;
        auVar35._12_4_ = fVar80 + fVar81;
        auVar36._0_4_ = fVar82 * fVar82 + fVar109;
        auVar36._4_4_ = fVar128 + fVar131;
        auVar36._8_4_ = fVar82 * fVar82 + fVar109;
        auVar36._12_4_ = fVar128 + fVar131;
        auVar155 = NEON_ext(auVar35,auVar35,4,1);
        fVar82 = *(float *)(param_2 + 0xb8);
        fVar80 = *(float *)(param_2 + 0xbc);
        auVar86 = NEON_ext(auVar36,auVar36,4,1);
        auVar173._0_4_ = -(uint)(auVar155._0_4_ + auVar155._4_4_ == 0.0);
        fVar109 = *(float *)(param_2 + 0xc0);
        iVar199 = -(uint)(auVar86._0_4_ + auVar86._4_4_ == 0.0);
        fVar128 = *(float *)(param_2 + 0xc4);
        local_348 = 0;
        local_388 = 0;
        local_3c8 = 0;
        local_408 = 0;
        local_448[0] = 0.0;
        local_448[1] = 0.0;
        fVar52 = local_480 + 0.0;
        fVar79 = fVar79 + fStack_47c;
        fVar81 = auVar178._8_4_ + 0.0;
        auVar173._4_4_ = auVar173._0_4_;
        auVar173._8_4_ = auVar173._0_4_;
        auVar173._12_4_ = auVar173._0_4_;
        auVar61 = auVar61 ^ (auVar61 ^ auVar160) & ~auVar173;
        fStack_4a8 = auVar61._8_4_;
        fStack_4a4 = auVar61._12_4_;
        local_4b0 = auVar61._0_4_;
        fStack_4ac = auVar61._4_4_;
        auVar178._4_4_ = iVar199;
        auVar178._0_4_ = iVar199;
        auVar178._8_4_ = iVar199;
        auVar178._12_4_ = iVar199;
        auVar62 = auVar62 ^ (auVar62 ^ auVar185) & auVar178;
        fStack_498 = auVar62._8_4_;
        fStack_494 = auVar62._12_4_;
        local_4a0 = auVar62._0_4_;
        fStack_49c = auVar62._4_4_;
        local_490 = 0.0;
        local_480 = 0.0;
        if (0.0 < *(float *)(param_2 + 0x88)) {
          fVar133 = fVar52 + local_4a0 * fVar80;
          fVar110 = fVar79 + fStack_49c * fVar80;
          fVar134 = fVar81 + fStack_498 * fVar80;
          fVar131 = *(float *)(param_2 + 0xb0);
          iVar199 = *(int *)(param_2 + 0x90);
          uVar22 = (ulong)iVar199;
          fVar129 = (float)_DAT_03cabd90;
          fVar132 = (float)((ulong)_DAT_03cabd90 >> 0x20);
          fVar180 = (float)_UNK_03cabd98;
          local_2b8 = 0xffffffff;
          uStack_2b0 = 1;
          local_2a0 = 0;
          memset(auStack_298,0xff,0x200);
          local_300 = CONCAT44(fVar110,fVar133);
          auVar13._8_4_ = fVar134;
          auVar13._0_8_ = local_300;
          auVar13._12_4_ = fStack_494 * fVar80 + 0.0;
          local_490 = 0.0;
          local_330 = 0xffff;
          auVar65._8_4_ = 0x7f7fffee;
          auVar65._0_8_ = 0x7f7fffee7f7fffee;
          auVar65._12_4_ = 0x7f7fffee;
          local_32c = 0;
          local_328 = 0;
          auVar86 = NEON_ext(auVar13,auVar13,8,1);
          uStack_2f8 = (ulong)(uint)auVar86._0_4_;
          auVar155 = ZEXT816(0x3f800000);
          fVar133 = (fVar133 + fVar129 * fVar131) - fVar133;
          fVar110 = (fVar110 + fVar132 * fVar131) - fVar110;
          fVar131 = (fVar134 + fVar180 * fVar131) - auVar86._0_4_;
          iVar205 = -(uint)(fVar133 == 0.0);
          iVar207 = -(uint)(fVar110 == 0.0);
          iVar209 = -(uint)(fVar131 == 0.0);
          iVar222 = -(uint)(auVar155._0_4_ == 0.0);
          fVar80 = (float)CONCAT13((byte)((uint)fVar133 >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                                   CONCAT12((byte)((uint)fVar133 >> 0x10) &
                                            ~(byte)((uint)iVar205 >> 0x10),
                                            CONCAT11((byte)((uint)fVar133 >> 8) &
                                                     ~(byte)((uint)iVar205 >> 8),
                                                     SUB41(fVar133,0) & ~(byte)iVar205)));
          auVar54._0_8_ =
               CONCAT17((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18),
                        CONCAT16((byte)((uint)fVar110 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10),
                                 CONCAT15((byte)((uint)fVar110 >> 8) & ~(byte)((uint)iVar207 >> 8),
                                          CONCAT14(SUB41(fVar110,0) & ~(byte)iVar207,fVar80))));
          auVar54[8] = SUB41(fVar131,0) & ~(byte)iVar209;
          auVar54[9] = (byte)((uint)fVar131 >> 8) & ~(byte)((uint)iVar209 >> 8);
          auVar54[10] = (byte)((uint)fVar131 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
          auVar54[0xb] = (byte)((uint)fVar131 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
          auVar63._12_2_ = 0;
          auVar63._0_12_ = auVar54;
          auVar63[0xe] = auVar155[2] & ~(byte)((uint)iVar222 >> 0x10);
          auVar63[0xf] = auVar155[3] & ~(byte)((uint)iVar222 >> 0x18);
          local_340 = 0;
          local_338 = (undefined8 *)0x0;
          local_320 = 0xfb0001;
          iVar205 = -(uint)(fVar80 == 0.0);
          fVar131 = (float)((ulong)auVar54._0_8_ >> 0x20);
          iVar207 = -(uint)(fVar131 == 0.0);
          iVar209 = -(uint)(auVar54._8_4_ == 0.0);
          iVar222 = -(uint)(auVar63._12_4_ == 0.0);
          uStack_2e8 = auVar63._8_8_;
          local_2c0 = puVar18 + 0x10;
          auVar99._0_4_ = local_460 / fVar80;
          auVar99._4_4_ = fStack_45c / fVar131;
          auVar99._8_4_ = fStack_458 / auVar54._8_4_;
          auVar99._12_4_ = fStack_454 / auVar63._12_4_;
          auVar64[0] = ~(byte)iVar205;
          auVar64[1] = ~(byte)((uint)iVar205 >> 8);
          auVar64[2] = ~(byte)((uint)iVar205 >> 0x10);
          auVar64[3] = ~(byte)((uint)iVar205 >> 0x18);
          auVar64[4] = ~(byte)iVar207;
          auVar64[5] = ~(byte)((uint)iVar207 >> 8);
          auVar64[6] = ~(byte)((uint)iVar207 >> 0x10);
          auVar64[7] = ~(byte)((uint)iVar207 >> 0x18);
          auVar64[8] = ~(byte)iVar209;
          auVar64[9] = ~(byte)((uint)iVar209 >> 8);
          auVar64[10] = ~(byte)((uint)iVar209 >> 0x10);
          auVar64[0xb] = ~(byte)((uint)iVar209 >> 0x18);
          auVar64[0xc] = ~(byte)iVar222;
          auVar64[0xd] = ~(byte)((uint)iVar222 >> 8);
          auVar64[0xe] = ~(byte)((uint)iVar222 >> 0x10);
          auVar64[0xf] = ~(byte)((uint)iVar222 >> 0x18);
          auVar65 = auVar65 ^ (auVar65 ^ auVar99) & auVar64;
          pMVar1 = (MutexType *)(lVar20 + 0x120);
          uStack_2d8 = auVar65._8_8_;
          local_2e0 = auVar65._0_8_;
          local_2a8 = 2;
          local_2d0 = 0;
          uStack_2f0 = auVar54._0_8_;
          nn::os::LockMutex(pMVar1);
          local_340 = (**(code **)(**(long **)(lVar20 + 8) + 0x68))();
          if (-1 < iVar199) {
            lVar21 = 0;
            do {
              *(ulong *)((long)auStack_298 + lVar21 + 8) =
                   *(ulong *)((long)auStack_298 + lVar21 + 8) & 1;
              lVar21 = lVar21 + 8;
            } while (lVar21 != 0x1f8);
            auStack_298[1] = auStack_298[1] | 1L << (uVar22 & 0x3f);
            auStack_298[uVar22] = auStack_298[uVar22] | 2;
            local_340 = (**(code **)(**(long **)(lVar20 + 8) + 0x68))();
            local_32c = 1;
          }
          local_338 = &local_2c0;
          uVar22 = FUN_00c7a2b0(lVar20,&local_340,&local_380,1);
          nn::os::UnlockMutex(pMVar1);
          if ((uVar22 & 1) != 0) {
            fVar131 = fVar52 + local_4a0 * fVar82;
            fVar133 = fVar79 + fStack_49c * fVar82;
            fVar110 = fVar81 + fStack_498 * fVar82;
            fVar80 = *(float *)(param_2 + 0xb0);
            iVar199 = *(int *)(param_2 + 0x90);
            uVar22 = (ulong)iVar199;
            local_2b8 = 0xffffffff;
            uStack_2b0 = 1;
            local_2a0 = 0;
            memset(auStack_298,0xff,0x200);
            local_300 = CONCAT44(fVar133,fVar131);
            auVar12._8_4_ = fVar110;
            auVar12._0_8_ = local_300;
            auVar12._12_4_ = fStack_494 * fVar82 + 0.0;
            local_490 = 0.0;
            local_32c = 0;
            local_330 = 0xffff;
            local_2c0 = puVar18 + 0x10;
            auVar86 = NEON_ext(auVar12,auVar12,8,1);
            local_328 = 0;
            uStack_2f8 = (ulong)(uint)auVar86._0_4_;
            auVar155 = ZEXT816(0x3f800000);
            local_340 = 0;
            local_338 = (undefined8 *)0x0;
            local_320 = 0xfb0001;
            fVar131 = (fVar131 + fVar129 * fVar80) - fVar131;
            fVar133 = (fVar133 + fVar132 * fVar80) - fVar133;
            fVar82 = (fVar110 + fVar180 * fVar80) - auVar86._0_4_;
            iVar205 = -(uint)(fVar131 == 0.0);
            iVar207 = -(uint)(fVar133 == 0.0);
            iVar209 = -(uint)(fVar82 == 0.0);
            iVar222 = -(uint)(auVar155._0_4_ == 0.0);
            fVar80 = (float)CONCAT13((byte)((uint)fVar131 >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                                     CONCAT12((byte)((uint)fVar131 >> 0x10) &
                                              ~(byte)((uint)iVar205 >> 0x10),
                                              CONCAT11((byte)((uint)fVar131 >> 8) &
                                                       ~(byte)((uint)iVar205 >> 8),
                                                       SUB41(fVar131,0) & ~(byte)iVar205)));
            auVar55._0_8_ =
                 CONCAT17((byte)((uint)fVar133 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18),
                          CONCAT16((byte)((uint)fVar133 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10),
                                   CONCAT15((byte)((uint)fVar133 >> 8) & ~(byte)((uint)iVar207 >> 8)
                                            ,CONCAT14(SUB41(fVar133,0) & ~(byte)iVar207,fVar80))));
            auVar55[8] = SUB41(fVar82,0) & ~(byte)iVar209;
            auVar55[9] = (byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar209 >> 8);
            auVar55[10] = (byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
            auVar55[0xb] = (byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
            auVar66._12_2_ = 0;
            auVar66._0_12_ = auVar55;
            auVar66[0xe] = auVar155[2] & ~(byte)((uint)iVar222 >> 0x10);
            auVar66[0xf] = auVar155[3] & ~(byte)((uint)iVar222 >> 0x18);
            iVar205 = -(uint)(fVar80 == 0.0);
            fVar82 = (float)((ulong)auVar55._0_8_ >> 0x20);
            iVar207 = -(uint)(fVar82 == 0.0);
            iVar209 = -(uint)(auVar55._8_4_ == 0.0);
            iVar222 = -(uint)(auVar66._12_4_ == 0.0);
            uStack_2e8 = auVar66._8_8_;
            auVar100._0_4_ = local_460 / fVar80;
            auVar100._4_4_ = fStack_45c / fVar82;
            auVar100._8_4_ = fStack_458 / auVar55._8_4_;
            auVar100._12_4_ = fStack_454 / auVar66._12_4_;
            auVar67[0] = ~(byte)iVar205;
            auVar67[1] = ~(byte)((uint)iVar205 >> 8);
            auVar67[2] = ~(byte)((uint)iVar205 >> 0x10);
            auVar67[3] = ~(byte)((uint)iVar205 >> 0x18);
            auVar67[4] = ~(byte)iVar207;
            auVar67[5] = ~(byte)((uint)iVar207 >> 8);
            auVar67[6] = ~(byte)((uint)iVar207 >> 0x10);
            auVar67[7] = ~(byte)((uint)iVar207 >> 0x18);
            auVar67[8] = ~(byte)iVar209;
            auVar67[9] = ~(byte)((uint)iVar209 >> 8);
            auVar67[10] = ~(byte)((uint)iVar209 >> 0x10);
            auVar67[0xb] = ~(byte)((uint)iVar209 >> 0x18);
            auVar67[0xc] = ~(byte)iVar222;
            auVar67[0xd] = ~(byte)((uint)iVar222 >> 8);
            auVar67[0xe] = ~(byte)((uint)iVar222 >> 0x10);
            auVar67[0xf] = ~(byte)((uint)iVar222 >> 0x18);
            auVar68._8_4_ = 0x7f7fffee;
            auVar68._0_8_ = 0x7f7fffee7f7fffee;
            auVar68._12_4_ = 0x7f7fffee;
            auVar68 = auVar68 ^ (auVar68 ^ auVar100) & auVar67;
            uStack_2d8 = auVar68._8_8_;
            local_2e0 = auVar68._0_8_;
            local_2a8 = 2;
            local_2d0 = 0;
            uStack_2f0 = auVar55._0_8_;
            nn::os::LockMutex(pMVar1);
            local_340 = (**(code **)(**(long **)(lVar20 + 8) + 0x68))();
            if (-1 < iVar199) {
              lVar21 = 0;
              do {
                *(ulong *)((long)auStack_298 + lVar21 + 8) =
                     *(ulong *)((long)auStack_298 + lVar21 + 8) & 1;
                lVar21 = lVar21 + 8;
              } while (lVar21 != 0x1f8);
              auStack_298[1] = auStack_298[1] | 1L << (uVar22 & 0x3f);
              auStack_298[uVar22] = auStack_298[uVar22] | 2;
              local_340 = (**(code **)(**(long **)(lVar20 + 8) + 0x68))();
              local_32c = 1;
            }
            local_338 = &local_2c0;
            uVar22 = FUN_00c7a2b0(lVar20,&local_340,&local_3c0,1);
            nn::os::UnlockMutex(pMVar1);
            if ((uVar22 & 1) != 0) {
              local_3c0 = local_3c0 - local_380;
              fStack_3bc = fStack_3bc - fStack_37c;
              fStack_3b8 = fStack_3b8 - fStack_378;
              fStack_3b4 = fStack_3b4 - fStack_374;
              auVar37._0_4_ = local_3c0 * local_3c0 + fStack_3bc * fStack_3bc;
              auVar37._4_4_ = fStack_3b8 * fStack_3b8 + fStack_3b4 * fStack_3b4;
              auVar37._8_4_ = local_3c0 * local_3c0 + fStack_3bc * fStack_3bc;
              auVar37._12_4_ = fStack_3b8 * fStack_3b8 + fStack_3b4 * fStack_3b4;
              auVar86 = NEON_ext(auVar37,auVar37,4,1);
              auVar38._0_4_ = auVar86._0_4_ + auVar86._4_4_;
              auVar38._4_4_ = auVar86._8_4_ + auVar86._12_4_;
              auVar38._8_4_ = auVar86._0_4_ + auVar86._4_4_;
              auVar38._12_4_ = auVar86._8_4_ + auVar86._12_4_;
              auVar86 = NEON_frsqrte(auVar38,4);
              auVar138._0_4_ = auVar38._0_4_ * auVar86._0_4_;
              auVar138._4_4_ = auVar38._4_4_ * auVar86._4_4_;
              auVar138._8_4_ = auVar38._8_4_ * auVar86._8_4_;
              auVar138._12_4_ = auVar38._12_4_ * auVar86._12_4_;
              auVar155 = NEON_frsqrts(auVar86,auVar138,4);
              auVar115._0_4_ = auVar86._0_4_ * auVar155._0_4_;
              auVar115._4_4_ = auVar86._4_4_ * auVar155._4_4_;
              auVar115._8_4_ = auVar86._8_4_ * auVar155._8_4_;
              auVar115._12_4_ = auVar86._12_4_ * auVar155._12_4_;
              auVar139._0_4_ = auVar38._0_4_ * auVar115._0_4_;
              auVar139._4_4_ = auVar38._4_4_ * auVar115._4_4_;
              auVar139._8_4_ = auVar38._8_4_ * auVar115._8_4_;
              auVar139._12_4_ = auVar38._12_4_ * auVar115._12_4_;
              iVar199 = -(uint)(auVar38._0_4_ == 0.0);
              iVar205 = -(uint)(auVar38._4_4_ == 0.0);
              iVar207 = -(uint)(auVar38._8_4_ == 0.0);
              iVar209 = -(uint)(auVar38._12_4_ == 0.0);
              auVar86 = NEON_frsqrts(auVar115,auVar139,4);
              local_3c0 = local_3c0 * auVar115._0_4_ * auVar86._0_4_;
              fStack_3bc = fStack_3bc * auVar115._4_4_ * auVar86._4_4_;
              fStack_3b8 = fStack_3b8 * auVar115._8_4_ * auVar86._8_4_;
              fStack_3b4 = fStack_3b4 * auVar115._12_4_ * auVar86._12_4_;
              fVar80 = (float)CONCAT13((byte)((uint)local_3c0 >> 0x18) &
                                       ~(byte)((uint)iVar199 >> 0x18),
                                       CONCAT12((byte)((uint)local_3c0 >> 0x10) &
                                                ~(byte)((uint)iVar199 >> 0x10),
                                                CONCAT11((byte)((uint)local_3c0 >> 8) &
                                                         ~(byte)((uint)iVar199 >> 8),
                                                         SUB41(local_3c0,0) & ~(byte)iVar199)));
              auVar84._0_8_ =
                   CONCAT17((byte)((uint)fStack_3bc >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                            CONCAT16((byte)((uint)fStack_3bc >> 0x10) &
                                     ~(byte)((uint)iVar205 >> 0x10),
                                     CONCAT15((byte)((uint)fStack_3bc >> 8) &
                                              ~(byte)((uint)iVar205 >> 8),
                                              CONCAT14(SUB41(fStack_3bc,0) & ~(byte)iVar205,fVar80))
                                    ));
              auVar84[8] = SUB41(fStack_3b8,0) & ~(byte)iVar207;
              auVar84[9] = (byte)((uint)fStack_3b8 >> 8) & ~(byte)((uint)iVar207 >> 8);
              auVar84[10] = (byte)((uint)fStack_3b8 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10);
              auVar84[0xb] = (byte)((uint)fStack_3b8 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18);
              auVar101[0xc] = SUB41(fStack_3b4,0) & ~(byte)iVar209;
              auVar101._0_12_ = auVar84;
              auVar101[0xd] = (byte)((uint)fStack_3b4 >> 8) & ~(byte)((uint)iVar209 >> 8);
              auVar101[0xe] = (byte)((uint)fStack_3b4 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
              auVar101[0xf] = (byte)((uint)fStack_3b4 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
              fVar82 = (float)((ulong)auVar84._0_8_ >> 0x20);
              fVar131 = auVar84._8_4_;
              fVar133 = auVar101._12_4_;
              auVar39._0_4_ = fVar80 * fVar80 + fVar82 * fVar82;
              auVar39._4_4_ = fVar131 * fVar131 + fVar133 * fVar133;
              auVar39._8_4_ = fVar80 * fVar80 + fVar82 * fVar82;
              auVar39._12_4_ = fVar131 * fVar131 + fVar133 * fVar133;
              auVar86 = NEON_ext(auVar39,auVar39,4,1);
              if (0.0 < auVar86._0_4_ + auVar86._4_4_) {
                local_340._0_4_ = -1.0;
                local_44c = 1.0;
                auVar40._0_4_ = local_4a0 * fVar80 + fStack_49c * fVar82;
                auVar40._4_4_ = fStack_498 * fVar131 + fStack_494 * fVar133;
                auVar40._8_4_ = local_4a0 * fVar80 + fStack_49c * fVar82;
                auVar40._12_4_ = fStack_498 * fVar131 + fStack_494 * fVar133;
                auVar86 = NEON_ext(auVar40,auVar40,4,1);
                fVar110 = auVar86._0_4_ + auVar86._4_4_;
                pfVar19 = &local_44c;
                if (fVar110 <= 1.0) {
                  pfVar19 = (float *)&local_2c0;
                }
                local_2c0._0_4_ = fVar110;
                pfVar2 = (float *)&local_340;
                if (-1.0 <= fVar110) {
                  pfVar2 = pfVar19;
                }
                fVar110 = acosf(*pfVar2);
                local_448[1] = fVar110;
                fVar132 = *(float *)(param_2 + 0x88) *
                          (*(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390);
                fVar129 = -(*(float *)(param_2 + 0x88) *
                           (*(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390))
                ;
                local_340 = CONCAT44(local_340._4_4_,fVar129);
                local_2c0 = (undefined *)CONCAT44(local_2c0._4_4_,fVar132);
                pfVar19 = (float *)&local_2c0;
                if (fVar110 <= fVar132) {
                  pfVar19 = local_448 + 1;
                }
                pfVar2 = (float *)&local_340;
                if (fVar129 <= fVar110) {
                  pfVar2 = pfVar19;
                }
                local_490 = *pfVar2;
                auVar41._0_4_ = local_4b0 * fVar80 + fStack_4ac * fVar82;
                auVar41._4_4_ = fStack_4a8 * fVar131 + fStack_4a4 * fVar133;
                auVar41._8_4_ = local_4b0 * fVar80 + fStack_4ac * fVar82;
                auVar41._12_4_ = fStack_4a8 * fVar131 + fStack_4a4 * fVar133;
                auVar86 = NEON_ext(auVar41,auVar41,4,1);
                if (0.0 < auVar86._0_4_ + auVar86._4_4_) {
                  local_490 = -local_490;
                }
                local_448[1] = local_490;
              }
            }
          }
        }
        if (0.0 < *(float *)(param_2 + 0x8c)) {
          uVar152 = a64_TBL(ZEXT816(0),auVar62,DAT_03cb56c8);
          uVar167 = a64_TBL(ZEXT816(0),auVar62,DAT_03cb54d8);
          uVar182 = a64_TBL(ZEXT816(0),auVar61,DAT_03cb5488);
          uVar201 = a64_TBL(ZEXT816(0),auVar61,DAT_03cb54c0);
          uVar111 = a64_TBL(ZEXT816(0),auVar62,DAT_03cb5488);
          uVar135 = a64_TBL(ZEXT816(0),auVar62,DAT_03cb54c0);
          uVar53 = a64_TBL(ZEXT816(0),auVar61,DAT_03cb56c8);
          uVar83 = a64_TBL(ZEXT816(0),auVar61,DAT_03cb54d8);
          fVar131 = (float)uVar167 * (float)uVar201 - (float)uVar135 * (float)uVar83;
          fVar133 = (float)((ulong)uVar167 >> 0x20) * (float)((ulong)uVar201 >> 0x20) -
                    (float)((ulong)uVar135 >> 0x20) * (float)((ulong)uVar83 >> 0x20);
          fVar80 = (float)uVar152 * (float)uVar182 - (float)uVar111 * (float)uVar53;
          fVar82 = (float)((ulong)uVar152 >> 0x20) * (float)((ulong)uVar182 >> 0x20) -
                   (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar53 >> 0x20);
          auVar42._0_4_ = fVar80 * fVar80 + fVar82 * fVar82;
          auVar42._4_4_ = fVar131 * fVar131 + fVar133 * fVar133;
          auVar42._8_4_ = fVar80 * fVar80 + fVar82 * fVar82;
          auVar42._12_4_ = fVar131 * fVar131 + fVar133 * fVar133;
          auVar86 = NEON_ext(auVar42,auVar42,4,1);
          iVar199 = *(int *)(param_2 + 0x90);
          uVar22 = (ulong)iVar199;
          auVar43._0_4_ = auVar86._0_4_ + auVar86._4_4_;
          auVar43._4_4_ = auVar86._8_4_ + auVar86._12_4_;
          auVar43._8_4_ = auVar86._0_4_ + auVar86._4_4_;
          auVar43._12_4_ = auVar86._8_4_ + auVar86._12_4_;
          auVar86 = NEON_frsqrte(auVar43,4);
          auVar140._0_4_ = auVar43._0_4_ * auVar86._0_4_;
          auVar140._4_4_ = auVar43._4_4_ * auVar86._4_4_;
          auVar140._8_4_ = auVar43._8_4_ * auVar86._8_4_;
          auVar140._12_4_ = auVar43._12_4_ * auVar86._12_4_;
          auVar155 = NEON_frsqrts(auVar86,auVar140,4);
          auVar116._0_4_ = auVar86._0_4_ * auVar155._0_4_;
          auVar116._4_4_ = auVar86._4_4_ * auVar155._4_4_;
          auVar116._8_4_ = auVar86._8_4_ * auVar155._8_4_;
          auVar116._12_4_ = auVar86._12_4_ * auVar155._12_4_;
          auVar141._0_4_ = auVar43._0_4_ * auVar116._0_4_;
          auVar141._4_4_ = auVar43._4_4_ * auVar116._4_4_;
          auVar141._8_4_ = auVar43._8_4_ * auVar116._8_4_;
          auVar141._12_4_ = auVar43._12_4_ * auVar116._12_4_;
          iVar205 = -(uint)(auVar43._0_4_ == 0.0);
          iVar207 = -(uint)(auVar43._4_4_ == 0.0);
          iVar209 = -(uint)(auVar43._8_4_ == 0.0);
          iVar222 = -(uint)(auVar43._12_4_ == 0.0);
          auVar86 = NEON_frsqrts(auVar116,auVar141,4);
          fVar80 = fVar80 * auVar116._0_4_ * auVar86._0_4_;
          fVar82 = fVar82 * auVar116._4_4_ * auVar86._4_4_;
          fVar131 = fVar131 * auVar116._8_4_ * auVar86._8_4_;
          fVar133 = fVar133 * auVar116._12_4_ * auVar86._12_4_;
          fVar80 = (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                                   CONCAT12((byte)((uint)fVar80 >> 0x10) &
                                            ~(byte)((uint)iVar205 >> 0x10),
                                            CONCAT11((byte)((uint)fVar80 >> 8) &
                                                     ~(byte)((uint)iVar205 >> 8),
                                                     SUB41(fVar80,0) & ~(byte)iVar205)));
          auVar56._0_8_ =
               CONCAT17((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18),
                        CONCAT16((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10),
                                 CONCAT15((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar207 >> 8),
                                          CONCAT14(SUB41(fVar82,0) & ~(byte)iVar207,fVar80))));
          auVar56[8] = SUB41(fVar131,0) & ~(byte)iVar209;
          auVar56[9] = (byte)((uint)fVar131 >> 8) & ~(byte)((uint)iVar209 >> 8);
          auVar56[10] = (byte)((uint)fVar131 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
          auVar56[0xb] = (byte)((uint)fVar131 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
          auVar103[0xc] = SUB41(fVar133,0) & ~(byte)iVar222;
          auVar103._0_12_ = auVar56;
          auVar103[0xd] = (byte)((uint)fVar133 >> 8) & ~(byte)((uint)iVar222 >> 8);
          auVar103[0xe] = (byte)((uint)fVar133 >> 0x10) & ~(byte)((uint)iVar222 >> 0x10);
          auVar103[0xf] = (byte)((uint)fVar133 >> 0x18) & ~(byte)((uint)iVar222 >> 0x18);
          fVar82 = (float)((ulong)auVar56._0_8_ >> 0x20);
          fVar82 = fVar82 * fVar82;
          fVar131 = auVar56._8_4_ * auVar56._8_4_;
          fVar133 = auVar103._12_4_ * auVar103._12_4_;
          auVar44._0_4_ = fVar80 * fVar80 + fVar82;
          auVar44._4_4_ = fVar131 + fVar133;
          auVar44._8_4_ = fVar80 * fVar80 + fVar82;
          auVar44._12_4_ = fVar131 + fVar133;
          auVar86 = NEON_ext(auVar44,auVar44,4,1);
          auVar102._0_4_ = -(uint)(auVar86._0_4_ + auVar86._4_4_ == 0.0);
          auVar117._8_8_ = _UNK_03cab1d8;
          auVar117._0_8_ = _DAT_03cab1d0;
          auVar102._4_4_ = auVar102._0_4_;
          auVar102._8_4_ = auVar102._0_4_;
          auVar102._12_4_ = auVar102._0_4_;
          auVar103 = auVar103 ^ (auVar103 ^ auVar117) & auVar102;
          fStack_498 = auVar103._8_4_;
          fStack_494 = auVar103._12_4_;
          local_4a0 = auVar103._0_4_;
          fStack_49c = auVar103._4_4_;
          fVar82 = fVar52 + local_4a0 * fVar109;
          fVar131 = fVar79 + fStack_49c * fVar109;
          fVar132 = fVar81 + fStack_498 * fVar109;
          fVar80 = *(float *)(param_2 + 0xb0);
          fVar133 = (float)_DAT_03cabd90;
          fVar110 = (float)((ulong)_DAT_03cabd90 >> 0x20);
          fVar129 = (float)_UNK_03cabd98;
          local_2b8 = 0xffffffff;
          uStack_2b0 = 1;
          local_2a0 = 0;
          memset(auStack_298,0xff,0x200);
          local_300 = CONCAT44(fVar131,fVar82);
          auVar14._8_4_ = fVar132;
          auVar14._0_8_ = local_300;
          auVar14._12_4_ = fStack_494 * fVar109 + 0.0;
          local_480 = 0.0;
          local_330 = 0xffff;
          auVar71._8_4_ = 0x7f7fffee;
          auVar71._0_8_ = 0x7f7fffee7f7fffee;
          auVar71._12_4_ = 0x7f7fffee;
          local_32c = 0;
          local_328 = 0;
          auVar86 = NEON_ext(auVar14,auVar14,8,1);
          uStack_2f8 = (ulong)(uint)auVar86._0_4_;
          auVar155 = ZEXT816(0x3f800000);
          fVar82 = (fVar82 + fVar133 * fVar80) - fVar82;
          fVar131 = (fVar131 + fVar110 * fVar80) - fVar131;
          fVar109 = (fVar132 + fVar129 * fVar80) - auVar86._0_4_;
          iVar205 = -(uint)(fVar82 == 0.0);
          iVar207 = -(uint)(fVar131 == 0.0);
          iVar209 = -(uint)(fVar109 == 0.0);
          iVar222 = -(uint)(auVar155._0_4_ == 0.0);
          fVar80 = (float)CONCAT13((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                                   CONCAT12((byte)((uint)fVar82 >> 0x10) &
                                            ~(byte)((uint)iVar205 >> 0x10),
                                            CONCAT11((byte)((uint)fVar82 >> 8) &
                                                     ~(byte)((uint)iVar205 >> 8),
                                                     SUB41(fVar82,0) & ~(byte)iVar205)));
          auVar57._0_8_ =
               CONCAT17((byte)((uint)fVar131 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18),
                        CONCAT16((byte)((uint)fVar131 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10),
                                 CONCAT15((byte)((uint)fVar131 >> 8) & ~(byte)((uint)iVar207 >> 8),
                                          CONCAT14(SUB41(fVar131,0) & ~(byte)iVar207,fVar80))));
          auVar57[8] = SUB41(fVar109,0) & ~(byte)iVar209;
          auVar57[9] = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar209 >> 8);
          auVar57[10] = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
          auVar57[0xb] = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
          auVar69._12_2_ = 0;
          auVar69._0_12_ = auVar57;
          auVar69[0xe] = auVar155[2] & ~(byte)((uint)iVar222 >> 0x10);
          auVar69[0xf] = auVar155[3] & ~(byte)((uint)iVar222 >> 0x18);
          local_340 = 0;
          local_338 = (undefined8 *)0x0;
          local_320 = 0xfb0001;
          iVar205 = -(uint)(fVar80 == 0.0);
          fVar82 = (float)((ulong)auVar57._0_8_ >> 0x20);
          iVar207 = -(uint)(fVar82 == 0.0);
          iVar209 = -(uint)(auVar57._8_4_ == 0.0);
          iVar222 = -(uint)(auVar69._12_4_ == 0.0);
          uStack_2e8 = auVar69._8_8_;
          local_2c0 = puVar18 + 0x10;
          auVar104._0_4_ = local_460 / fVar80;
          auVar104._4_4_ = fStack_45c / fVar82;
          auVar104._8_4_ = fStack_458 / auVar57._8_4_;
          auVar104._12_4_ = fStack_454 / auVar69._12_4_;
          auVar70[0] = ~(byte)iVar205;
          auVar70[1] = ~(byte)((uint)iVar205 >> 8);
          auVar70[2] = ~(byte)((uint)iVar205 >> 0x10);
          auVar70[3] = ~(byte)((uint)iVar205 >> 0x18);
          auVar70[4] = ~(byte)iVar207;
          auVar70[5] = ~(byte)((uint)iVar207 >> 8);
          auVar70[6] = ~(byte)((uint)iVar207 >> 0x10);
          auVar70[7] = ~(byte)((uint)iVar207 >> 0x18);
          auVar70[8] = ~(byte)iVar209;
          auVar70[9] = ~(byte)((uint)iVar209 >> 8);
          auVar70[10] = ~(byte)((uint)iVar209 >> 0x10);
          auVar70[0xb] = ~(byte)((uint)iVar209 >> 0x18);
          auVar70[0xc] = ~(byte)iVar222;
          auVar70[0xd] = ~(byte)((uint)iVar222 >> 8);
          auVar70[0xe] = ~(byte)((uint)iVar222 >> 0x10);
          auVar70[0xf] = ~(byte)((uint)iVar222 >> 0x18);
          auVar71 = auVar71 ^ (auVar71 ^ auVar104) & auVar70;
          pMVar1 = (MutexType *)(lVar20 + 0x120);
          uStack_2d8 = auVar71._8_8_;
          local_2e0 = auVar71._0_8_;
          local_2a8 = 2;
          local_2d0 = 0;
          uStack_2f0 = auVar57._0_8_;
          nn::os::LockMutex(pMVar1);
          local_340 = (**(code **)(**(long **)(lVar20 + 8) + 0x68))();
          if (-1 < iVar199) {
            lVar21 = 0;
            do {
              *(ulong *)((long)auStack_298 + lVar21 + 8) =
                   *(ulong *)((long)auStack_298 + lVar21 + 8) & 1;
              lVar21 = lVar21 + 8;
            } while (lVar21 != 0x1f8);
            auStack_298[1] = auStack_298[1] | 1L << (uVar22 & 0x3f);
            auStack_298[uVar22] = auStack_298[uVar22] | 2;
            local_340 = (**(code **)(**(long **)(lVar20 + 8) + 0x68))();
            local_32c = 1;
          }
          local_338 = &local_2c0;
          uVar22 = FUN_00c7a2b0(lVar20,&local_340,&local_400,1);
          nn::os::UnlockMutex(pMVar1);
          if ((uVar22 & 1) != 0) {
            fVar52 = fVar52 + local_4a0 * fVar128;
            fVar79 = fVar79 + fStack_49c * fVar128;
            fVar81 = fVar81 + fStack_498 * fVar128;
            fVar80 = *(float *)(param_2 + 0xb0);
            iVar199 = *(int *)(param_2 + 0x90);
            uVar22 = (ulong)iVar199;
            local_2b8 = 0xffffffff;
            uStack_2b0 = 1;
            local_2a0 = 0;
            memset(auStack_298,0xff,0x200);
            local_300 = CONCAT44(fVar79,fVar52);
            auVar15._8_4_ = fVar81;
            auVar15._0_8_ = local_300;
            auVar15._12_4_ = fStack_494 * fVar128 + 0.0;
            local_32c = 0;
            local_480 = 0.0;
            auVar86 = NEON_ext(auVar15,auVar15,8,1);
            uStack_2f8 = (ulong)(uint)auVar86._0_4_;
            auVar155 = ZEXT816(0x3f800000);
            fVar52 = (fVar52 + fVar133 * fVar80) - fVar52;
            fVar79 = (fVar79 + fVar110 * fVar80) - fVar79;
            fVar80 = (fVar81 + fVar129 * fVar80) - auVar86._0_4_;
            local_330 = 0xffff;
            local_340 = 0;
            local_338 = (undefined8 *)0x0;
            local_328 = 0;
            iVar205 = -(uint)(fVar52 == 0.0);
            iVar207 = -(uint)(fVar79 == 0.0);
            iVar209 = -(uint)(fVar80 == 0.0);
            iVar222 = -(uint)(auVar155._0_4_ == 0.0);
            fVar52 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                                     CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                              ~(byte)((uint)iVar205 >> 0x10),
                                              CONCAT11((byte)((uint)fVar52 >> 8) &
                                                       ~(byte)((uint)iVar205 >> 8),
                                                       SUB41(fVar52,0) & ~(byte)iVar205)));
            auVar58._0_8_ =
                 CONCAT17((byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18),
                          CONCAT16((byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10),
                                   CONCAT15((byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar207 >> 8),
                                            CONCAT14(SUB41(fVar79,0) & ~(byte)iVar207,fVar52))));
            auVar58[8] = SUB41(fVar80,0) & ~(byte)iVar209;
            auVar58[9] = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar209 >> 8);
            auVar58[10] = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
            auVar58[0xb] = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
            auVar72._12_2_ = 0;
            auVar72._0_12_ = auVar58;
            auVar72[0xe] = auVar155[2] & ~(byte)((uint)iVar222 >> 0x10);
            auVar72[0xf] = auVar155[3] & ~(byte)((uint)iVar222 >> 0x18);
            iVar205 = -(uint)(fVar52 == 0.0);
            fVar80 = (float)((ulong)auVar58._0_8_ >> 0x20);
            iVar207 = -(uint)(fVar80 == 0.0);
            iVar209 = -(uint)(auVar58._8_4_ == 0.0);
            iVar222 = -(uint)(auVar72._12_4_ == 0.0);
            auVar105._0_4_ = local_460 / fVar52;
            auVar105._4_4_ = fStack_45c / fVar80;
            auVar105._8_4_ = fStack_458 / auVar58._8_4_;
            auVar105._12_4_ = fStack_454 / auVar72._12_4_;
            local_320 = 0xfb0001;
            uStack_2e8 = auVar72._8_8_;
            auVar73[0] = ~(byte)iVar205;
            auVar73[1] = ~(byte)((uint)iVar205 >> 8);
            auVar73[2] = ~(byte)((uint)iVar205 >> 0x10);
            auVar73[3] = ~(byte)((uint)iVar205 >> 0x18);
            auVar73[4] = ~(byte)iVar207;
            auVar73[5] = ~(byte)((uint)iVar207 >> 8);
            auVar73[6] = ~(byte)((uint)iVar207 >> 0x10);
            auVar73[7] = ~(byte)((uint)iVar207 >> 0x18);
            auVar73[8] = ~(byte)iVar209;
            auVar73[9] = ~(byte)((uint)iVar209 >> 8);
            auVar73[10] = ~(byte)((uint)iVar209 >> 0x10);
            auVar73[0xb] = ~(byte)((uint)iVar209 >> 0x18);
            auVar73[0xc] = ~(byte)iVar222;
            auVar73[0xd] = ~(byte)((uint)iVar222 >> 8);
            auVar73[0xe] = ~(byte)((uint)iVar222 >> 0x10);
            auVar73[0xf] = ~(byte)((uint)iVar222 >> 0x18);
            auVar74._8_4_ = 0x7f7fffee;
            auVar74._0_8_ = 0x7f7fffee7f7fffee;
            auVar74._12_4_ = 0x7f7fffee;
            auVar74 = auVar74 ^ (auVar74 ^ auVar105) & auVar73;
            local_2c0 = puVar18 + 0x10;
            uStack_2d8 = auVar74._8_8_;
            local_2e0 = auVar74._0_8_;
            local_2a8 = 2;
            local_2d0 = 0;
            uStack_2f0 = auVar58._0_8_;
            nn::os::LockMutex(pMVar1);
            local_340 = (**(code **)(**(long **)(lVar20 + 8) + 0x68))();
            if (-1 < iVar199) {
              lVar21 = 0;
              do {
                *(ulong *)((long)auStack_298 + lVar21 + 8) =
                     *(ulong *)((long)auStack_298 + lVar21 + 8) & 1;
                lVar21 = lVar21 + 8;
              } while (lVar21 != 0x1f8);
              auStack_298[1] = auStack_298[1] | 1L << (uVar22 & 0x3f);
              auStack_298[uVar22] = auStack_298[uVar22] | 2;
              local_340 = (**(code **)(**(long **)(lVar20 + 8) + 0x68))();
              local_32c = 1;
            }
            local_338 = &local_2c0;
            uVar22 = FUN_00c7a2b0(lVar20,&local_340,local_448 + 2,1);
            nn::os::UnlockMutex(pMVar1);
            if ((uVar22 & 1) != 0) {
              local_448[2] = local_448[2] - local_400;
              fStack_43c = fStack_43c - fStack_3fc;
              fStack_438 = fStack_438 - fStack_3f8;
              fStack_434 = fStack_434 - fStack_3f4;
              auVar45._0_4_ = local_448[2] * local_448[2] + fStack_43c * fStack_43c;
              auVar45._4_4_ = fStack_438 * fStack_438 + fStack_434 * fStack_434;
              auVar45._8_4_ = local_448[2] * local_448[2] + fStack_43c * fStack_43c;
              auVar45._12_4_ = fStack_438 * fStack_438 + fStack_434 * fStack_434;
              auVar86 = NEON_ext(auVar45,auVar45,4,1);
              auVar46._0_4_ = auVar86._0_4_ + auVar86._4_4_;
              auVar46._4_4_ = auVar86._8_4_ + auVar86._12_4_;
              auVar46._8_4_ = auVar86._0_4_ + auVar86._4_4_;
              auVar46._12_4_ = auVar86._8_4_ + auVar86._12_4_;
              auVar86 = NEON_frsqrte(auVar46,4);
              auVar142._0_4_ = auVar46._0_4_ * auVar86._0_4_;
              auVar142._4_4_ = auVar46._4_4_ * auVar86._4_4_;
              auVar142._8_4_ = auVar46._8_4_ * auVar86._8_4_;
              auVar142._12_4_ = auVar46._12_4_ * auVar86._12_4_;
              auVar155 = NEON_frsqrts(auVar86,auVar142,4);
              auVar118._0_4_ = auVar86._0_4_ * auVar155._0_4_;
              auVar118._4_4_ = auVar86._4_4_ * auVar155._4_4_;
              auVar118._8_4_ = auVar86._8_4_ * auVar155._8_4_;
              auVar118._12_4_ = auVar86._12_4_ * auVar155._12_4_;
              auVar143._0_4_ = auVar46._0_4_ * auVar118._0_4_;
              auVar143._4_4_ = auVar46._4_4_ * auVar118._4_4_;
              auVar143._8_4_ = auVar46._8_4_ * auVar118._8_4_;
              auVar143._12_4_ = auVar46._12_4_ * auVar118._12_4_;
              iVar199 = -(uint)(auVar46._0_4_ == 0.0);
              iVar205 = -(uint)(auVar46._4_4_ == 0.0);
              iVar207 = -(uint)(auVar46._8_4_ == 0.0);
              iVar209 = -(uint)(auVar46._12_4_ == 0.0);
              auVar86 = NEON_frsqrts(auVar118,auVar143,4);
              local_448[2] = local_448[2] * auVar118._0_4_ * auVar86._0_4_;
              fStack_43c = fStack_43c * auVar118._4_4_ * auVar86._4_4_;
              fStack_438 = fStack_438 * auVar118._8_4_ * auVar86._8_4_;
              fStack_434 = fStack_434 * auVar118._12_4_ * auVar86._12_4_;
              fVar52 = (float)CONCAT13((byte)((uint)local_448[2] >> 0x18) &
                                       ~(byte)((uint)iVar199 >> 0x18),
                                       CONCAT12((byte)((uint)local_448[2] >> 0x10) &
                                                ~(byte)((uint)iVar199 >> 0x10),
                                                CONCAT11((byte)((uint)local_448[2] >> 8) &
                                                         ~(byte)((uint)iVar199 >> 8),
                                                         SUB41(local_448[2],0) & ~(byte)iVar199)));
              auVar85._0_8_ =
                   CONCAT17((byte)((uint)fStack_43c >> 0x18) & ~(byte)((uint)iVar205 >> 0x18),
                            CONCAT16((byte)((uint)fStack_43c >> 0x10) &
                                     ~(byte)((uint)iVar205 >> 0x10),
                                     CONCAT15((byte)((uint)fStack_43c >> 8) &
                                              ~(byte)((uint)iVar205 >> 8),
                                              CONCAT14(SUB41(fStack_43c,0) & ~(byte)iVar205,fVar52))
                                    ));
              auVar85[8] = SUB41(fStack_438,0) & ~(byte)iVar207;
              auVar85[9] = (byte)((uint)fStack_438 >> 8) & ~(byte)((uint)iVar207 >> 8);
              auVar85[10] = (byte)((uint)fStack_438 >> 0x10) & ~(byte)((uint)iVar207 >> 0x10);
              auVar85[0xb] = (byte)((uint)fStack_438 >> 0x18) & ~(byte)((uint)iVar207 >> 0x18);
              auVar106[0xc] = SUB41(fStack_434,0) & ~(byte)iVar209;
              auVar106._0_12_ = auVar85;
              auVar106[0xd] = (byte)((uint)fStack_434 >> 8) & ~(byte)((uint)iVar209 >> 8);
              auVar106[0xe] = (byte)((uint)fStack_434 >> 0x10) & ~(byte)((uint)iVar209 >> 0x10);
              auVar106[0xf] = (byte)((uint)fStack_434 >> 0x18) & ~(byte)((uint)iVar209 >> 0x18);
              fVar80 = (float)((ulong)auVar85._0_8_ >> 0x20);
              fVar81 = auVar85._8_4_;
              fVar82 = auVar106._12_4_;
              auVar47._0_4_ = fVar52 * fVar52 + fVar80 * fVar80;
              auVar47._4_4_ = fVar81 * fVar81 + fVar82 * fVar82;
              auVar47._8_4_ = fVar52 * fVar52 + fVar80 * fVar80;
              auVar47._12_4_ = fVar81 * fVar81 + fVar82 * fVar82;
              auVar86 = NEON_ext(auVar47,auVar47,4,1);
              if (0.0 < auVar86._0_4_ + auVar86._4_4_) {
                local_340._0_4_ = -1.0;
                local_44c = 1.0;
                auVar48._0_4_ = local_4a0 * fVar52 + fStack_49c * fVar80;
                auVar48._4_4_ = fStack_498 * fVar81 + fStack_494 * fVar82;
                auVar48._8_4_ = local_4a0 * fVar52 + fStack_49c * fVar80;
                auVar48._12_4_ = fStack_498 * fVar81 + fStack_494 * fVar82;
                auVar86 = NEON_ext(auVar48,auVar48,4,1);
                fVar109 = auVar86._0_4_ + auVar86._4_4_;
                pfVar19 = &local_44c;
                if (fVar109 <= 1.0) {
                  pfVar19 = (float *)&local_2c0;
                }
                local_2c0._0_4_ = fVar109;
                pfVar2 = (float *)&local_340;
                if (-1.0 <= fVar109) {
                  pfVar2 = pfVar19;
                }
                fVar109 = acosf(*pfVar2);
                local_448[0] = fVar109;
                fVar131 = *(float *)(param_2 + 0x8c) *
                          (*(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390);
                fVar128 = -(*(float *)(param_2 + 0x8c) *
                           (*(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390))
                ;
                local_340 = CONCAT44(local_340._4_4_,fVar128);
                local_2c0 = (undefined *)CONCAT44(local_2c0._4_4_,fVar131);
                pfVar19 = (float *)&local_2c0;
                if (fVar109 <= fVar131) {
                  pfVar19 = local_448;
                }
                pfVar2 = (float *)&local_340;
                if (fVar128 <= fVar109) {
                  pfVar2 = pfVar19;
                }
                local_480 = *pfVar2;
                auVar49._0_4_ = local_4b0 * fVar52 + fStack_4ac * fVar80;
                auVar49._4_4_ = fStack_4a8 * fVar81 + fStack_4a4 * fVar82;
                auVar49._8_4_ = local_4b0 * fVar52 + fStack_4ac * fVar80;
                auVar49._12_4_ = fStack_4a8 * fVar81 + fStack_4a4 * fVar82;
                auVar86 = NEON_ext(auVar49,auVar49,4,1);
                if (0.0 < auVar86._0_4_ + auVar86._4_4_) {
                  local_480 = -local_480;
                }
                local_448[0] = local_480;
              }
            }
          }
        }
        local_480 = local_480 * 0.5;
        local_490 = local_490 * 0.5;
        auVar119._8_4_ = 0xbf000000;
        auVar119._0_8_ = 0xbf000000bf000000;
        auVar119._12_4_ = 0xbf000000;
        auVar144._0_8_ = CONCAT44(-(uint)(0.0 <= local_490),-(uint)(0.0 <= local_480));
        auVar144._8_4_ = 0xffffffff;
        auVar144._12_4_ = 0xffffffff;
        auVar161._8_8_ = auVar144._8_8_;
        auVar161._0_8_ = auVar144._0_8_;
        auVar9[0xb] = 0x3f;
        auVar9._0_11_ = ZEXT811(0x3f0000003f000000);
        auVar9._12_3_ = 0;
        auVar9[0xf] = 0x3f;
        auVar86 = auVar119 ^ (auVar119 ^ auVar9) & auVar161;
        iVar207 = -(uint)(local_480 == 0.0);
        iVar209 = -(uint)(local_490 == 0.0);
        iVar199 = -(uint)(ABS(local_480) == INFINITY);
        iVar205 = -(uint)(ABS(local_490) == INFINITY);
        auVar107._0_8_ =
             CONCAT17(~(byte)((uint)iVar205 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar205 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar205 >> 8),
                                        CONCAT14(~(byte)iVar205,
                                                 CONCAT13(~(byte)((uint)iVar199 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar199 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar199 >>
                                                                                   8),~(byte)iVar199
                                                                           )))))));
        auVar107[8] = 0xff;
        auVar107[9] = 0xff;
        auVar107[10] = 0xff;
        auVar107[0xb] = 0xff;
        auVar107[0xc] = 0xff;
        auVar107[0xd] = 0xff;
        auVar107[0xe] = 0xff;
        auVar107[0xf] = 0xff;
        auVar162._0_4_ = (int)(auVar86._0_4_ + local_480 * 0.15915494);
        auVar162._4_4_ = (int)(auVar86._4_4_ + local_490 * 0.15915494);
        auVar162._8_4_ = (int)(auVar86._8_4_ + 0.0);
        auVar162._12_4_ = (int)(auVar86._12_4_ + 0.0);
        auVar86 = NEON_scvtf(auVar162,4);
        fVar52 = local_480 + 1.5707964;
        fVar80 = local_490 + 1.5707964;
        local_480 = local_480 - auVar86._0_4_ * 6.2831855;
        local_490 = local_490 - auVar86._4_4_ * 6.2831855;
        fVar81 = 0.0 - auVar86._8_4_ * 6.2831855;
        fVar82 = 0.0 - auVar86._12_4_ * 6.2831855;
        local_480 = (float)((uint)local_480 ^
                           ((uint)local_480 ^ (uint)(-3.1415927 - local_480)) &
                           -(uint)(local_480 < -1.5707964));
        local_490 = (float)((uint)local_490 ^
                           ((uint)local_490 ^ (uint)(-3.1415927 - local_490)) &
                           -(uint)(local_490 < -1.5707964));
        fVar81 = (float)((uint)fVar81 ^
                        ((uint)fVar81 ^ (uint)(-3.1415927 - fVar81)) & -(uint)(fVar81 < -1.5707964))
        ;
        fVar82 = (float)((uint)fVar82 ^
                        ((uint)fVar82 ^ (uint)(-3.1415927 - fVar82)) & -(uint)(fVar82 < -1.5707964))
        ;
        local_480 = (float)((uint)local_480 ^
                           ((uint)local_480 ^ (uint)(3.1415927 - local_480)) &
                           -(uint)(1.5707964 < local_480));
        local_490 = (float)((uint)local_490 ^
                           ((uint)local_490 ^ (uint)(3.1415927 - local_490)) &
                           -(uint)(1.5707964 < local_490));
        fVar81 = (float)((uint)fVar81 ^
                        ((uint)fVar81 ^ (uint)(3.1415927 - fVar81)) & -(uint)(1.5707964 < fVar81));
        fVar82 = (float)((uint)fVar82 ^
                        ((uint)fVar82 ^ (uint)(3.1415927 - fVar82)) & -(uint)(1.5707964 < fVar82));
        fVar109 = local_480 * local_480;
        fVar128 = local_490 * local_490;
        fVar131 = fVar81 * fVar81;
        fVar133 = fVar82 * fVar82;
        auVar124._8_4_ = 0x7fc00000;
        auVar124._0_8_ = 0x7fc000007fc00000;
        auVar124._12_4_ = 0x7fc00000;
        auVar174._0_4_ =
             local_480 *
             (local_460 +
             fVar109 * (fVar109 * (fVar109 * (fVar109 * (fVar109 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
        auVar174._4_4_ =
             local_490 *
             (fStack_45c +
             fVar128 * (fVar128 * (fVar128 * (fVar128 * (fVar128 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
        auVar174._8_4_ =
             fVar81 * (fStack_458 +
                      fVar131 * (fVar131 * (fVar131 * (fVar131 * (fVar131 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar174._12_4_ =
             fVar82 * (fStack_454 +
                      fVar133 * (fVar133 * (fVar133 * (fVar133 * (fVar133 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar266._8_8_ = auVar107._8_8_;
        auVar266._0_8_ = auVar107._0_8_;
        auVar86 = auVar124 ^ (auVar124 ^ auVar174) & auVar266;
        iVar199 = -(uint)(ABS(fVar52) == INFINITY);
        iVar205 = -(uint)(ABS(fVar80) == INFINITY);
        auVar175._0_4_ = -(uint)(0.0 <= fVar52);
        auVar175._4_4_ = -(uint)(0.0 <= fVar80);
        auVar175._8_4_ = 0xffffffff;
        auVar175._12_4_ = 0xffffffff;
        auVar75[0] = ~(byte)iVar199;
        auVar75[1] = ~(byte)((uint)iVar199 >> 8);
        auVar75[2] = ~(byte)((uint)iVar199 >> 0x10);
        auVar75[3] = ~(byte)((uint)iVar199 >> 0x18);
        auVar75[4] = ~(byte)iVar205;
        auVar75[5] = ~(byte)((uint)iVar205 >> 8);
        auVar75[6] = ~(byte)((uint)iVar205 >> 0x10);
        auVar75[7] = ~(byte)((uint)iVar205 >> 0x18);
        auVar75[8] = 0xff;
        auVar75[9] = 0xff;
        auVar75[10] = 0xff;
        auVar75[0xb] = 0xff;
        auVar75[0xc] = 0xff;
        auVar75[0xd] = 0xff;
        auVar75[0xe] = 0xff;
        auVar75[0xf] = 0xff;
        auVar10[0xb] = 0x3f;
        auVar10._0_11_ = ZEXT811(0x3f0000003f000000);
        auVar10._12_3_ = 0;
        auVar10[0xf] = 0x3f;
        auVar119 = auVar119 ^ (auVar119 ^ auVar10) & auVar175;
        uStack_468 = auVar86._8_4_;
        local_470 = auVar86._0_4_;
        uStack_46c = auVar86._4_4_;
        auVar120._0_4_ = (int)(auVar119._0_4_ + fVar52 * 0.15915494);
        auVar120._4_4_ = (int)(auVar119._4_4_ + fVar80 * 0.15915494);
        auVar120._8_4_ = (int)(auVar119._8_4_ + 0.25);
        auVar120._12_4_ = (int)(auVar119._12_4_ + 0.25);
        auVar86 = NEON_scvtf(auVar120,4);
        fVar52 = fVar52 - auVar86._0_4_ * 6.2831855;
        fVar80 = fVar80 - auVar86._4_4_ * 6.2831855;
        fVar81 = 1.5707964 - auVar86._8_4_ * 6.2831855;
        fVar82 = 1.5707964 - auVar86._12_4_ * 6.2831855;
        fVar52 = (float)((uint)fVar52 ^
                        ((uint)fVar52 ^ (uint)(-3.1415927 - fVar52)) & -(uint)(fVar52 < -1.5707964))
        ;
        fVar80 = (float)((uint)fVar80 ^
                        ((uint)fVar80 ^ (uint)(-3.1415927 - fVar80)) & -(uint)(fVar80 < -1.5707964))
        ;
        fVar81 = (float)((uint)fVar81 ^
                        ((uint)fVar81 ^ (uint)(-3.1415927 - fVar81)) & -(uint)(fVar81 < -1.5707964))
        ;
        fVar82 = (float)((uint)fVar82 ^
                        ((uint)fVar82 ^ (uint)(-3.1415927 - fVar82)) & -(uint)(fVar82 < -1.5707964))
        ;
        fVar52 = (float)((uint)fVar52 ^
                        ((uint)fVar52 ^ (uint)(3.1415927 - fVar52)) & -(uint)(1.5707964 < fVar52));
        fVar80 = (float)((uint)fVar80 ^
                        ((uint)fVar80 ^ (uint)(3.1415927 - fVar80)) & -(uint)(1.5707964 < fVar80));
        fVar81 = (float)((uint)fVar81 ^
                        ((uint)fVar81 ^ (uint)(3.1415927 - fVar81)) & -(uint)(1.5707964 < fVar81));
        fVar82 = (float)((uint)fVar82 ^
                        ((uint)fVar82 ^ (uint)(3.1415927 - fVar82)) & -(uint)(1.5707964 < fVar82));
        fVar109 = fVar52 * fVar52;
        fVar128 = fVar80 * fVar80;
        fVar131 = fVar81 * fVar81;
        fVar133 = fVar82 * fVar82;
        auVar145._4_4_ = uStack_46c;
        auVar145._0_4_ = uStack_46c;
        auVar145._8_4_ = uStack_46c;
        auVar145._12_4_ = uStack_46c;
        auVar112 = auVar145._4_12_;
        auVar121._0_4_ =
             fVar52 * (local_460 +
                      fVar109 * (fVar109 * (fVar109 * (fVar109 * (fVar109 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar121._4_4_ =
             fVar80 * (fStack_45c +
                      fVar128 * (fVar128 * (fVar128 * (fVar128 * (fVar128 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar121._8_4_ =
             fVar81 * (fStack_458 +
                      fVar131 * (fVar131 * (fVar131 * (fVar131 * (fVar131 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar121._12_4_ =
             fVar82 * (fStack_454 +
                      fVar133 * (fVar133 * (fVar133 * (fVar133 * (fVar133 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar86 = auVar124 ^ (auVar124 ^ auVar121) & auVar75;
        auVar122[0] = ~(byte)iVar207;
        auVar122[1] = ~(byte)((uint)iVar207 >> 8);
        auVar122[2] = ~(byte)((uint)iVar207 >> 0x10);
        auVar122[3] = ~(byte)((uint)iVar207 >> 0x18);
        auVar122[4] = ~(byte)iVar209;
        auVar122[5] = ~(byte)((uint)iVar209 >> 8);
        auVar122[6] = ~(byte)((uint)iVar209 >> 0x10);
        auVar122[7] = ~(byte)((uint)iVar209 >> 0x18);
        auVar122._8_8_ = 0;
        auVar123._8_8_ = auVar107._8_8_;
        auVar123._0_8_ = auVar107._0_8_;
        auVar124 = auVar124 ^ (auVar124 ^ auVar86 ^ (auVar86 ^ auVar59) & ~auVar122) & auVar123;
        fVar52 = auVar124._0_4_;
        uVar130 = auVar124._4_4_;
        auVar163._4_4_ = uVar130;
        auVar163._0_4_ = uVar130;
        auVar163._8_4_ = uVar130;
        auVar163._12_4_ = uVar130;
        auVar166 = auVar163._4_12_;
        uStack_488 = auVar124._8_4_;
        if ((local_408 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_408 - 1,0);
          auVar16._4_4_ = uVar130;
          auVar16._0_4_ = uVar130;
          auVar16._8_4_ = uVar130;
          auVar16._12_4_ = uVar130;
          auVar166 = auVar16._4_12_;
          auVar17._4_4_ = uStack_46c;
          auVar17._0_4_ = uStack_46c;
          auVar17._8_4_ = uStack_46c;
          auVar17._12_4_ = uStack_46c;
          auVar112 = auVar17._4_12_;
        }
        iVar199 = local_74;
        auVar164._4_12_ = auVar166;
        auVar164._0_4_ = uStack_46c;
        auVar146._4_12_ = auVar112;
        auVar146._0_4_ = uVar130;
        if ((local_3c8 & 1) != 0) {
          fStack_4a8 = auVar166._4_4_;
          fStack_4a4 = auVar166._8_4_;
          fStack_4ac = auVar166._0_4_;
          fStack_498 = auVar112._4_4_;
          fStack_494 = auVar112._8_4_;
          fStack_49c = auVar112._0_4_;
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_3c8 - 1,0);
          auVar164._4_4_ = fStack_4ac;
          auVar164._8_4_ = fStack_4a8;
          auVar164._12_4_ = fStack_4a4;
          auVar146._4_4_ = fStack_49c;
          auVar146._8_4_ = fStack_498;
          auVar146._12_4_ = fStack_494;
        }
        auVar186._4_4_ = uStack_468;
        auVar186._0_4_ = uStack_468;
        auVar176._4_4_ = uStack_488;
        auVar176._0_4_ = uStack_488;
        auVar186._8_4_ = uStack_468;
        auVar176._8_4_ = uStack_488;
        auVar186._12_4_ = uStack_468;
        auVar176._12_4_ = uStack_488;
        auVar177._8_8_ = auVar176._8_8_;
        auVar177._4_4_ = uStack_468;
        auVar177._0_4_ = uStack_488;
        auVar108._0_4_ = fVar52 * auVar164._0_4_;
        auVar108._4_4_ = fVar52 * auVar164._4_4_;
        auVar108._8_4_ = local_470 * auVar164._8_4_;
        auVar108._12_4_ = fVar52 * auVar164._12_4_;
        auVar187._8_8_ = auVar186._8_8_;
        auVar187._4_4_ = uStack_488;
        auVar187._0_4_ = uStack_468;
        auVar76._0_4_ = auVar146._0_4_ * local_470 * local_4c0;
        auVar76._4_4_ = auVar146._4_4_ * local_470 * fStack_4bc;
        auVar76._8_4_ = auVar146._8_4_ * fVar52 * fStack_4b8;
        auVar76._12_4_ = auVar146._12_4_ * local_470 * fStack_4b4;
        if ((local_388 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(auVar76,auVar108,auVar124,0,local_388 - 1,0);
          auVar187._8_4_ = uStack_468;
          auVar187._12_4_ = uStack_468;
          auVar177._8_4_ = uStack_488;
          auVar177._12_4_ = uStack_488;
        }
        if ((local_348 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_348 - 1,0);
        }
        fVar52 = auVar177._0_4_ * auVar108._0_4_ + auVar187._0_4_ * auVar76._0_4_;
        fVar80 = auVar177._4_4_ * auVar108._4_4_ + auVar187._4_4_ * auVar76._4_4_;
        fVar81 = auVar177._8_4_ * auVar108._8_4_ + auVar187._8_4_ * auVar76._8_4_;
        fVar82 = auVar177._12_4_ * auVar108._12_4_ + auVar187._12_4_ * auVar76._12_4_;
      }
    }
    else {
      FUN_029c7fc8(param_2);
      fVar52 = extraout_s0;
      fVar80 = extraout_var;
      fVar81 = extraout_var_00;
      fVar82 = extraout_var_01;
    }
    local_340 = local_340 & 0xffffffff00000000;
    fVar133 = *(float *)(param_2 + 0x94) * fVar211 * 30.0;
    local_380 = 1.0;
    local_2c0 = (undefined *)CONCAT44(local_2c0._4_4_,fVar133);
    fVar211 = *(float *)(param_2 + 0xa0);
    fVar109 = *(float *)(param_2 + 0xa4);
    fVar128 = *(float *)(param_2 + 0xa8);
    fVar131 = *(float *)(param_2 + 0xac);
    auVar155 = NEON_fmov(0xbf800000,4);
    auVar50._0_4_ = fVar52 * fVar211 + fVar80 * fVar109;
    auVar50._4_4_ = fVar81 * fVar128 + fVar82 * fVar131;
    auVar50._8_4_ = fVar52 * fVar211 + fVar80 * fVar109;
    auVar50._12_4_ = fVar81 * fVar128 + fVar82 * fVar131;
    auVar86 = NEON_ext(auVar50,auVar50,4,1);
    auVar51._0_4_ = auVar86._0_4_ + auVar86._4_4_;
    auVar51._4_4_ = auVar86._8_4_ + auVar86._12_4_;
    auVar51._8_4_ = auVar86._0_4_ + auVar86._4_4_;
    auVar51._12_4_ = auVar86._8_4_ + auVar86._12_4_;
    auVar86 = NEON_fmax(auVar51,auVar155,4);
    auVar178 = NEON_fmin(auVar86,auVar59,4);
    auVar125._0_4_ = -(uint)(auVar178._0_4_ < 0.0);
    auVar125._4_4_ = -(uint)(auVar178._4_4_ < 0.0);
    auVar125._8_4_ = -(uint)(auVar178._8_4_ < 0.0);
    auVar125._12_4_ = -(uint)(auVar178._12_4_ < 0.0);
    auVar86 = auVar59 ^ (auVar59 ^ auVar155) & auVar125;
    fVar110 = auVar178._0_4_ * auVar86._0_4_;
    fVar129 = auVar178._4_4_ * auVar86._4_4_;
    fVar132 = auVar178._8_4_ * auVar86._8_4_;
    fVar79 = auVar178._12_4_ * auVar86._12_4_;
    fVar52 = fVar52 * auVar86._0_4_;
    fVar80 = fVar80 * auVar86._4_4_;
    fVar81 = fVar81 * auVar86._8_4_;
    fVar82 = fVar82 * auVar86._12_4_;
    fVar180 = SQRT(local_460 - fVar110 * fVar110);
    fVar134 = SQRT(fStack_45c - fVar129 * fVar129);
    fVar248 = SQRT(fStack_458 - fVar132 * fVar132);
    fVar250 = SQRT(fStack_454 - fVar79 * fVar79);
    auVar237._0_4_ = ABS(fVar180 / fVar110);
    auVar237._4_4_ = ABS(fVar134 / fVar129);
    auVar237._8_4_ = ABS(fVar248 / fVar132);
    auVar237._12_4_ = ABS(fVar250 / fVar79);
    auVar229._0_4_ = -(uint)(0.0 <= fVar180 / fVar110);
    auVar229._4_4_ = -(uint)(0.0 <= fVar134 / fVar129);
    auVar229._8_4_ = -(uint)(0.0 <= fVar248 / fVar132);
    auVar229._12_4_ = -(uint)(0.0 <= fVar250 / fVar79);
    iVar205 = -(uint)(fVar180 == 0.0);
    iVar207 = -(uint)(fVar248 == 0.0);
    iVar209 = -(uint)(fVar250 == 0.0);
    auVar59 = auVar155 ^ (auVar155 ^ auVar59) & auVar229;
    auVar230._0_4_ = -auVar59._0_4_;
    auVar230._4_4_ = -auVar59._4_4_;
    auVar230._8_4_ = -auVar59._8_4_;
    auVar230._12_4_ = -auVar59._12_4_;
    auVar242._0_4_ = (auVar237._0_4_ + auVar155._0_4_) / (auVar237._0_4_ + local_460);
    auVar242._4_4_ = (auVar237._4_4_ + auVar155._4_4_) / (auVar237._4_4_ + fStack_45c);
    auVar242._8_4_ = (auVar237._8_4_ + auVar155._8_4_) / (auVar237._8_4_ + fStack_458);
    auVar242._12_4_ = (auVar237._12_4_ + auVar155._12_4_) / (auVar237._12_4_ + fStack_454);
    auVar86 = NEON_frecpe(auVar237,4);
    auVar155 = NEON_frecps(auVar86,auVar237,4);
    auVar256._0_4_ = auVar86._0_4_ * auVar155._0_4_;
    auVar256._4_4_ = auVar86._4_4_ * auVar155._4_4_;
    auVar256._8_4_ = auVar86._8_4_ * auVar155._8_4_;
    auVar256._12_4_ = auVar86._12_4_ * auVar155._12_4_;
    auVar269._8_4_ = 0xbfc90fdb;
    auVar269._0_8_ = 0xbfc90fdbbfc90fdb;
    auVar269._12_4_ = 0xbfc90fdb;
    auVar86 = NEON_frecps(auVar256,auVar237,4);
    auVar257._0_4_ = auVar256._0_4_ * auVar86._0_4_;
    auVar257._4_4_ = auVar256._4_4_ * auVar86._4_4_;
    auVar257._8_4_ = auVar256._8_4_ * auVar86._8_4_;
    auVar257._12_4_ = auVar256._12_4_ * auVar86._12_4_;
    auVar268._0_4_ = -(uint)(auVar237._0_4_ <= 2.4142137);
    auVar268._4_4_ = -(uint)(auVar237._4_4_ <= 2.4142137);
    auVar268._8_4_ = -(uint)(auVar237._8_4_ <= 2.4142137);
    auVar268._12_4_ = -(uint)(auVar237._12_4_ <= 2.4142137);
    auVar258._0_4_ = -(uint)(auVar237._0_4_ <= 0.41421354);
    auVar258._4_4_ = -(uint)(auVar237._4_4_ <= 0.41421354);
    auVar258._8_4_ = -(uint)(auVar237._8_4_ <= 0.41421354);
    auVar258._12_4_ = -(uint)(auVar237._12_4_ <= 0.41421354);
    auVar59 = auVar59 ^ (auVar59 ^ auVar230) & ~auVar268;
    auVar237 = auVar237 ^ (auVar237 ^ auVar242 ^ (auVar242 ^ auVar257) & ~auVar268) & ~auVar258;
    fVar200 = auVar237._0_4_;
    fVar260 = fVar200 * fVar200;
    fVar206 = auVar237._4_4_;
    fVar263 = fVar206 * fVar206;
    fVar208 = auVar237._8_4_;
    fVar264 = fVar208 * fVar208;
    fVar210 = auVar237._12_4_;
    fVar265 = fVar210 * fVar210;
    uVar274 = -(uint)(fVar180 == -0.0);
    iVar222 = -(uint)(fVar248 == -0.0);
    iVar232 = -(uint)(fVar250 == -0.0);
    bVar275 = (byte)(uVar274 >> 0x18);
    bVar276 = (byte)(-(uint)(fVar134 == -0.0) >> 0x18);
    bVar277 = (byte)((uint)iVar222 >> 8);
    bVar278 = (byte)((uint)iVar222 >> 0x10);
    bVar279 = (byte)((uint)iVar222 >> 0x18);
    bVar280 = (byte)((uint)iVar232 >> 8);
    bVar281 = (byte)((uint)iVar232 >> 0x10);
    bVar282 = (byte)((uint)iVar232 >> 0x18);
    auVar262._8_4_ = 0x3f490fdb;
    auVar262._0_8_ = 0x3f490fdb3f490fdb;
    auVar262._12_4_ = 0x3f490fdb;
    auVar267._8_4_ = 0xc0490fdb;
    auVar267._0_8_ = 0xc0490fdbc0490fdb;
    auVar267._12_4_ = 0xc0490fdb;
    uVar24 = CONCAT17(bVar276,(uint7)uVar274) & 0xc0490fdbc0490fdb;
    auVar269 = auVar269 ^ (auVar269 ^ auVar262) & auVar268;
    fVar251 = (float)CONCAT13(auVar269[3] & ~(byte)((uint)auVar258._0_4_ >> 0x18),
                              CONCAT12(auVar269[2] & ~(byte)((uint)auVar258._0_4_ >> 0x10),
                                       CONCAT11(auVar269[1] & ~(byte)((uint)auVar258._0_4_ >> 8),
                                                auVar269[0] & ~(byte)auVar258._0_4_)));
    auVar252._0_8_ =
         CONCAT17(auVar269[7] & ~(byte)((uint)auVar258._4_4_ >> 0x18),
                  CONCAT16(auVar269[6] & ~(byte)((uint)auVar258._4_4_ >> 0x10),
                           CONCAT15(auVar269[5] & ~(byte)((uint)auVar258._4_4_ >> 8),
                                    CONCAT14(auVar269[4] & ~(byte)auVar258._4_4_,fVar251))));
    auVar252[8] = auVar269[8] & ~(byte)auVar258._8_4_;
    auVar252[9] = auVar269[9] & ~(byte)((uint)auVar258._8_4_ >> 8);
    auVar252[10] = auVar269[10] & ~(byte)((uint)auVar258._8_4_ >> 0x10);
    auVar252[0xb] = auVar269[0xb] & ~(byte)((uint)auVar258._8_4_ >> 0x18);
    auVar259[0xc] = auVar269[0xc] & ~(byte)auVar258._12_4_;
    auVar259._0_12_ = auVar252;
    auVar259[0xd] = auVar269[0xd] & ~(byte)((uint)auVar258._12_4_ >> 8);
    auVar259[0xe] = auVar269[0xe] & ~(byte)((uint)auVar258._12_4_ >> 0x10);
    auVar259[0xf] = auVar269[0xf] & ~(byte)((uint)auVar258._12_4_ >> 0x18);
    uVar23 = (ulong)CONCAT31((int3)(((uint)CONCAT11(~bVar275,~(byte)(uVar274 >> 0x10)) << 0x10) >> 8
                                   ),~(byte)uVar274) & 0xffffffffffffffdb;
    uVar22 = CONCAT62((int6)(uVar23 >> 0x10),CONCAT11(~(byte)(uVar274 >> 8),(char)uVar23)) &
             0xffffffffffff0fff;
    uVar274 = CONCAT13((char)(uVar22 >> 0x18),CONCAT12((char)(uVar23 >> 0x10),(short)uVar22)) &
              0x4049ffff;
    uVar22 = CONCAT71((int7)(((ulong)CONCAT15(~bVar282,CONCAT14(~bVar281,CONCAT13(~bVar280,CONCAT12(
                                                  ~(byte)iVar232,CONCAT11(~bVar279,~bVar278))))) <<
                             0x10) >> 8),~(byte)iVar222) & 0xffffffffffffffdb;
    uVar23 = CONCAT62((int6)(uVar22 >> 0x10),CONCAT11(~bVar277,(char)uVar22)) & 0xffffffffffff0fff;
    uVar22 = CONCAT53((int5)(uVar23 >> 0x18),CONCAT12((char)(uVar22 >> 0x10),(short)uVar23)) &
             0xffffffffff49ffff;
    uVar23 = CONCAT44((int)(uVar22 >> 0x20),CONCAT13((char)(uVar23 >> 0x18),(int3)uVar22)) &
             0xffffffff40ffffff;
    uVar22 = CONCAT35((int3)(uVar23 >> 0x28),CONCAT14((char)(uVar22 >> 0x20),(int)uVar23)) &
             0xffffffdbffffffff;
    uVar23 = CONCAT26((short)(uVar22 >> 0x30),CONCAT15((char)(uVar23 >> 0x28),(int5)uVar22)) &
             0xffff0fffffffffff;
    uVar22 = CONCAT17((char)(uVar23 >> 0x38),CONCAT16((char)(uVar22 >> 0x30),(int6)uVar23)) &
             0x4049ffffffffffff;
    pfVar19 = &local_380;
    if (fVar133 <= 1.0) {
      pfVar19 = (float *)&local_2c0;
    }
    iVar233 = -(uint)(fVar110 == INFINITY);
    iVar234 = -(uint)(fVar132 == INFINITY);
    iVar238 = -(uint)(fVar79 == INFINITY);
    auVar147[0] = ~(byte)iVar233;
    auVar147[1] = ~(byte)((uint)iVar233 >> 8);
    auVar147[2] = ~(byte)((uint)iVar233 >> 0x10);
    auVar147[3] = ~(byte)((uint)iVar233 >> 0x18);
    auVar147._4_3_ = 0;
    auVar147[7] = ~(byte)(-(uint)(fVar129 == INFINITY) >> 0x18);
    auVar147[8] = ~(byte)iVar234;
    auVar147[9] = ~(byte)((uint)iVar234 >> 8);
    auVar147[10] = ~(byte)((uint)iVar234 >> 0x10);
    auVar147[0xb] = ~(byte)((uint)iVar234 >> 0x18);
    auVar147[0xc] = ~(byte)iVar238;
    auVar147[0xd] = ~(byte)((uint)iVar238 >> 8);
    auVar147[0xe] = ~(byte)((uint)iVar238 >> 0x10);
    auVar147[0xf] = ~(byte)((uint)iVar238 >> 0x18);
    iVar233 = -(uint)(fVar110 == -INFINITY);
    iVar234 = -(uint)(fVar132 == -INFINITY);
    iVar238 = -(uint)(fVar79 == -INFINITY);
    bVar270 = (byte)((int)fVar180 >> 0x1f);
    bVar271 = (byte)((int)fVar134 >> 0x1f);
    bVar272 = (byte)((int)fVar248 >> 0x1f);
    bVar273 = (byte)((int)fVar250 >> 0x1f);
    uVar181 = -(uint)(fVar180 == INFINITY);
    iVar245 = -(uint)(fVar248 == INFINITY);
    iVar247 = -(uint)(fVar250 == INFINITY);
    bVar190 = ~(byte)(uVar181 >> 0x18);
    bVar192 = (byte)(-(uint)(fVar134 == INFINITY) >> 0x18);
    bVar191 = ~bVar192;
    auVar188._0_8_ =
         CONCAT17(bVar191,(uint7)CONCAT13(bVar190,CONCAT12(~(byte)(uVar181 >> 0x10),
                                                           CONCAT11(~(byte)(uVar181 >> 8),
                                                                    ~(byte)uVar181))));
    auVar188[8] = ~(byte)iVar245;
    bVar193 = (byte)((uint)iVar245 >> 8);
    auVar188[9] = ~bVar193;
    bVar194 = (byte)((uint)iVar245 >> 0x10);
    auVar188[10] = ~bVar194;
    bVar195 = (byte)((uint)iVar245 >> 0x18);
    auVar188[0xb] = ~bVar195;
    auVar188[0xc] = ~(byte)iVar247;
    bVar196 = (byte)((uint)iVar247 >> 8);
    auVar188[0xd] = ~bVar196;
    bVar197 = (byte)((uint)iVar247 >> 0x10);
    bVar198 = (byte)((uint)iVar247 >> 0x18);
    auVar188[0xe] = ~bVar197;
    auVar188[0xf] = ~bVar198;
    auVar179[0] = ~(byte)iVar233;
    auVar179[1] = ~(byte)((uint)iVar233 >> 8);
    auVar179[2] = ~(byte)((uint)iVar233 >> 0x10);
    auVar179[3] = ~(byte)((uint)iVar233 >> 0x18);
    auVar179._4_3_ = 0;
    auVar179[7] = ~(byte)(-(uint)(fVar129 == -INFINITY) >> 0x18);
    auVar179[8] = ~(byte)iVar234;
    auVar179[9] = ~(byte)((uint)iVar234 >> 8);
    auVar179[10] = ~(byte)((uint)iVar234 >> 0x10);
    auVar179[0xb] = ~(byte)((uint)iVar234 >> 0x18);
    auVar179[0xc] = ~(byte)iVar238;
    auVar179[0xd] = ~(byte)((uint)iVar238 >> 8);
    auVar179[0xe] = ~(byte)((uint)iVar238 >> 0x10);
    auVar179[0xf] = ~(byte)((uint)iVar238 >> 0x18);
    uVar23 = CONCAT17(bVar192,(uint7)uVar181) & 0x3f490fdb3f490fdb;
    auVar212[9] = bVar272;
    auVar212[8] = bVar272;
    auVar212[10] = bVar272;
    auVar212[0xb] = bVar272;
    auVar212[0xc] = bVar273;
    auVar212[0xd] = bVar273;
    auVar212[0xe] = bVar273;
    auVar212[0xf] = bVar273;
    auVar212[1] = bVar270;
    auVar212[0] = bVar270;
    auVar212[2] = bVar270;
    auVar212[3] = bVar270;
    auVar212[4] = bVar271;
    auVar212[5] = bVar271;
    auVar212[6] = bVar271;
    auVar212[7] = bVar271;
    pfVar2 = (float *)&local_340;
    if (0.0 <= fVar133) {
      pfVar2 = pfVar19;
    }
    auVar6[8] = 0xdb;
    auVar6._0_8_ = 0x40490fdb40490fdb;
    auVar6[9] = 0xf;
    auVar6[10] = 0x49;
    auVar6[0xb] = 0x40;
    auVar6[0xc] = 0xdb;
    auVar6[0xd] = 0xf;
    auVar6[0xe] = 0x49;
    auVar6[0xf] = 0x40;
    auVar213[8] = 0xdb;
    auVar213._0_8_ = 0x40490fdb40490fdb;
    auVar213[9] = 0xf;
    auVar213[10] = 0x49;
    auVar213[0xb] = 0x40;
    auVar213[0xc] = 0xdb;
    auVar213[0xd] = 0xf;
    auVar213[0xe] = 0x49;
    auVar213[0xf] = 0x40;
    auVar213 = auVar213 ^ (auVar6 ^ auVar267) & auVar212;
    bVar192 = (byte)((int)fVar110 >> 0x1f);
    fVar133 = (float)CONCAT13(auVar213[3] & bVar192,
                              CONCAT12(auVar213[2] & bVar192,
                                       CONCAT11(auVar213[1] & bVar192,auVar213[0] & bVar192)));
    bVar244 = (byte)((int)fVar129 >> 0x1f);
    auVar223._0_8_ =
         CONCAT17(auVar213[7] & bVar244,
                  CONCAT16(auVar213[6] & bVar244,
                           CONCAT15(auVar213[5] & bVar244,CONCAT14(auVar213[4] & bVar244,fVar133))))
    ;
    bVar246 = (byte)((int)fVar132 >> 0x1f);
    auVar223[8] = auVar213[8] & bVar246;
    auVar223[9] = auVar213[9] & bVar246;
    auVar223[10] = auVar213[10] & bVar246;
    auVar223[0xb] = auVar213[0xb] & bVar246;
    bVar249 = (byte)((int)fVar79 >> 0x1f);
    auVar231[0xc] = auVar213[0xc] & bVar249;
    auVar231._0_12_ = auVar223;
    auVar231[0xd] = auVar213[0xd] & bVar249;
    auVar231[0xe] = auVar213[0xe] & bVar249;
    auVar231[0xf] = auVar213[0xf] & bVar249;
    auVar165._0_4_ =
         auVar59._0_4_ *
         (fVar251 +
         (local_460 +
         fVar260 * (fVar260 * (fVar260 * (fVar260 * (fVar260 * (fVar260 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar200) + fVar133;
    auVar165._4_4_ =
         auVar59._4_4_ *
         ((float)((ulong)auVar252._0_8_ >> 0x20) +
         (fStack_45c +
         fVar263 * (fVar263 * (fVar263 * (fVar263 * (fVar263 * (fVar263 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar206) + (float)((ulong)auVar223._0_8_ >> 0x20);
    auVar165._8_4_ =
         auVar59._8_4_ *
         (auVar252._8_4_ +
         (fStack_458 +
         fVar264 * (fVar264 * (fVar264 * (fVar264 * (fVar264 * (fVar264 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar208) + auVar223._8_4_;
    auVar165._12_4_ =
         auVar59._12_4_ *
         (auVar259._12_4_ +
         (fStack_454 +
         fVar265 * (fVar265 * (fVar265 * (fVar265 * (fVar265 * (fVar265 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar210) + auVar231._12_4_;
    auVar189[1] = ((byte)(uVar274 >> 8) | (byte)(uVar24 >> 8)) & bVar192;
    auVar189[0] = ((byte)uVar274 | (byte)uVar24) & bVar192;
    auVar243._8_8_ = auVar188._8_8_;
    auVar243._0_8_ = auVar188._0_8_;
    uVar25 = CONCAT17(bVar271 & bVar191,(uint7)(bVar270 & bVar190 & 0x80) << 0x18) &
             0x80ffffffffffffff;
    auVar59._8_4_ = 0x4016cbe4;
    auVar59._0_8_ = 0x4016cbe44016cbe4;
    auVar59._12_4_ = 0x4016cbe4;
    auVar7._8_4_ = 0x4016cbe4;
    auVar7._0_8_ = 0x4016cbe44016cbe4;
    auVar7._12_4_ = 0x4016cbe4;
    auVar8._8_4_ = 0x3fc90fdb;
    auVar8._0_8_ = 0x3fc90fdb3fc90fdb;
    auVar8._12_4_ = 0x3fc90fdb;
    auVar165 = auVar165 ^ (auVar165 ^ auVar8) & ~auVar188;
    auVar148._0_3_ = (undefined3)uVar23;
    auVar148[3] = (byte)(uVar25 >> 0x18) | (byte)(uVar23 >> 0x18);
    auVar148._4_3_ = 0;
    auVar148[7] = (undefined1)(uVar25 >> 0x38);
    auVar148[8] = (byte)iVar245 & 0xdb;
    auVar148[9] = bVar193 & 0xf;
    auVar148[10] = bVar194 & 0x49;
    auVar148[0xb] = bVar272 & auVar188[0xb] & 0x80 | bVar195 & 0x3f;
    auVar148[0xc] = (byte)iVar247 & 0xdb;
    auVar148[0xd] = bVar196 & 0xf;
    auVar148[0xe] = bVar197 & 0x49;
    auVar148[0xf] = bVar273 & auVar188[0xf] & 0x80 | bVar198 & 0x3f;
    auVar189[2] = ((byte)(uVar274 >> 0x10) | (byte)(uVar24 >> 0x10)) & bVar192;
    auVar189[3] = ((byte)(uVar274 >> 0x18) | (byte)(uVar24 >> 0x18)) & bVar192 |
                  bVar275 & ~bVar192 & 0x80;
    auVar189._4_3_ = 0;
    auVar189[7] = (byte)(uVar24 >> 0x38) & bVar244 | bVar276 & ~bVar244 & 0x80;
    auVar189[8] = ((byte)uVar22 | (byte)iVar222 & 0xdb) & bVar246;
    auVar189[9] = ((byte)(uVar22 >> 8) | bVar277 & 0xf) & bVar246;
    auVar189[10] = ((byte)(uVar22 >> 0x10) | bVar278 & 0x49) & bVar246;
    auVar189[0xb] = ((byte)(uVar22 >> 0x18) | bVar279 & 0xc0) & bVar246 | bVar279 & ~bVar246 & 0x80;
    auVar189[0xc] = ((byte)(uVar22 >> 0x20) | (byte)iVar232 & 0xdb) & bVar249;
    auVar189[0xd] = ((byte)(uVar22 >> 0x28) | bVar280 & 0xf) & bVar249;
    auVar189[0xe] = ((byte)(uVar22 >> 0x30) | bVar281 & 0x49) & bVar249;
    auVar189[0xf] = ((byte)(uVar22 >> 0x38) | bVar282 & 0xc0) & bVar249 | bVar282 & ~bVar249 & 0x80;
    auVar148 = auVar148 ^
               (auVar148 ^
               auVar165 ^ (auVar165 ^ auVar7 ^ (auVar59 ^ auVar213) & auVar243) & ~auVar179) &
               auVar147;
    fVar248 = *pfVar2;
    auVar11[1] = ~(byte)((uint)iVar205 >> 8);
    auVar11[0] = ~(byte)iVar205;
    auVar11[2] = ~(byte)((uint)iVar205 >> 0x10);
    auVar11[3] = ~(byte)((uint)iVar205 >> 0x18);
    auVar11._4_3_ = 0;
    auVar11[7] = ~(byte)(-(uint)(fVar134 == 0.0) >> 0x18);
    auVar11[8] = ~(byte)iVar207;
    auVar11[9] = ~(byte)((uint)iVar207 >> 8);
    auVar11[10] = ~(byte)((uint)iVar207 >> 0x10);
    auVar11[0xb] = ~(byte)((uint)iVar207 >> 0x18);
    auVar11[0xc] = ~(byte)iVar209;
    auVar11[0xd] = ~(byte)((uint)iVar209 >> 8);
    auVar11[0xe] = ~(byte)((uint)iVar209 >> 0x10);
    auVar11[0xf] = ~(byte)((uint)iVar209 >> 0x18);
    auVar148 = auVar148 ^ (auVar148 ^ auVar189) & ~auVar11;
    fVar133 = auVar148._0_4_;
    fVar250 = fVar248 * fVar133;
    fVar79 = auVar148._12_4_;
    fVar134 = fVar133 - fVar133 * fVar248;
    fVar79 = fVar79 - fVar79 * fVar248;
    auVar149._0_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar134) & 0x80000000 ^ 0x3f000000) + fVar134 * 0.15915494);
    auVar149._4_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar250) & 0x80000000 ^ 0x3f000000) + fVar250 * 0.15915494);
    auVar149._8_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar133) & 0x80000000 ^ 0x3f000000) + fVar133 * 0.15915494);
    auVar149._12_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar79) & 0x80000000 ^ 0x3f000000) + fVar79 * 0.15915494);
    auVar59 = NEON_scvtf(auVar149,4);
    fVar110 = fVar134 + auVar59._0_4_ * -6.2831855;
    fVar129 = fVar250 + auVar59._4_4_ * -6.2831855;
    fVar132 = fVar133 + auVar59._8_4_ * -6.2831855;
    fVar180 = fVar79 + auVar59._12_4_ * -6.2831855;
    fVar110 = (float)((uint)fVar110 ^
                     ((uint)fVar110 ^ (uint)(-3.1415927 - fVar110)) & -(uint)(fVar110 < -1.5707964))
    ;
    fVar129 = (float)((uint)fVar129 ^
                     ((uint)fVar129 ^ (uint)(-3.1415927 - fVar129)) & -(uint)(fVar129 < -1.5707964))
    ;
    fVar132 = (float)((uint)fVar132 ^
                     ((uint)fVar132 ^ (uint)(-3.1415927 - fVar132)) & -(uint)(fVar132 < -1.5707964))
    ;
    fVar180 = (float)((uint)fVar180 ^
                     ((uint)fVar180 ^ (uint)(-3.1415927 - fVar180)) & -(uint)(fVar180 < -1.5707964))
    ;
    fVar110 = (float)((uint)fVar110 ^
                     ((uint)fVar110 ^ (uint)(3.1415927 - fVar110)) & -(uint)(1.5707964 < fVar110));
    fVar129 = (float)((uint)fVar129 ^
                     ((uint)fVar129 ^ (uint)(3.1415927 - fVar129)) & -(uint)(1.5707964 < fVar129));
    fVar132 = (float)((uint)fVar132 ^
                     ((uint)fVar132 ^ (uint)(3.1415927 - fVar132)) & -(uint)(1.5707964 < fVar132));
    fVar180 = (float)((uint)fVar180 ^
                     ((uint)fVar180 ^ (uint)(3.1415927 - fVar180)) & -(uint)(1.5707964 < fVar180));
    fVar200 = fVar110 * fVar110;
    fVar206 = fVar129 * fVar129;
    fVar208 = fVar132 * fVar132;
    fVar210 = fVar180 * fVar180;
    auVar127._8_4_ = 0x7fc00000;
    auVar127._0_8_ = 0x7fc000007fc00000;
    auVar127._12_4_ = 0x7fc00000;
    iVar205 = -(uint)(ABS(fVar134) == INFINITY);
    iVar207 = -(uint)(ABS(fVar250) == INFINITY);
    iVar209 = -(uint)(ABS(fVar133) == INFINITY);
    iVar222 = -(uint)(ABS(fVar79) == INFINITY);
    auVar126[0] = ~(byte)iVar205;
    auVar126[1] = ~(byte)((uint)iVar205 >> 8);
    auVar126[2] = ~(byte)((uint)iVar205 >> 0x10);
    auVar126[3] = ~(byte)((uint)iVar205 >> 0x18);
    auVar126[4] = ~(byte)iVar207;
    auVar126[5] = ~(byte)((uint)iVar207 >> 8);
    auVar126[6] = ~(byte)((uint)iVar207 >> 0x10);
    auVar126[7] = ~(byte)((uint)iVar207 >> 0x18);
    auVar126[8] = ~(byte)iVar209;
    auVar126[9] = ~(byte)((uint)iVar209 >> 8);
    auVar126[10] = ~(byte)((uint)iVar209 >> 0x10);
    auVar126[0xb] = ~(byte)((uint)iVar209 >> 0x18);
    auVar126[0xc] = ~(byte)iVar222;
    auVar126[0xd] = ~(byte)((uint)iVar222 >> 8);
    auVar126[0xe] = ~(byte)((uint)iVar222 >> 0x10);
    auVar126[0xf] = ~(byte)((uint)iVar222 >> 0x18);
    auVar150._0_4_ =
         fVar110 * (local_460 +
                   fVar200 * (fVar200 * (fVar200 * (fVar200 * (fVar200 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar150._4_4_ =
         fVar129 * (fStack_45c +
                   fVar206 * (fVar206 * (fVar206 * (fVar206 * (fVar206 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar150._8_4_ =
         fVar132 * (fStack_458 +
                   fVar208 * (fVar208 * (fVar208 * (fVar208 * (fVar208 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar150._12_4_ =
         fVar180 * (fStack_454 +
                   fVar210 * (fVar210 * (fVar210 * (fVar210 * (fVar210 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar127 = auVar127 ^ (auVar127 ^ auVar150) & auVar126;
    fVar133 = auVar127._0_4_;
    fVar110 = auVar127._4_4_;
    fVar129 = auVar127._8_4_;
    auVar151._0_4_ = (fVar211 * fVar133 + fVar52 * fVar110) / fVar129;
    auVar151._4_4_ = (fVar109 * fVar133 + fVar80 * fVar110) / fVar129;
    auVar151._8_4_ = (fVar128 * fVar133 + fVar81 * fVar110) / fVar129;
    auVar151._12_4_ = (fVar131 * fVar133 + fVar82 * fVar110) / fVar129;
    auVar78._0_4_ = fVar211 + (fVar52 - fVar211) * fVar248;
    auVar78._4_4_ = fVar109 + (fVar80 - fVar109) * fVar248;
    auVar78._8_4_ = fVar128 + (fVar81 - fVar128) * fVar248;
    auVar78._12_4_ = fVar131 + (fVar82 - fVar131) * fVar248;
    iVar205 = -(uint)(fVar129 == 0.0);
    iVar207 = -(uint)(fVar129 == 0.0);
    iVar209 = -(uint)(fVar129 == 0.0);
    iVar222 = -(uint)(fVar129 == 0.0);
    auVar77[0] = ~(byte)iVar205;
    auVar77[1] = ~(byte)((uint)iVar205 >> 8);
    auVar77[2] = ~(byte)((uint)iVar205 >> 0x10);
    auVar77[3] = ~(byte)((uint)iVar205 >> 0x18);
    auVar77[4] = ~(byte)iVar207;
    auVar77[5] = ~(byte)((uint)iVar207 >> 8);
    auVar77[6] = ~(byte)((uint)iVar207 >> 0x10);
    auVar77[7] = ~(byte)((uint)iVar207 >> 0x18);
    auVar77[8] = ~(byte)iVar209;
    auVar77[9] = ~(byte)((uint)iVar209 >> 8);
    auVar77[10] = ~(byte)((uint)iVar209 >> 0x10);
    auVar77[0xb] = ~(byte)((uint)iVar209 >> 0x18);
    auVar77[0xc] = ~(byte)iVar222;
    auVar77[0xd] = ~(byte)((uint)iVar222 >> 8);
    auVar77[0xe] = ~(byte)((uint)iVar222 >> 0x10);
    auVar77[0xf] = ~(byte)((uint)iVar222 >> 0x18);
    auVar78 = auVar78 ^ (auVar78 ^ auVar151) & auVar77;
    *(long *)(param_2 + 0xa8) = auVar78._8_8_;
    *(long *)(param_2 + 0xa0) = auVar78._0_8_;
    FUN_00d172e8(*(undefined8 *)(param_2 + 0xd0),iVar199);
    return;
  }
  goto LAB_00f51a50;
LAB_00f51bbc:
  if (plVar28 != plVar3) {
LAB_00f51bd8:
    uVar22 = *(ulong *)(*plVar28 + 0x40);
    if (uVar22 != 0) {
      uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar24 = uVar22 - 1 & 0x55c0d7a581349f0f;
      }
      else {
        uVar24 = 0x55c0d7a581349f0f;
        if (uVar22 < 0x55c0d7a581349f10) {
          uVar24 = 0;
          if (uVar22 != 0) {
            uVar24 = 0x55c0d7a581349f0f / uVar22;
          }
          uVar24 = 0x55c0d7a581349f0f - uVar24 * uVar22;
        }
      }
      plVar26 = *(long **)(*(long *)(*plVar28 + 0x38) + uVar24 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if (plVar26[1] == 0x55c0d7a581349f0f) {
              if (plVar26[2] == 0x55c0d7a581349f0f) goto LAB_00f51ccc;
            }
            else if ((plVar26[1] & uVar22 - 1) != uVar24) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar26[1];
            if (uVar23 == 0x55c0d7a581349f0f) {
              if (plVar26[2] == 0x55c0d7a581349f0f) goto LAB_00f51ccc;
            }
            else {
              if (uVar22 <= uVar23) {
                uVar25 = 0;
                if (uVar22 != 0) {
                  uVar25 = uVar23 / uVar22;
                }
                uVar23 = uVar23 - uVar25 * uVar22;
              }
              if (uVar23 != uVar24) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_00f51cd4;
  }
LAB_00f51a50:
  *(undefined8 *)(param_2 + 0xd8) = 0;
  return;
}


