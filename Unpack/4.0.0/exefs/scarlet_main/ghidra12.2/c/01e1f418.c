/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1f418; name: FUN_01e1f418
 */


ulong FUN_01e1f418(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  short *psVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  short sVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  ulong unaff_x21;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong local_50;
  float local_3c;
  float fStack_38;
  float local_34;
  
  lVar8 = *(long *)(param_4 + 0x30);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    local_50 = 0;
  }
  else {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar10 = *(short *)(lVar8 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar10) {
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01e1f494;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1f494:
        bVar9 = false;
      }
      if (bVar9) {
        lVar8 = *(long *)(lVar8 + 0x10);
        plVar2 = (long *)0x0;
        if (lVar8 != 0) {
          plVar2 = (long *)(lVar8 + -0x28);
        }
        local_50 = 0;
        if ((0.0 < param_2) && (lVar8 != 0)) {
          local_34 = param_3 / param_2;
          local_3c = 1.0;
          fStack_38 = 0.0;
          pfVar3 = &local_3c;
          if (local_34 <= 1.0) {
            pfVar3 = &local_34;
          }
          pfVar4 = &fStack_38;
          if (0.0 <= local_34) {
            pfVar4 = pfVar3;
          }
          fVar11 = *pfVar4;
          lVar7 = (**(code **)(*plVar2 + 0x68))(plVar2);
          fVar14 = (float)*(undefined8 *)(lVar7 + 0x38);
          fVar12 = (float)*(undefined8 *)(lVar7 + 0x30);
          fVar13 = (float)((ulong)*(undefined8 *)(lVar7 + 0x30) >> 0x20);
          plVar2[0x1d] = CONCAT44((param_1._12_4_ - 0.0) * fVar11 + 0.0,
                                  fVar14 + (param_1._8_4_ - fVar14) * fVar11);
          plVar2[0x1c] = CONCAT44(fVar13 + (param_1._4_4_ - fVar13) * fVar11,
                                  fVar12 + (param_1._0_4_ - fVar12) * fVar11);
          if (*(char *)((long)plVar2 + 0xf4) == '\0') {
            *(undefined1 *)((long)plVar2 + 0xf4) = 1;
            (**(code **)(*plVar2 + 0x78))(plVar2);
          }
          if (1.0 <= fVar11) {
            local_50 = 1;
            unaff_x21 = 1;
          }
          else {
            unaff_x21 = 0;
            local_50 = 1;
          }
        }
        if (lVar8 != 0) {
          (**(code **)(*plVar2 + 0x60))(plVar2);
        }
        break;
      }
      local_50 = 0;
      sVar10 = sVar5;
    } while (sVar5 != 0);
  }
  return local_50 | (unaff_x21 & 0xff) << 8;
}


