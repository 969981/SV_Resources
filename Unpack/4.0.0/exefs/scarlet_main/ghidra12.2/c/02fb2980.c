/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb2980; name: FUN_02fb2980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fb2980(undefined2 *param_1,int param_2,float *param_3,undefined8 *param_4,long param_5,
                 long param_6,undefined8 param_7,long param_8,long param_9,int param_10,int param_11
                 ,int param_12,int param_13,byte param_14)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  char cVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  char cVar18;
  bool bVar19;
  bool bVar20;
  int *piVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  byte bVar24;
  int iVar25;
  long lVar26;
  undefined8 *puVar27;
  double *pdVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  int iVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  float fVar44;
  float fVar50;
  double dVar45;
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  float fVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar63;
  double dVar61;
  double dVar62;
  float fVar64;
  double dVar65;
  int local_70;
  int local_6c;
  char local_64 [4];
  
  if (param_9 == 0) {
    return;
  }
  lVar33 = *(long *)(param_9 + 0x28);
  if (lVar33 == 0) {
    return;
  }
  if (*(char *)(lVar33 + 0x121) != '\0') {
    return;
  }
  local_64[0] = '\0';
  cVar8 = *(char *)(lVar33 + 0x176);
  piVar21 = (int *)FUN_02fb3e9c(lVar33,local_64);
  cVar18 = local_64[0];
  bVar19 = false;
  if (local_64[0] == '\0') {
    if ((piVar21[1] == *(int *)(param_8 + 0x18)) && (*piVar21 == *(int *)(param_8 + 8))) {
      bVar19 = piVar21[2] != *(int *)(param_8 + 0x30);
    }
    else {
      bVar19 = true;
    }
  }
  fVar38 = param_3[10];
  fVar39 = *param_3;
  fVar63 = param_3[5];
  fVar58 = param_3[6] - param_3[9];
  fVar60 = param_3[8] - param_3[2];
  fVar51 = param_3[2] + param_3[8];
  fVar59 = param_3[6] + param_3[9];
  uVar42 = NEON_fmov(0x3f800000,4);
  fVar40 = (float)uVar42;
  if (fVar38 < 0.0) {
    fVar41 = param_3[1] + param_3[4];
    fVar64 = fVar41;
    fVar50 = (fVar40 - fVar38) - (fVar39 - fVar63);
    if (fVar63 < fVar39) {
      fVar64 = (fVar39 - fVar63) + (fVar40 - fVar38);
      fVar50 = fVar41;
      fVar59 = fVar51;
      fVar60 = fVar58;
    }
  }
  else {
    fVar64 = param_3[1] - param_3[4];
    fVar41 = fVar64;
    fVar44 = fVar39 + fVar63 + fVar38 + fVar40;
    if (fVar39 < -fVar63) {
      fVar58 = fVar51;
      fVar60 = fVar59;
      fVar41 = (fVar38 + fVar40) - (fVar39 + fVar63);
      fVar44 = fVar64;
    }
    fVar64 = fVar58;
    fVar50 = fVar60;
    fVar59 = fVar41;
    fVar60 = fVar44;
  }
  fVar58 = fVar64 * fVar64 + fVar50 * fVar50;
  fVar39 = fVar59 * fVar59 + fVar60 * fVar60;
  fVar38 = fVar58 + fVar39;
  if (fVar38 == 0.0) {
    fVar64 = 0.0;
    fVar50 = 0.0;
    fVar59 = 0.0;
    fVar60 = 0.0;
  }
  else {
    fVar38 = SQRT(fVar38);
    fVar58 = SQRT(fVar58 + fVar39);
    fVar64 = fVar64 / fVar38;
    fVar50 = fVar50 / fVar58;
    fVar59 = fVar59 / fVar38;
    fVar60 = fVar60 / fVar58;
  }
  piVar21[0x12] = (int)fVar59;
  piVar21[0x13] = (int)fVar60;
  piVar21[0x10] = (int)fVar64;
  piVar21[0x11] = (int)fVar50;
  fVar50 = (float)param_4[5];
  fVar51 = (float)param_4[4];
  fVar64 = (float)((ulong)param_4[4] >> 0x20);
  fVar63 = (float)((ulong)param_4[2] >> 0x20);
  fVar58 = (float)param_4[2];
  fVar59 = (float)param_4[3];
  fVar60 = (float)*param_4;
  fVar38 = (float)((ulong)*param_4 >> 0x20);
  fVar39 = (float)param_4[1];
  if (fVar50 < 0.0) {
    fVar38 = fVar38 + fVar58;
    if (fVar60 <= fVar63) {
      fVar41 = (fVar40 - fVar50) - (fVar60 - fVar63);
      fVar44 = fVar59 + fVar64;
      fVar52 = fVar51 - fVar39;
      fVar58 = fVar38;
    }
    else {
      fVar44 = fVar39 + fVar51;
      fVar52 = fVar59 - fVar64;
      fVar58 = (fVar60 - fVar63) + (fVar40 - fVar50);
      fVar41 = fVar38;
    }
  }
  else {
    fVar38 = fVar38 - fVar58;
    if (-fVar63 <= fVar60) {
      fVar52 = fVar60 + fVar63 + fVar50 + fVar40;
      fVar58 = fVar59 - fVar64;
      fVar41 = fVar51 - fVar39;
      fVar44 = fVar38;
    }
    else {
      fVar58 = fVar39 + fVar51;
      fVar41 = fVar59 + fVar64;
      fVar44 = (fVar50 + fVar40) - (fVar60 + fVar63);
      fVar52 = fVar38;
    }
  }
  puVar2 = (undefined2 *)((long)param_1 + (long)param_2);
  fVar60 = fVar58 * fVar58 + fVar41 * fVar41;
  fVar39 = fVar44 * fVar44 + fVar52 * fVar52;
  fVar38 = fVar60 + fVar39;
  if (fVar38 == 0.0) {
    auVar55 = ZEXT816(0);
  }
  else {
    fVar38 = SQRT(fVar38);
    fVar60 = SQRT(fVar60 + fVar39);
    auVar55._0_4_ = fVar58 / fVar38;
    auVar55._4_4_ = fVar41 / fVar60;
    auVar55._8_4_ = fVar44 / fVar38;
    auVar55._12_4_ = fVar52 / fVar60;
  }
  iVar17 = piVar21[6];
  local_70 = 0;
  *(long *)(piVar21 + 0x16) = auVar55._8_8_;
  *(long *)(piVar21 + 0x14) = auVar55._0_8_;
  *piVar21 = (int)*(undefined8 *)(param_8 + 8);
  piVar21[1] = (int)*(undefined8 *)(param_8 + 0x18);
  iVar34 = *(int *)(param_8 + 0x30);
  *(byte *)(piVar21 + 0x18) = param_14 & 1;
  cVar11 = *(char *)((long)piVar21 + 0x19);
  *(undefined2 *)(piVar21 + 6) = 0;
  piVar21[2] = iVar34;
  *(short *)((long)piVar21 + 0x1a) = (short)*(undefined4 *)(lVar33 + 0x188);
  if (param_1 < puVar2) {
    iVar34 = 0;
    local_70 = 0;
    local_6c = 0;
    lVar26 = lVar33 + 0x68;
    do {
      uVar10 = *param_1;
      switch(uVar10) {
      case 1:
        piVar4 = (int *)(param_1 + 0xc);
        param_1 = param_1 + 0x10;
        iVar34 = *piVar4 + iVar34;
        break;
      case 2:
        FUN_02fb3ccc(piVar21,lVar33,uVar10,1,0,0,0,0,iVar34,0);
        param_1 = param_1 + 0x48;
        break;
      case 3:
        FUN_02fb3ccc(piVar21,lVar33,uVar10,1,0,0,0,0,iVar34,0);
        goto LAB_02fb2fa8;
      case 4:
        FUN_02fb3ccc(piVar21,lVar33,uVar10,1,0,0,0,0,iVar34,0);
        param_1 = param_1 + 0x38;
        break;
      case 5:
        uVar42 = 0;
        uVar23 = 0;
        goto LAB_02fb3360;
      case 6:
        FUN_02fb3ccc(piVar21,lVar33,uVar10,1,*(float *)(param_1 + 8) == *(float *)(param_1 + 10),0,0
                     ,0,iVar34,1);
        iVar34 = iVar34 + 1;
LAB_02fb2fa8:
        param_1 = param_1 + 0x18;
        break;
      case 7:
        FUN_02fb3ccc(piVar21,lVar33,uVar10,1,1,*(undefined1 *)(param_1 + 1),0,0,iVar34,0);
        iVar34 = iVar34 + 1;
      case 0x17:
switchD_02fb2cec_caseD_17:
        param_1 = param_1 + 8;
        break;
      case 9:
        if (*(float *)(param_1 + 2) == *(float *)(param_1 + 4)) {
          uVar9 = *(undefined1 *)(param_1 + 1);
          bVar20 = true;
          uVar22 = 0;
LAB_02fb3124:
          FUN_02fb3ccc(piVar21,lVar33,uVar10,bVar20,1,uVar9,uVar22,0,iVar34,1);
        }
        goto LAB_02fb3130;
      case 10:
        uVar29 = (uint)*(byte *)(param_1 + 1);
        if (*(byte *)(param_1 + 1) != 0) {
          if (*(float *)(param_1 + 2) == 0.0) {
LAB_02fb3390:
            uVar29 = 0;
          }
          else {
            uVar29 = 2;
          }
        }
        goto LAB_02fb3394;
      case 0xb:
      case 0x12:
        if (((*(long *)(param_1 + 4) != 0) && (*(long *)(param_1 + 4) != -8 - (long)param_1)) &&
           (*(char *)(param_1 + 1) != '\0' && cVar8 != '\0')) {
          bVar24 = *(byte *)((long)param_1 + 3);
          FUN_02fb3ccc(ZEXT816(0x3f800000),ZEXT816(0x3f800000),ZEXT816(0),ZEXT816(0),piVar21,lVar33,
                       uVar10,1,1,bVar24,(bVar24 + 1) % 3,(bVar24 + 2) % 3,iVar34,0);
          lVar30 = param_5 + (long)local_6c * 0x18;
          uVar42 = *(undefined8 *)(param_5 + (long)local_6c * 8 + 0x98);
          lVar36 = *(long *)(lVar33 + 0x48);
          lVar37 = (ulong)*(byte *)(piVar21 + 6) + (long)*(short *)((long)piVar21 + 0x16) + -1;
          lVar31 = lVar36 + lVar37 * 0xc;
          *(ushort *)(lVar31 + 4) = *(ushort *)(lVar31 + 4) | 0x8000;
          iVar6 = *(int *)(lVar33 + 0x70);
          iVar25 = iVar6;
          if ((int)(*(uint *)(lVar33 + 0x74) & 0x7fffffff) <= iVar6) {
            FUN_02fb88c4(lVar26,PTR_PTR_047d1a50,(long)iVar6 + 1);
            iVar25 = *(int *)(lVar33 + 0x70);
          }
          *(int *)(lVar33 + 0x70) = (int)((long)iVar6 + 1);
          puVar27 = (undefined8 *)(*(long *)(lVar33 + 0x68) + (long)iVar25 * 0x28);
          uVar23 = *(undefined8 *)(lVar30 + 4);
          uVar7 = *(undefined8 *)(lVar30 + 0xc);
          puVar27[2] = *(undefined8 *)(lVar30 + 0x14);
          *puVar27 = uVar23;
          puVar27[1] = uVar7;
          puVar27[3] = param_1;
          puVar27[4] = uVar42;
          *(char *)(lVar36 + lVar37 * 0xc + 9) = (char)iVar6;
          *(undefined1 *)((long)piVar21 + 0x61) = 1;
          local_6c = local_6c + 1;
          local_70 = local_70 + 1;
        }
        iVar34 = iVar34 + 2;
        goto LAB_02fb3134;
      case 0xc:
        bVar24 = *(byte *)(param_1 + 1);
        FUN_02fb3ccc(piVar21,lVar33,uVar10,1,2,(bVar24 + 1) % 3,(bVar24 + 2) % 3,bVar24,iVar34,0);
        iVar34 = iVar34 + 2;
        goto switchD_02fb2cec_caseD_17;
      case 0xd:
        bVar24 = *(byte *)((long)param_1 + 5);
        FUN_02fb3ccc(piVar21,lVar33,uVar10,1,bVar24,*(undefined1 *)(param_1 + 1),
                     *(undefined1 *)((long)param_1 + 3),*(undefined1 *)(param_1 + 2),iVar34,0);
        iVar34 = iVar34 + (uint)bVar24;
        goto switchD_02fb2cec_caseD_17;
      case 0xe:
        if (*(float *)(param_1 + 4) == *(float *)(param_1 + 6)) {
          bVar20 = *(char *)(param_1 + 1) != '\0';
          uVar9 = *(undefined1 *)((long)param_1 + 3);
          uVar22 = *(undefined1 *)(param_1 + 2);
          goto LAB_02fb3124;
        }
LAB_02fb3130:
        iVar34 = iVar34 + 1;
LAB_02fb3134:
        param_1 = param_1 + 0x10;
        break;
      case 0xf:
        bVar24 = *(byte *)(param_1 + 1);
        param_1 = param_1 + 0x10;
        goto LAB_02fb3150;
      case 0x10:
        bVar24 = *(byte *)(param_1 + 1);
        param_1 = param_1 + 0x18;
LAB_02fb3150:
        iVar34 = iVar34 + (uint)bVar24;
        break;
      case 0x11:
        uVar29 = (uint)*(byte *)(param_1 + 1);
        if (*(byte *)(param_1 + 1) != 0) {
          if (*(float *)(param_1 + 4) == 0.0) goto LAB_02fb3390;
          uVar29 = (uint)*(byte *)(param_1 + 2) << 1;
        }
LAB_02fb3394:
        param_1 = param_1 + 8;
        iVar34 = uVar29 + iVar34;
        break;
      case 0x13:
        plVar35 = (long *)(param_1 + 0x20);
        lVar30 = *(long *)(param_1 + 0x24);
        lVar31 = *(long *)(param_1 + 0x28);
        if ((cVar8 != '\0') &&
           (cVar3 = (lVar30 != 0 && lVar30 != -8 - (long)plVar35) +
                    (*plVar35 != 0 && *plVar35 != -(long)plVar35) +
                    (lVar31 != 0 && lVar31 != -0x10 - (long)plVar35), cVar3 != '\0')) {
          if (*(char *)((long)param_1 + 3) == '\x01') {
            FUN_02fb3ccc(ZEXT816(0x3f800000),ZEXT816(0x3f800000),ZEXT816(0),ZEXT816(0),piVar21,
                         lVar33,uVar10,1,3,0,1,2,iVar34,0);
            lVar30 = param_5 + (long)local_6c * 0x18;
            uVar42 = *(undefined8 *)(param_5 + (long)local_6c * 8 + 0x98);
            lVar37 = *(long *)(lVar33 + 0x48);
            lVar36 = (ulong)*(byte *)(piVar21 + 6) + (long)*(short *)((long)piVar21 + 0x16) + -1;
            lVar31 = lVar37 + lVar36 * 0xc;
            *(ushort *)(lVar31 + 4) = *(ushort *)(lVar31 + 4) | 0x8000;
            iVar6 = *(int *)(lVar33 + 0x70);
            iVar25 = iVar6;
            if ((int)(*(uint *)(lVar33 + 0x74) & 0x7fffffff) <= iVar6) {
              FUN_02fb88c4(lVar26,PTR_PTR_047d1a50,(long)iVar6 + 1);
              iVar25 = *(int *)(lVar33 + 0x70);
            }
            *(int *)(lVar33 + 0x70) = (int)((long)iVar6 + 1);
            puVar27 = (undefined8 *)(*(long *)(lVar33 + 0x68) + (long)iVar25 * 0x28);
            uVar23 = *(undefined8 *)(lVar30 + 4);
            uVar7 = *(undefined8 *)(lVar30 + 0xc);
            puVar27[2] = *(undefined8 *)(lVar30 + 0x14);
            *puVar27 = uVar23;
            puVar27[1] = uVar7;
            puVar27[3] = param_1;
            puVar27[4] = uVar42;
            local_70 = local_70 + 3;
            *(char *)(lVar37 + lVar36 * 0xc + 9) = (char)iVar6;
            *(undefined1 *)((long)piVar21 + 0x61) = 1;
            lVar30 = *(long *)(lVar33 + 0x48) + (long)*(int *)(lVar33 + 0x50) * 0xc;
            *(char *)(lVar30 + -3) = *(char *)(lVar30 + -3) + '\x02';
          }
          else {
            FUN_02fb3ccc(ZEXT816(0x3f800000),ZEXT816(0x3f800000),ZEXT816(0),ZEXT816(0),piVar21,
                         lVar33,uVar10,1,cVar3,0,1,2,iVar34,0);
            if ((*plVar35 != 0) && (*plVar35 != -(long)plVar35)) {
              lVar30 = param_5 + (long)local_6c * 0x18;
              uVar42 = *(undefined8 *)(param_5 + (long)local_6c * 8 + 0x98);
              lVar37 = *(long *)(lVar33 + 0x48);
              lVar36 = (ulong)*(byte *)(piVar21 + 6) + (long)*(short *)((long)piVar21 + 0x16) + -1;
              lVar31 = lVar37 + lVar36 * 0xc;
              *(ushort *)(lVar31 + 4) = *(ushort *)(lVar31 + 4) | 0x8000;
              iVar6 = *(int *)(lVar33 + 0x70);
              iVar25 = iVar6;
              if ((int)(*(uint *)(lVar33 + 0x74) & 0x7fffffff) <= iVar6) {
                FUN_02fb88c4(lVar26,PTR_PTR_047d1a50,(long)iVar6 + 1);
                iVar25 = *(int *)(lVar33 + 0x70);
              }
              *(int *)(lVar33 + 0x70) = (int)((long)iVar6 + 1);
              puVar27 = (undefined8 *)(*(long *)(lVar33 + 0x68) + (long)iVar25 * 0x28);
              uVar23 = *(undefined8 *)(lVar30 + 4);
              uVar7 = *(undefined8 *)(lVar30 + 0xc);
              puVar27[2] = *(undefined8 *)(lVar30 + 0x14);
              *puVar27 = uVar23;
              puVar27[1] = uVar7;
              puVar27[3] = param_1;
              puVar27[4] = uVar42;
              local_6c = local_6c + 1;
              local_70 = local_70 + 1;
              *(char *)(lVar37 + lVar36 * 0xc + 9) = (char)iVar6;
              *(undefined1 *)((long)piVar21 + 0x61) = 1;
            }
            lVar30 = *(long *)(param_1 + 0x24);
            if ((lVar30 != 0) && (lVar30 != -8 - (long)plVar35)) {
              lVar30 = param_5 + (long)local_6c * 0x18;
              uVar42 = *(undefined8 *)(param_5 + (long)local_6c * 8 + 0x98);
              lVar37 = *(long *)(lVar33 + 0x48);
              lVar36 = (ulong)*(byte *)(piVar21 + 6) + (long)*(short *)((long)piVar21 + 0x16) + -1;
              lVar31 = lVar37 + lVar36 * 0xc;
              *(ushort *)(lVar31 + 4) = *(ushort *)(lVar31 + 4) | 0x8000;
              iVar6 = *(int *)(lVar33 + 0x70);
              iVar25 = iVar6;
              if ((int)(*(uint *)(lVar33 + 0x74) & 0x7fffffff) <= iVar6) {
                FUN_02fb88c4(lVar26,PTR_PTR_047d1a50,(long)iVar6 + 1);
                iVar25 = *(int *)(lVar33 + 0x70);
              }
              *(int *)(lVar33 + 0x70) = (int)((long)iVar6 + 1);
              puVar27 = (undefined8 *)(*(long *)(lVar33 + 0x68) + (long)iVar25 * 0x28);
              uVar23 = *(undefined8 *)(lVar30 + 4);
              uVar7 = *(undefined8 *)(lVar30 + 0xc);
              uVar32 = *(undefined8 *)(lVar30 + 0x14);
              puVar27[3] = param_1;
              puVar27[4] = uVar42;
              local_6c = local_6c + 1;
              *puVar27 = uVar23;
              puVar27[1] = uVar7;
              local_70 = local_70 + 1;
              puVar27[2] = uVar32;
              *(char *)(lVar37 + lVar36 * 0xc + 9) = (char)iVar6;
              *(undefined1 *)((long)piVar21 + 0x61) = 1;
            }
            lVar30 = *(long *)(param_1 + 0x28);
            if ((lVar30 == 0) || (lVar30 == -0x10 - (long)plVar35)) goto LAB_02fb36ac;
            lVar30 = param_5 + (long)local_6c * 0x18;
            uVar42 = *(undefined8 *)(param_5 + (long)local_6c * 8 + 0x98);
            lVar37 = *(long *)(lVar33 + 0x48);
            lVar36 = (ulong)*(byte *)(piVar21 + 6) + (long)*(short *)((long)piVar21 + 0x16) + -1;
            lVar31 = lVar37 + lVar36 * 0xc;
            *(ushort *)(lVar31 + 4) = *(ushort *)(lVar31 + 4) | 0x8000;
            iVar6 = *(int *)(lVar33 + 0x70);
            iVar25 = iVar6;
            if ((int)(*(uint *)(lVar33 + 0x74) & 0x7fffffff) <= iVar6) {
              FUN_02fb88c4(lVar26,PTR_PTR_047d1a50,(long)iVar6 + 1);
              iVar25 = *(int *)(lVar33 + 0x70);
            }
            *(int *)(lVar33 + 0x70) = (int)((long)iVar6 + 1);
            puVar27 = (undefined8 *)(*(long *)(lVar33 + 0x68) + (long)iVar25 * 0x28);
            uVar23 = *(undefined8 *)(lVar30 + 4);
            uVar7 = *(undefined8 *)(lVar30 + 0xc);
            uVar32 = *(undefined8 *)(lVar30 + 0x14);
            puVar27[3] = param_1;
            puVar27[4] = uVar42;
            *puVar27 = uVar23;
            puVar27[1] = uVar7;
            local_70 = local_70 + 1;
            puVar27[2] = uVar32;
            *(char *)(lVar37 + lVar36 * 0xc + 9) = (char)iVar6;
            *(undefined1 *)((long)piVar21 + 0x61) = 1;
          }
          local_6c = local_6c + 1;
        }
LAB_02fb36ac:
        iVar34 = iVar34 + 6;
        param_1 = param_1 + 0x30;
        break;
      case 0x14:
        param_1 = param_1 + 0x20;
        goto LAB_02fb332c;
      case 0x15:
      case 0x16:
        param_1 = param_1 + 0x10;
LAB_02fb332c:
        iVar34 = iVar34 + 1;
        break;
      case 0x18:
        uVar42 = 1;
        uVar23 = 2;
LAB_02fb3360:
        FUN_02fb3ccc(piVar21,lVar33,uVar10,1,3,0,uVar42,uVar23,iVar34,0);
        iVar34 = iVar34 + 3;
        goto switchD_02fb2cec_caseD_17;
      case 0x19:
      case 0x1a:
        param_1 = param_1 + 0x30;
        iVar34 = iVar34 + 3;
        break;
      case 0x1d:
        pbVar1 = (byte *)(param_1 + 1);
        param_1 = param_1 + 0x18;
        iVar34 = iVar34 + (uint)*pbVar1 * 2;
      }
    } while (param_1 < puVar2);
  }
  *(uint *)(lVar33 + 0x188) = *(int *)(lVar33 + 0x188) + (*(byte *)(param_8 + 0x55) & 0x1f);
  if (*(char *)((long)piVar21 + 0x19) == '\0') {
    lVar26 = (long)*(int *)(lVar33 + 0x184) + -1;
    *(int *)(lVar33 + 0x184) = (int)lVar26;
    lVar26 = *(long *)(lVar33 + 0x38) + lVar26 * 0x70;
    lVar26 = (ulong)*(byte *)(lVar26 + 0x18) + (long)*(short *)(lVar26 + 0x16);
    iVar34 = (int)lVar26;
    if ((int)(*(uint *)(lVar33 + 0x54) & 0x7fffffff) < iVar34) {
      FUN_02fb3b44(lVar33 + 0x48,PTR_PTR_047d1a50,lVar26);
    }
    if (*(int *)(lVar33 + 0x50) != iVar34) {
      *(int *)(lVar33 + 0x50) = iVar34;
    }
    *(int *)(lVar33 + 0x1b0) = *(int *)(lVar33 + 0x1b0) + 1;
    return;
  }
  if (!(bool)(piVar21[2] != 0x7fffffff & (bVar19 ^ 1U))) {
    *(undefined1 *)(lVar33 + 0x121) = 1;
    return;
  }
  *(int *)(lVar33 + 0x18c) = *(int *)(lVar33 + 0x18c) + local_70;
  if (*(char *)(lVar33 + 0x122) == '\0') {
    bVar24 = *(byte *)(param_8 + 0x42) & 1;
  }
  else {
    bVar24 = 1;
  }
  *(byte *)(lVar33 + 0x122) = bVar24;
  if (cVar18 == '\0') {
    piVar4 = (int *)(*(long *)(lVar33 + 8) + (long)(short)piVar21[3] * 0x10);
    piVar5 = (int *)(*(long *)(lVar33 + 8) + (long)*(short *)((long)piVar21 + 0xe) * 0x10);
    *piVar4 = param_10;
    piVar4[1] = param_12;
    *piVar5 = param_11;
    piVar5[1] = param_13;
    piVar4[2] = *piVar21;
    piVar5[2] = piVar21[1];
    if ((*(char *)(lVar33 + 0x120) == '\0') &&
       ((bool)*(char *)((long)piVar4 + 0xf) == (param_10 == 0))) {
      bVar19 = (bool)*(char *)((long)piVar5 + 0xf) != (param_11 == 0);
    }
    else {
      bVar19 = true;
    }
    *(bool *)(lVar33 + 0x120) = bVar19;
    *(bool *)((long)piVar4 + 0xf) = param_10 == 0;
    *(bool *)((long)piVar5 + 0xf) = param_11 == 0;
  }
  else {
    FUN_02fb421c(lVar33,param_10,param_11,param_12,param_13);
  }
  if ((*(char *)(lVar33 + 0x120) == '\0') && ((int)(char)iVar17 == (uint)*(byte *)(piVar21 + 6))) {
    bVar19 = (int)cVar11 != (uint)*(byte *)((long)piVar21 + 0x19);
  }
  else {
    bVar19 = true;
  }
  *(bool *)(lVar33 + 0x120) = bVar19;
  if (*(char *)(lVar33 + 0x1a8) == '\0') {
    if (*(int *)(lVar33 + 0x114) == param_10) {
      puVar27 = *(undefined8 **)(param_6 + 0x88);
      *(undefined1 *)(lVar33 + 0x1a8) = 1;
      *(undefined8 *)(lVar33 + 400) = *puVar27;
      *(undefined8 *)(lVar33 + 0x198) = puVar27[1];
      *(undefined8 *)(lVar33 + 0x1a0) = puVar27[2];
    }
    else {
      if (*(int *)(lVar33 + 0x114) != param_11) goto LAB_02fb38fc;
      fVar58 = *(float *)(param_6 + 100);
      fVar60 = *(float *)(param_6 + 0x68);
      pdVar28 = *(double **)(param_6 + 0x88);
      dVar45 = pdVar28[1];
      dVar53 = pdVar28[2];
      *(double *)(lVar33 + 400) = *pdVar28 + (double)*(float *)(param_6 + 0x60);
      *(undefined1 *)(lVar33 + 0x1a8) = 1;
      *(double *)(lVar33 + 0x198) = dVar45 + (double)fVar58;
      *(double *)(lVar33 + 0x1a0) = dVar53 + (double)fVar60;
    }
    *(undefined8 *)(lVar33 + 0x158) = 0;
    *(undefined8 *)(lVar33 + 0x160) = 0;
    *(undefined8 *)(lVar33 + 0x168) = 0;
  }
