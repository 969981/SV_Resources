/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01311f18; name: FUN_01311f18
 */


void FUN_01311f18(long param_1,undefined8 param_2,uint *param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  short sVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  ScalableFontEngine *this;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  char *pcVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  void *pvVar28;
  long lVar29;
  ulong uVar30;
  size_t __n;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 local_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 local_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined1 local_9c8;
  undefined1 uStack_9c7;
  undefined2 uStack_9c6;
  short sStack_9c4;
  short sStack_9c2;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined2 uStack_9b0;
  short local_9ae;
  undefined2 local_9ac;
  short sStack_9aa;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined8 uStack_9a0;
  long local_998;
  undefined8 uStack_990;
  ushort local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((*param_3 & *param_3 - 1) == 0) && (*(long *)(param_3 + 2) != 0)) {
    puVar1 = param_3 + 0x5a86;
    uVar15 = *puVar1;
    uVar18 = (ulong)uVar15;
    if (uVar15 - 1 < 0x20) {
      uVar27 = 0;
      puVar20 = param_3 + 0x5a87;
      while (*puVar20 - 1 < 0x10) {
        uVar27 = (ulong)(*puVar20 + (int)uVar27);
        uVar18 = uVar18 - 1;
        puVar20 = puVar20 + 1;
        if (uVar18 == 0) {
          uVar18 = 0;
          lVar19 = param_1 + 0x1888;
          uVar30 = 0;
          if (uVar15 != 0) goto LAB_01311ff8;
LAB_01311fe0:
          *(undefined1 *)(lVar19 + uVar18) = 0;
          *(undefined8 *)(lVar19 + uVar18 * 8 + 0x20) = 0;
joined_r0x01311ff0:
          if (uVar18 == 0x1f) {
            lVar19 = 0;
            pcVar21 = (char *)(param_1 + 0x19a9);
            do {
              cVar13 = (char)lVar19;
              pcVar21[-1] = cVar13;
              *pcVar21 = cVar13 + '\x01';
              lVar19 = lVar19 + 4;
              pcVar21[1] = cVar13 + '\x02';
              pcVar21[2] = cVar13 + '\x03';
              pcVar21 = pcVar21 + 4;
            } while (lVar19 != 0x200);
            uVar15 = *puVar1;
            goto LAB_0131207c;
          }
          uVar18 = uVar18 + 1;
          if (uVar18 < *puVar1) goto LAB_01311ff8;
          goto LAB_01311fe0;
        }
      }
      uVar27 = 0;
LAB_0131207c:
      *(uint *)(param_1 + 0x1884) = uVar15;
      *(char *)(param_1 + 0x1bd1) = (char)param_3[0x5cae];
      *(uint *)(param_1 + 0x1bd4) = param_3[0x5caf];
      puVar5 = PTR_GetCurrentCoreNumber_047d1fc8;
      if (*(undefined **)(param_3 + 0x5cb0) != (undefined *)0x0) {
        puVar5 = *(undefined **)(param_3 + 0x5cb0);
      }
      *(undefined **)(param_1 + 0x1bd8) = puVar5;
      puVar5 = PTR_LAB_047d1fd0;
      if (*(undefined **)(param_3 + 0x5cb2) != (undefined *)0x0) {
        puVar5 = *(undefined **)(param_3 + 0x5cb2);
      }
      *(undefined **)(param_1 + 0x1be0) = puVar5;
      puVar5 = PTR_LAB_047d1fd8;
      if (*(undefined **)(param_3 + 0x5cb4) != (undefined *)0x0) {
        puVar5 = *(undefined **)(param_3 + 0x5cb4);
      }
      *(undefined **)(param_1 + 0x1be8) = puVar5;
      iVar26 = (int)uVar27;
      uVar17 = (**(code **)(param_3 + 2))((long)(iVar26 * 0x32),4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x18) = uVar17;
      lVar29 = (long)iVar26;
      uVar17 = (**(code **)(param_3 + 2))((long)iVar26 * 0x1c,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf0) = uVar17;
      uVar30 = -(uVar27 >> 0x1f) & 0xfffffffc00000000 | uVar27 << 2;
      uVar17 = (**(code **)(param_3 + 2))(uVar30,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf8) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(lVar29,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c00) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(lVar29,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c08) = uVar17;
      uVar18 = -(uVar27 >> 0x1f) & 0xfffffffe00000000 | uVar27 << 1;
      uVar17 = (**(code **)(param_3 + 2))(uVar18,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c10) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(lVar29,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c18) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(lVar29,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c20) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(uVar18,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c28) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(uVar30,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c30) = uVar17;
      uVar18 = -(uVar27 >> 0x1f) & 0xffffffc000000000 | uVar27 << 6;
      uVar17 = (**(code **)(param_3 + 2))(uVar18,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c38) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(uVar18,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c40) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))
                         (-(uVar27 >> 0x1f) & 0xfffffff800000000 | uVar27 << 3,4,
                          *(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c48) = uVar17;
      *(uint *)(param_1 + 0x28) = *param_3;
      *(uint *)(param_1 + 0x2c) = param_3[1];
      *(undefined4 *)(param_1 + 0x1ba8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1880) = 0;
      *(undefined4 *)(param_1 + 0x1bcc) = 0;
      *(undefined1 *)(param_1 + 0x1bd0) = 0;
      *(undefined8 *)(param_1 + 0x1bac) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bb4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bbc) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bc4) = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 0x1c50) = *(undefined1 *)((long)param_3 + 0x172d9);
      lVar19 = 0xb8;
      this = (ScalableFontEngine *)(**(code **)(param_3 + 2))(0xb8,4,*(undefined8 *)(param_3 + 4));
      *(ScalableFontEngine **)(param_1 + 8) = this;
      nn::fontll::ScalableFontEngine::ScalableFontEngine(this);
      if (*(char *)(param_1 + 0x1bd1) != '\0') {
        lVar19 = (ulong)*(uint *)(param_1 + 0x1bd4) * 0xb8;
      }
      uVar17 = (**(code **)(param_3 + 2))(lVar19,4,*(undefined8 *)(param_3 + 4));
      lVar19 = 0;
      uVar18 = 0;
      *(undefined8 *)(param_1 + 0x10) = uVar17;
      if (*(char *)(param_1 + 0x1bd1) == '\0') goto LAB_013122a4;
      while (uVar18 < *(uint *)(param_1 + 0x1bd4)) {
        while( true ) {
          nn::fontll::ScalableFontEngine::ScalableFontEngine
                    ((ScalableFontEngine *)(*(long *)(param_1 + 0x10) + lVar19));
          uVar18 = uVar18 + 1;
          lVar19 = lVar19 + 0xb8;
          if (*(char *)(param_1 + 0x1bd1) != '\0') break;
LAB_013122a4:
          bVar14 = uVar18 != 0;
          uVar18 = 0;
          if (bVar14) goto LAB_013122d0;
        }
      }
