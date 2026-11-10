/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6b9c0; name: FUN_00c6b9c0
 */


void FUN_00c6b9c0(long *param_1)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  
  lVar4 = *param_1;
  lVar15 = *(long *)(**(long **)param_1[1] + 0x50);
  puVar1 = (uint *)(*(long **)param_1[1] + 0x28);
  uVar13 = *(long *)(lVar15 + 0x80) - *(long *)(lVar15 + 0x78);
  do {
    uVar11 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar11 + 10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar16 = (uint)(uVar13 >> 3);
  if (uVar11 < uVar16) {
    do {
      if ((uVar11 < 0xfffffff6) && (uVar11 < uVar16)) {
        uVar17 = (ulong)uVar11;
        do {
          lVar10 = *(long *)(*(long *)(lVar15 + 0x78) + uVar17 * 8);
          if (*(char *)(lVar10 + 0x288) == '\0') {
            *(undefined8 *)(lVar10 + 0x98) = 0;
            *(undefined8 *)(lVar10 + 0xa8) = *(undefined8 *)(lVar10 + 0xa0);
          }
          else {
            lVar12 = *(long *)(lVar10 + 0x1e8);
            if ((lVar12 != 0) && (*(char *)(lVar12 + 0x180) != '\0')) {
              uVar19 = *(undefined8 *)(lVar12 + 0x48);
              uVar18 = *(undefined8 *)(lVar12 + 0x40);
              uVar21 = *(undefined8 *)(lVar12 + 0x58);
              uVar20 = *(undefined8 *)(lVar12 + 0x50);
              lVar14 = 0;
              uVar23 = *(undefined8 *)(lVar12 + 0x68);
              uVar22 = *(undefined8 *)(lVar12 + 0x60);
              uVar25 = *(undefined8 *)(lVar12 + 0x78);
              uVar24 = *(undefined8 *)(lVar12 + 0x70);
              do {
                lVar3 = lVar12 + lVar14;
                lVar14 = lVar14 + 0x10;
                fVar7 = *(float *)(lVar3 + 0xc0);
                fVar8 = *(float *)(lVar3 + 0xc4);
                fVar9 = *(float *)(lVar3 + 200);
                fVar26 = (float)uVar24;
                fVar28 = (float)((ulong)uVar24 >> 0x20);
                fVar29 = (float)uVar25;
                fVar30 = (float)((ulong)uVar25 >> 0x20);
                fVar31 = (float)uVar18 * fVar7 + (float)uVar20 * fVar8 + (float)uVar22 * fVar9 +
                         fVar26 * 0.0;
                fVar32 = (float)((ulong)uVar18 >> 0x20) * fVar7 +
                         (float)((ulong)uVar20 >> 0x20) * fVar8 +
                         (float)((ulong)uVar22 >> 0x20) * fVar9 + fVar28 * 0.0;
                fVar33 = (float)uVar19 * fVar7 + (float)uVar21 * fVar8 + (float)uVar23 * fVar9 +
                         fVar29 * 0.0;
                fVar26 = fVar26 * fVar31;
                fVar28 = fVar28 * fVar32;
                fVar29 = fVar29 * fVar33;
                fVar30 = fVar30 * ((float)((ulong)uVar19 >> 0x20) * fVar7 +
                                   (float)((ulong)uVar21 >> 0x20) * fVar8 +
                                   (float)((ulong)uVar23 >> 0x20) * fVar9 + fVar30 * 0.0);
                auVar27._0_4_ = fVar26 + fVar28;
                auVar27._4_4_ = fVar29 + fVar30;
                auVar27._8_4_ = fVar26 + fVar28;
                auVar27._12_4_ = fVar29 + fVar30;
                auVar27 = NEON_ext(auVar27,auVar27,4,1);
                *(ulong *)(lVar3 + 0x128) =
                     CONCAT44(*(float *)(lVar3 + 0xcc) - (auVar27._0_4_ + auVar27._4_4_),fVar33);
                *(ulong *)(lVar3 + 0x120) = CONCAT44(fVar32,fVar31);
              } while (lVar14 != 0x60);
              *(undefined1 *)(*(long *)(lVar10 + 0x1e8) + 0x180) = 0;
            }
            if (*(long *)(lVar10 + 0x98) != 0) {
              FUN_00c6bb48(*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x70));
            }
          }
          uVar17 = uVar17 + 1;
        } while ((uVar17 < uVar11 + 10) && (uVar17 < (uVar13 >> 3 & 0xffffffff)));
      }
      do {
        uVar11 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar11 + 10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    } while (uVar11 < uVar16);
  }
  nn::os::LockMutex((MutexType *)(lVar4 + 0x100));
  piVar2 = (int *)(lVar4 + 0x120);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = *piVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0xf0));
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x100));
  return;
}


