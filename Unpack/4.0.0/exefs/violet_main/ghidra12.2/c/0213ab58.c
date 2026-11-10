/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213ab58; name: FUN_0213ab58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213ab58(float param_1,undefined8 param_2,uint *param_3,long param_4,char *param_5)

{
  long *plVar1;
  LightEventType *pLVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  long *plVar7;
  uint *puVar8;
  undefined1 (*pauVar9) [12];
  undefined8 *puVar10;
  float *pfVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  uint *puVar18;
  undefined1 (*pauVar19) [12];
  undefined8 *puVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  float fVar30;
  int iVar31;
  float fVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar40;
  undefined1 auVar41 [16];
  float fVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined8 uVar53;
  float local_7b0;
  undefined8 local_790;
  undefined8 uStack_788;
  float local_780 [2];
  char *pcStack_778;
  size_t local_770;
  long *local_768;
  undefined1 auStack_760 [4];
  int local_75c;
  uint local_754;
  uint local_750;
  uint local_74c;
  uint local_748;
  float local_744 [2];
  undefined8 local_73c;
  float local_734 [209];
  undefined8 local_3f0;
  float local_3e8 [2];
  undefined8 local_3e0;
  float local_3d8 [26];
  undefined8 local_370;
  float local_364;
  undefined8 local_360;
  float local_354 [25];
  undefined8 local_2f0;
  float local_2e8 [2];
  undefined8 local_2e0;
  float local_2d4 [25];
  undefined8 local_270;
  float local_264;
  undefined8 local_260;
  float local_254 [125];
  
  uVar14 = param_3[2];
  local_7b0 = 1.0;
  if (uVar14 == 4) {
    memcpy(auStack_760,param_3 + 3,0x94);
    uVar14 = local_754;
    uVar21 = (ulong)local_754;
    fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
    if (local_75c == 0) {
      fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
    }
    else {
      fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
    }
    if ((uVar14 == 1) || (fVar22 < local_744[1])) {
      puVar16 = auStack_760;
    }
    else {
      puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
      if (fVar22 < local_744[((long)(int)uVar14 + -1) * 4 + 1]) {
        local_790._0_4_ = 0.0;
        local_790._4_4_ = 0.0;
        uStack_788._0_4_ = 0.0;
        if (0 < (int)uVar14) {
          lVar15 = -0x100000000;
          puVar8 = &local_748;
          do {
            puVar18 = puVar8;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) goto LAB_0213abf8;
            lVar15 = lVar15 + 0x100000000;
            puVar8 = puVar18 + 4;
          } while ((float)puVar18[6] <= fVar22);
          lVar15 = lVar15 >> 0x1c;
          uVar47 = *(undefined8 *)((long)local_744 + lVar15 + -8);
          fVar25 = *(float *)((long)local_744 + lVar15 + 4);
          fVar23 = (float)puVar18[6] - fVar25;
          local_790._0_4_ = (float)uVar47;
          local_790._4_4_ = (float)((ulong)uVar47 >> 0x20);
          fVar22 = fVar22 - fVar25;
          local_790._0_4_ =
               (float)local_790 +
               (((float)*(undefined8 *)(puVar18 + 3) - (float)local_790) / fVar23) * fVar22;
          local_790._4_4_ =
               local_790._4_4_ +
               (((float)((ulong)*(undefined8 *)(puVar18 + 3) >> 0x20) - local_790._4_4_) / fVar23) *
               fVar22;
          uStack_788._0_4_ =
               *(float *)((long)local_744 + lVar15) +
               (((float)puVar18[5] - *(float *)((long)local_744 + lVar15)) / fVar23) * fVar22;
        }
        goto LAB_0213abf8;
      }
    }
    local_790._0_4_ = *(float *)(puVar16 + 0x14);
    local_790._4_4_ = *(float *)(puVar16 + 0x18);
    uStack_788._0_4_ = *(float *)(puVar16 + 0x1c);
    goto LAB_0213abf8;
  }
  local_790._0_4_ = 0.0;
  local_790._4_4_ = 0.0;
  uStack_788._0_4_ = 0.0;
  if (uVar14 == 1) {
    lVar15 = *(long *)(*(long *)(param_4 + 0x238) + 0x10);
    if (*(char *)(lVar15 + 0x99c) == '\0') {
      local_790._0_4_ = *(float *)(lVar15 + 0x9a0);
      local_790._4_4_ = *(float *)(lVar15 + 0x9a4);
      uStack_788._0_4_ = *(float *)(lVar15 + 0x9a8);
      local_7b0 = *(float *)(lVar15 + 0x9ac);
    }
    else if (*(char *)(lVar15 + 0x99c) == '\x02') {
      memcpy(auStack_760,(void *)(lVar15 + 0x50),0x700);
      uVar14 = local_750;
      fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
      uVar21 = (ulong)local_750;
      if (*(char *)(lVar15 + 0x8d8) == '\0') {
        fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
      }
      else {
        fVar22 = modff(fVar22 / local_734[1],local_780);
      }
      if ((uVar14 == 1) || (fVar22 < local_3e8[1])) {
        puVar16 = auStack_760;
LAB_0213b714:
        local_790._0_4_ = *(float *)(puVar16 + 0x370);
        local_790._4_4_ = *(float *)(puVar16 + 0x374);
        uStack_788._0_4_ = *(float *)(puVar16 + 0x378);
      }
      else {
        puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
        if (local_3e8[((long)(int)uVar14 + -1) * 4 + 1] <= fVar22) goto LAB_0213b714;
        local_790._0_4_ = 0.0;
        local_790._4_4_ = 0.0;
        uStack_788._0_4_ = 0.0;
        if (0 < (int)uVar14) {
          lVar17 = -0x100000000;
          puVar10 = &local_3f0;
          do {
            puVar20 = puVar10;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) goto LAB_0213b730;
            lVar17 = lVar17 + 0x100000000;
            puVar10 = puVar20 + 2;
          } while (*(float *)((long)puVar20 + 0x1c) <= fVar22);
          lVar17 = lVar17 >> 0x1c;
          uVar47 = *(undefined8 *)((long)local_734 + lVar17 + 0x344);
          uVar49 = puVar20[2];
          fVar25 = *(float *)((long)local_3e8 + lVar17 + 4);
          fVar23 = *(float *)((long)puVar20 + 0x1c) - fVar25;
          local_790._0_4_ = (float)uVar47;
          local_790._4_4_ = (float)((ulong)uVar47 >> 0x20);
          fVar22 = fVar22 - fVar25;
          local_790._0_4_ =
               (float)local_790 + (((float)uVar49 - (float)local_790) / fVar23) * fVar22;
          local_790._4_4_ =
               local_790._4_4_ +
               (((float)((ulong)uVar49 >> 0x20) - local_790._4_4_) / fVar23) * fVar22;
          uStack_788._0_4_ =
               *(float *)((long)local_3e8 + lVar17) +
               ((*(float *)(puVar20 + 3) - *(float *)((long)local_3e8 + lVar17)) / fVar23) * fVar22;
        }
      }
LAB_0213b730:
      fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
      uVar21 = (ulong)local_74c;
      if (*(char *)(lVar15 + 0x8d9) == '\0') {
        fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
      }
      else {
        fVar22 = modff(fVar22 / local_734[2],local_780);
      }
      if ((local_74c == 1) || (fVar22 < local_364)) {
        puVar16 = auStack_760;
      }
      else {
        puVar16 = auStack_760 + ((long)(int)local_74c + -1) * 0x10;
        if (fVar22 < local_354[((long)(int)local_74c + -1) * 4 + -4]) {
          local_7b0 = 0.0;
          if (0 < (int)local_74c) {
            lVar15 = -0x100000000;
            puVar10 = &local_370;
            do {
              puVar20 = puVar10;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_0213abf8;
              lVar15 = lVar15 + 0x100000000;
              puVar10 = puVar20 + 2;
            } while (*(float *)((long)puVar20 + 0x1c) <= fVar22);
            fVar25 = *(float *)((long)local_354 + (lVar15 >> 0x1c) + -0x10);
            local_7b0 = (float)*(undefined8 *)((long)local_3d8 + (lVar15 >> 0x1c) + 0x68);
            local_7b0 = local_7b0 +
                        (((float)puVar20[2] - local_7b0) /
                        (*(float *)((long)puVar20 + 0x1c) - fVar25)) * (fVar22 - fVar25);
          }
          goto LAB_0213abf8;
        }
      }
      local_7b0 = SUB124(*(undefined1 (*) [12])(puVar16 + 0x3f0),0);
    }
  }
  else if (uVar14 == 2) {
    lVar15 = *(long *)(*(long *)(param_4 + 0x238) + 0x10);
    if (*(char *)(lVar15 + 0x99d) == '\x02') {
      memcpy(auStack_760,(void *)(lVar15 + 0x50),0x700);
      fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
      uVar21 = (ulong)local_748;
      if (*(char *)(lVar15 + 0x8d8) == '\0') {
        fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
      }
      else {
        fVar22 = modff(fVar22 / local_734[3],local_780);
      }
      if ((local_748 == 1) || (fVar22 < local_2e8[1])) {
        puVar16 = auStack_760;
LAB_0213c81c:
        local_790._0_4_ = *(float *)(puVar16 + 0x470);
        local_790._4_4_ = *(float *)(puVar16 + 0x474);
        uStack_788._0_4_ = *(float *)(puVar16 + 0x478);
      }
      else {
        puVar16 = auStack_760 + ((long)(int)local_748 + -1) * 0x10;
        if (local_2e8[((long)(int)local_748 + -1) * 4 + 1] <= fVar22) goto LAB_0213c81c;
        uStack_788._0_4_ = 0.0;
        local_790._0_4_ = 0.0;
        local_790._4_4_ = 0.0;
        if (0 < (int)local_748) {
          lVar17 = -0x100000000;
          pauVar9 = (undefined1 (*) [12])&local_2f0;
          do {
            pauVar19 = pauVar9;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) goto LAB_0213c83c;
            pauVar9 = (undefined1 (*) [12])(pauVar19[1] + 4);
            lVar17 = lVar17 + 0x100000000;
          } while (*(float *)(pauVar19[2] + 4) <= fVar22);
          lVar17 = lVar17 >> 0x1c;
          uVar47 = *(undefined8 *)((long)local_354 + lVar17 + 100);
          fVar25 = *(float *)((long)local_2e8 + lVar17 + 4);
          fVar23 = *(float *)(pauVar19[2] + 4) - fVar25;
          local_790._0_4_ = (float)uVar47;
          local_790._4_4_ = (float)((ulong)uVar47 >> 0x20);
          fVar22 = fVar22 - fVar25;
          local_790._0_4_ =
               (float)local_790 +
               (((float)*(undefined8 *)*pauVar9 - (float)local_790) / fVar23) * fVar22;
          local_790._4_4_ =
               local_790._4_4_ + ((SUB124(*pauVar9,4) - local_790._4_4_) / fVar23) * fVar22;
          uStack_788._0_4_ =
               *(float *)((long)local_2e8 + lVar17) +
               ((SUB124(*pauVar9,8) - *(float *)((long)local_2e8 + lVar17)) / fVar23) * fVar22;
        }
      }
LAB_0213c83c:
      fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
      uVar21 = (ulong)(uint)local_744[0];
      if (*(char *)(lVar15 + 0x8db) == '\0') {
        fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
      }
      else {
        fVar22 = modff(fVar22 / local_734[4],local_780);
      }
      if ((local_744[0] == 1.4013e-45) || (fVar22 < local_264)) {
        puVar16 = auStack_760;
      }
      else {
        puVar16 = auStack_760 + ((long)(int)local_744[0] + -1) * 0x10;
        if (fVar22 < local_254[((long)(int)local_744[0] + -1) * 4 + -4]) {
          local_7b0 = 0.0;
          if (0 < (int)local_744[0]) {
            lVar15 = -0x100000000;
            puVar10 = &local_270;
            do {
              puVar20 = puVar10;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_0213abf8;
              lVar15 = lVar15 + 0x100000000;
              puVar10 = puVar20 + 2;
            } while (*(float *)((long)puVar20 + 0x1c) <= fVar22);
            fVar25 = *(float *)((long)local_254 + (lVar15 >> 0x1c) + -0x10);
            local_7b0 = (float)*(undefined8 *)((long)local_2d4 + (lVar15 >> 0x1c) + 100);
            local_7b0 = local_7b0 +
                        (((float)puVar20[2] - local_7b0) /
                        (*(float *)((long)puVar20 + 0x1c) - fVar25)) * (fVar22 - fVar25);
          }
          goto LAB_0213abf8;
        }
      }
      local_7b0 = *(float *)(puVar16 + 0x4f0);
    }
    else if (*(char *)(lVar15 + 0x99d) == '\0') {
      local_790._0_4_ = *(float *)(lVar15 + 0x9b0);
      local_790._4_4_ = *(float *)(lVar15 + 0x9b4);
      uStack_788._0_4_ = *(float *)(lVar15 + 0x9b8);
      local_7b0 = *(float *)(lVar15 + 0x9bc);
    }
  }