LAB_02fb38fc:
  pdVar28 = *(double **)(param_6 + 0x88);
  uVar42 = param_4[7];
  dVar65 = pdVar28[3];
  dVar53 = pdVar28[1] - *(double *)(lVar33 + 0x198);
  dVar61 = pdVar28[2] - *(double *)(lVar33 + 0x1a0);
  dVar45 = *pdVar28 - *(double *)(lVar33 + 400);
  fVar38 = (float)(dVar45 + (double)param_3[0xc]);
  fVar39 = (float)(dVar61 + (double)param_3[0xe]);
  fVar60 = (float)(dVar53 + (double)param_3[0xd]);
  fVar58 = (float)(dVar65 + (double)param_3[0xf]);
  auVar46._0_8_ =
       CONCAT44((float)(dVar53 + (double)(float)((ulong)param_4[6] >> 0x20)),
                (float)(dVar45 + (double)(float)param_4[6]));
  *(ulong *)(piVar21 + 0xb) = CONCAT44(fVar60,fVar38);
  auVar54._8_8_ = _UNK_03cabeb8;
  auVar54._0_8_ = _DAT_03cabeb0;
  auVar46._8_4_ = (float)(dVar61 + (double)(float)uVar42);
  auVar14._4_4_ = fVar60;
  auVar14._0_4_ = fVar38;
  auVar14._8_4_ = fVar39;
  auVar14._12_4_ = fVar58;
  auVar55 = a64_TBL(ZEXT816(0),auVar14,auVar54);
  auVar47._12_4_ = auVar55._12_4_;
  auVar47._0_12_ = auVar46;
  *(long *)(piVar21 + 9) = auVar47._8_8_;
  *(undefined8 *)(piVar21 + 7) = auVar46._0_8_;
  uVar13 = *(undefined4 *)(lVar33 + 0x16c);
  auVar48._12_4_ = uVar13;
  auVar48._8_4_ = uVar13;
  auVar48._0_8_ = *(undefined8 *)(lVar33 + 0x164);
  auVar56._12_4_ = *(undefined4 *)(lVar33 + 0x160);
  auVar56._0_12_ = *(undefined1 (*) [12])(lVar33 + 0x158);
  auVar15._4_4_ = fVar60;
  auVar15._0_4_ = fVar38;
  auVar15._8_4_ = fVar39;
  auVar15._12_4_ = fVar58;
  auVar56 = NEON_fmax(auVar56,auVar15,4);
  auVar16._4_4_ = fVar60;
  auVar16._0_4_ = fVar38;
  auVar16._8_4_ = fVar39;
  auVar16._12_4_ = fVar58;
  auVar55 = NEON_fmin(auVar48,auVar16,4);
  auVar43._12_4_ = (float)(dVar65 + (double)(float)((ulong)uVar42 >> 0x20));
  auVar43._0_12_ = auVar46;
  auVar57._8_4_ = auVar56._8_4_;
  auVar57._12_4_ = auVar57._8_4_;
  auVar57._0_8_ = auVar56._0_8_;
  auVar49._8_4_ = auVar55._8_4_;
  auVar49._12_4_ = auVar49._8_4_;
  auVar49._0_8_ = auVar55._0_8_;
  auVar56 = NEON_fmax(auVar57,auVar43,4);
  *(long *)(lVar33 + 0x158) = auVar56._0_8_;
  auVar55 = NEON_fmin(auVar49,auVar43,4);
  *(undefined4 *)(lVar33 + 0x160) = auVar56._8_4_;
  *(undefined8 *)(lVar33 + 0x164) = auVar55._0_8_;
  *(undefined4 *)(lVar33 + 0x16c) = auVar55._8_4_;
  if (param_10 == 0) {
    pdVar28 = *(double **)(param_6 + 0x88);
    fVar58 = *(float *)(param_6 + 0x50);
    fVar60 = *(float *)(param_6 + 0x54);
    fVar38 = *(float *)(param_6 + 0x5c);
    dVar65 = *(double *)(lVar33 + 400);
    dVar45 = *(double *)(lVar33 + 0x198);
    dVar62 = *pdVar28;
    dVar53 = pdVar28[1];
    dVar61 = pdVar28[3];
    pfVar12 = (float *)(*(long *)(lVar33 + 0x18) + (long)(short)piVar21[3] * 0x20);
    pfVar12[2] = (float)((pdVar28[2] - *(double *)(lVar33 + 0x1a0)) +
                        (double)*(float *)(param_6 + 0x58));
    pfVar12[3] = (float)(dVar61 + (double)fVar38);
    *pfVar12 = (float)((dVar62 - dVar65) + (double)fVar58);
    pfVar12[1] = (float)((dVar53 - dVar45) + (double)fVar60);
  }
  if (param_11 == 0) {
    pdVar28 = *(double **)(param_6 + 0x88);
    fVar58 = *(float *)(param_6 + 0x60);
    fVar60 = *(float *)(param_6 + 100);
    fVar38 = *(float *)(param_6 + 0x6c);
    dVar65 = *(double *)(lVar33 + 400);
    dVar45 = *(double *)(lVar33 + 0x198);
    dVar62 = *pdVar28;
    dVar53 = pdVar28[1];
    dVar61 = pdVar28[3];
    pfVar12 = (float *)(*(long *)(lVar33 + 0x18) + (long)*(short *)((long)piVar21 + 0xe) * 0x20);
    pfVar12[2] = (float)((pdVar28[2] - *(double *)(lVar33 + 0x1a0)) +
                        (double)*(float *)(param_6 + 0x68));
    pfVar12[3] = (float)(dVar61 + (double)fVar38);
    *pfVar12 = (float)((dVar62 - dVar65) + (double)fVar58);
    pfVar12[1] = (float)((dVar53 - dVar45) + (double)fVar60);
  }
  return;
}


