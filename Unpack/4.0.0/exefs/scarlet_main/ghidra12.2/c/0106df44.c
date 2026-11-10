/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106df44; name: FUN_0106df44
 */


undefined4 FUN_0106df44(long param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char *pcVar27;
  undefined8 uVar28;
  undefined1 uVar29;
  long lVar30;
  ulong uVar31;
  undefined1 *puVar32;
  long *plVar33;
  long *local_2b0;
  long *local_2a8;
  long *local_2a0;
  long *local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  
  plVar33 = (long *)(param_1 + 0x30);
  bVar5 = *(byte *)(param_1 + 0x38);
  lVar30 = *(long *)(*(long *)(*(long *)(*plVar33 + 0x38) + 0x290) + 8);
  uVar24 = FUN_00f7e2a0(*(undefined4 *)(lVar30 + 0x36c),*(undefined1 *)(lVar30 + 0x370),bVar5);
  if ((uVar24 & 1) == 0) {
    return 0;
  }
  uVar24 = FUN_0106f590(*plVar33,4,bVar5);
  if ((uVar24 & 1) != 0) {
    uVar25 = 0x13;
    uVar26 = 3;
    uVar28 = 4;
    goto LAB_0106e8e8;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x38) + 0x499) >> 2 & 1) != 0) {
    lVar30 = *(long *)(*(long *)(param_1 + 0x28) + 0x290);
    iVar4 = *(int *)(*(long *)(lVar30 + 8) + 0x36c);
    bVar11 = *(byte *)(param_1 + 0x38);
    uVar24 = (ulong)bVar11;
    if (iVar4 != 2) {
      if (iVar4 == 1) {
        if (bVar11 < 5) {
          bVar12 = (&DAT_03d6a455)[uVar24];
        }
        else {
          bVar12 = 2;
        }
        bVar6 = *(byte *)(*(long *)(lVar30 + 0x10) + 0x95);
        uVar31 = (ulong)bVar6;
        if (bVar6 < 5) {
          puVar32 = &DAT_03d6a455;
          goto LAB_0106dffc;
        }
      }
      else if (iVar4 == 0) {
        if (bVar11 < 5) {
          bVar12 = (&DAT_03d6a450)[uVar24];
        }
        else {
          bVar12 = 2;
        }
        bVar6 = *(byte *)(*(long *)(lVar30 + 0x10) + 0x95);
        uVar31 = (ulong)bVar6;
        if (bVar6 < 5) {
          puVar32 = &DAT_03d6a450;
          goto LAB_0106dffc;
        }
      }
      goto LAB_0106e0ac;
    }
    if (bVar11 < 5) {
      bVar12 = (&DAT_03d6a45a)[uVar24];
    }
    else {
      bVar12 = 2;
    }
    bVar6 = *(byte *)(*(long *)(lVar30 + 0x10) + 0x95);
    uVar31 = (ulong)bVar6;
    if (4 < bVar6) goto LAB_0106e0ac;
    puVar32 = &DAT_03d6a45a;
LAB_0106dffc:
    bVar6 = puVar32[uVar31];
    if (1 < bVar6) goto LAB_0106e0ac;
    if (bVar6 != bVar12 && bVar12 != 3) {
      if (bVar12 == 4) {
        if (bVar6 != 0) goto LAB_0106e014;
      }
      else if ((bVar12 == 5) && (bVar6 != 1)) goto LAB_0106e014;
      goto LAB_0106e0ac;
    }
LAB_0106e014:
    cVar7 = *(char *)(param_1 + 9);
    uVar13 = (uint)bVar11;
    if (cVar7 != '\0') {
      if (cVar7 == '\x01') {
        uVar24 = FUN_01071020(param_1 + 0x50);
        if ((uVar24 & 1) == 0) {
          return 4;
        }
        FUN_02116bc8(param_1);
        uVar29 = 2;
        goto LAB_0106e53c;
      }
      if (cVar7 == '\x02') {
        uVar24 = FUN_0106edf4(param_1,0x23,0x24);
        if ((uVar24 & 1) == 0) {
          return 4;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        return 4;
      }
      if (cVar7 == '\x03') {
        uVar31 = FUN_0106ef64(*plVar33,0x21,uVar24);
        if ((uVar31 & 1) == 0) {
          return 4;
        }
        uVar24 = FUN_0106f590(*plVar33,0x22,uVar24);
        if ((uVar24 & 1) == 0) {
          return 4;
        }
        uVar23 = FUN_020fe4e8(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x290),uVar13);
        FUN_01070a58(param_1 + 0x50,uVar23);
        FUN_00f63a6c(param_1 + 0x50,0);
        FUN_0106edf4(param_1,0x21,0x22);
        uVar29 = 1;
        goto LAB_0106e53c;
      }
      goto LAB_0106e0ac;
    }
    puVar2 = (undefined8 *)0x0;
    if (bVar11 < 5) {
      puVar2 = (undefined8 *)
               (*(long *)(*(long *)(param_1 + 0x28) + 0x30) + (ulong)uVar13 * 0x38 + 0x28);
    }
    if (*(char *)(puVar2 + 6) != '\0') {
      bVar11 = (**(code **)(*(long *)*puVar2 + 0x208))();
      bVar11 = bVar11 & 1;
      if (1 < *(byte *)(puVar2 + 6)) {
        bVar12 = (**(code **)(*(long *)puVar2[1] + 0x208))();
        bVar11 = bVar11 + (bVar12 & 1);
        if (2 < *(byte *)(puVar2 + 6)) {
          bVar12 = (**(code **)(*(long *)puVar2[2] + 0x208))();
          bVar11 = bVar11 + (bVar12 & 1);
          if (3 < *(byte *)(puVar2 + 6)) {
            uVar24 = 3;
            do {
              bVar12 = (**(code **)(*(long *)puVar2[uVar24] + 0x208))();
              bVar11 = bVar11 + (bVar12 & 1);
              uVar24 = uVar24 + 1;
            } while (uVar24 < *(byte *)(puVar2 + 6));
          }
        }
      }
      if (bVar11 != 0) goto LAB_0106e0ac;
    }
    local_290 = (long *)CONCAT44(0x21,uVar13);
    FUN_0106f6d8(&local_298,*(undefined8 *)(param_1 + 0x10),&local_290);
    FUN_0106f730(param_1,&local_298);
    if (local_298 == (long *)0x0) {
LAB_0106e538:
      uVar29 = 3;
LAB_0106e53c:
      *(undefined1 *)(param_1 + 9) = uVar29;
      return 4;
    }
    lVar30 = local_298[6];
    psVar1 = (short *)(lVar30 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar30 + 0x10) = 0;
      (**(code **)(*local_298 + 0x50))();
      goto LAB_0106e538;
    }
    if (sVar3 != 0) goto LAB_0106e538;