LAB_0213abf8:
  memcpy(auStack_760,param_3 + 0x28,0x94);
  uVar14 = local_754;
  uVar21 = (ulong)local_754;
  fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
  if (local_75c == 0) {
    fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
  }
  else {
    fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
  }
  if ((uVar14 == 1) || (fVar22 < local_744[1])) {
    puVar16 = auStack_760;
LAB_0213ac3c:
    fVar25 = *(float *)(puVar16 + 0x14);
  }
  else {
    puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
    if (local_744[((long)(int)uVar14 + -1) * 4 + 1] <= fVar22) goto LAB_0213ac3c;
    fVar25 = 0.0;
    if (0 < (int)uVar14) {
      lVar15 = -0x100000000;
      puVar8 = &local_748;
      do {
        puVar18 = puVar8;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_0213ac5c;
        lVar15 = lVar15 + 0x100000000;
        puVar8 = puVar18 + 4;
      } while ((float)puVar18[6] <= fVar22);
      fVar23 = *(float *)((long)local_744 + (lVar15 >> 0x1c) + 4);
      fVar25 = (float)*(undefined8 *)((long)local_744 + (lVar15 >> 0x1c) + -8);
      fVar25 = fVar25 + (((float)*(undefined8 *)(puVar18 + 3) - fVar25) /
                        ((float)puVar18[6] - fVar23)) * (fVar22 - fVar23);
    }
  }
