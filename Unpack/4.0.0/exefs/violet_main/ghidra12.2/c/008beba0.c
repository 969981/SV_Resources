/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008beba0; name: FUN_008beba0
 */


int FUN_008beba0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,long *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  fVar5 = (float)*param_5;
  if (param_7 < 2) {
LAB_008bebd4:
    *(float *)*param_6 = fVar5;
    *(int *)(*param_6 + 4) = (int)((ulong)*param_5 >> 0x20);
    *param_6 = *param_6 + 8;
    iVar2 = 1;
  }
  else {
    fVar16 = (float)*param_2;
    fVar12 = fVar5 - fVar16;
    fVar11 = (float)((ulong)*param_5 >> 0x20);
    fVar6 = (float)((ulong)*param_2 >> 0x20);
    fVar14 = fVar11 - fVar6;
    fVar8 = (float)*param_3;
    fVar13 = (float)((ulong)*param_3 >> 0x20);
    uVar9 = CONCAT44(fVar13 - fVar6,fVar8 - fVar16);
    fVar3 = fVar12 * (fVar8 - fVar16) + fVar14 * (fVar13 - fVar6);
    fVar4 = fVar12 * fVar12 + fVar14 * fVar14;
    fVar17 = (float)((ulong)DAT_03cb54a0 >> 0x20);
    if (fVar3 <= 0.0) {
LAB_008bec38:
      fVar3 = (float)((ulong)uVar9 >> 0x20);
      fVar3 = (float)uVar9 * (float)uVar9 + fVar3 * fVar3;
      uVar9 = *param_4;
    }
    else {
      if (fVar4 < fVar3) {
        uVar9 = CONCAT44(fVar11 - fVar13,fVar5 - fVar8);
        goto LAB_008bec38;
      }
      uVar9 = NEON_rev64(uVar9,4);
      fVar3 = fVar12 * (float)uVar9 * (float)DAT_03cb54a0 +
              fVar14 * (float)((ulong)uVar9 >> 0x20) * fVar17;
      fVar3 = (fVar3 * fVar3) / fVar4;
      uVar9 = *param_4;
    }
    fVar7 = (float)uVar9;
    fVar10 = (float)((ulong)uVar9 >> 0x20);
    if (fVar3 < (float)param_1) {
      fVar15 = fVar7 - fVar16;
      fVar18 = fVar10 - fVar6;
      fVar3 = fVar12 * fVar15 + fVar14 * fVar18;
      if (0.0 < fVar3) {
        if (fVar3 <= fVar4) {
          uVar9 = NEON_rev64(CONCAT44(fVar18,fVar15),4);
          fVar3 = fVar12 * (float)uVar9 * (float)DAT_03cb54a0 +
                  fVar14 * (float)((ulong)uVar9 >> 0x20) * fVar17;
          fVar4 = (fVar3 * fVar3) / fVar4;
        }
        else {
          fVar4 = (fVar5 - fVar7) * (fVar5 - fVar7) + (fVar11 - fVar10) * (fVar11 - fVar10);
        }
      }
      else {
        fVar4 = fVar15 * fVar15 + fVar18 * fVar18;
      }
      if (fVar4 < (float)param_1) goto LAB_008bebd4;
    }
    fVar16 = (fVar16 + fVar8) * 0.5;
    fVar3 = (fVar6 + fVar13) * 0.5;
    fVar4 = (fVar8 + fVar7) * 0.5;
    fVar8 = (fVar5 + fVar7) * 0.5;
    fVar5 = (fVar11 + fVar10) * 0.5;
    local_68 = CONCAT44(fVar3,fVar16);
    fVar13 = (fVar13 + fVar10) * 0.5;
    local_58 = CONCAT44(fVar5,fVar8);
    uStack_60 = CONCAT44(fVar13,fVar4);
    fVar11 = (fVar3 + fVar13) * 0.5;
    fVar3 = (fVar16 + fVar4) * 0.5;
    fVar4 = (fVar4 + fVar8) * 0.5;
    fVar5 = (fVar13 + fVar5) * 0.5;
    local_78 = CONCAT44(fVar11,fVar3);
    uStack_70 = CONCAT44(fVar5,fVar4);
    local_48 = CONCAT44((fVar11 + fVar5) * 0.5,(fVar3 + fVar4) * 0.5);
    iVar1 = FUN_008beba0(param_1,param_2,&local_68,&local_78,&local_48,param_6,param_7 >> 1);
    iVar2 = FUN_008beba0(param_1,&local_48,&uStack_70,&local_58,param_5,param_6,param_7 >> 1);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}