LAB_0106edcc:
    pcVar27 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
    ;
    goto LAB_0106edec;
  }
LAB_0106e0ac:
  lVar30 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 0x290) + 8);
  uVar24 = FUN_00f7e2a0(*(undefined4 *)(lVar30 + 0x36c),*(undefined1 *)(lVar30 + 0x370),
                        *(undefined1 *)(param_1 + 0x38));
  if ((uVar24 & 1) == 0) goto LAB_0106e3ac;
  uVar24 = (ulong)*(uint *)(param_1 + 0x38);
  puVar2 = (undefined8 *)0x0;
  if (*(uint *)(param_1 + 0x38) < 5) {
    puVar2 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x30) + uVar24 * 0x38 + 0x28);
  }
  if (*(char *)(puVar2 + 6) == '\0') {
LAB_0106e1c4:
    cVar7 = *(char *)(param_1 + 8);
    if (cVar7 == '\x01') {
      uVar31 = FUN_0106ef64(*plVar33,5,uVar24);
      if ((uVar31 & 1) == 0) {
        return 5;
      }
      uVar24 = FUN_0106f590(*plVar33,6,uVar24);
      if ((uVar24 & 1) == 0) {
        return 5;
      }
      local_288 = 0;
      local_278 = 0;
      local_268 = 0;
      local_258 = 0;
      local_248 = 0;
      local_238 = 0;
      local_228 = 0;
      local_218 = 0;
      local_208 = 0;
      local_1f8 = 0;
      local_1e8 = 0;
      local_1d8 = 0;
      local_1c8 = 0;
      local_1b8 = 0;
      local_1a8 = 0;
      local_198 = 0;
      local_188 = 0;
      local_178 = 0;
      local_168 = 0;
      local_158 = 0;
      local_148 = 0;
      local_138 = 0;
      local_128 = 0;
      local_118 = 0;
      local_108 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_d8 = 0;
      local_c8 = 0;
      local_b8 = 0;
      local_a8 = 0;
      local_98 = 0;
      local_88 = 0;
      local_78 = 0;
      local_68 = 0;
      local_290 = (long *)0x0;
      local_280 = 0;
      local_270 = 0;
      local_260 = 0;
      local_250 = 0;
      local_240 = 0;
      local_230 = 0;
      local_220 = 0;
      local_210 = 0;
      local_200 = 0;
      local_1f0 = 0;
      local_1e0 = 0;
      local_1d0 = 0;
      local_1c0 = 0;
      local_1b0 = 0;
      local_1a0 = 0;
      local_190 = 0;
      local_180 = 0;
      local_170 = 0;
      local_160 = 0;
      local_150 = 0;
      local_140 = 0;
      local_130 = 0;
      local_120 = 0;
      local_110 = 0;
      local_100 = 0;
      local_f0 = 0;
      local_e0 = 0;
      local_d0 = 0;
      local_c0 = 0;
      local_b0 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_80 = 0;
      local_70 = 0;
      local_5c = 0;
      local_60 = 0;
      local_58 = 0x15;
      FUN_010702ec(param_1,&local_290,5,6);
      local_58 = 0x15;
      FUN_0106ffb8(&local_298,*(undefined8 *)(param_1 + 0x10),&local_290);
      FUN_0106f730(param_1,&local_298);
      if (local_298 == (long *)0x0) {
LAB_0106e830:
        *(undefined1 *)(param_1 + 8) = 2;
        return 1;
      }
      lVar30 = local_298[6];
      psVar1 = (short *)(lVar30 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar30 + 0x10) = 0;
        (**(code **)(*local_298 + 0x50))();
        goto LAB_0106e830;
      }
      if (sVar3 != 0) goto LAB_0106e830;
      goto LAB_0106edcc;
    }
    if (cVar7 == '\0') {
      uVar31 = FUN_0106ef64(*plVar33,5,uVar24);
      if ((((((uVar31 & 1) == 0) && (uVar31 = FUN_0106ef64(*plVar33,0xd,uVar24), (uVar31 & 1) == 0))
           && (uVar31 = FUN_0106ef64(*plVar33,0xb,uVar24), (uVar31 & 1) == 0)) &&
          ((uVar31 = FUN_0106ef64(*plVar33,0xf,uVar24), (uVar31 & 1) == 0 &&
           (uVar31 = FUN_0106ef64(*plVar33,9,uVar24), (uVar31 & 1) == 0)))) &&
         ((((uVar31 = FUN_0106ef64(*plVar33,7,uVar24), (uVar31 & 1) == 0 &&
            ((uVar31 = FUN_0106ef64(*plVar33,0x21,uVar24), (uVar31 & 1) == 0 &&
             (uVar31 = FUN_0106ef64(*plVar33,3,uVar24), (uVar31 & 1) == 0)))) &&
           (uVar31 = FUN_0106ef64(*plVar33,0x23,uVar24), (uVar31 & 1) == 0)) &&
          ((((uVar31 = FUN_0106ef64(*plVar33,0x15,uVar24), (uVar31 & 1) == 0 &&
             (uVar31 = FUN_0106ef64(*plVar33,0x17,uVar24), (uVar31 & 1) == 0)) &&
            (uVar31 = FUN_0106ef64(*plVar33,0x19,uVar24), (uVar31 & 1) == 0)) &&
           (((uVar31 = FUN_0106ef64(*plVar33,0x13,uVar24), (uVar31 & 1) == 0 &&
             (uVar31 = FUN_0106ef64(*plVar33,0x47,uVar24), (uVar31 & 1) == 0)) &&
            ((uVar31 = FUN_0106ef64(*plVar33,0x1f,uVar24), (uVar31 & 1) == 0 &&
             (uVar24 = FUN_0106ef64(*plVar33,0x1d,uVar24), (uVar24 & 1) == 0)))))))))) {
        FUN_01070078(param_1);
        *(undefined1 *)(param_1 + 8) = 1;
        return 1;
      }
    }
    else if (cVar7 == '\x02') {
      uVar24 = FUN_0106edf4(param_1,0x15,0x16);
      if ((uVar24 & 1) == 0) {
        return 5;
      }
      *(undefined1 *)(param_1 + 8) = 0;
      return 6;
    }
  }
  else {
    bVar11 = (**(code **)(*(long *)*puVar2 + 0x208))();
    bVar11 = bVar11 & 1;
    if (1 < *(byte *)(puVar2 + 6)) {
      bVar12 = (**(code **)(*(long *)puVar2[1] + 0x208))();
      bVar11 = bVar11 + (bVar12 & 1);
      if (2 < *(byte *)(puVar2 + 6)) {
        bVar12 = (**(code **)(*(long *)puVar2[2] + 0x208))();
        bVar11 = bVar11 + (bVar12 & 1);
        if (3 < *(byte *)(puVar2 + 6)) {
          uVar24 = 3;
          do {
            bVar12 = (**(code **)(*(long *)puVar2[uVar24] + 0x208))();
            bVar11 = bVar11 + (bVar12 & 1);
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(byte *)(puVar2 + 6));
        }
      }
    }
    if (bVar11 == 0) {
      uVar24 = (ulong)*(uint *)(param_1 + 0x38);
      goto LAB_0106e1c4;
    }
    lVar30 = *(long *)(*(long *)(param_1 + 0x28) + 0x290);
    iVar4 = *(int *)(*(long *)(lVar30 + 8) + 0x36c);
    bVar11 = *(byte *)(param_1 + 0x38);
    uVar24 = (ulong)bVar11;
    if (iVar4 == 2) {
      if (bVar11 < 5) {
        bVar11 = (&DAT_03d6a45a)[uVar24];
      }
      else {
        bVar11 = 2;
      }
      bVar12 = *(byte *)(*(long *)(lVar30 + 0x10) + 0x95);
      uVar31 = (ulong)bVar12;
      if (bVar12 < 5) {
        puVar32 = &DAT_03d6a45a;
LAB_0106e1ac:
        bVar12 = puVar32[uVar31];
        if (bVar12 < 2) {
          if (bVar12 == bVar11 || bVar11 == 3) goto LAB_0106e1c4;
          if (bVar11 == 4) {
            if (bVar12 != 0) goto LAB_0106e1c4;
          }
          else if ((bVar11 == 5) && (bVar12 != 1)) goto LAB_0106e1c4;
        }
      }
    }
    else if (iVar4 == 1) {
      if (bVar11 < 5) {
        bVar11 = (&DAT_03d6a455)[uVar24];
      }
      else {
        bVar11 = 2;
      }
      bVar12 = *(byte *)(*(long *)(lVar30 + 0x10) + 0x95);
      uVar31 = (ulong)bVar12;
      if (bVar12 < 5) {
        puVar32 = &DAT_03d6a455;
        goto LAB_0106e1ac;
      }
    }
    else if (iVar4 == 0) {
      if (bVar11 < 5) {
        bVar11 = (&DAT_03d6a450)[uVar24];
      }
      else {
        bVar11 = 2;
      }
      bVar12 = *(byte *)(*(long *)(lVar30 + 0x10) + 0x95);
      uVar31 = (ulong)bVar12;
      if (bVar12 < 5) {
        puVar32 = &DAT_03d6a450;
        goto LAB_0106e1ac;
      }
    }
  }