LAB_013122d0:
      pvVar28 = *(void **)(param_1 + 8);
      uVar15 = (**(code **)(param_3 + 2))
                         (*(undefined8 *)(param_3 + 0x5aa8),4,*(undefined8 *)(param_3 + 4));
      nn::fontll::ScalableFontEngine::Initialize(pvVar28,uVar15);
      nn::fontll::ScalableFontEngine::GetError();
      lVar19 = 0;
      uVar18 = 0;
      do {
        if (*(char *)(param_1 + 0x1bd1) == '\0') {
          if (uVar18 != 0) {
LAB_01312398:
            uVar15 = *(uint *)(param_1 + 0x1884);
            if (uVar15 != 0) {
              uVar18 = 0;
              uVar27 = 0;
              do {
                pbVar2 = (byte *)(param_1 + uVar18 + 0x1888);
                if (*pbVar2 != 0) {
                  uVar30 = 0;
                  do {
                    pvVar28 = *(void **)(param_3 + uVar18 * 0x20 + uVar30 * 2 + 6);
                    if ((param_3[uVar18 * 0x10 + uVar30 + 0xe86] & 0xfffffffe) == 2) {
                      pvVar28 = (void *)nn::fontll::ScalableFontEngineHelper::Decode
                                                  (pvVar28,param_3[uVar18 * 0x20 +
                                                                   uVar30 * 2 + 0x406]);
                    }
                    uVar23 = -(uVar27 >> 0x1f) & 0xfffffffc00000000 | uVar27 << 2;
                    iVar26 = (int)uVar27;
                    lVar25 = (long)iVar26;
                    *(int *)(*(long *)(param_1 + 0x1bf8) + uVar23) =
                         (int)((float)param_3[uVar18 * 0x10 + uVar30 + 0x806] * 65536.0);
                    lVar19 = uVar30 + uVar18 * 0x10;
                    uVar24 = -(uVar27 >> 0x1f) & 0xfffffffe00000000 | uVar27 << 1;
                    *(undefined1 *)(*(long *)(param_1 + 0x1c00) + lVar25) =
                         *(undefined1 *)((long)param_3 + lVar19 + 0x2818);
                    pcVar21 = (char *)((long)param_3 + lVar19 + 0x4418);
                    *(char *)(*(long *)(param_1 + 0x1c08) + lVar25) = *pcVar21;
                    lVar29 = uVar30 * 2 + uVar18 * 0x20;
                    *(undefined2 *)(*(long *)(param_1 + 0x1c10) + uVar24) =
                         *(undefined2 *)((long)param_3 + lVar29 + 0x4618);
                    pcVar3 = (char *)((long)param_3 + lVar19 + 0x4a18);
                    *(char *)(*(long *)(param_1 + 0x1c18) + lVar25) = *pcVar3;
                    *(undefined1 *)(*(long *)(param_1 + 0x1c20) + lVar25) =
                         *(undefined1 *)((long)param_3 + lVar19 + 0x4c18);
                    *(undefined2 *)(*(long *)(param_1 + 0x1c28) + uVar24) =
                         *(undefined2 *)((long)param_3 + lVar29 + 0x4e18);
                    *(uint *)(*(long *)(param_1 + 0x1c30) + uVar23) =
                         param_3[uVar18 * 0x10 + uVar30 + 0x1886];
                    uVar23 = -(uVar27 >> 0x1f) & 0xffffffc000000000 | uVar27 << 6;
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a86];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a86];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 4) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a87];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 4) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a87];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 8) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a88];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 8) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a88];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0xc) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a89];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0xc) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a89];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x10) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8a];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x10) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8a];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x14) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8b];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x14) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8b];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x18) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8c];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x18) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8c];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x1c) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8d];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x1c) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8d];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x20) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8e];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x20) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8e];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x24) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8f];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x24) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8f];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x28) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a90];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x28) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a90];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x2c) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a91];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x2c) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a91];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x30) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a92];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x30) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a92];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x34) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a93];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x34) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a93];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x38) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a94];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x38) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a94];
                    *(uint *)(*(long *)(param_1 + 0x1c38) + uVar23 + 0x3c) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a95];
                    *(uint *)(*(long *)(param_1 + 0x1c40) + uVar23 + 0x3c) =
                         param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a95];
                    nn::fontll::ScalableFontEngine::LoadFont
                              (*(char **)(param_1 + 8),
                               (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar26 * 0x32)),
                               (uint)pvVar28,param_3[uVar18 * 0x10 + uVar30 + 0x5aae]);
                    nn::fontll::ScalableFontEngine::GetError();
                    lVar19 = 0;
                    uVar23 = 0;
                    if (*(char *)(param_1 + 0x1bd1) == '\0') goto LAB_01312768;
                    while (uVar23 < *(uint *)(param_1 + 0x1bd4)) {
                      while( true ) {
                        nn::fontll::ScalableFontEngine::LoadFont
                                  ((char *)(*(long *)(param_1 + 0x10) + lVar19),
                                   (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar26 * 0x32)
                                           ),(uint)pvVar28,param_3[uVar18 * 0x10 + uVar30 + 0x5aae])
                        ;
                        nn::fontll::ScalableFontEngine::GetError();
                        uVar23 = uVar23 + 1;
                        lVar19 = lVar19 + 0xb8;
                        if (*(char *)(param_1 + 0x1bd1) != '\0') break;
LAB_01312768:
                        bVar14 = uVar23 != 0;
                        uVar23 = 0;
                        if (bVar14) goto LAB_013127b0;
                      }
                    }
