/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196c64c; name: FUN_0196c64c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196c64c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar29;
  undefined1 auVar28 [16];
  long lVar31;
  float local_d0;
  float local_b0;
  undefined1 auStack_68 [8];
  
  lVar12 = _DAT_03cabe50;
  if (*(int *)(param_1 + 0x128) == 0xc) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x130) + 0x38);
    if (lVar11 == 0) {
      local_b0 = 1.0;
      local_d0 = 1.0;
      fVar24 = 1.0;
    }
    else {
      fVar24 = *(float *)(lVar11 + 0x230);
      local_d0 = *(float *)(lVar11 + 0x234);
      local_b0 = *(float *)(lVar11 + 0x238);
    }
    if (*(long *)(param_1 + 0xe8) == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
    }
    plVar13[0x1b] = _UNK_03cabe58;
    plVar13[0x1a] = lVar12;
    if (*(char *)((long)plVar13 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar13 + 0xf4) = 1;
      (**(code **)(*plVar13 + 0x78))(plVar13);
      plVar13[0x19] = (ulong)(uint)local_d0;
      plVar13[0x18] = CONCAT44(local_b0,fVar24);
      if (*(char *)((long)plVar13 + 0xf4) == '\0') {
        *(undefined1 *)((long)plVar13 + 0xf4) = 1;
        (**(code **)(*plVar13 + 0x78))(plVar13);
      }
    }
    else {
      plVar13[0x19] = (ulong)(uint)local_d0;
      plVar13[0x18] = CONCAT44(local_b0,fVar24);
    }
    lVar11 = *(long *)(param_1 + 0x130);
    lVar12 = *(long *)(lVar11 + 0x38);
    if (lVar12 == 0) {
      uVar26 = 0;
      auVar27 = ZEXT816(0);
    }
    else {
      uVar26 = *(undefined8 *)(lVar12 + 0x310);
      auVar27 = *(undefined1 (*) [16])(lVar12 + 800);
    }
    auVar27 = NEON_ext(auVar27,auVar27,8,1);
    lVar31 = plVar13[0x1d];
    lVar12 = plVar13[0x1c];
    fVar17 = (float)lVar12 + (float)uVar26;
    fVar19 = (float)((ulong)lVar12 >> 0x20) + (float)((ulong)uVar26 >> 0x20);
    fVar21 = (float)lVar31 + auVar27._0_4_;
    fVar23 = (float)((ulong)lVar31 >> 0x20) + 0.0;
    if (*(long *)(param_1 + 0x260) != CONCAT44(fVar19,fVar17) ||
        *(long *)(param_1 + 0x268) != CONCAT44(fVar23,fVar21)) {
      plVar13 = *(long **)(lVar11 + 0x98);
      plVar2 = *(long **)(lVar11 + 0xa0);
      if (plVar13 != plVar2) {
        local_d0 = fVar21 - local_d0;
        fVar24 = fVar24 + fVar17;
        local_b0 = local_b0 + fVar19;
        do {
          lVar11 = *plVar13;
          plVar10 = *(long **)(lVar11 + 0x30);
          plVar3 = *(long **)(lVar11 + 0x38);
          *(ulong *)(lVar11 + 0xe8) = (ulong)(uint)local_d0;
          *(ulong *)(lVar11 + 0xe0) = CONCAT44(fVar19,fVar17);
          *(ulong *)(lVar11 + 0xf8) = (ulong)(uint)fVar21;
          *(ulong *)(lVar11 + 0xf0) = CONCAT44(local_b0,fVar24);
          for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
            lVar15 = *(long *)(*plVar10 + 0x30);
            plVar1 = (long *)(lVar15 + 0x1b8);
            lVar11 = nn::os::GetCurrentThread();
            while (*plVar1 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_0196c8a8;
            }
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1c0));
            do {
              if (*plVar1 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1c0));
                  while (*plVar1 == 0) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = lVar11;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_0196c8a8;
                  }
                } while( true );
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_0196c8a8:
            fVar25 = *(float *)(lVar15 + 0x1a0) - fVar24;
            fVar29 = *(float *)(lVar15 + 0x1a4) - local_b0;
            fVar30 = *(float *)(lVar15 + 0x1a8) - fVar21;
            fVar18 = *(float *)(lVar15 + 400) - fVar17;
            fVar20 = *(float *)(lVar15 + 0x194) - fVar19;
            fVar22 = *(float *)(lVar15 + 0x198) - local_d0;
            fVar25 = fVar25 * fVar25;
            fVar29 = fVar29 * fVar29;
            fVar30 = fVar30 * fVar30;
            fVar18 = fVar18 * fVar18;
            fVar20 = fVar20 * fVar20;
            fVar22 = fVar22 * fVar22;
            auVar27._0_4_ = fVar25 + fVar29;
            auVar27._4_4_ = fVar30 + 0.0;
            auVar27._8_4_ = fVar25 + fVar29;
            auVar27._12_4_ = fVar30 + 0.0;
            auVar16._0_4_ = fVar18 + fVar20;
            auVar16._4_4_ = fVar22 + 0.0;
            auVar16._8_4_ = fVar18 + fVar20;
            auVar16._12_4_ = fVar22 + 0.0;
            auVar28 = NEON_ext(auVar27,auVar27,4,1);
            auVar27 = NEON_ext(auVar16,auVar16,4,1);
            fVar18 = auVar28._0_4_ + auVar28._4_4_;
            bVar5 = false;
            bVar6 = false;
            bVar7 = false;
            if (auVar27._0_4_ + auVar27._4_4_ <= 1.1920929e-07) {
              bVar5 = false;
              bVar6 = false;
              bVar7 = true;
              if (!NAN(fVar18)) {
                bVar5 = fVar18 < 1.1920929e-07;
                bVar6 = fVar18 == 1.1920929e-07;
                bVar7 = false;
              }
            }
            if (!bVar6 && bVar5 == bVar7) {
              *(undefined1 *)(lVar15 + 0x1b0) = 1;
              *(undefined1 *)(lVar15 + 0x170) = 0;
              *(ulong *)(lVar15 + 0x198) = (ulong)(uint)local_d0;
              *(ulong *)(lVar15 + 400) = CONCAT44(fVar19,fVar17);
              *(ulong *)(lVar15 + 0x1a8) = (ulong)(uint)fVar21;
              *(ulong *)(lVar15 + 0x1a0) = CONCAT44(local_b0,fVar24);
              *(undefined8 *)(lVar15 + 0x174) = 0;
              *(undefined8 *)(lVar15 + 0x17c) = 0;
            }
            *(undefined8 *)(lVar15 + 0x1b8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1c0));
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar2);
      }
      *(ulong *)(param_1 + 0x260) = CONCAT44(fVar19,fVar17);
      *(ulong *)(param_1 + 0x268) = CONCAT44(fVar23,fVar21);
    }
    plVar13 = *(long **)(param_1 + 0x1b0);
    plVar2 = *(long **)(param_1 + 0x1b8);
    if (plVar13 != plVar2) {
      NEON_fmov(0x3f800000,4);
      do {
        if (((SUB168(*(undefined1 (*) [16])(*plVar13 + 0xe0),0) != lVar12 ||
              SUB168(*(undefined1 (*) [16])(*plVar13 + 0xe0),8) != lVar31) &&
            (lVar11 = FUN_00c95aec(*plVar13 + 0x108,auStack_68), lVar11 != 0)) &&
           (*(int *)(lVar11 + 0x128) == 4)) {
          FUN_021880c8(lVar11);
          iVar8 = FUN_021880e0(lVar11);
          if (iVar8 != 0) {
            iVar14 = 0;
            do {
              FUN_0196cad8(lVar11,iVar14);
              FUN_0196cbfc(lVar11,iVar14);
              iVar14 = iVar14 + 1;
            } while (iVar8 != iVar14);
          }
          iVar8 = FUN_021881d0(*(undefined8 *)(lVar11 + 0x120));
          if (0 < iVar8) {
            iVar14 = 0;
            do {
              lVar9 = FUN_0196cac8(*(undefined8 *)(lVar11 + 0x120),iVar14);
              for (lVar15 = *(long *)(lVar9 + 8); lVar15 != lVar9; lVar15 = *(long *)(lVar15 + 8)) {
                FUN_011c561c(*(undefined8 *)(lVar11 + 0x138),lVar15 + 0x10);
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 != iVar8);
          }
          plVar10 = (long *)*plVar13;
          plVar10[0x1d] = lVar31;
          plVar10[0x1c] = lVar12;
          if (*(char *)((long)plVar10 + 0xf4) == '\0') {
            *(undefined1 *)((long)plVar10 + 0xf4) = 1;
            (**(code **)(*plVar10 + 0x78))();
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar2);
    }
  }
  return;
}


