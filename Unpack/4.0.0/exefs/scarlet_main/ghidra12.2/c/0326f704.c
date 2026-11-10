/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0326f704; name: FUN_0326f704
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0326f704(long param_1)

{
  double *pdVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  MutexType *pMVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  byte bVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  ulong uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  int iVar28;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  int iVar33;
  int iVar35;
  int iVar36;
  undefined8 uVar34;
  undefined8 local_40;
  ulong local_38;
  
  uVar9 = _UNK_03cab278;
  uVar8 = _DAT_03cab270;
  uVar2 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar2) {
    lVar13 = (ulong)uVar2 + 1;
    lVar14 = (ulong)uVar2 * 0x40 + -0x20;
    do {
      pdVar1 = (double *)(*(long *)(param_1 + 0x30) + lVar14);
      auVar6 = *(undefined1 (*) [16])(pdVar1 + -4);
      auVar7 = *(undefined1 (*) [16])(pdVar1 + -2);
      uVar15 = auVar7._8_8_;
      uVar24 = auVar7._0_8_;
      auVar31._0_8_ = (long)uVar24 >> 0x3f;
      auVar31._8_8_ = (long)uVar15 >> 0x3f;
      uVar32 = (undefined4)((long)uVar24 >> 0xe);
      iVar33 = auVar7._4_4_ >> 0xe;
      auVar20._0_8_ = auVar6._0_8_ >> 0x3f;
      auVar20._8_8_ = auVar6._8_8_ >> 0x3f;
      iVar28 = auVar6._4_4_ >> 0x1f;
      iVar35 = auVar6._12_4_ >> 0x1f;
      auVar30._0_8_ = auVar6._0_8_ >> 0xe;
      auVar30._8_8_ = auVar6._8_8_ >> 0xe;
      auVar26._0_8_ = -auVar30._0_8_;
      auVar26._8_8_ = -auVar30._8_8_;
      uVar11 = (long)(uVar24 << 0x35) >> 0x3f;
      auVar21._4_4_ = iVar28;
      auVar21._0_4_ = iVar28;
      auVar21._8_4_ = iVar35;
      auVar21._12_4_ = iVar35;
      auVar30 = auVar30 ^ (auVar30 ^ auVar26) & auVar21;
      uVar3 = (uVar15 ^ uVar11) - uVar11;
      iVar36 = auVar7._4_4_ >> 0x1f;
      iVar28 = auVar7._12_4_ >> 0x1f;
      local_38 = (((long)(uVar24 << 0x35) >> 0x35 ^ uVar11) + ((uVar24 & 0x7ff) >> 10)) -
                 (ulong)((uVar15 ^ uVar11) < uVar11);
      auVar23._12_4_ = iVar28;
      auVar23._8_4_ = iVar28;
      iVar28 = LZCOUNT(auVar30._4_4_);
      iVar35 = LZCOUNT(auVar30._12_4_);
      auVar27._0_8_ = -CONCAT44(iVar33,uVar32);
      auVar27._8_8_ = -((long)uVar15 >> 0xe);
      auVar19._4_4_ = iVar33;
      auVar19._0_4_ = uVar32;
      auVar19._8_8_ = (long)uVar15 >> 0xe;
      auVar23._4_4_ = iVar36;
      auVar23._0_4_ = iVar36;
      auVar27 = auVar27 ^ (auVar27 ^ auVar19) & ~auVar23;
      if (iVar28 == 0x20) {
        iVar28 = LZCOUNT(auVar30._0_4_) + iVar28;
      }
      iVar36 = LZCOUNT(auVar27._4_4_);
      if (iVar35 == 0x20) {
        iVar35 = LZCOUNT(auVar30._8_4_) + iVar35;
      }
      iVar33 = LZCOUNT((int)(local_38 >> 0x20));
      if (iVar36 == 0x20) {
        iVar36 = LZCOUNT(auVar27._0_4_) + iVar36;
      }
      uVar34 = NEON_sminp(CONCAT44(iVar35,iVar28),CONCAT44(iVar35,iVar28),4);
      uVar34 = NEON_smin(uVar34,CONCAT44(iVar36,iVar36),4);
      if (iVar33 == 0x20) {
        iVar33 = LZCOUNT((int)local_38) + 0x20;
        if (iVar33 == 0x40) {
          iVar33 = LZCOUNT((int)(uVar3 >> 0x20));
          iVar28 = 0x40;
          if (iVar33 == 0x20) {
            iVar33 = LZCOUNT((int)uVar3) + 0x20;
          }
          goto LAB_0326f878;
        }
      }
      else {
        iVar28 = 0;
LAB_0326f878:
        iVar33 = iVar33 + iVar28;
      }
      uVar2 = (int)uVar34 - 0xf;
      if ((int)(iVar33 - 0x36U) <= (int)uVar2) {
        uVar2 = iVar33 - 0x36U;
      }
      uVar11 = (ulong)uVar2;
      if (uVar2 < 0x40) {
        if (uVar2 != 0) {
          local_38 = uVar3 >> ((ulong)-uVar2 & 0x3f) | local_38 << (uVar11 & 0x3f);
        }
        uVar15 = uVar3 << (uVar11 & 0x3f);
      }
      else {
        uVar15 = 0;
        local_38 = uVar3 << (uVar11 & 0x3f);
      }
      auVar21 = NEON_ext(auVar20,auVar20,8,1);
      auVar19 = NEON_ext(auVar31,auVar31,8,1);
      auVar4._8_8_ = (long)(int)uVar2;
      auVar4._0_8_ = (long)(int)uVar2;
      auVar31 = NEON_sshl(auVar30,auVar4,8);
      auVar5._8_8_ = (long)(int)uVar2;
      auVar5._0_8_ = (long)(int)uVar2;
      auVar23 = NEON_sshl(auVar27,auVar5,8);
      dVar25 = (double)(long)(local_38 << 0x2b | uVar15 >> 0x15 & 0xffffff8000000000 |
                             uVar15 >> 0x15 & 0x7fffffffff);
      dVar18 = (double)(auVar31._0_8_ << 4);
      dVar22 = (double)(auVar31._8_8_ << 4);
      bVar16 = (auVar6[7] >> 7 & (byte)uVar8) + (auVar21[0] & (byte)((ulong)uVar8 >> 0x20)) +
               (auVar7[7] >> 7 & (byte)uVar9) + (auVar19[0] & (byte)((ulong)uVar9 >> 0x20));
      dVar29 = (double)(auVar23._0_8_ << 4);
      lVar13 = lVar13 + -1;
      dVar17 = dVar25 * 3.725290298461914e-09;
      if ((uVar24 & 0x400) != 0) {
        dVar17 = dVar25 * -3.725290298461914e-09;
      }
      dVar25 = dVar18 * 1.1102230246251565e-16;
      if ((bVar16 & 1) != 0) {
        dVar25 = dVar18 * -1.1102230246251565e-16;
      }
      dVar18 = dVar22 * 1.1102230246251565e-16;
      if ((bVar16 & 2) != 0) {
        dVar18 = dVar22 * -1.1102230246251565e-16;
      }
      dVar22 = dVar29 * 1.1102230246251565e-16;
      if ((bVar16 & 4) != 0) {
        dVar22 = dVar29 * -1.1102230246251565e-16;
      }
      lVar14 = lVar14 + -0x40;
      *pdVar1 = dVar25;
      pdVar1[1] = dVar18;
      pdVar1[2] = dVar22;
      pdVar1[3] = dVar17;
    } while (1 < lVar13);
  }
  puVar10 = PTR_DAT_047d1a08;
  local_40 = 0x20;
  pMVar12 = (MutexType *)(**(code **)PTR_DAT_047d1a08)(0,&local_40,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(pMVar12,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar12,true,0);
  *(MutexType **)(param_1 + 0x48) = pMVar12;
  return;
}