LAB_0213ac5c:
  memcpy(auStack_760,param_3 + 0x4d,0x94);
  uVar14 = local_754;
  uVar21 = (ulong)local_754;
  fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
  if (local_75c == 0) {
    fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
  }
  else {
    fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
  }
  plVar7 = DAT_0485a0e8;
  if ((uVar14 == 1) || (fVar22 < local_744[1])) {
    puVar16 = auStack_760;
LAB_0213ac9c:
    fVar23 = SUB124(*(undefined1 (*) [12])(puVar16 + 0x14),0);
  }
  else {
    puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
    if (local_744[((long)(int)uVar14 + -1) * 4 + 1] <= fVar22) goto LAB_0213ac9c;
    fVar23 = (float)_DAT_03caa980;
    if (0 < (int)uVar14) {
      lVar15 = -0x100000000;
      puVar8 = &local_748;
      do {
        puVar18 = puVar8;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_0213acb8;
        lVar15 = lVar15 + 0x100000000;
        puVar8 = puVar18 + 4;
      } while ((float)puVar18[6] <= fVar22);
      fVar24 = *(float *)((long)local_744 + (lVar15 >> 0x1c) + 4);
      fVar23 = (float)*(undefined8 *)((long)local_744 + (lVar15 >> 0x1c) + -8);
      fVar23 = fVar23 + (((float)*(undefined8 *)(puVar18 + 3) - fVar23) /
                        ((float)puVar18[6] - fVar24)) * (fVar22 - fVar24);
    }
  }
