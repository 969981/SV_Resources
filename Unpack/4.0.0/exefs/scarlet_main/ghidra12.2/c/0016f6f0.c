/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0016f6f0; name: FUN_0016f6f0
 */


byte * FUN_0016f6f0(float *param_1,undefined4 *param_2,void *param_3,byte *param_4,long param_5,
                   undefined4 *param_6,undefined8 param_7,long *param_8,long param_9,long param_10)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  int iVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 in_stack_fffffffffffff6a0;
  undefined4 uVar28;
  undefined8 in_stack_fffffffffffff6a8;
  undefined4 uVar29;
  byte *local_8e0;
  float local_8a4;
  float local_8a0;
  undefined4 local_89c [256];
  float local_49c [256];
  float local_9c [3];
  
  uVar29 = (undefined4)((ulong)in_stack_fffffffffffff6a8 >> 0x20);
  uVar28 = (undefined4)((ulong)in_stack_fffffffffffff6a0 >> 0x20);
  local_8e0 = (byte *)(long)(int)param_8[0xf];
  pbVar19 = (byte *)param_8[0x10];
  uVar2 = param_6[0x12];
  iVar3 = param_6[1];
  fVar27 = (float)param_6[0x11];
  lVar16 = *(long *)(param_6 + 2);
  *param_1 = 1.0737418e+09;
  lVar4 = param_8[5] - param_8[4];
  if ((lVar4 == 0) && (*(int *)PTR_DAT_047cb8d8 < 6)) {
    return local_8e0;
  }
  if (param_3 != (void *)0x0) {
    FUN_0015cf00(param_3,0x1804);
  }
  if (param_9 == 0) {
    *param_4 = *pbVar19;
    param_4[1] = pbVar19[1];
    param_4[2] = pbVar19[2];
    param_4[3] = pbVar19[3];
    param_4[4] = pbVar19[4];
    param_4[5] = pbVar19[5];
    param_4[6] = pbVar19[6];
    pbVar22 = param_4 + 8;
    param_4[7] = pbVar19[7];
    pbVar19 = pbVar22;
    if ((*(byte *)(param_6 + 0x13) & 1) != 0) goto LAB_0016f8b4;
LAB_0016f7b4:
    uVar18 = 0;
    lVar17 = 0;
  }
  else {
    pbVar22 = param_4;
    pbVar19 = param_4;
    if ((*(byte *)(param_6 + 0x13) & 1) == 0) goto LAB_0016f7b4;
LAB_0016f8b4:
    lVar17 = FUN_001c11e0(pbVar22,param_5,param_8[0xc],(ulong)(param_8[0xd] - param_8[0xc]) >> 2);
    if (lVar17 < 0) {
      return local_8e0;
    }
    param_5 = param_5 - lVar17;
    if (param_5 - (long)pbVar22 < 2) {
      return local_8e0;
    }
    if (lVar17 < 0x20) {
      uVar18 = 1;
      pbVar19 = pbVar22 + 1;
      *pbVar22 = (byte)lVar17 ^ 0x80;
    }
    else {
      *pbVar22 = (byte)lVar17 & 0x1f | 0xa0;
      pbVar22[1] = (byte)((int)lVar17 + 0x1fe0U >> 5);
      pbVar19 = pbVar22 + 2;
      uVar18 = 2;
    }
  }
  uVar21 = param_8[1] - *param_8;
  lVar10 = param_8[2];
  lVar12 = param_8[3];
  local_9c[0] = 1.0737418e+09;
  if ((iVar3 < -3) || ((long)uVar21 < 0x20)) {
    *param_2 = 1;
    lVar10 = FUN_00174980(pbVar19,param_5,*param_8,uVar21);
    if (lVar10 < 0) {
      return local_8e0;
    }
    local_9c[0] = (float)(long)uVar21 + 3.0;
    goto LAB_0016fac4;
  }
  FUN_0015edc0(*param_8,uVar21,local_49c,0x100,0);
  if (lVar12 != lVar10) {
    FUN_0015edc0(param_8[2],uVar21,local_89c,0x100,0);
  }
  if (param_3 == (void *)0x0) {
    if (lVar12 != lVar10) goto LAB_0016f940;
LAB_0016fa2c:
    lVar10 = -1;
LAB_0016fa6c:
    local_9c[0] = 1.0737418e+09;
LAB_0016fa70:
    uVar26 = param_7;
    lVar12 = FUN_00174230(fVar27,*(undefined4 *)(param_10 + 8),pbVar19,param_5,*param_8,uVar21,
                          local_49c,uVar2,lVar16,local_9c,param_7,iVar3);
    uVar28 = (undefined4)((ulong)uVar26 >> 0x20);
    if (0 < lVar12) {
      *param_2 = 1;
      lVar10 = lVar12;
    }
  }
  else {
    memcpy(param_3,local_49c,0x400);
    if (lVar12 == lVar10) goto LAB_0016fa2c;
    memcpy((void *)((long)param_3 + 0x400),local_89c,0x400);
LAB_0016f940:
    fVar24 = (float)(**(code **)(lVar16 + 0x88))(uVar21);
    if (iVar3 < 6) {
      iVar9 = FUN_001845e0(local_49c,0x100,uVar21 & 0xffffffff);
      iVar20 = FUN_001845e0(local_89c,0x100,uVar21 & 0xffffffff);
      if ((float)iVar9 * 0.125 <= fVar27 * fVar24 + (float)iVar20 * 0.125) goto LAB_0016fa2c;
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    *param_2 = 0;
    uVar26 = param_7;
    lVar10 = FUN_00174230(fVar27,*(undefined4 *)(param_10 + 8),pbVar19,param_5,param_8[2],uVar21,
                          local_89c,uVar2,lVar16,local_9c,param_7,CONCAT44(uVar29,iVar3));
    uVar28 = (undefined4)((ulong)uVar26 >> 0x20);
    local_9c[0] = fVar27 * fVar24 + local_9c[0];
    if ((((long)uVar21 <= lVar10) || (lVar10 < 0)) || ((float)(long)uVar21 + 3.0 < local_9c[0]))
    goto LAB_0016fa6c;
    if (bVar5) goto LAB_0016fa70;
  }
  if (lVar10 < 0) {
    return local_8e0;
  }
LAB_0016fac4:
  local_49c[0] = 1.0737418e+09;
  pbVar19 = pbVar19 + lVar10;
  lVar12 = (long)param_3 + 0x800;
  if (param_3 == (void *)0x0) {
    lVar12 = 0;
  }
  lVar11 = FUN_00174a40(fVar27,*(undefined4 *)(param_10 + 0xc),pbVar19,param_5,param_8[4],lVar4,
                        uVar2,lVar16,local_49c,param_7,CONCAT44(uVar28,iVar3),lVar12);
  if (-1 < lVar11) {
    local_8a0 = 1.0737418e+09;
    local_89c[0] = 0;
    uVar23 = param_8[7] - param_8[6];
    iVar9 = (int)uVar23;
    lVar13 = (long)param_3 + 0x1004;
    if (param_3 == (void *)0x0) {
      lVar13 = 0;
    }
    lVar15 = (long)param_3 + 0x1404;
    pbVar19 = pbVar19 + lVar11;
    if (param_3 == (void *)0x0) {
      lVar15 = 0;
    }
    lVar12 = FUN_001c1e20(fVar27,*(undefined4 *)(param_10 + 0x10),pbVar19,param_5,param_8[6],
                          param_8[8],uVar23 & 0xffffffff,uVar2,lVar16,&local_8a0,8,
                          CONCAT44((int)((ulong)lVar12 >> 0x20),param_6[0x13]) & 0xffffffff00000004,
                          local_89c,param_7,iVar3,lVar13,lVar15);
    if (lVar12 < 0) {
      return (byte *)0xffffffffffffffff;
    }
    pbVar19 = pbVar19 + lVar12;
    if (param_3 != (void *)0x0) {
      *(undefined4 *)((long)param_3 + 0x1000) = local_89c[0];
    }
    local_8a4 = 1.0737418e+09;
    iVar20 = (int)param_8[0xb] - (int)param_8[10];
    lVar13 = (long)param_3 + 0xc00;
    lVar15 = (long)iVar20;
    if (param_3 == (void *)0x0) {
      lVar13 = 0;
    }
    lVar13 = FUN_00174a40(fVar27,*(undefined4 *)(param_10 + 0x14),pbVar19,param_5,param_8[10],lVar15
                          ,uVar2,lVar16,&local_8a4,param_7,iVar3,lVar13);
    if (-1 < lVar13) {
      iVar3 = iVar9;
      if (iVar9 <= iVar20) {
        iVar3 = iVar20;
      }
      lVar1 = uVar21 + lVar4 + ((long)((ulong)(uint)(iVar9 * 3) << 0x21) >> 0x20) +
              (long)(iVar20 * 5) + (long)iVar3;
      if (lVar1 <= (long)(uVar21 * 2)) {
        lVar1 = uVar21 * 2;
      }
      lVar14 = uVar21 + lVar4 * 2;
      if (lVar1 <= lVar14) {
        lVar1 = lVar14;
      }
      lVar14 = FUN_00151010(*param_6,local_8e0);
      if (lVar14 < lVar1 + 0xd020) {
        FUN_0015c3d0();
        if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
          (**(code **)PTR_PTR_047cb868)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0x635,
                     "OODLE ERROR : newLZ chunk needs too much scratch for decoder!\n");
        }
        FUN_0015c3f0();
      }
      else {
        uVar21 = param_8[0xd] - param_8[0xc];
        lVar17 = FUN_001c15f0(pbVar19 + lVar13,param_5,param_8[6],param_8[8],uVar23 & 0xffffffff,
                              local_89c[0],param_8[0xc],uVar21 >> 2,uVar18,lVar17);
        if ((-1 < lVar17) &&
           (pbVar19 = pbVar19 + lVar13 + (lVar17 - (long)param_4), (long)pbVar19 < (long)local_8e0))
        {
          uVar26 = (**(code **)(lVar16 + 0x80))(local_8e0,lVar4,lVar15);
          fVar8 = local_9c[0];
          fVar7 = local_49c[0];
          fVar6 = local_8a0;
          fVar24 = local_8a4;
          if ((float)uVar26 <= *(float *)(param_10 + 0x18)) {
            lVar17 = (uVar18 | (ulong)(param_9 == 0) << 3) + lVar17;
            fVar25 = (float)(**(code **)(lVar16 + 0x30))(lVar15,(long)(uVar21 * 0x40000000) >> 0x20)
            ;
            if (*(code **)(lVar16 + 0xb0) == (code *)0x0) {
              fVar27 = fVar27 * (float)uVar26 + (float)lVar17 + fVar8 + fVar7 + fVar6 + fVar24 +
                       fVar27 * fVar25;
            }
            else {
              fVar27 = (float)(**(code **)(lVar16 + 0xb0))
                                        (fVar27,local_9c[0],local_49c[0],local_8a0,local_8a4,uVar26,
                                         pbVar19,lVar10,lVar11,lVar12,lVar13,lVar17);
            }
            *param_1 = fVar27;
            local_8e0 = pbVar19;
          }
        }
      }
    }
  }
  return local_8e0;
}


