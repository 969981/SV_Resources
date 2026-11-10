/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bca80; name: FUN_008bca80
 */


void FUN_008bca80(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long *param_4,float *param_5,float *param_6,undefined8 *param_7)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [4];
  float local_64;
  float local_5c;
  float local_58;
  float fStack_54;
  
  uVar21 = param_3._8_8_;
  uVar18 = param_3._0_8_;
  uVar14 = param_2._8_8_;
  fVar12 = param_2._4_4_;
  fVar8 = param_2._0_4_;
  if ((*(byte *)(param_4 + 0xb) & 1) != 0) {
    uVar5 = FUN_008a8c78();
    if ((uVar5 & 1) == 0) {
      local_58 = -3.4028235e+38;
      fStack_54 = 3.4028235e+38;
      if (((*PTR_DAT_047d2160 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2160), iVar4 != 0)) {
        if (((*PTR_DAT_047d2098 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar4 != 0)) {
          *(undefined8 *)PTR_DAT_047d20a0 = 0;
          __cxa_guard_release(PTR_DAT_047d2098);
        }
        *(undefined **)PTR_DAT_047d2168 = PTR_DAT_047d20a0;
        __cxa_guard_release(PTR_DAT_047d2160);
      }
      for (plVar6 = (long *)(**(code **)(*param_4 + 0x10))(param_4); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)PTR_DAT_047d2168) {
          if (param_4 != (long *)0x0) {
            fVar16 = 0.0;
            fVar8 = *(float *)(param_4 + 10);
            fVar12 = *(float *)((long)param_4 + 0x54);
            bVar1 = *(byte *)((long)param_4 + 0x5b) & 3;
            if (bVar1 != 1) {
              if (bVar1 == 2) {
                fVar16 = -fVar8;
              }
              else {
                fVar16 = fVar8 * -0.5;
              }
            }
            bVar1 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
            fVar23 = 0.0;
            if ((bVar1 != 1) && (fVar23 = fVar12, bVar1 != 2)) {
              fVar23 = fVar12 * 0.5;
            }
            FUN_008bc830(fVar8,fVar12,fVar16,fVar23,auStack_68,param_4,param_7);
            (**(code **)(*param_4 + 0x140))(&local_a0,param_4);
            fVar12 = (float)uStack_98 - (float)local_a0;
            (**(code **)(*param_4 + 0x140))(&local_a0,param_4);
            fVar8 = 0.0;
            bVar1 = *(byte *)((long)param_4 + 0x5b) & 3;
            if (bVar1 != 1) {
              if (bVar1 == 2) {
                fVar8 = -fVar12;
              }
              else {
                fVar8 = fVar12 * -0.5;
              }
            }
            fVar23 = local_a0._4_4_ - uStack_98._4_4_;
            bVar1 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
            fVar16 = 0.0;
            if ((bVar1 != 1) && (fVar16 = fVar23, bVar1 != 2)) {
              fVar16 = fVar23 * 0.5;
            }
            FUN_008bc830(fVar12,fVar23,fVar8,fVar16,&local_a0,param_4,param_7);
            if ((*(byte *)((long)param_4 + 0x115) >> 4 & 1) == 0) {
              bVar1 = *(byte *)((long)param_4 + 0x116) >> 2 & 3;
              if (bVar1 == 2) {
                local_a0._4_4_ = (local_a0._4_4_ - uStack_98._4_4_) + local_5c;
                uStack_98._4_4_ = local_5c;
              }
              else if (bVar1 == 1) {
                uStack_98._4_4_ = local_64 - (local_a0._4_4_ - uStack_98._4_4_);
                local_a0._4_4_ = local_64;
              }
            }
            local_58 = local_a0._4_4_;
            fStack_54 = uStack_98._4_4_;
            goto LAB_008bcd90;
          }
          break;
        }
      }
      if (((*PTR_DAT_047d2150 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2150), iVar4 != 0)) {
        if (((*PTR_DAT_047d2098 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar4 != 0)) {
          *(undefined8 *)PTR_DAT_047d20a0 = 0;
          __cxa_guard_release(PTR_DAT_047d2098);
        }
        *(undefined **)PTR_DAT_047d2158 = PTR_DAT_047d20a0;
        __cxa_guard_release(PTR_DAT_047d2150);
      }
      for (plVar6 = (long *)(**(code **)(*param_4 + 0x10))(param_4); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)PTR_DAT_047d2158) {
          bVar1 = *PTR_DAT_047d2170;
          plVar6 = param_4;
          goto joined_r0x008bcb9c;
        }
      }
      plVar6 = (long *)0x0;
      bVar1 = *PTR_DAT_047d2170;