LAB_0213acb8:
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar1 = DAT_0485a0e8 + 5;
    do {
      lVar15 = *plVar1;
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar15 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar15 = *(long *)(*(long *)(param_4 + 0x238) + 0x10);
  fVar22 = 1.0;
  if (*(char *)(lVar15 + 0x75b) != '\0') {
    fVar22 = *(float *)(param_4 + 0x74);
  }
  if (*(char *)(lVar15 + 0x755) != '\0') {
    fVar22 = fVar22 * *(float *)(param_4 + 0x70);
  }
  fVar24 = 0.0;
  cVar13 = '\0';
  if (*param_5 != '\0') {
    fVar23 = param_1 * fVar23 * fVar22;
    plVar1 = plVar7 + 0x1ae;
    lVar15 = nn::os::GetCurrentThread();
LAB_0213ad40:
    if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213ad4c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
    do {
      if (*plVar1 != 0 || plVar7[0x1af] != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
          while (*plVar1 == 0 && plVar7[0x1af] == 0) {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = lVar15;
              plVar7[0x1af] = 0;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 == '\0') goto LAB_0213ad54;
          }
        } while( true );
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = 0;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
LAB_0213ad54:
    lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
    *(ulong *)(lVar15 + 0x58) = (ulong)(uint)fVar23;
    *(ulong *)(lVar15 + 0x50) = CONCAT44(fVar23,fVar23);
    *(undefined1 *)(lVar15 + 0x1b9) = 1;
    do {
      lVar15 = *plVar1;
      lVar17 = plVar7[0x1af];
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    do {
      lVar3 = *plVar1;
      lVar4 = plVar7[0x1af];
      if (lVar3 != lVar15 || lVar4 != lVar17) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0213adfc;
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)((long)plVar7 + 0xd74) = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    bVar12 = true;
LAB_0213adfc:
    if (!bVar12) {
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        if (lVar15 != lVar3 || lVar17 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0213cc2c;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
joined_r0x0213cc2c:
      if (!bVar12) {
        do {
          lVar3 = *plVar1;
          lVar4 = plVar7[0x1af];
          if (lVar3 != lVar15 || lVar4 != lVar17) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar15 = lVar3;
            lVar17 = lVar4;
            goto joined_r0x0213cc2c;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar17;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
        lVar15 = lVar3;
        lVar17 = lVar4;
        goto joined_r0x0213cc2c;
      }
    }
    pLVar2 = (LightEventType *)(plVar7 + 0x1b0);
    nn::os::SignalLightEvent(pLVar2);
    cVar13 = '\0';
    if (*param_5 != '\0') {
      lVar15 = nn::os::GetCurrentThread();
      while (*plVar1 == 0 && plVar7[0x1af] == 0) {
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = 0;
          cVar13 = ExclusiveMonitorsStatus();
        }
        if (cVar13 == '\0') goto LAB_0213ae30;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent(pLVar2);
      do {
        if (*plVar1 != 0 || plVar7[0x1af] != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar1 == 0 && plVar7[0x1af] == 0) {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *plVar1 = lVar15;
                plVar7[0x1af] = 0;
                cVar13 = ExclusiveMonitorsStatus();
              }
              if (cVar13 == '\0') goto LAB_0213ae30;
            }
          } while( true );
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = 0;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_0213ae30:
      uVar49 = _UNK_03cabe58;
      uVar47 = _DAT_03cabe50;
      lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
      *(undefined1 *)(lVar15 + 0x1b9) = 1;
      *(undefined8 *)(lVar15 + 0x68) = uVar49;
      *(undefined8 *)(lVar15 + 0x60) = uVar47;
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      do {
        lVar3 = *plVar1;
        lVar4 = plVar7[0x1af];
        if (lVar3 != lVar15 || lVar4 != lVar17) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_0213aed8;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
LAB_0213aed8:
      if (!bVar12) {
        do {
          lVar15 = *plVar1;
          lVar17 = plVar7[0x1af];
          if (lVar15 != lVar3 || lVar17 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x0213cc70;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
joined_r0x0213cc70:
        if (!bVar12) {
          do {
            lVar3 = *plVar1;
            lVar4 = plVar7[0x1af];
            if (lVar3 != lVar15 || lVar4 != lVar17) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar15 = lVar3;
              lVar17 = lVar4;
              goto joined_r0x0213cc70;
            }
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = 0;
              *(long *)((long)plVar7 + 0xd74) = lVar17;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          bVar12 = true;
          lVar15 = lVar3;
          lVar17 = lVar4;
          goto joined_r0x0213cc70;
        }
      }
      nn::os::SignalLightEvent(pLVar2);
      cVar13 = *param_5;
    }
  }
  if (cVar13 != '\0') {
    auVar33 = *(undefined1 (*) [16])(param_4 + 0x370);
    auVar32 = NEON_ext(auVar33,auVar33,8,1);
    plVar1 = plVar7 + 0x1ae;
    lVar15 = nn::os::GetCurrentThread();
LAB_0213af10:
    if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213af1c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
    do {
      if (*plVar1 != 0 || plVar7[0x1af] != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
          while (*plVar1 == 0 && plVar7[0x1af] == 0) {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = lVar15;
              plVar7[0x1af] = 0;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 == '\0') goto LAB_0213af24;
          }
        } while( true );
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = 0;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
LAB_0213af24:
    lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
    *(ulong *)(lVar15 + 0x78) = (ulong)auVar32._0_4_;
    *(long *)(lVar15 + 0x70) = auVar33._0_8_;
    *(undefined1 *)(lVar15 + 0x1b9) = 1;
    do {
      lVar15 = *plVar1;
      lVar17 = plVar7[0x1af];
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    do {
      lVar3 = *plVar1;
      lVar4 = plVar7[0x1af];
      if (lVar3 != lVar15 || lVar4 != lVar17) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0213afcc;
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)((long)plVar7 + 0xd74) = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    bVar12 = true;
LAB_0213afcc:
    if (!bVar12) {
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        if (lVar15 != lVar3 || lVar17 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0213ccb4;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
joined_r0x0213ccb4:
      if (!bVar12) {
        do {
          lVar3 = *plVar1;
          lVar4 = plVar7[0x1af];
          if (lVar3 != lVar15 || lVar4 != lVar17) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar15 = lVar3;
            lVar17 = lVar4;
            goto joined_r0x0213ccb4;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar17;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
        lVar15 = lVar3;
        lVar17 = lVar4;
        goto joined_r0x0213ccb4;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
  }
  puVar6 = PTR_s_Color_047dcf48;
  uVar14 = param_3[1];
  if ((uVar14 == 1) || (uVar14 == 4)) {
    local_770 = strlen(PTR_s_Color_047dcf48);
    local_780[0] = 49322464.0;
    local_780[1] = -4.407115e-14;
    pcStack_778 = puVar6;
    local_768 = (long *)0x0;
    if (*param_5 != '\0') {
      plVar1 = plVar7 + 0x1ae;
      lVar15 = nn::os::GetCurrentThread();
LAB_0213b040:
      if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213b04c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
      do {
        if (*plVar1 != 0 || plVar7[0x1af] != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
            while (*plVar1 == 0 && plVar7[0x1af] == 0) {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *plVar1 = lVar15;
                plVar7[0x1af] = 0;
                cVar13 = ExclusiveMonitorsStatus();
              }
              if (cVar13 == '\0') goto LAB_0213b054;
            }
          } while( true );
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = 0;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_0213b054:
      lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
      puVar10 = (undefined8 *)FUN_00c5f1b0(lVar15 + 0xe8,local_780);
      puVar10[1] = CONCAT44(local_7b0 * fVar22 * fVar25,(float)uStack_788);
      *puVar10 = local_790;
      *(undefined1 *)(lVar15 + 0x1b9) = 1;
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      do {
        lVar3 = *plVar1;
        lVar4 = plVar7[0x1af];
        if (lVar3 != lVar15 || lVar4 != lVar17) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_0213b108;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
LAB_0213b108:
      if (!bVar12) {
        do {
          lVar15 = *plVar1;
          lVar17 = plVar7[0x1af];
          if (lVar15 != lVar3 || lVar17 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x0213cbe8;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
joined_r0x0213cbe8:
        if (!bVar12) {
          do {
            lVar3 = *plVar1;
            lVar4 = plVar7[0x1af];
            if (lVar3 != lVar15 || lVar4 != lVar17) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar15 = lVar3;
              lVar17 = lVar4;
              goto joined_r0x0213cbe8;
            }
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = 0;
              *(long *)((long)plVar7 + 0xd74) = lVar17;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          bVar12 = true;
          lVar15 = lVar3;
          lVar17 = lVar4;
          goto joined_r0x0213cbe8;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
      if (local_768 != (long *)0x0) {
        (**(code **)(*local_768 + 0x20))();
      }
    }
    uVar14 = param_3[1];
  }
  if (uVar14 == 1) {
    if (*param_3 < 0x40) goto LAB_0213b2c0;
    memcpy(auStack_760,param_3 + 0x131,0x94);
    uVar14 = local_754;
    uVar21 = (ulong)local_754;
    fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
    if (local_75c == 0) {
      fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
    }
    else {
      fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
    }
    if ((uVar14 == 1) || (fVar22 < local_744[1])) {
      puVar16 = auStack_760;
LAB_0213b174:
      fVar23 = *(float *)(puVar16 + 0x14);
    }
    else {
      puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
      if (local_744[((long)(int)uVar14 + -1) * 4 + 1] <= fVar22) goto LAB_0213b174;
      if ((int)uVar14 < 1) {
LAB_0213c894:
        fVar23 = 0.0;
      }
      else {
        lVar15 = -0x100000000;
        puVar8 = &local_748;
        do {
          puVar18 = puVar8;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) goto LAB_0213c894;
          lVar15 = lVar15 + 0x100000000;
          puVar8 = puVar18 + 4;
        } while ((float)puVar18[6] <= fVar22);
        fVar27 = *(float *)((long)local_744 + (lVar15 >> 0x1c) + 4);
        fVar23 = (float)*(undefined8 *)((long)local_744 + (lVar15 >> 0x1c) + -8);
        fVar23 = fVar23 + (((float)*(undefined8 *)(puVar18 + 3) - fVar23) /
                          ((float)puVar18[6] - fVar27)) * (fVar22 - fVar27);
      }
    }
    local_770 = strlen("SourceRadius");
    local_780[0] = 1.6388043e-05;
    local_780[1] = -561171.25;
    pcStack_778 = "SourceRadius";
    local_768 = (long *)0x0;
    if (*param_5 != '\0') {
      plVar1 = plVar7 + 0x1ae;
      lVar15 = nn::os::GetCurrentThread();
LAB_0213b1d0:
      if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213b1dc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
      do {
        if (*plVar1 != 0 || plVar7[0x1af] != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
            while (*plVar1 == 0 && plVar7[0x1af] == 0) {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *plVar1 = lVar15;
                plVar7[0x1af] = 0;
                cVar13 = ExclusiveMonitorsStatus();
              }
              if (cVar13 == '\0') goto LAB_0213b1e4;
            }
          } while( true );
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = 0;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_0213b1e4:
      lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
      pfVar11 = (float *)FUN_00c42268(lVar15 + 0x80,local_780);
      *pfVar11 = fVar23;
      *(undefined1 *)(lVar15 + 0x1b9) = 1;
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      do {
        lVar3 = *plVar1;
        lVar4 = plVar7[0x1af];
        if (lVar3 != lVar15 || lVar4 != lVar17) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_0213b298;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
LAB_0213b298:
      if (!bVar12) {
        do {
          lVar15 = *plVar1;
          lVar17 = plVar7[0x1af];
          if (lVar15 != lVar3 || lVar17 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x0213ccf8;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
joined_r0x0213ccf8:
        if (!bVar12) {
          do {
            lVar3 = *plVar1;
            lVar4 = plVar7[0x1af];
            if (lVar3 != lVar15 || lVar4 != lVar17) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar15 = lVar3;
              lVar17 = lVar4;
              goto joined_r0x0213ccf8;
            }
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = 0;
              *(long *)((long)plVar7 + 0xd74) = lVar17;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          bVar12 = true;
          lVar15 = lVar3;
          lVar17 = lVar4;
          goto joined_r0x0213ccf8;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
      if (local_768 != (long *)0x0) {
        (**(code **)(*local_768 + 0x20))();
      }
    }
    uVar14 = param_3[1];
  }
  if (uVar14 == 4) {
    if (*param_5 != '\0') {
      auVar33 = *(undefined1 (*) [16])(param_4 + 0x380);
      fVar22 = *(float *)(param_4 + 0x394);
      fVar29 = auVar33._0_4_;
      auVar32 = *(undefined1 (*) [16])(param_4 + 0x3a0);
      fVar30 = auVar32._8_4_;
      auVar50 = NEON_fmov(0x3f800000,4);
      plVar1 = plVar7 + 0x1ae;
      fVar23 = (float)_DAT_03cab3a0 * fVar29 + (float)_DAT_03cac210 * fVar22 +
               (float)_DAT_03cabb00 * fVar30 + auVar50._0_4_;
      fVar27 = (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar29 +
               (float)((ulong)_DAT_03cac210 >> 0x20) * fVar22 +
               (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar30 + auVar50._4_4_;
      fVar28 = (float)_UNK_03cab3a8 * fVar29 + (float)_UNK_03cac218 * fVar22 +
               (float)_UNK_03cabb08 * fVar30 + auVar50._8_4_;
      fVar22 = (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar29 +
               (float)((ulong)_UNK_03cac218 >> 0x20) * fVar22 +
               (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar30 + auVar50._12_4_;
      uVar47 = NEON_ext(auVar33._0_8_,auVar32._0_8_,4,1);
      auVar33 = NEON_ext(auVar33,auVar33,8,1);
      auVar41._0_4_ = (float)uVar47 + *(float *)(param_4 + 0x390);
      fVar29 = (float)((ulong)uVar47 >> 0x20);
      auVar41._4_4_ = fVar29 + auVar33._0_4_;
      auVar41._8_4_ = *(float *)(param_4 + 0x398) + auVar32._4_4_;
      auVar41._12_4_ = 0;
      auVar44._0_4_ = (float)uVar47 - *(float *)(param_4 + 0x390);
      auVar44._4_4_ = fVar29 - auVar33._0_4_;
      auVar44._8_4_ = *(float *)(param_4 + 0x398) - auVar32._4_4_;
      auVar44._12_4_ = 0;
      uVar47 = a64_TBL(ZEXT816(0),auVar41,auVar44,DAT_03cb56d0);
      uVar48 = a64_TBL(ZEXT816(0),auVar41,auVar44,DAT_03cb5500);
      uVar49 = a64_TBL(ZEXT816(0),auVar41,auVar44,DAT_03cb5588);
      auVar51._0_8_ = a64_TBL(ZEXT816(0),auVar41,auVar44,DAT_03cb56c8);
      uVar52 = a64_TBL(ZEXT816(0),auVar41,auVar44,DAT_03cb5438);
      auVar34._0_4_ = (undefined4)uVar47;
      auVar34._4_4_ = fVar27;
      auVar34._8_8_ = uVar49;
      uVar53 = a64_TBL(ZEXT816(0),auVar41,auVar44,DAT_03cb54e0);
      uVar49 = a64_TBL(ZEXT816(0),auVar41,auVar44,DAT_03cb5390);
      auVar51._12_4_ = (undefined4)((ulong)uVar52 >> 0x20);
      auVar51._8_4_ = fVar28;
      fVar29 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar27) & -(uint)(fVar23 <= fVar27));
      fVar30 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar27) & -(uint)(fVar23 <= fVar27));
      fVar37 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar27) & -(uint)(fVar23 <= fVar27));
      fVar43 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar27) & -(uint)(fVar23 <= fVar27));
      auVar33._4_4_ = (int)((ulong)uVar47 >> 0x20);
      auVar33._0_4_ = fVar23;
      auVar33._8_4_ = (int)uVar48;
      auVar33._12_4_ = (int)((ulong)uVar48 >> 0x20);
      auVar5._4_4_ = -(uint)(fVar23 <= fVar27);
      auVar5._0_4_ = -(uint)(fVar23 <= fVar27);
      auVar5._8_4_ = -(uint)(fVar23 <= fVar27);
      auVar5._12_4_ = -(uint)(fVar23 <= fVar27);
      auVar34 = auVar34 ^ (auVar34 ^ auVar33) & ~auVar5;
      auVar32._4_4_ = -(uint)(fVar30 <= fVar28);
      auVar32._0_4_ = -(uint)(fVar29 <= fVar28);
      auVar32._8_4_ = -(uint)(fVar37 <= fVar28);
      auVar32._12_4_ = -(uint)(fVar43 <= fVar28);
      auVar34 = auVar34 ^ (auVar34 ^ auVar51) & auVar32;
      auVar26._0_4_ =
           -(uint)((float)((uint)fVar29 ^ ((uint)fVar29 ^ (uint)fVar28) & -(uint)(fVar29 <= fVar28))
                  <= fVar22);
      auVar26._4_4_ =
           -(uint)((float)((uint)fVar30 ^ ((uint)fVar30 ^ (uint)fVar28) & -(uint)(fVar30 <= fVar28))
                  <= fVar22);
      auVar26._8_4_ =
           -(uint)((float)((uint)fVar37 ^ ((uint)fVar37 ^ (uint)fVar28) & -(uint)(fVar37 <= fVar28))
                  <= fVar22);
      auVar26._12_4_ =
           -(uint)((float)((uint)fVar43 ^ ((uint)fVar43 ^ (uint)fVar28) & -(uint)(fVar43 <= fVar28))
                  <= fVar22);
      auVar50._8_4_ = (int)uVar49;
      auVar50._0_8_ = uVar53;
      auVar50._12_4_ = fVar22;
      auVar34 = auVar34 ^ (auVar34 ^ auVar50) & auVar26;
      fVar27 = auVar34._0_4_;
      auVar35._0_4_ = fVar27 * fVar27;
      fVar28 = auVar34._4_4_;
      auVar35._4_4_ = fVar28 * fVar28;
      fVar29 = auVar34._8_4_;
      auVar35._8_4_ = fVar29 * fVar29;
      fVar30 = auVar34._12_4_;
      auVar35._12_4_ = fVar30 * fVar30;
      auVar33 = NEON_ext(auVar35,auVar35,8,1);
      fVar23 = auVar33._0_4_ + auVar35._0_4_;
      fVar37 = auVar33._4_4_ + auVar35._4_4_;
      fVar22 = fVar23 + fVar37;
      fVar23 = fVar23 + fVar37;
      auVar36._8_8_ = CONCAT44(fVar23,fVar22);
      auVar36._0_8_ = CONCAT44(fVar23,fVar22);
      auVar33 = NEON_frsqrte(auVar36,4);
      auVar45._0_4_ = auVar33._0_4_ * fVar22;
      auVar45._4_4_ = auVar33._4_4_ * fVar23;
      auVar45._8_4_ = auVar33._8_4_ * fVar22;
      auVar45._12_4_ = auVar33._12_4_ * fVar23;
      auVar32 = NEON_frsqrts(auVar33,auVar45,4);
      auVar42._0_4_ = auVar33._0_4_ * auVar32._0_4_;
      auVar42._4_4_ = auVar33._4_4_ * auVar32._4_4_;
      auVar42._8_4_ = auVar33._8_4_ * auVar32._8_4_;
      auVar42._12_4_ = auVar33._12_4_ * auVar32._12_4_;
      auVar46._0_4_ = fVar22 * auVar42._0_4_;
      auVar46._4_4_ = fVar23 * auVar42._4_4_;
      auVar46._8_4_ = fVar22 * auVar42._8_4_;
      auVar46._12_4_ = fVar23 * auVar42._12_4_;
      iVar31 = -(uint)(fVar22 == 0.0);
      iVar38 = -(uint)(fVar23 == 0.0);
      iVar39 = -(uint)(fVar22 == 0.0);
      iVar40 = -(uint)(fVar23 == 0.0);
      auVar33 = NEON_frsqrts(auVar42,auVar46,4);
      fVar27 = auVar42._0_4_ * auVar33._0_4_ * fVar27;
      fVar28 = auVar42._4_4_ * auVar33._4_4_ * fVar28;
      fVar29 = auVar42._8_4_ * auVar33._8_4_ * fVar29;
      fVar30 = auVar42._12_4_ * auVar33._12_4_ * fVar30;
      uStack_788._0_4_ =
           (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                           CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                                    CONCAT11((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                             SUB41(fVar29,0) & ~(byte)iVar39)));
      uStack_788 = CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                            CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                     CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar40 >> 8)
                                              ,CONCAT14(SUB41(fVar30,0) & ~(byte)iVar40,
                                                        (float)uStack_788))));
      local_790._0_4_ =
           (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                           CONCAT12((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                    CONCAT11((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                             SUB41(fVar27,0) & ~(byte)iVar31)));
      local_790 = CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                           CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                    CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                             CONCAT14(SUB41(fVar28,0) & ~(byte)iVar38,
                                                      (float)local_790))));
      lVar15 = nn::os::GetCurrentThread();
LAB_0213ba8c:
      if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213ba98;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
      do {
        if (*plVar1 != 0 || plVar7[0x1af] != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
            while (*plVar1 == 0 && plVar7[0x1af] == 0) {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *plVar1 = lVar15;
                plVar7[0x1af] = 0;
                cVar13 = ExclusiveMonitorsStatus();
              }
              if (cVar13 == '\0') goto LAB_0213baa0;
            }
          } while( true );
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = 0;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_0213baa0:
      lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
      *(undefined8 *)(lVar15 + 0x68) = uStack_788;
      *(undefined8 *)(lVar15 + 0x60) = local_790;
      *(undefined1 *)(lVar15 + 0x1b9) = 1;
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      do {
        lVar3 = *plVar1;
        lVar4 = plVar7[0x1af];
        if (lVar3 != lVar15 || lVar4 != lVar17) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_0213c0e4;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
LAB_0213c0e4:
      if (!bVar12) {
        do {
          lVar15 = *plVar1;
          lVar17 = plVar7[0x1af];
          if (lVar15 != lVar3 || lVar17 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x0213d0dc;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
joined_r0x0213d0dc:
        if (!bVar12) {
          do {
            lVar3 = *plVar1;
            lVar4 = plVar7[0x1af];
            if (lVar3 != lVar15 || lVar4 != lVar17) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar15 = lVar3;
              lVar17 = lVar4;
              goto joined_r0x0213d0dc;
            }
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = 0;
              *(long *)((long)plVar7 + 0xd74) = lVar17;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          bVar12 = true;
          lVar15 = lVar3;
          lVar17 = lVar4;
          goto joined_r0x0213d0dc;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
    }
    memcpy(auStack_760,param_3 + 0x78,0x94);
    uVar14 = local_754;
    uVar21 = (ulong)local_754;
    fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
    if (local_75c == 0) {
      fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
    }
    else {
      fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
    }
    if ((uVar14 == 1) || (fVar22 < local_744[1])) {
      puVar16 = auStack_760;
LAB_0213c130:
      fVar23 = *(float *)(puVar16 + 0x14);
    }
    else {
      puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
      if (local_744[((long)(int)uVar14 + -1) * 4 + 1] <= fVar22) goto LAB_0213c130;
      fVar23 = 0.0;
      if (0 < (int)uVar14) {
        lVar15 = -0x100000000;
        puVar8 = &local_748;
        do {
          puVar18 = puVar8;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) goto LAB_0213c150;
          lVar15 = lVar15 + 0x100000000;
          puVar8 = puVar18 + 4;
        } while ((float)puVar18[6] <= fVar22);
        fVar27 = *(float *)((long)local_744 + (lVar15 >> 0x1c) + 4);
        fVar23 = (float)*(undefined8 *)((long)local_744 + (lVar15 >> 0x1c) + -8);
        fVar23 = fVar23 + (((float)*(undefined8 *)(puVar18 + 3) - fVar23) /
                          ((float)puVar18[6] - fVar27)) * (fVar22 - fVar27);
      }
    }
LAB_0213c150:
    local_770 = strlen("ConeAngle");
    local_780[0] = 6.42948e+28;
    local_780[1] = 6.6920964e-13;
    pcStack_778 = "ConeAngle";
    local_768 = (long *)0x0;
    if (*param_5 != '\0') {
      plVar1 = plVar7 + 0x1ae;
      lVar15 = nn::os::GetCurrentThread();
LAB_0213c18c:
      if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213c198;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
      do {
        if (*plVar1 != 0 || plVar7[0x1af] != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
            while (*plVar1 == 0 && plVar7[0x1af] == 0) {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *plVar1 = lVar15;
                plVar7[0x1af] = 0;
                cVar13 = ExclusiveMonitorsStatus();
              }
              if (cVar13 == '\0') goto LAB_0213c1a0;
            }
          } while( true );
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = 0;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_0213c1a0:
      lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
      pfVar11 = (float *)FUN_00c42268(lVar15 + 0x80,local_780);
      *pfVar11 = fVar23;
      *(undefined1 *)(lVar15 + 0x1b9) = 1;
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      do {
        lVar3 = *plVar1;
        lVar4 = plVar7[0x1af];
        if (lVar3 != lVar15 || lVar4 != lVar17) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_0213c254;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
LAB_0213c254:
      if (!bVar12) {
        do {
          lVar15 = *plVar1;
          lVar17 = plVar7[0x1af];
          if (lVar15 != lVar3 || lVar17 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x0213d054;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
joined_r0x0213d054:
        if (!bVar12) {
          do {
            lVar3 = *plVar1;
            lVar4 = plVar7[0x1af];
            if (lVar3 != lVar15 || lVar4 != lVar17) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar15 = lVar3;
              lVar17 = lVar4;
              goto joined_r0x0213d054;
            }
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = 0;
              *(long *)((long)plVar7 + 0xd74) = lVar17;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          bVar12 = true;
          lVar15 = lVar3;
          lVar17 = lVar4;
          goto joined_r0x0213d054;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
      if (local_768 != (long *)0x0) {
        (**(code **)(*local_768 + 0x20))();
      }
    }
    memcpy(auStack_760,param_3 + 0x9d,0x94);
    uVar14 = local_754;
    uVar21 = (ulong)local_754;
    fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
    if (local_75c == 0) {
      fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
    }
    else {
      fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
    }
    if ((uVar14 == 1) || (fVar22 < local_744[1])) {
      puVar16 = auStack_760;
LAB_0213c2a8:
      fVar23 = *(float *)(puVar16 + 0x14);
    }
    else {
      puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
      if (local_744[((long)(int)uVar14 + -1) * 4 + 1] <= fVar22) goto LAB_0213c2a8;
      fVar23 = 0.0;
      if (0 < (int)uVar14) {
        lVar15 = -0x100000000;
        puVar8 = &local_748;
        do {
          puVar18 = puVar8;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) goto LAB_0213c2c8;
          lVar15 = lVar15 + 0x100000000;
          puVar8 = puVar18 + 4;
        } while ((float)puVar18[6] <= fVar22);
        fVar27 = *(float *)((long)local_744 + (lVar15 >> 0x1c) + 4);
        fVar23 = (float)*(undefined8 *)((long)local_744 + (lVar15 >> 0x1c) + -8);
        fVar23 = fVar23 + (((float)*(undefined8 *)(puVar18 + 3) - fVar23) /
                          ((float)puVar18[6] - fVar27)) * (fVar22 - fVar27);
      }
    }
LAB_0213c2c8:
    local_770 = strlen("ConeTopOffset");
    local_780[0] = -14464.846;
    local_780[1] = -2.2303347e+34;
    pcStack_778 = "ConeTopOffset";
    local_768 = (long *)0x0;
    if (*param_5 != '\0') {
      plVar1 = plVar7 + 0x1ae;
      lVar15 = nn::os::GetCurrentThread();
LAB_0213c304:
      if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213c310;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
      do {
        if (*plVar1 != 0 || plVar7[0x1af] != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
            while (*plVar1 == 0 && plVar7[0x1af] == 0) {
              cVar13 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *plVar1 = lVar15;
                plVar7[0x1af] = 0;
                cVar13 = ExclusiveMonitorsStatus();
              }
              if (cVar13 == '\0') goto LAB_0213c318;
            }
          } while( true );
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = 0;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_0213c318:
      lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
      pfVar11 = (float *)FUN_00c42268(lVar15 + 0x80,local_780);
      *pfVar11 = fVar23;
      *(undefined1 *)(lVar15 + 0x1b9) = 1;
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar15;
          plVar7[0x1af] = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      do {
        lVar3 = *plVar1;
        lVar4 = plVar7[0x1af];
        if (lVar3 != lVar15 || lVar4 != lVar17) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_0213c3cc;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
LAB_0213c3cc:
      if (!bVar12) {
        do {
          lVar15 = *plVar1;
          lVar17 = plVar7[0x1af];
          if (lVar15 != lVar3 || lVar17 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x0213d098;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
joined_r0x0213d098:
        if (!bVar12) {
          do {
            lVar3 = *plVar1;
            lVar4 = plVar7[0x1af];
            if (lVar3 != lVar15 || lVar4 != lVar17) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar15 = lVar3;
              lVar17 = lVar4;
              goto joined_r0x0213d098;
            }
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = 0;
              *(long *)((long)plVar7 + 0xd74) = lVar17;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          bVar12 = true;
          lVar15 = lVar3;
          lVar17 = lVar4;
          goto joined_r0x0213d098;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
      if (local_768 != (long *)0x0) {
        (**(code **)(*local_768 + 0x20))();
      }
    }
    uVar14 = param_3[1];
  }
  if (uVar14 != 8) goto LAB_0213b2c0;
  local_770 = strlen("Strength");
  local_780[0] = -4.135991e-37;
  local_780[1] = -13.314692;
  pcStack_778 = "Strength";
  local_768 = (long *)0x0;
  if (*param_5 != '\0') {
    plVar1 = plVar7 + 0x1ae;
    lVar15 = nn::os::GetCurrentThread();
LAB_0213bb34:
    if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213bb40;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
    do {
      if (*plVar1 != 0 || plVar7[0x1af] != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
          while (*plVar1 == 0 && plVar7[0x1af] == 0) {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = lVar15;
              plVar7[0x1af] = 0;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 == '\0') goto LAB_0213bb48;
          }
        } while( true );
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = 0;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
LAB_0213bb48:
    lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
    pfVar11 = (float *)FUN_00c42268(lVar15 + 0x80,local_780);
    *pfVar11 = fVar25;
    *(undefined1 *)(lVar15 + 0x1b9) = 1;
    do {
      lVar15 = *plVar1;
      lVar17 = plVar7[0x1af];
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    do {
      lVar3 = *plVar1;
      lVar4 = plVar7[0x1af];
      if (lVar3 != lVar15 || lVar4 != lVar17) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0213bc54;
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)((long)plVar7 + 0xd74) = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    bVar12 = true;
LAB_0213bc54:
    if (!bVar12) {
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        if (lVar15 != lVar3 || lVar17 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0213cf44;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
joined_r0x0213cf44:
      if (!bVar12) {
        do {
          lVar3 = *plVar1;
          lVar4 = plVar7[0x1af];
          if (lVar3 != lVar15 || lVar4 != lVar17) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar15 = lVar3;
            lVar17 = lVar4;
            goto joined_r0x0213cf44;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar17;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
        lVar15 = lVar3;
        lVar17 = lVar4;
        goto joined_r0x0213cf44;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
    if (local_768 != (long *)0x0) {
      (**(code **)(*local_768 + 0x20))();
    }
  }
  memcpy(auStack_760,param_3 + 0xc2,0x94);
  uVar14 = local_754;
  uVar21 = (ulong)local_754;
  fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
  if (local_75c == 0) {
    fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
  }
  else {
    fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
  }
  if ((uVar14 == 1) || (fVar22 < local_744[1])) {
    puVar16 = auStack_760;
LAB_0213bca8:
    fVar24 = *(float *)(puVar16 + 0x14);
  }
  else {
    puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
    if (local_744[((long)(int)uVar14 + -1) * 4 + 1] <= fVar22) goto LAB_0213bca8;
    if (0 < (int)uVar14) {
      lVar15 = -0x100000000;
      puVar8 = &local_748;
      do {
        puVar18 = puVar8;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_0213bcc8;
        lVar15 = lVar15 + 0x100000000;
        puVar8 = puVar18 + 4;
      } while ((float)puVar18[6] <= fVar22);
      fVar25 = *(float *)((long)local_744 + (lVar15 >> 0x1c) + 4);
      fVar24 = (float)*(undefined8 *)((long)local_744 + (lVar15 >> 0x1c) + -8);
      fVar24 = fVar24 + (((float)*(undefined8 *)(puVar18 + 3) - fVar24) /
                        ((float)puVar18[6] - fVar25)) * (fVar22 - fVar25);
    }
  }
LAB_0213bcc8:
  local_770 = strlen("Speed");
  local_780[0] = -5.6558245e-28;
  local_780[1] = 2.9199061e+15;
  pcStack_778 = "Speed";
  local_768 = (long *)0x0;
  if (*param_5 != '\0') {
    plVar1 = plVar7 + 0x1ae;
    lVar15 = nn::os::GetCurrentThread();
LAB_0213bd04:
    if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213bd10;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
    do {
      if (*plVar1 != 0 || plVar7[0x1af] != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
          while (*plVar1 == 0 && plVar7[0x1af] == 0) {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = lVar15;
              plVar7[0x1af] = 0;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 == '\0') goto LAB_0213bd18;
          }
        } while( true );
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = 0;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
LAB_0213bd18:
    lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
    pfVar11 = (float *)FUN_00c42268(lVar15 + 0x80,local_780);
    *pfVar11 = fVar24;
    *(undefined1 *)(lVar15 + 0x1b9) = 1;
    do {
      lVar15 = *plVar1;
      lVar17 = plVar7[0x1af];
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    do {
      lVar3 = *plVar1;
      lVar4 = plVar7[0x1af];
      if (lVar3 != lVar15 || lVar4 != lVar17) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0213bdcc;
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)((long)plVar7 + 0xd74) = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    bVar12 = true;
LAB_0213bdcc:
    if (!bVar12) {
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        if (lVar15 != lVar3 || lVar17 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0213cf88;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
joined_r0x0213cf88:
      if (!bVar12) {
        do {
          lVar3 = *plVar1;
          lVar4 = plVar7[0x1af];
          if (lVar3 != lVar15 || lVar4 != lVar17) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar15 = lVar3;
            lVar17 = lVar4;
            goto joined_r0x0213cf88;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar17;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
        lVar15 = lVar3;
        lVar17 = lVar4;
        goto joined_r0x0213cf88;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
    if (local_768 != (long *)0x0) {
      (**(code **)(*local_768 + 0x20))();
    }
  }
  memcpy(auStack_760,param_3 + 0xe7,0x94);
  uVar14 = local_754;
  uVar21 = (ulong)local_754;
  fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
  if (local_75c == 0) {
    fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
  }
  else {
    fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
  }
  if ((uVar14 == 1) || (fVar22 < local_744[1])) {
    puVar16 = auStack_760;
LAB_0213be20:
    fVar25 = *(float *)(puVar16 + 0x14);
  }
  else {
    puVar16 = auStack_760 + ((long)(int)uVar14 + -1) * 0x10;
    if (local_744[((long)(int)uVar14 + -1) * 4 + 1] <= fVar22) goto LAB_0213be20;
    fVar25 = 0.0;
    if (0 < (int)uVar14) {
      lVar15 = -0x100000000;
      puVar8 = &local_748;
      do {
        puVar18 = puVar8;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_0213be40;
        lVar15 = lVar15 + 0x100000000;
        puVar8 = puVar18 + 4;
      } while ((float)puVar18[6] <= fVar22);
      fVar23 = *(float *)((long)local_744 + (lVar15 >> 0x1c) + 4);
      fVar25 = (float)*(undefined8 *)((long)local_744 + (lVar15 >> 0x1c) + -8);
      fVar25 = fVar25 + (((float)*(undefined8 *)(puVar18 + 3) - fVar25) /
                        ((float)puVar18[6] - fVar23)) * (fVar22 - fVar23);
    }
  }
LAB_0213be40:
  local_770 = strlen("NoiseScale");
  local_780[0] = -1.7295972e-34;
  local_780[1] = -2.240392e-27;
  pcStack_778 = "NoiseScale";
  local_768 = (long *)0x0;
  if (*param_5 != '\0') {
    plVar1 = plVar7 + 0x1ae;
    lVar15 = nn::os::GetCurrentThread();
LAB_0213be7c:
    if (*plVar1 == 0 && plVar7[0x1af] == 0) goto code_r0x0213be88;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
    do {
      if (*plVar1 != 0 || plVar7[0x1af] != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
          while (*plVar1 == 0 && plVar7[0x1af] == 0) {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = lVar15;
              plVar7[0x1af] = 0;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 == '\0') goto LAB_0213be90;
          }
        } while( true );
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = 0;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
LAB_0213be90:
    lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
    pfVar11 = (float *)FUN_00c42268(lVar15 + 0x80,local_780);
    *pfVar11 = fVar25;
    *(undefined1 *)(lVar15 + 0x1b9) = 1;
    do {
      lVar15 = *plVar1;
      lVar17 = plVar7[0x1af];
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    do {
      lVar3 = *plVar1;
      lVar4 = plVar7[0x1af];
      if (lVar3 != lVar15 || lVar4 != lVar17) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0213bf44;
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)((long)plVar7 + 0xd74) = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    bVar12 = true;
LAB_0213bf44:
    if (!bVar12) {
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        if (lVar15 != lVar3 || lVar17 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0213cfcc;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
joined_r0x0213cfcc:
      if (!bVar12) {
        do {
          lVar3 = *plVar1;
          lVar4 = plVar7[0x1af];
          if (lVar3 != lVar15 || lVar4 != lVar17) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar15 = lVar3;
            lVar17 = lVar4;
            goto joined_r0x0213cfcc;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar17;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
        lVar15 = lVar3;
        lVar17 = lVar4;
        goto joined_r0x0213cfcc;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
    if (local_768 != (long *)0x0) {
      (**(code **)(*local_768 + 0x20))();
    }
  }
  memcpy(auStack_760,param_3 + 0x10c,0x94);
  uVar21 = (ulong)local_754;
  fVar22 = *(float *)(param_4 + 0x44) - *(float *)(*(long *)(param_4 + 0xb0) + 8);
  if (local_75c == 0) {
    fVar22 = fVar22 / *(float *)(*(long *)(param_4 + 0xb0) + 0xc);
  }
  else {
    fVar22 = modff(fVar22 / (float)(int)local_750,local_780);
  }
  if ((local_754 == 1) || (fVar22 < local_744[1])) {
    puVar16 = auStack_760;
LAB_0213bf98:
    fVar25 = *(float *)(puVar16 + 0x14);
  }
  else {
    puVar16 = auStack_760 + ((long)(int)local_754 + -1) * 0x10;
    if (local_744[((long)(int)local_754 + -1) * 4 + 1] <= fVar22) goto LAB_0213bf98;
    fVar25 = 0.0;
    if (0 < (int)local_754) {
      lVar15 = -0x100000000;
      puVar8 = &local_748;
      do {
        puVar18 = puVar8;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_0213bfb8;
        lVar15 = lVar15 + 0x100000000;
        puVar8 = puVar18 + 4;
      } while ((float)puVar18[6] <= fVar22);
      fVar23 = *(float *)((long)local_744 + (lVar15 >> 0x1c) + 4);
      fVar25 = (float)*(undefined8 *)((long)local_744 + (lVar15 >> 0x1c) + -8);
      fVar25 = fVar25 + (((float)*(undefined8 *)(puVar18 + 3) - fVar25) /
                        ((float)puVar18[6] - fVar23)) * (fVar22 - fVar23);
    }
  }
LAB_0213bfb8:
  local_770 = strlen("FadePower");
  local_780[0] = 4.92576e-25;
  local_780[1] = 7.726123e-29;
  pcStack_778 = "FadePower";
  local_768 = (long *)0x0;
  if (*param_5 != '\0') {
    plVar1 = plVar7 + 0x1ae;
    lVar15 = nn::os::GetCurrentThread();
    while (*plVar1 == 0 && plVar7[0x1af] == 0) {
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = 0;
        cVar13 = ExclusiveMonitorsStatus();
      }
      if (cVar13 == '\0') goto LAB_0213c008;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
    do {
      if (*plVar1 != 0 || plVar7[0x1af] != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x1b0));
          while (*plVar1 == 0 && plVar7[0x1af] == 0) {
            cVar13 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = lVar15;
              plVar7[0x1af] = 0;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 == '\0') goto LAB_0213c008;
          }
        } while( true );
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = 0;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
LAB_0213c008:
    lVar15 = plVar7[7] + (long)*(int *)(param_5 + 4) * 0x1d0;
    pfVar11 = (float *)FUN_00c42268(lVar15 + 0x80,local_780);
    *pfVar11 = fVar25;
    *(undefined1 *)(lVar15 + 0x1b9) = 1;
    do {
      lVar15 = *plVar1;
      lVar17 = plVar7[0x1af];
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar15;
        plVar7[0x1af] = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    do {
      lVar3 = *plVar1;
      lVar4 = plVar7[0x1af];
      if (lVar3 != lVar15 || lVar4 != lVar17) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0213c0bc;
      }
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)((long)plVar7 + 0xd74) = lVar17;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    bVar12 = true;
LAB_0213c0bc:
    if (!bVar12) {
      do {
        lVar15 = *plVar1;
        lVar17 = plVar7[0x1af];
        if (lVar15 != lVar3 || lVar17 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0213d010;
        }
        cVar13 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)plVar7 + 0xd74) = lVar4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      bVar12 = true;
joined_r0x0213d010:
      if (!bVar12) {
        do {
          lVar3 = *plVar1;
          lVar4 = plVar7[0x1af];
          if (lVar3 != lVar15 || lVar4 != lVar17) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar15 = lVar3;
            lVar17 = lVar4;
            goto joined_r0x0213d010;
          }
          cVar13 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)((long)plVar7 + 0xd74) = lVar17;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        bVar12 = true;
        lVar15 = lVar3;
        lVar17 = lVar4;
        goto joined_r0x0213d010;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x1b0));
    if (local_768 != (long *)0x0) {
      (**(code **)(*local_768 + 0x20))();
    }
  }
LAB_0213b2c0:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar15 = *plVar1;
      iVar31 = (int)lVar15 + -1;
      cVar13 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = iVar31;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar31 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
code_r0x0213ad4c:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213ad54;
  goto LAB_0213ad40;
code_r0x0213af1c:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213af24;
  goto LAB_0213af10;
code_r0x0213b04c:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213b054;
  goto LAB_0213b040;
code_r0x0213b1dc:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213b1e4;
  goto LAB_0213b1d0;
code_r0x0213ba98:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213baa0;
  goto LAB_0213ba8c;
code_r0x0213c198:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213c1a0;
  goto LAB_0213c18c;
code_r0x0213c310:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213c318;
  goto LAB_0213c304;
code_r0x0213bb40:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213bb48;
  goto LAB_0213bb34;
code_r0x0213bd10:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213bd18;
  goto LAB_0213bd04;
code_r0x0213be88:
  cVar13 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar15;
    plVar7[0x1af] = 0;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_0213be90;
  goto LAB_0213be7c;
}


