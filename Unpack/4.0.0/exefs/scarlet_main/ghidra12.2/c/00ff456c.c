/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff456c; name: FUN_00ff456c
 */


undefined8 FUN_00ff456c(long *param_1,long *param_2)

{
  ushort uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  
  lVar8 = *param_1;
  if (*(long **)(lVar8 + 3000) != (long *)0x0) {
    lVar10 = *param_2;
    lVar3 = (**(code **)(**(long **)(lVar8 + 3000) + 0x68))();
    fVar11 = *(float *)(lVar3 + 0x30) - (float)*(undefined8 *)(lVar10 + 0xe0);
    fVar13 = *(float *)(lVar3 + 0x34) - (float)((ulong)*(undefined8 *)(lVar10 + 0xe0) >> 0x20);
    fVar14 = *(float *)(lVar3 + 0x38) - (float)*(undefined8 *)(lVar10 + 0xe8);
    uVar6 = (ulong)*(uint *)(lVar8 + 0x28);
    fVar11 = fVar11 * fVar11;
    fVar13 = fVar13 * fVar13;
    fVar14 = fVar14 * fVar14;
    auVar12._0_4_ = fVar11 + fVar13;
    auVar12._4_4_ = fVar14 + 0.0;
    auVar12._8_4_ = fVar11 + fVar13;
    auVar12._12_4_ = fVar14 + 0.0;
    auVar12 = NEON_ext(auVar12,auVar12,4,1);
    fVar11 = auVar12._0_4_ + auVar12._4_4_;
    if (*(float *)(lVar8 + uVar6 * 0x48 + 0x60) <= fVar11) {
      lVar3 = lVar8 + uVar6 * 0x48;
      if (*(float *)(lVar3 + 0x6c) <= fVar11) {
        lVar3 = lVar8 + uVar6 * 0x48;
        if (*(float *)(lVar3 + 0x78) <= fVar11) {
          uVar7 = *(uint *)(lVar8 + uVar6 * 0x48 + 0x7c);
        }
        else {
          uVar7 = *(uint *)(lVar3 + 0x70);
        }
      }
      else {
        uVar7 = *(uint *)(lVar3 + 100);
      }
    }
    else {
      uVar7 = 0;
    }
    plVar4 = (long *)(lVar10 + 0x110);
    lVar3 = *plVar4;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar3) {
      lVar8 = nn::os::GetCurrentThread();
LAB_00ff45f8:
      if (*plVar4 == 0) goto code_r0x00ff4600;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
            while (*plVar4 == 0) {
              cVar2 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar9) {
                *plVar4 = lVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00ff4608;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar9) {
          *plVar4 = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00ff4608:
      bVar9 = false;
      goto LAB_00ff460c;
    }
    bVar9 = true;
LAB_00ff460c:
    plVar4 = (long *)FUN_00ff4780(*(undefined8 *)(lVar10 + 0x128),*(undefined8 *)(lVar10 + 0x130));
    if ((*(long **)(lVar10 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_00ff4780(*(undefined8 *)(lVar10 + 0x160),*(undefined8 *)(lVar10 + 0x168))
      ;
      if (*(long **)(lVar10 + 0x168) == plVar4) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (*plVar4 != 0) {
          lVar8 = *plVar4 + -0x20;
        }
      }
    }
    else {
      lVar8 = *plVar4 + -0x20;
    }
    if (!bVar9) {
      *(undefined8 *)(lVar10 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x118));
    }
    if (lVar8 != 0) {
      uVar1 = *(ushort *)(lVar8 + 0x244);
      if (((uVar1 & 0xff) == 0) || (10 < uVar1 >> 8)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(&DAT_03d5f050 + (long)(char)(uVar1 >> 8) * 4);
      }
      if (uVar7 != uVar5) {
        FUN_00ff4890(lVar8,uVar7);
      }
    }
    if (1 < uVar7) {
      return 5;
    }
  }
  return 0;
code_r0x00ff4600:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar9) {
    *plVar4 = lVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00ff4608;
  goto LAB_00ff45f8;
}