LAB_013127b0:
                    FUN_008882c4(param_1,uVar27);
                    nn::fontll::ScalableFontEngine::GetFontMetrics(*(Metrics **)(param_1 + 8));
                    nn::fontll::ScalableFontEngine::GetError();
                    sVar12 = *(short *)((long)param_3 + lVar29 + 0x5a18);
                    if (sVar12 != 0) {
                      sStack_9c4 = sVar12;
                      sStack_9aa = sVar12;
                    }
                    sVar12 = *(short *)((long)param_3 + lVar29 + 0x5e18);
                    if (sVar12 != 0) {
                      local_9ae = -sVar12;
                      sStack_9c2 = sVar12;
                    }
                    fVar31 = (float)NEON_ucvtf((uint)local_98);
                    lVar19 = lVar25 * 0x1c;
                    *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 8) =
                         (float)(int)sStack_9aa / fVar31;
                    fVar31 = (float)NEON_ucvtf((uint)local_98);
                    *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0xc) =
                         (float)((int)sStack_9aa - (int)local_9ae) / fVar31;
                    fVar31 = (float)NEON_ucvtf((uint)local_98);
                    *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19) =
                         (float)(int)sStack_9c4 / fVar31;
                    fVar31 = (float)NEON_ucvtf((uint)local_98);
                    *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 4) =
                         (float)((int)sStack_9c2 + (int)sStack_9c4) / fVar31;
                    *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x10) =
                         param_3[uVar18 * 0x10 + uVar30 + 0xa86];
                    *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x14) =
                         param_3[uVar18 * 0x10 + uVar30 + 0xc86];
                    *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x18) =
                         param_3[uVar18 * 0x10 + uVar30 + 0x1486];
                    if ((((param_3[uVar18 * 0x10 + uVar30 + 0xe86] | 2) == 3) && (*pcVar21 == '\0'))
                       && (*pcVar3 == '\0')) {
                      uVar17 = nn::fontll::ScalableFontEngine::InitializeOtfKerningTable
                                         (*(_func_void_ptr_ulong_ulong_void_ptr **)(param_1 + 8),
                                          *(void **)(param_3 + 2),
                                          SUB81(*(undefined8 *)(param_3 + 4),0));
                    }
                    else {
                      uVar17 = 0;
                    }
                    *(undefined8 *)(*(long *)(param_1 + 0x1c48) + lVar25 * 8) = uVar17;
                    uVar30 = uVar30 + 1;
                    uVar27 = (ulong)(iVar26 + 1);
                  } while (uVar30 < *pbVar2);
                  uVar15 = *(uint *)(param_1 + 0x1884);
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar15);
              if (uVar15 != 0) {
                uVar18 = 0;
                uVar22 = 0;
                do {
                  pbVar2 = (byte *)(param_1 + uVar18 + 0x1888);
                  bVar11 = *pbVar2;
                  uVar27 = (ulong)bVar11;
                  if (bVar11 != 0) {
                    lVar19 = (ulong)uVar22 * 0x1c;
                    uVar33 = 0;
                    uVar34 = 0;
                    fVar31 = 0.0;
                    uVar32 = 0;
                    uVar6 = (uint)bVar11;
                    if (bVar11 < 2) {
                      uVar6 = 1;
                    }
                    uVar30 = (ulong)uVar6;
                    pcVar21 = (char *)(*(long *)(param_1 + 0x1c20) + (ulong)uVar22);
                    lVar29 = lVar19;
                    do {
                      if (*pcVar21 == '\0') {
                        puVar4 = (undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar29);
                        if (fVar31 < (float)puVar4[3]) {
                          uVar33 = puVar4[1];
                          uVar32 = puVar4[2];
                          uVar34 = *puVar4;
                          fVar31 = (float)puVar4[3];
                        }
                      }
                      pcVar21 = pcVar21 + 1;
                      lVar29 = lVar29 + 0x1c;
                      uVar30 = uVar30 - 1;
                    } while (uVar30 != 0);
                    if (bVar11 != 0) {
                      uVar30 = 0;
                      do {
                        *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 8) = uVar32;
                        *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0xc) = fVar31;
                        *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar19) = uVar34;
                        lVar29 = *(long *)(param_1 + 0x1bf0) + lVar19;
                        lVar19 = lVar19 + 0x1c;
                        *(undefined4 *)(lVar29 + 4) = uVar33;
                        uVar27 = (ulong)*pbVar2;
                        uVar30 = uVar30 + 1;
                      } while (uVar30 < uVar27);
                      uVar15 = *(uint *)(param_1 + 0x1884);
                    }
                  }
                  uVar18 = uVar18 + 1;
                  uVar22 = uVar22 + (int)uVar27;
                } while (uVar18 < uVar15);
              }
            }
            iVar26 = *(int *)(param_1 + 0x28);
            iVar8 = *(int *)(param_1 + 0x2c);
            FUN_008874d4(param_1 + 0x1ea8,*(undefined8 *)(param_1 + 0x20),8,iVar26,iVar8,1,1);
            local_9d8 = 0;
            uStack_9d0 = 0;
            local_9e8 = 0;
            uStack_9e4 = 0;
            uStack_9e0 = 0;
            local_9f8 = 0;
            uStack_9f4 = 0;
            uStack_9f0 = 0;
            uStack_9ec = 0;
            local_a08 = 0;
            uStack_a00 = 0;
            uStack_9fc = 0;
            uVar33 = *(undefined4 *)(param_1 + 0x28);
            uVar32 = *(undefined4 *)(param_1 + 0x2c);
            FUN_008f050c(&local_a08);
            uVar17 = local_a08;
            uStack_9ec = 1;
            local_9e8 = 1;
            uStack_9fc = 0x201;
            local_9f8 = 0x20;
            local_a08._4_4_ = SUB84(uVar17,4);
            local_a08._0_4_ = CONCAT22(1,CONCAT11(2,(undefined1)local_a08));
            local_a08 = CONCAT26(1,(undefined6)local_a08);
            uVar34 = *(undefined4 *)(param_1 + 0x28);
            uVar9 = *(undefined4 *)(param_1 + 0x2c);
            local_998 = 0;
            uStack_990 = 0;
            uStack_9a8 = 0;
            uStack_9a4 = 0;
            uStack_9a0 = 0;
            local_9b8 = 0;
            uStack_9b4 = 0;
            uStack_9b0 = 0;
            local_9ae = 0;
            local_9ac = 0;
            sStack_9aa = 0;
            local_9c8 = 0;
            uStack_9c7 = 0;
            uStack_9c6 = 0;
            sStack_9c4 = 0;
            sStack_9c2 = 0;
            local_9c0 = 0;
            uStack_9bc = 0;
            uStack_9f4 = uVar33;
            uStack_9f0 = uVar32;
            FUN_008f050c(&local_9c8);
            uStack_9b0 = (undefined2)uVar9;
            local_9ae = (short)((uint)uVar9 >> 0x10);
            local_9ac = 1;
            sStack_9aa = 0;
            uStack_9a8 = 1;
            uStack_9c7 = 2;
            uStack_9bc = 0x201;
            local_9b8 = 0x20;
            uStack_9c6 = 1;
            sStack_9c2 = 1;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            uStack_80 = 0;
            uStack_9b4 = uVar34;
            FUN_00fab560(&local_88);
            local_88 = CONCAT44(local_88._4_4_,0x22);
            uVar27 = FUN_008f26fc(param_2,&local_9c8);
            uVar18 = FUN_00fab558(param_2,&local_88);
            iVar7 = *(int *)(param_1 + 0x28);
            iVar10 = *(int *)(param_1 + 0x2c);
            local_9b8 = 0;
            uStack_9b4 = 0;
            uStack_9b0 = 0;
            local_9ae = 0;
            local_9ac = 0;
            sStack_9aa = 0;
            local_9c8 = 0;
            uStack_9c7 = 0;
            uStack_9c6 = 0;
            sStack_9c4 = 0;
            sStack_9c2 = 0;
            local_9c0 = 0;
            uStack_9bc = 0;
            FUN_00fab560(&local_9c8);
            local_9c8 = 0x22;
            uStack_9c7 = 0;
            uStack_9c6 = 0;
            iVar16 = FUN_00fab550(param_2,&local_9c8);
            uVar15 = (iVar16 + iVar10 * iVar7) - 1U & -iVar16;
            __n = (size_t)(int)uVar15;
            if (param_4 == 0) {
              if (uVar18 <= uVar27) {
                uVar18 = uVar27;
              }
              pvVar28 = (void *)(**(code **)(param_3 + 2))(__n,uVar18,*(undefined8 *)(param_3 + 4));
              *(void **)(param_1 + 0x20) = pvVar28;
              memset(pvVar28,0,__n);
              local_9b8 = 0;
              uStack_9b4 = 0;
              uStack_9b0 = 0;
              local_9ae = 0;
              local_9ac = 0;
              sStack_9aa = 0;
              local_9c8 = 0;
              uStack_9c7 = 0;
              uStack_9c6 = 0;
              sStack_9c4 = 0;
              sStack_9c2 = 0;
              local_9c0 = 0;
              uStack_9bc = 0;
              FUN_00fab560(&local_9c8);
              local_9c8 = 0x22;
              uStack_9c7 = 0;
              uStack_9c6 = 0;
              sStack_9c4 = (short)uVar15;
              sStack_9c2 = (short)(uVar15 >> 0x10);
              local_9c0 = (undefined4)*(undefined8 *)(param_1 + 0x20);
              uStack_9bc = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
              param_4 = param_1 + 0x1d78;
              FUN_00ddef7c(param_4,param_2,&local_9c8);
              FUN_00ddf110(param_1 + 0x1c58,param_2,&local_a08,param_4,0,iVar8 * iVar26);
              param_5 = 0;
            }
            else {
              lVar19 = FUN_008f1228(param_4);
              *(void **)(param_1 + 0x20) = (void *)(lVar19 + param_5);
              memset((void *)(lVar19 + param_5),0,__n);
              FUN_008f123c(param_4);
              FUN_00ddf110(param_1 + 0x1c58,param_2,&local_a08,param_4,param_5,param_6);
            }
            *(long *)(param_1 + 0x1e98) = param_4;
            *(long *)(param_1 + 0x1ea0) = param_5;
            local_998 = 0;
            uStack_990 = 0;
            uStack_9a8 = 0;
            uStack_9a4 = 0;
            uStack_9a0 = 0;
            local_9b8 = 0;
            uStack_9b4 = 0;
            uStack_9b0 = 0;
            local_9ae = 0;
            local_9ac = 0;
            sStack_9aa = 0;
            local_9c8 = 0;
            uStack_9c7 = 0;
            uStack_9c6 = 0;
            sStack_9c4 = 0;
            sStack_9c2 = 0;
            local_9c0 = 0;
            uStack_9bc = 0;
            FUN_00ddef50(&local_9c8);
            sStack_9c4 = 0x201;
            sStack_9c2 = 0;
            local_9c0 = 0x2010101;
            local_998 = param_1 + 0x1c58;
            local_9c8 = 1;
            FUN_00ddf1e0(param_1 + 0x1d30,param_2,&local_9c8);
            FUN_00888ee4(param_1 + 0x30,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),
                         param_3[0x5aad]);
            if ((char)param_3[0x5cb6] == '\0') {
              return;
            }
            nn::fontll::ScalableFontEngine::SetAutoHint(SUB81(*(undefined8 *)(param_1 + 8),0));
            return;
          }
        }
        else if (*(uint *)(param_1 + 0x1bd4) <= uVar18) goto LAB_01312398;
        lVar25 = *(long *)(param_1 + 0x10);
        if ((char)param_3[0x5aac] == '\0') {
          uVar15 = (**(code **)(param_3 + 2))
                             (*(long *)(param_3 + 0x5aaa) * lVar29,4,*(undefined8 *)(param_3 + 4));
        }
        else {
          uVar15 = (**(code **)(param_3 + 2))
                             (*(long *)(param_3 + 0x5aaa),4,*(undefined8 *)(param_3 + 4));
        }
        nn::fontll::ScalableFontEngine::Initialize((void *)(lVar25 + lVar19),uVar15);
        nn::fontll::ScalableFontEngine::GetError();
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 0xb8;
      } while( true );
    }
  }
  return;
LAB_01311ff8:
  *(char *)(lVar19 + uVar18) = (char)param_3[uVar18 + 0x5a87];
  *(ulong *)(lVar19 + uVar18 * 8 + 0x20) = param_1 + (uVar30 & 0xff) + 0x19a8;
  uVar30 = (ulong)((int)uVar30 + param_3[uVar18 + 0x5a87]);
  goto joined_r0x01311ff0;
}


