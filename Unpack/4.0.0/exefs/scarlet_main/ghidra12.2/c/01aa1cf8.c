/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aa1cf8; name: FUN_01aa1cf8
 */


long FUN_01aa1cf8(long param_1,undefined8 *param_2,float *param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  float extraout_s0;
  float fVar12;
  float extraout_var;
  float fVar14;
  float extraout_var_00;
  float fVar15;
  float extraout_var_01;
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
  undefined1 auStack_90 [8];
  undefined8 *local_88 [3];
  int *local_68;
  
  plVar5 = (long *)(param_1 + 0x2d8);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01aa1d48;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01aa1d48;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01aa1d48:
  plVar7 = (long *)(param_1 + 0x90);
  plVar5 = (long *)(param_1 + 0x88);
  if ((long *)*plVar7 == (long *)0x0) {
    plVar8 = plVar7;
    plVar9 = plVar7;
    goto LAB_01aa1de4;
  }
  plVar8 = (long *)(param_1 + 0x90);
  plVar9 = (long *)*plVar7;
  do {
    if (*param_4 < (int)plVar9[4]) {
      plVar6 = (long *)*plVar9;
      plVar8 = plVar9;
      if (plVar6 == (long *)0x0) {
        goto LAB_01aa1de4;
      }
    }
    else {
      if (*param_4 <= (int)plVar9[4]) {
LAB_01aa1de4:
        puVar11 = (undefined8 *)*plVar8;
        if ((undefined8 *)*plVar8 == (undefined8 *)0x0) {
          local_68 = param_4;
          FUN_00dec8e8(local_88,plVar5,&DAT_03d30400,&local_68,auStack_90);
          *local_88[0] = 0;
          local_88[0][1] = 0;
          local_88[0][2] = plVar9;
          *plVar8 = (long)local_88[0];
          puVar11 = local_88[0];
          if (*(long *)*plVar5 != 0) {
            *plVar5 = *(long *)*plVar5;
            puVar11 = (undefined8 *)*plVar8;
          }
          FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar11);
          *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
          puVar11 = local_88[0];
        }
        puVar11 = puVar11 + 0xb;
        fVar17 = 9999.9;
        lVar3 = 0;
        while( true ) {
          puVar11 = (undefined8 *)*puVar11;
          if ((long *)*plVar7 != (long *)0x0) break;
          plVar8 = plVar7;
          plVar9 = plVar7;
LAB_01aa1e54:
          local_68 = param_4;
          if (*plVar8 == 0) {
            FUN_00dec8e8(local_88,plVar5,&DAT_03d30400,&local_68,auStack_90);
            *local_88[0] = 0;
            local_88[0][1] = 0;
            local_88[0][2] = plVar9;
            *plVar8 = (long)local_88[0];
            puVar4 = local_88[0];
            if (*(long *)*plVar5 != 0) {
              *plVar5 = *(long *)*plVar5;
              puVar4 = (undefined8 *)*plVar8;
            }
            FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar4);
            *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
          }
          if (puVar11 == (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x2d8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2e0));
            return lVar3;
          }
          lVar10 = puVar11[2];
          if (lVar10 != 0) {
            FUN_00cbc2e4(lVar10,lVar10 + 0x90);
            fVar12 = extraout_s0 - (float)*param_2;
            fVar14 = extraout_var - (float)((ulong)*param_2 >> 0x20);
            fVar15 = extraout_var_00 - (float)param_2[1];
            fVar16 = extraout_var_01 - (float)((ulong)param_2[1] >> 0x20);
            fVar12 = fVar12 * fVar12;
            fVar14 = fVar14 * fVar14;
            fVar15 = fVar15 * fVar15;
            fVar16 = fVar16 * fVar16;
            auVar13._0_4_ = fVar12 + fVar14;
            auVar13._4_4_ = fVar15 + fVar16;
            auVar13._8_4_ = fVar12 + fVar14;
            auVar13._12_4_ = fVar15 + fVar16;
            auVar13 = NEON_ext(auVar13,auVar13,4,1);
            fVar12 = SQRT(auVar13._0_4_ + auVar13._4_4_);
            if (*param_3 <= fVar12 || fVar17 <= fVar12) {
              lVar10 = lVar3;
              fVar12 = fVar17;
            }
            fVar17 = fVar12;
            lVar3 = lVar10;
          }
        }
        plVar8 = (long *)(param_1 + 0x90);
        plVar9 = (long *)*plVar7;
        do {
          if (*param_4 < (int)plVar9[4]) {
            plVar6 = (long *)*plVar9;
            plVar8 = plVar9;
            if (plVar6 == (long *)0x0) {
              goto LAB_01aa1e54;
            }
          }
          else {
            if (*param_4 <= (int)plVar9[4]) goto LAB_01aa1e54;
            plVar8 = plVar9 + 1;
            plVar6 = (long *)*plVar8;
            if (plVar6 == (long *)0x0) goto LAB_01aa1e54;
          }
          plVar9 = plVar6;
        } while( true );
      }
      plVar8 = plVar9 + 1;
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) goto LAB_01aa1de4;
    }
    plVar9 = plVar6;
  } while( true );
}