joined_r0x008bcb9c:
      if ((bVar1 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_047d2170);
        puVar2 = PTR_DAT_047d20a0;
        if (iVar4 != 0) {
          if (((*PTR_DAT_047d2098 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar4 != 0)) {
            *(undefined8 *)puVar2 = 0;
            __cxa_guard_release(PTR_DAT_047d2098);
          }
          *(undefined **)PTR_DAT_047d2178 = puVar2;
          __cxa_guard_release(PTR_DAT_047d2170);
        }
      }
      for (plVar7 = (long *)(**(code **)(*param_4 + 0x10))(param_4); plVar7 != (long *)0x0;
          plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)PTR_DAT_047d2178) {
          bVar3 = param_4 != (long *)0x0;
          goto joined_r0x008bcbe0;
        }
      }
      bVar3 = false;
joined_r0x008bcbe0:
      if ((plVar6 != (long *)0x0) || (bVar3)) {
        fVar16 = 0.0;
        fVar8 = *(float *)(param_4 + 10);
        fVar12 = *(float *)((long)param_4 + 0x54);
        bVar1 = *(byte *)((long)param_4 + 0x5b) & 3;
        if (bVar1 != 1) {
          if (bVar1 == 2) {
            fVar16 = -fVar8;
          }
          else {
            fVar16 = fVar8 * -0.5;
          }
        }
        bVar1 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
        fVar23 = 0.0;
        if ((bVar1 != 1) && (fVar23 = fVar12, bVar1 != 2)) {
          fVar23 = fVar12 * 0.5;
        }
        FUN_008bc830(fVar8,fVar12,fVar16,fVar23,&local_a0,param_4,param_7);
        local_58 = local_a0._4_4_;
        fStack_54 = uStack_98._4_4_;
      }
LAB_008bcd90:
      fVar12 = *param_5;
      uVar18 = (ulong)(uint)fVar12;
      uVar21 = 0;
      fVar8 = local_58;
      if (local_58 <= fVar12) {
        fVar8 = fVar12;
      }
      *param_5 = fVar8;
      fVar8 = *param_6;
      fVar12 = 0.0;
      uVar14 = 0;
      fVar16 = fStack_54;
      if (fVar8 <= fStack_54) {
        fVar16 = fVar8;
      }
      *param_6 = fVar16;
    }
    auVar9 = FUN_008bc150(param_4);
    fVar24 = (float)*param_7;
    fVar16 = auVar9._0_4_;
    fVar23 = auVar9._4_4_;
    fVar10 = auVar9._8_4_;
    fVar11 = auVar9._12_4_;
    fVar25 = (float)((ulong)*param_7 >> 0x20);
    fVar13 = (float)uVar14;
    fVar15 = (float)((ulong)uVar14 >> 0x20);
    fVar26 = (float)param_7[1];
    fVar17 = (float)uVar18;
    fVar19 = (float)(uVar18 >> 0x20);
    fVar20 = (float)uVar21;
    fVar22 = (float)((ulong)uVar21 >> 0x20);
    fVar27 = (float)param_7[2];
    fVar28 = (float)((ulong)param_7[2] >> 0x20);
    fVar30 = (float)param_7[4];
    fVar31 = (float)((ulong)param_7[4] >> 0x20);
    fVar29 = (float)param_7[3];
    fVar32 = (float)param_7[5];
    uStack_90 = CONCAT44(fVar23 * fVar27 + fVar12 * fVar28 + fVar19 * fVar29 + 0.0,
                         fVar16 * fVar27 + fVar8 * fVar28 + fVar17 * fVar29 + 0.0);
    uStack_88 = CONCAT44((float)((ulong)param_7[3] >> 0x20) +
                         fVar11 * fVar27 + fVar15 * fVar28 + fVar22 * fVar29,
                         fVar10 * fVar27 + fVar13 * fVar28 + fVar20 * fVar29 + 0.0);
    local_80 = CONCAT44(fVar23 * fVar30 + fVar12 * fVar31 + fVar19 * fVar32 + 0.0,
                        fVar16 * fVar30 + fVar8 * fVar31 + fVar17 * fVar32 + 0.0);
    uStack_78 = CONCAT44((float)((ulong)param_7[5] >> 0x20) +
                         fVar11 * fVar30 + fVar15 * fVar31 + fVar22 * fVar32,
                         fVar10 * fVar30 + fVar13 * fVar31 + fVar20 * fVar32 + 0.0);
    uStack_98 = CONCAT44((float)((ulong)param_7[1] >> 0x20) +
                         fVar11 * fVar24 + fVar15 * fVar25 + fVar22 * fVar26,
                         fVar10 * fVar24 + fVar13 * fVar25 + fVar20 * fVar26 + 0.0);
    local_a0 = CONCAT44(fVar23 * fVar24 + fVar12 * fVar25 + fVar19 * fVar26 + 0.0,
                        fVar16 * fVar24 + fVar8 * fVar25 + fVar17 * fVar26 + 0.0);
    for (plVar6 = (long *)param_4[5]; plVar6 != param_4 + 4; plVar6 = (long *)plVar6[1]) {
      FUN_008bca80(plVar6 + -1,param_5,param_6,&local_a0);
    }
  }
  return;
}