LAB_0106e3ac:
  uVar24 = FUN_0106ef64(*plVar33,0xd,bVar5);
  if (((uVar24 & 1) != 0) && (uVar24 = FUN_0106f590(*plVar33,0xe,bVar5), (uVar24 & 1) != 0)) {
    FUN_00f634c8(&local_298,*plVar33,bVar5);
    if (local_298 != (long *)0x0) {
      FUN_0106f0a8(&local_2a0,local_298,0xe);
      if (local_2a0 == (long *)0x0) {
        uVar23 = 0;
        bVar8 = true;
LAB_0106ec98:
        if (local_298 != (long *)0x0) {
          lVar30 = local_298[6];
          psVar1 = (short *)(lVar30 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar3 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar30 + 0x10) = 0;
            (**(code **)(*local_298 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_0106edcc;
        }
        if (!bVar8) {
          return uVar23;
        }
        goto LAB_0106ecc8;
      }
      pcVar27 = (char *)FUN_01843160();
      if (*pcVar27 == '\0') {
        local_290 = (long *)CONCAT44(7,(uint)bVar5);
        FUN_0106f6d8(&local_2a8,*(undefined8 *)(param_1 + 0x10),&local_290);
        FUN_0106f730(param_1,&local_2a8);
        if (local_2a8 != (long *)0x0) {
          lVar30 = local_2a8[6];
          psVar1 = (short *)(lVar30 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar3 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_0106ec04;
        }
      }
      else {
        local_288 = 0;
        local_278 = 0;
        local_268 = 0;
        local_258 = 0;
        local_248 = 0;
        local_238 = 0;
        local_228 = 0;
        local_218 = 0;
        local_208 = 0;
        local_1f8 = 0;
        local_1e8 = 0;
        local_1d8 = 0;
        local_1c8 = 0;
        local_1b8 = 0;
        local_1a8 = 0;
        local_198 = 0;
        local_188 = 0;
        local_178 = 0;
        local_168 = 0;
        local_158 = 0;
        local_148 = 0;
        local_138 = 0;
        local_128 = 0;
        local_118 = 0;
        local_108 = 0;
        local_f8 = 0;
        local_e8 = 0;
        local_d8 = 0;
        local_c8 = 0;
        local_b8 = 0;
        local_a8 = 0;
        local_98 = 0;
        local_88 = 0;
        local_78 = 0;
        local_68 = 0;
        local_290 = (long *)0x0;
        local_280 = 0;
        local_270 = 0;
        local_260 = 0;
        local_250 = 0;
        local_240 = 0;
        local_230 = 0;
        local_220 = 0;
        local_210 = 0;
        local_200 = 0;
        local_1f0 = 0;
        local_1e0 = 0;
        local_1d0 = 0;
        local_1c0 = 0;
        local_1b0 = 0;
        local_1a0 = 0;
        local_190 = 0;
        local_180 = 0;
        local_170 = 0;
        local_160 = 0;
        local_150 = 0;
        local_140 = 0;
        local_130 = 0;
        local_120 = 0;
        local_110 = 0;
        local_100 = 0;
        local_f0 = 0;
        local_e0 = 0;
        local_d0 = 0;
        local_c0 = 0;
        local_b0 = 0;
        local_a0 = 0;
        local_90 = 0;
        local_80 = 0;
        local_70 = 0;
        local_5c = 0;
        local_60 = 0;
        local_58 = 0x1b;
        FUN_0106ffb8(&local_2b0,*(undefined8 *)(param_1 + 0x10),&local_290);
        FUN_0106f730(param_1,&local_2b0);
        if (local_2b0 != (long *)0x0) {
          lVar30 = local_2b0[6];
          psVar1 = (short *)(lVar30 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar3 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            local_2a8 = local_2b0;
          } while (cVar7 != '\0');
LAB_0106ec04:
          if (sVar3 == 1) {
            *(undefined8 *)(lVar30 + 0x10) = 0;
            (**(code **)(*local_2a8 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_0106edcc;
        }
      }
      FUN_0106f324(&local_290,*plVar33,bVar5);
      plVar10 = local_290;
      if (local_290 == (long *)0x0) {
LAB_0106ec58:
        FUN_0106fd7c(local_298,0xe);
        if (local_2a0 != (long *)0x0) {
          lVar30 = local_2a0[6];
          psVar1 = (short *)(lVar30 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar3 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar30 + 0x10) = 0;
            (**(code **)(*local_2a0 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_0106edcc;
        }
        bVar8 = false;
        uVar23 = 1;
        goto LAB_0106ec98;
      }
      FUN_0106fd7c(local_290,0xd);
      lVar30 = plVar10[6];
      psVar1 = (short *)(lVar30 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar30 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
        goto LAB_0106ec58;
      }
      if (sVar3 != 0) goto LAB_0106ec58;
LAB_0106ed10:
      pcVar27 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
      ;
LAB_0106edec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",pcVar27,0x60,
                 "Reference counter underflows.");
    }
LAB_0106ecc8:
    FUN_0106f324(&local_290,*plVar33,bVar5);
    plVar10 = local_290;
    if (local_290 != (long *)0x0) {
      FUN_0106fd7c(local_290,0xd);
      lVar30 = plVar10[6];
      psVar1 = (short *)(lVar30 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar30 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar3 == 0) goto LAB_0106ed10;
    }
  }
  uVar24 = FUN_0106ef64(*plVar33,7,bVar5);
  if (((uVar24 & 1) == 0) || (uVar24 = FUN_0106f590(*plVar33,8,bVar5), (uVar24 & 1) == 0)) {
    uVar24 = FUN_0106ef64(*plVar33,0xb,bVar5);
    if (((uVar24 & 1) == 0) || (uVar24 = FUN_0106f590(*plVar33,0xc,bVar5), (uVar24 & 1) == 0)) {
      uVar24 = FUN_0106ef64(*plVar33,0xf,bVar5);
      if (((uVar24 & 1) == 0) || (uVar24 = FUN_0106f590(*plVar33,0x10,bVar5), (uVar24 & 1) == 0)) {
        uVar24 = FUN_0106f590(*plVar33,10,bVar5);
        if ((uVar24 & 1) == 0) {
          uVar13 = FUN_0106edf4(param_1,0x15,0x16);
          uVar14 = FUN_0106edf4(param_1,0x23,0x24);
          uVar15 = FUN_0106edf4(param_1,0x11,0x12);
          uVar16 = FUN_0106edf4(param_1,0x13,0x14);
          uVar17 = FUN_0106edf4(param_1,0x17,0x18);
          uVar18 = FUN_0106edf4(param_1,0x19,0x1a);
          uVar19 = FUN_0106edf4(param_1,0x1b,0x1c);
          uVar20 = FUN_0106edf4(param_1,0x1d,0x1e);
          uVar21 = FUN_0106edf4(param_1,0x25,0x26);
          uVar22 = FUN_0106edf4(param_1,0x1f,0x20);
          uVar23 = 6;
          if (((uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
               uVar22) & 1) == 0) {
            uVar23 = 0;
          }
          return uVar23;
        }
        uVar25 = 0x17;
        uVar26 = 9;
        uVar28 = 10;
      }
      else {
        uVar25 = 0x15;
        uVar26 = 0xf;
        uVar28 = 0x10;
      }
    }
    else {
      uVar25 = 0x19;
      uVar26 = 0xb;
      uVar28 = 0xc;
    }
  }
  else {
    uVar25 = 0x17;
    uVar26 = 7;
    uVar28 = 8;
  }
LAB_0106e8e8:
  FUN_01071d10(param_1,uVar25,uVar26,uVar28);
  return 1;
}


