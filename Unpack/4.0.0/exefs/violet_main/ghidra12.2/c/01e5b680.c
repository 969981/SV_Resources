/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5b680; name: FUN_01e5b680
 */


float FUN_01e5b680(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  
  plVar5 = (long *)FUN_01dfd3b8();
  lVar6 = *plVar5;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e5b6f4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e5b6f4:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) == 0) {
          return 0.0;
        }
        plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        lVar6 = (**(code **)(*plVar5 + 0x68))(plVar5);
        fVar8 = (float)*param_2 - *(float *)(lVar6 + 0x30);
        fVar10 = (float)((ulong)*param_2 >> 0x20) - *(float *)(lVar6 + 0x34);
        fVar11 = (float)param_2[1] - *(float *)(lVar6 + 0x38);
        fVar12 = *(float *)(param_1 + 0x90);
        fVar13 = *(float *)(param_1 + 0x94);
        fVar8 = fVar8 * fVar8;
        fVar10 = fVar10 * fVar10;
        fVar11 = fVar11 * fVar11;
        auVar9._0_4_ = fVar8 + fVar10;
        auVar9._4_4_ = fVar11 + 0.0;
        auVar9._8_4_ = fVar8 + fVar10;
        auVar9._12_4_ = fVar11 + 0.0;
        auVar9 = NEON_ext(auVar9,auVar9,4,1);
        fVar8 = SQRT(auVar9._0_4_ + auVar9._4_4_) - *(float *)(param_1 + 0x98);
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        fVar8 = fVar8 / (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x98));
        if (1.0 < fVar8) {
          fVar8 = 1.0;
        }
        (**(code **)(*plVar5 + 0x60))(plVar5);
        return fVar13 + (fVar12 - fVar13) * (1.0 - fVar8);
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return 0.0;
}


