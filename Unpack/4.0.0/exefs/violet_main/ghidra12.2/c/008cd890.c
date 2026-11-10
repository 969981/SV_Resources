/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008cd890; name: FUN_008cd890
 */


void FUN_008cd890(float param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5,
                 undefined8 param_6,long param_7,uint param_8)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  float fVar14;
  undefined8 uVar13;
  float fVar15;
  undefined8 uVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar4 = *(long *)(param_7 + 0xa0);
  if (*(char *)(lVar4 + 0x7f2) == '\0') {
    fVar6 = *param_3;
    fVar7 = *param_5;
    if (fVar7 <= fVar6) {
      iVar5 = *(int *)(lVar4 + 0x804);
      fVar8 = *(float *)(lVar4 + 0x800);
      uVar2 = *(uint *)(param_7 + 0xac);
      *(uint *)(param_7 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      pfVar1 = (float *)(lVar4 + 0x800);
      if (1 < *(byte *)(lVar4 + 0x838) - 5) {
        pfVar1 = (float *)(param_7 + 0x63c);
      }
      fVar8 = *param_4 +
              (*pfVar1 + fVar8 * ((float)iVar5 / -100.0) * (float)uVar2 * 2.3283064e-10) *
              *(float *)(param_7 + 0x60) * *(float *)(*(long *)(param_7 + 0x78) + 0x50);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      iVar5 = (int)fVar8;
      *param_4 = fVar8;
      if (iVar5 == 0) {
        *param_3 = 0.0;
      }
      else {
        FUN_008d1994(param_2,param_6,param_7,iVar5,param_8 & 1,0);
        FUN_008c9510(param_7,param_5);
        *(undefined4 *)(*(long *)(param_7 + 0x78) + 0x18) = 1;
        *param_4 = *param_4 - (float)iVar5;
        *param_3 = (fVar6 - fVar7) + param_1;
        *(undefined4 *)(param_7 + 0x68) = *(undefined4 *)(param_7 + 0x44);
      }
    }
    else {
      *param_3 = fVar6 + param_1;
    }
  }
  else if (*(char *)(*(long *)(param_7 + 0x78) + 0x265) != '\0') {
    fVar8 = (float)*(undefined8 *)(param_7 + 0x3d8);
    fVar9 = (float)((ulong)*(undefined8 *)(param_7 + 0x3d8) >> 0x20);
    fVar6 = (float)*(undefined8 *)(param_7 + 0x3d0);
    fVar7 = (float)((ulong)*(undefined8 *)(param_7 + 0x3d0) >> 0x20);
    fVar6 = fVar6 * fVar6;
    fVar7 = fVar7 * fVar7;
    fVar8 = fVar8 * fVar8;
    fVar9 = fVar9 * fVar9;
    auVar10._4_4_ = fVar7;
    auVar10._0_4_ = fVar6;
    auVar10._8_4_ = fVar8;
    auVar10._12_4_ = fVar9;
    auVar3._4_4_ = fVar7;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = fVar8;
    auVar3._12_4_ = fVar9;
    auVar10 = NEON_ext(auVar10,auVar3,8,1);
    fVar7 = SQRT(auVar10._0_4_ + fVar6 + auVar10._4_4_ + fVar7);
    fVar6 = 0.0;
    if (*(float *)(lVar4 + 0x830) <= fVar7) {
      fVar6 = fVar7;
    }
    fVar8 = *(float *)(lVar4 + 0x828);
    if (fVar6 == 0.0) {
      fVar6 = fVar8;
    }
    else if ((fVar6 < fVar8) || (fVar8 = *(float *)(lVar4 + 0x82c), fVar8 < fVar6)) {
      fVar6 = (fVar7 * fVar8) / fVar7;
    }
    fVar7 = *param_4 + fVar6;
    fVar8 = *(float *)(lVar4 + 0x824);
    if ((fVar8 != 0.0) && (iVar5 = (int)(fVar7 / fVar8), 0 < iVar5)) {
      uVar16 = *(undefined8 *)(param_7 + 0x378);
      uVar12 = *(undefined8 *)(param_7 + 0x370);
      fVar9 = (float)uVar12;
      fVar19 = *(float *)(param_7 + 0x3c0) - fVar9;
      fVar14 = (float)((ulong)uVar12 >> 0x20);
      fVar20 = *(float *)(param_7 + 0x3c4) - fVar14;
      fVar15 = (float)uVar16;
      fVar21 = *(float *)(param_7 + 0x3c8) - fVar15;
      fVar18 = (float)((ulong)uVar16 >> 0x20);
      fVar22 = *(float *)(param_7 + 0x3cc) - fVar18;
      if (fVar6 == 0.0) {
        uVar13 = CONCAT44(fVar14 + fVar20 * 0.0,fVar9 + fVar19 * 0.0);
        uVar17 = CONCAT44(fVar18 + fVar22 * 0.0,fVar15 + fVar21 * 0.0);
        fVar7 = fVar7 - fVar8;
        *(undefined8 *)(param_7 + 0x3b8) = uVar17;
        *(undefined8 *)(param_7 + 0x3b0) = uVar13;
        *(undefined8 *)(param_7 + 0x378) = uVar17;
        *(undefined8 *)(param_7 + 0x370) = uVar13;
        FUN_008d1994(param_2,param_6,param_7,1,param_8 & 1,0);
        *(undefined8 *)(param_7 + 0x3b8) = uVar16;
        *(undefined8 *)(param_7 + 0x3b0) = uVar12;
        *(undefined8 *)(param_7 + 0x378) = uVar16;
        *(undefined8 *)(param_7 + 0x370) = uVar12;
        while (iVar5 = iVar5 + -1, iVar5 != 0) {
          fVar7 = fVar7 - *(float *)(*(long *)(param_7 + 0xa0) + 0x824);
          *(undefined8 *)(param_7 + 0x3b8) = uVar17;
          *(undefined8 *)(param_7 + 0x3b0) = uVar13;
          *(undefined8 *)(param_7 + 0x378) = uVar17;
          *(undefined8 *)(param_7 + 0x370) = uVar13;
          FUN_008d1994(param_2,param_6,param_7,1,param_8 & 1,0);
          *(undefined8 *)(param_7 + 0x3b8) = uVar16;
          *(undefined8 *)(param_7 + 0x3b0) = uVar12;
          *(undefined8 *)(param_7 + 0x378) = uVar16;
          *(undefined8 *)(param_7 + 0x370) = uVar12;
        }
      }
      else {
        while( true ) {
          iVar5 = iVar5 + -1;
          fVar7 = fVar7 - fVar8;
          fVar8 = fVar7 / fVar6;
          auVar11._0_8_ = CONCAT44(fVar14 + fVar20 * fVar8,fVar9 + fVar19 * fVar8);
          auVar11._8_4_ = fVar15 + fVar21 * fVar8;
          auVar11._12_4_ = fVar18 + fVar22 * fVar8;
          *(long *)(param_7 + 0x3b8) = auVar11._8_8_;
          *(undefined8 *)(param_7 + 0x3b0) = auVar11._0_8_;
          *(long *)(param_7 + 0x378) = auVar11._8_8_;
          *(undefined8 *)(param_7 + 0x370) = auVar11._0_8_;
          FUN_008d1994(param_2,param_6,param_7,1,param_8 & 1,0);
          *(undefined8 *)(param_7 + 0x3b8) = uVar16;
          *(undefined8 *)(param_7 + 0x3b0) = uVar12;
          *(undefined8 *)(param_7 + 0x378) = uVar16;
          *(undefined8 *)(param_7 + 0x370) = uVar12;
          if (iVar5 == 0) break;
          fVar8 = *(float *)(*(long *)(param_7 + 0xa0) + 0x824);
        }
      }
      *(undefined4 *)(param_7 + 0x68) = *(undefined4 *)(param_7 + 0x44);
    }
    *param_4 = fVar7;
  }
  return;
}


