/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00135ae0; name: FUN_00135ae0
 */


void FUN_00135ae0(long *param_1,uint param_2,long *param_3,long *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  long unaff_x30;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  
  FUN_00133b50(param_1,param_4);
  if ((param_2 < 0xc) && (iVar4 = FUN_00135740(param_1,param_2,param_3,param_4), iVar4 != 0)) {
    return;
  }
  switch(param_2) {
  case 0:
  case 2:
    if (((int)param_3[2] == *(int *)((long)param_3 + 0x14)) && ((int)*param_3 - 5U < 2)) {
      local_78 = *param_3;
      local_70 = param_3[1];
      iVar4 = 1;
      uStack_68 = param_3[2];
      lVar15 = param_4[2];
      lVar16 = *param_4;
      param_3[1] = param_4[1];
      param_3[2] = lVar15;
      *param_3 = lVar16;
      param_4[1] = local_70;
      param_4[2] = uStack_68;
      *param_4 = local_78;
      if (param_2 == 0) goto LAB_00135c40;
    }
    else {
      iVar4 = 0;
      if (param_2 == 0) {
LAB_00135c40:
        if ((((int)*param_4 == 6) && ((int)param_4[2] == *(int *)((long)param_4 + 0x14))) &&
           (param_4[1] + 0x7fU < 0x100)) {
          iVar7 = (int)param_4[1] + 0x7f;
          iVar9 = FUN_001345b0(param_1,param_3);
          lVar19 = *param_1;
          lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                                (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
          *(long *)(lVar19 + 0x40) = lVar16;
          lVar15 = param_1[4];
          *(int *)(param_1 + 4) = (int)lVar15 + 1;
          *(uint *)(lVar16 + (long)(int)lVar15 * 4) = iVar7 * 0x1000000 | iVar9 << 0x10 | 0x15;
          FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
          lVar15 = param_1[4];
          if ((int)*param_3 == 8) {
            iVar6 = (int)param_3[1];
          }
          else {
            iVar6 = -1;
          }
          if ((int)*param_4 == 8) {
            iVar8 = (int)param_4[1];
          }
          else {
            iVar8 = -1;
          }
          iVar5 = FUN_0012ea70(param_1);
          if (iVar8 < iVar6) {
            if (iVar5 <= iVar6) {
              *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
            }
            iVar6 = FUN_0012ea70(param_1);
            if (iVar6 <= iVar8) goto LAB_001372b8;
          }
          else {
            if (iVar5 <= iVar8) {
              *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
            }
            iVar8 = FUN_0012ea70(param_1);
            if (iVar8 <= iVar6) {
LAB_001372b8:
              *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
            }
          }
          *(int *)(param_3 + 1) = (int)lVar15 + -1;
          *(int *)param_3 = 0x11;
          uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
          if (uVar14 == 0xffffff80) {
            *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
            cVar12 = -0x7f;
          }
          else {
            *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
            cVar12 = *(char *)((long)param_1 + 0x45) + -1;
          }
          *(char *)((long)param_1 + 0x45) = cVar12;
          FUN_00133660(param_1,*param_1,param_5);
          uVar13 = iVar7 * 0x10000 | iVar4 << 0xf | iVar9 << 7;
          uVar14 = 0x600002f;
          goto LAB_00136ab8;
        }
        param_2 = 0;
      }
    }
    goto LAB_00135d74;
  case 1:
    if ((((int)*param_4 == 6) && ((int)param_4[2] == *(int *)((long)param_4 + 0x14))) &&
       (lVar15 = param_4[1], (lVar15 + 0x7fU | 0x7fU - lVar15) < 0x100)) {
      iVar4 = 0x7f - (int)lVar15;
      iVar7 = FUN_001345b0(param_1,param_3);
      lVar18 = *param_1;
      lVar19 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar18 + 0x40),
                            (int)param_1[4],lVar18 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar18 + 0x40) = lVar19;
      lVar16 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar16 + 1;
      *(uint *)(lVar19 + (long)(int)lVar16 * 4) = iVar4 * 0x1000000 | iVar7 << 0x10 | 0x15;
      FUN_00133660(param_1,lVar18,*(undefined4 *)(param_1[2] + 8));
      lVar16 = param_1[4];
      if ((int)*param_3 == 8) {
        iVar9 = (int)param_3[1];
      }
      else {
        iVar9 = -1;
      }
      if ((int)*param_4 == 8) {
        iVar6 = (int)param_4[1];
      }
      else {
        iVar6 = -1;
      }
      iVar8 = FUN_0012ea70(param_1);
      if (iVar6 < iVar9) {
        if (iVar8 <= iVar9) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar9 = FUN_0012ea70(param_1);
        if (iVar9 <= iVar6) goto LAB_00136ef4;
      }
      else {
        if (iVar8 <= iVar6) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar6 = FUN_0012ea70(param_1);
        if (iVar6 <= iVar9) {
LAB_00136ef4:
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
      }
      *(int *)(param_3 + 1) = (int)lVar16 + -1;
      *(int *)param_3 = 0x11;
      uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
      if (uVar14 == 0xffffff80) {
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
        cVar12 = -0x7f;
      }
      else {
        *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
        cVar12 = *(char *)((long)param_1 + 0x45) + -1;
      }
      *(char *)((long)param_1 + 0x45) = cVar12;
      FUN_00133660(param_1,*param_1,param_5);
      uVar14 = iVar4 * 0x10000 | iVar7 << 7 | 0x700002f;
LAB_00137170:
      lVar18 = *param_1;
      lVar19 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar18 + 0x40),
                            (int)param_1[4],lVar18 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar18 + 0x40) = lVar19;
      lVar16 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar16 + 1;
      *(uint *)(lVar19 + (long)(int)lVar16 * 4) = uVar14;
      FUN_00133660(param_1,lVar18,*(undefined4 *)(param_1[2] + 8));
      uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
      if (uVar14 == 0xffffff80) {
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
        cVar12 = -0x7f;
      }
      else {
        *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
        cVar12 = *(char *)((long)param_1 + 0x45) + -1;
      }
      *(char *)((long)param_1 + 0x45) = cVar12;
      FUN_00133660(param_1,*param_1,param_5);
      *(char *)(*(long *)(*param_1 + 0x40) + (long)(int)param_1[4] * 4 + -2) =
           (char)((uint)((int)lVar15 * 0x10000 + 0x7f0000) >> 0x10);
      return;
    }
  case 3:
  case 4:
  case 5:
  case 6:
    iVar4 = 0;
LAB_00135d74:
    if ((((int)param_4[2] != *(int *)((long)param_4 + 0x14)) || (1 < (int)*param_4 - 5U)) ||
       (iVar7 = FUN_00134700(param_1,param_4), iVar7 == 0)) {
      if (iVar4 != 0) {
        local_78 = *param_3;
        local_70 = param_3[1];
        uStack_68 = param_3[2];
        lVar15 = param_4[2];
        lVar16 = *param_4;
        param_3[1] = param_4[1];
        param_3[2] = lVar15;
        *param_3 = lVar16;
        param_4[1] = local_70;
        param_4[2] = uStack_68;
        *param_4 = local_78;
      }
      iVar4 = FUN_001345b0(param_1,param_4);
      iVar7 = FUN_001345b0(param_1,param_3);
      lVar19 = *param_1;
      lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                            (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar19 + 0x40) = lVar16;
      lVar15 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar15 + 1;
      *(uint *)(lVar16 + (long)(int)lVar15 * 4) = param_2 + 0x22 | iVar4 << 0x18 | iVar7 << 0x10;
      FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
      lVar15 = param_1[4];
      if ((int)*param_3 == 8) {
        iVar9 = (int)param_3[1];
        if ((int)*param_4 == 8) goto LAB_0013754c;
LAB_00137534:
        iVar6 = -1;
      }
      else {
        iVar9 = -1;
        if ((int)*param_4 != 8) goto LAB_00137534;
LAB_0013754c:
        iVar6 = (int)param_4[1];
      }
      iVar8 = FUN_0012ea70(param_1);
      if (iVar6 < iVar9) {
        if (iVar8 <= iVar9) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar9 = FUN_0012ea70(param_1);
        if (iVar9 <= iVar6) goto LAB_001375b0;
      }
      else {
        if (iVar8 <= iVar6) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar6 = FUN_0012ea70(param_1);
        if (iVar6 <= iVar9) {
LAB_001375b0:
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
      }
      *(int *)(param_3 + 1) = (int)lVar15 + -1;
      *(int *)param_3 = 0x11;
      uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
      if (uVar14 == 0xffffff80) {
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
        cVar12 = -0x7f;
      }
      else {
        *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
        cVar12 = *(char *)((long)param_1 + 0x45) + -1;
      }
      *(char *)((long)param_1 + 0x45) = cVar12;
      FUN_00133660(param_1,*param_1,param_5);
      lVar19 = *param_1;
      lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                            (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar19 + 0x40) = lVar16;
      lVar15 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar15 + 1;
      *(uint *)(lVar16 + (long)(int)lVar15 * 4) =
           param_2 * 0x1000000 + 0x6000000 | iVar4 << 0x10 | iVar7 << 7 | 0x2e;
      uVar1 = *(undefined4 *)(param_1[2] + 8);
      goto LAB_00137684;
    }
    lVar15 = param_4[1];
    iVar7 = FUN_001345b0(param_1,param_3);
    lVar18 = *param_1;
    lVar19 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar18 + 0x40),
                          (int)param_1[4],lVar18 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar18 + 0x40) = lVar19;
    lVar16 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar16 + 1;
    *(uint *)(lVar19 + (long)(int)lVar16 * 4) = param_2 + 0x16 | (int)lVar15 << 0x18 | iVar7 << 0x10
    ;
    FUN_00133660(param_1,lVar18,*(undefined4 *)(param_1[2] + 8));
    lVar16 = param_1[4];
    if ((int)*param_3 == 8) {
      iVar9 = (int)param_3[1];
      if ((int)*param_4 == 8) goto LAB_00137708;
LAB_00137458:
      iVar6 = -1;
    }
    else {
      iVar9 = -1;
      if ((int)*param_4 != 8) goto LAB_00137458;
LAB_00137708:
      iVar6 = (int)param_4[1];
    }
    iVar8 = FUN_0012ea70(param_1);
    if (iVar6 < iVar9) {
      if (iVar8 <= iVar9) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar9 = FUN_0012ea70(param_1);
      if (iVar9 <= iVar6) goto LAB_0013776c;
    }
    else {
      if (iVar8 <= iVar6) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar6 = FUN_0012ea70(param_1);
      if (iVar6 <= iVar9) {
LAB_0013776c:
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
    }
    *(int *)(param_3 + 1) = (int)lVar16 + -1;
    *(int *)param_3 = 0x11;
    uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
    if (uVar14 == 0xffffff80) {
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
      cVar12 = -0x7f;
    }
    else {
      *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
      cVar12 = *(char *)((long)param_1 + 0x45) + -1;
    }
    *(char *)((long)param_1 + 0x45) = cVar12;
    FUN_00133660(param_1,*param_1,param_5);
    lVar19 = *param_1;
    lVar18 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                          (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar19 + 0x40) = lVar18;
    lVar16 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar16 + 1;
    *(uint *)(lVar18 + (long)(int)lVar16 * 4) =
         param_2 * 0x1000000 + 0x6000000 | iVar4 << 0xf | (int)lVar15 << 0x10 | iVar7 << 7 | 0x30;
    uVar1 = *(undefined4 *)(param_1[2] + 8);
LAB_00137684:
    FUN_00133660(param_1,lVar19,uVar1);
    uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
    if (uVar14 == 0xffffff80) {
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
      cVar12 = -0x7f;
    }
    else {
      *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
      cVar12 = *(char *)((long)param_1 + 0x45) + -1;
    }
    *(char *)((long)param_1 + 0x45) = cVar12;
    FUN_00133660(param_1,*param_1,param_5);
    return;
  case 7:
  case 8:
  case 9:
    if ((int)*param_3 == 6) {
      iVar4 = FUN_00134700(param_1,param_3);
      if (iVar4 == 0) {
        FUN_001345b0(param_1,param_3);
        goto LAB_0013643c;
      }
      local_78 = *param_3;
      local_70 = param_3[1];
      uVar14 = 0x8000;
      uStack_68 = param_3[2];
      lVar15 = param_4[2];
      lVar16 = *param_4;
      param_3[1] = param_4[1];
      param_3[2] = lVar15;
      *param_3 = lVar16;
      param_4[1] = local_70;
      param_4[2] = uStack_68;
      *param_4 = local_78;
LAB_0013645c:
      lVar16 = param_4[1];
      iVar4 = FUN_001345b0(param_1,param_3);
      lVar18 = *param_1;
      lVar19 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar18 + 0x40),
                            (int)param_1[4],lVar18 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar18 + 0x40) = lVar19;
      lVar15 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar15 + 1;
      *(uint *)(lVar19 + (long)(int)lVar15 * 4) =
           param_2 + 0x16 | (int)lVar16 << 0x18 | iVar4 << 0x10;
      FUN_00133660(param_1,lVar18,*(undefined4 *)(param_1[2] + 8));
      lVar15 = param_1[4];
      if ((int)*param_3 == 8) {
        iVar7 = (int)param_3[1];
        if ((int)*param_4 == 8) goto LAB_00136508;
LAB_001364f0:
        iVar9 = -1;
      }
      else {
        iVar7 = -1;
        if ((int)*param_4 != 8) goto LAB_001364f0;
LAB_00136508:
        iVar9 = (int)param_4[1];
      }
      iVar6 = FUN_0012ea70(param_1);
      if (iVar9 < iVar7) {
        if (iVar6 <= iVar7) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar7 = FUN_0012ea70(param_1);
        if (iVar7 <= iVar9) goto LAB_0013656c;
      }
      else {
        if (iVar6 <= iVar9) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar9 = FUN_0012ea70(param_1);
        if (iVar9 <= iVar7) {
LAB_0013656c:
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
      }
      *(int *)(param_3 + 1) = (int)lVar15 + -1;
      *(int *)param_3 = 0x11;
      uVar13 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
      if (uVar13 == 0xffffff80) {
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
        cVar12 = -0x7f;
      }
      else {
        *(uint *)(param_1 + 5) = (int)param_1[5] - uVar13;
        cVar12 = *(char *)((long)param_1 + 0x45) + -1;
      }
      *(char *)((long)param_1 + 0x45) = cVar12;
      FUN_00133660(param_1,*param_1,param_5);
      lVar15 = *param_1;
      uVar10 = *(undefined8 *)(param_1[2] + 0x38);
      uVar13 = (uVar14 | param_2 << 0x18) + 0x6000000 | (int)lVar16 << 0x10 | iVar4 << 7 | 0x30;
    }
    else {
LAB_0013643c:
      if ((int)*param_4 == 6) {
        iVar4 = FUN_00134700(param_1,param_4);
        if (iVar4 != 0) {
          uVar14 = 0;
          goto LAB_0013645c;
        }
        FUN_001345b0(param_1,param_4);
      }
      iVar4 = FUN_001345b0(param_1,param_4);
      iVar7 = FUN_001345b0(param_1,param_3);
      lVar19 = *param_1;
      lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                            (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar19 + 0x40) = lVar16;
      lVar15 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar15 + 1;
      *(uint *)(lVar16 + (long)(int)lVar15 * 4) = param_2 + 0x22 | iVar4 << 0x18 | iVar7 << 0x10;
      FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
      lVar15 = param_1[4];
      if ((int)*param_3 == 8) {
        iVar9 = (int)param_3[1];
        if ((int)*param_4 == 8) goto LAB_001368c8;
LAB_001368b0:
        iVar6 = -1;
      }
      else {
        iVar9 = -1;
        if ((int)*param_4 != 8) goto LAB_001368b0;
LAB_001368c8:
        iVar6 = (int)param_4[1];
      }
      iVar8 = FUN_0012ea70(param_1);
      if (iVar6 < iVar9) {
        if (iVar8 <= iVar9) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar9 = FUN_0012ea70(param_1);
        if (iVar9 <= iVar6) goto LAB_0013692c;
      }
      else {
        if (iVar8 <= iVar6) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar6 = FUN_0012ea70(param_1);
        if (iVar6 <= iVar9) {
LAB_0013692c:
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
      }
      *(int *)(param_3 + 1) = (int)lVar15 + -1;
      *(int *)param_3 = 0x11;
      uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
      if (uVar14 == 0xffffff80) {
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
        cVar12 = -0x7f;
      }
      else {
        *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
        cVar12 = *(char *)((long)param_1 + 0x45) + -1;
      }
      *(char *)((long)param_1 + 0x45) = cVar12;
      FUN_00133660(param_1,*param_1,param_5);
      lVar15 = *param_1;
      uVar10 = *(undefined8 *)(param_1[2] + 0x38);
      uVar13 = param_2 * 0x1000000 + 0x6000000 | iVar4 << 0x10 | iVar7 << 7 | 0x2e;
    }
    goto LAB_00136ac8;
  case 10:
    if ((((int)*param_3 == 6) && ((int)param_3[2] == *(int *)((long)param_3 + 0x14))) &&
       (param_3[1] + 0x7fU < 0x100)) {
      local_78 = *param_3;
      local_70 = param_3[1];
      uStack_68 = param_3[2];
      lVar15 = param_4[2];
      lVar16 = *param_4;
      param_3[1] = param_4[1];
      param_3[2] = lVar15;
      *param_3 = lVar16;
      param_4[1] = local_70;
      param_4[2] = uStack_68;
      *param_4 = local_78;
      iVar4 = (int)local_70 + 0x7f;
      iVar7 = FUN_001345b0(param_1,param_3);
      lVar19 = *param_1;
      lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                            (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar19 + 0x40) = lVar16;
      lVar15 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar15 + 1;
      *(uint *)(lVar16 + (long)(int)lVar15 * 4) = iVar7 << 0x10 | iVar4 * 0x1000000 | 0x21;
      FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
      lVar15 = param_1[4];
      if ((int)*param_3 == 8) {
        iVar9 = (int)param_3[1];
      }
      else {
        iVar9 = -1;
      }
      if ((int)*param_4 == 8) {
        iVar6 = (int)param_4[1];
      }
      else {
        iVar6 = -1;
      }
      iVar8 = FUN_0012ea70(param_1);
      if (iVar6 < iVar9) {
        if (iVar8 <= iVar9) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar9 = FUN_0012ea70(param_1);
        if (iVar9 <= iVar6) goto LAB_00136ff4;
      }
      else {
        if (iVar8 <= iVar6) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar6 = FUN_0012ea70(param_1);
        if (iVar6 <= iVar9) {
LAB_00136ff4:
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
      }
      *(int *)(param_3 + 1) = (int)lVar15 + -1;
      *(int *)param_3 = 0x11;
      uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
      if (uVar14 == 0xffffff80) {
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
        cVar12 = -0x7f;
      }
      else {
        *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
        cVar12 = *(char *)((long)param_1 + 0x45) + -1;
      }
      *(char *)((long)param_1 + 0x45) = cVar12;
      FUN_00133660(param_1,*param_1,param_5);
      uVar13 = iVar7 << 7 | iVar4 * 0x10000;
      uVar14 = 0x802f;
    }
    else {
      if ((((int)*param_4 == 6) && ((int)param_4[2] == *(int *)((long)param_4 + 0x14))) &&
         (lVar15 = param_4[1], (lVar15 + 0x7fU | 0x7fU - lVar15) < 0x100)) {
        iVar4 = 0x7f - (int)lVar15;
        iVar7 = FUN_001345b0(param_1,param_3);
        lVar18 = *param_1;
        lVar19 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar18 + 0x40),
                              (int)param_1[4],lVar18 + 0x18,4,0x7fffffff,"opcodes");
        *(long *)(lVar18 + 0x40) = lVar19;
        lVar16 = param_1[4];
        *(int *)(param_1 + 4) = (int)lVar16 + 1;
        *(uint *)(lVar19 + (long)(int)lVar16 * 4) = iVar4 * 0x1000000 | iVar7 << 0x10 | 0x20;
        FUN_00133660(param_1,lVar18,*(undefined4 *)(param_1[2] + 8));
        lVar16 = param_1[4];
        if ((int)*param_3 == 8) {
          iVar9 = (int)param_3[1];
        }
        else {
          iVar9 = -1;
        }
        if ((int)*param_4 == 8) {
          iVar6 = (int)param_4[1];
        }
        else {
          iVar6 = -1;
        }
        iVar8 = FUN_0012ea70(param_1);
        if (iVar6 < iVar9) {
          if (iVar8 <= iVar9) {
            *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
          }
          iVar9 = FUN_0012ea70(param_1);
          if (iVar9 <= iVar6) goto LAB_001370ec;
        }
        else {
          if (iVar8 <= iVar6) {
            *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
          }
          iVar6 = FUN_0012ea70(param_1);
          if (iVar6 <= iVar9) {
LAB_001370ec:
            *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
          }
        }
        *(int *)(param_3 + 1) = (int)lVar16 + -1;
        *(int *)param_3 = 0x11;
        uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
        if (uVar14 == 0xffffff80) {
          *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
          cVar12 = -0x7f;
        }
        else {
          *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
          cVar12 = *(char *)((long)param_1 + 0x45) + -1;
        }
        *(char *)((long)param_1 + 0x45) = cVar12;
        FUN_00133660(param_1,*param_1,param_5);
        uVar14 = iVar4 * 0x10000 | iVar7 << 7 | 0x1000002f;
        goto LAB_00137170;
      }
      iVar4 = FUN_001345b0(param_1,param_4);
      iVar7 = FUN_001345b0(param_1,param_3);
      lVar19 = *param_1;
      lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                            (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar19 + 0x40) = lVar16;
      lVar15 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar15 + 1;
      *(uint *)(lVar16 + (long)(int)lVar15 * 4) = iVar4 << 0x18 | iVar7 << 0x10 | 0x2c;
      FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
      lVar15 = param_1[4];
      if ((int)*param_3 == 8) {
        iVar9 = (int)param_3[1];
      }
      else {
        iVar9 = -1;
      }
      if ((int)*param_4 == 8) {
        iVar6 = (int)param_4[1];
      }
      else {
        iVar6 = -1;
      }
      iVar8 = FUN_0012ea70(param_1);
      if (iVar6 < iVar9) {
        if (iVar8 <= iVar9) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar9 = FUN_0012ea70(param_1);
        if (iVar9 <= iVar6) goto LAB_00136a3c;
      }
      else {
        if (iVar8 <= iVar6) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar6 = FUN_0012ea70(param_1);
        if (iVar6 <= iVar9) {
LAB_00136a3c:
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
      }
      *(int *)(param_3 + 1) = (int)lVar15 + -1;
      *(int *)param_3 = 0x11;
      uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
      if (uVar14 == 0xffffff80) {
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
        cVar12 = -0x7f;
      }
      else {
        *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
        cVar12 = *(char *)((long)param_1 + 0x45) + -1;
      }
      *(char *)((long)param_1 + 0x45) = cVar12;
      FUN_00133660(param_1,*param_1,param_5);
      uVar13 = iVar4 << 0x10 | iVar7 << 7;
      uVar14 = 0x2e;
    }
    uVar14 = uVar14 | 0x10000000;
LAB_00136ab8:
    uVar13 = uVar13 | uVar14;
    break;
  case 0xb:
    if ((((int)*param_4 == 6) && ((int)param_4[2] == *(int *)((long)param_4 + 0x14))) &&
       (param_4[1] + 0x7fU < 0x100)) {
      iVar4 = (int)param_4[1] + 0x7f;
      iVar7 = FUN_001345b0(param_1,param_3);
      lVar19 = *param_1;
      lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                            (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
      *(long *)(lVar19 + 0x40) = lVar16;
      lVar15 = param_1[4];
      *(int *)(param_1 + 4) = (int)lVar15 + 1;
      *(uint *)(lVar16 + (long)(int)lVar15 * 4) = iVar7 << 0x10 | iVar4 * 0x1000000 | 0x20;
      FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
      lVar15 = param_1[4];
      if ((int)*param_3 == 8) {
        iVar9 = (int)param_3[1];
      }
      else {
        iVar9 = -1;
      }
      if ((int)*param_4 == 8) {
        iVar6 = (int)param_4[1];
      }
      else {
        iVar6 = -1;
      }
      iVar8 = FUN_0012ea70(param_1);
      if (iVar6 < iVar9) {
        if (iVar8 <= iVar9) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar9 = FUN_0012ea70(param_1);
        if (iVar9 <= iVar6) goto LAB_00136dfc;
      }
      else {
        if (iVar8 <= iVar6) {
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
        iVar6 = FUN_0012ea70(param_1);
        if (iVar6 <= iVar9) {
LAB_00136dfc:
          *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
        }
      }
      *(int *)(param_3 + 1) = (int)lVar15 + -1;
      *(int *)param_3 = 0x11;
      uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
      if (uVar14 == 0xffffff80) {
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
        cVar12 = -0x7f;
      }
      else {
        *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
        cVar12 = *(char *)((long)param_1 + 0x45) + -1;
      }
      *(char *)((long)param_1 + 0x45) = cVar12;
      FUN_00133660(param_1,*param_1,param_5);
      uVar13 = iVar7 << 7 | iVar4 * 0x10000;
      uVar14 = 0x1100002f;
      goto LAB_00136ab8;
    }
    iVar4 = FUN_001345b0(param_1,param_4);
    iVar7 = FUN_001345b0(param_1,param_3);
    lVar19 = *param_1;
    lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                          (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar19 + 0x40) = lVar16;
    lVar15 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar15 + 1;
    *(uint *)(lVar16 + (long)(int)lVar15 * 4) = iVar4 << 0x18 | iVar7 << 0x10 | 0x2d;
    FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
    lVar15 = param_1[4];
    if ((int)*param_3 == 8) {
      iVar9 = (int)param_3[1];
    }
    else {
      iVar9 = -1;
    }
    if ((int)*param_4 == 8) {
      iVar6 = (int)param_4[1];
    }
    else {
      iVar6 = -1;
    }
    iVar8 = FUN_0012ea70(param_1);
    if (iVar6 < iVar9) {
      if (iVar8 <= iVar9) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar9 = FUN_0012ea70(param_1);
      if (iVar9 <= iVar6) goto LAB_00136788;
    }
    else {
      if (iVar8 <= iVar6) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar6 = FUN_0012ea70(param_1);
      if (iVar6 <= iVar9) {
LAB_00136788:
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
    }
    *(int *)(param_3 + 1) = (int)lVar15 + -1;
    *(int *)param_3 = 0x11;
    uVar14 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
    if (uVar14 == 0xffffff80) {
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
      cVar12 = -0x7f;
    }
    else {
      *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
      cVar12 = *(char *)((long)param_1 + 0x45) + -1;
    }
    *(char *)((long)param_1 + 0x45) = cVar12;
    FUN_00133660(param_1,*param_1,param_5);
    uVar13 = iVar4 << 0x10 | iVar7 << 7 | 0x1100002e;
    break;
  case 0xc:
    FUN_00133b50(param_1,param_4);
    if (((int)*param_4 == 8) &&
       (lVar15 = param_4[1], iVar4 = FUN_0012ea70(param_1), iVar4 <= (int)lVar15)) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
    bVar2 = *(byte *)((long)param_1 + 0x44);
    bVar11 = bVar2 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar2) {
      if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1[2],"function or expression needs too many registers");
      }
      *(byte *)(*param_1 + 0xc) = bVar11;
      bVar11 = *(char *)((long)param_1 + 0x44) + 1;
    }
    *(byte *)((long)param_1 + 0x44) = bVar11;
    FUN_00133ee0(param_1,param_4,bVar11 - 1);
    iVar4 = (int)param_1[4];
    if (*(int *)((long)param_1 + 0x24) < iVar4) {
      puVar20 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(iVar4 + -1) * 4);
    }
    else {
      puVar20 = &DAT_03cb2738;
    }
    uVar14 = *puVar20;
    if ((uVar14 & 0x7f) == 0x35) {
      if (((int)*param_4 == 8) &&
         (lVar15 = param_4[1], iVar4 = FUN_0012ea70(param_1), iVar4 <= (int)lVar15)) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      *puVar20 = *puVar20 & 0xff008000 | (uVar14 & 0xff0000) + 0x10000 & 0xff0000 |
                 *puVar20 & 0x7f | (*(uint *)(param_3 + 1) & 0xff) << 7;
      return;
    }
    lVar15 = param_3[1];
    lVar18 = *param_1;
    lVar19 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar18 + 0x40),iVar4,
                          lVar18 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar18 + 0x40) = lVar19;
    lVar16 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar16 + 1;
    *(uint *)(lVar19 + (long)(int)lVar16 * 4) = (int)lVar15 << 7 | 0x20035;
    FUN_00133660(param_1,lVar18,*(undefined4 *)(param_1[2] + 8));
    if (((int)*param_4 == 8) &&
       (lVar15 = param_4[1], iVar4 = FUN_0012ea70(param_1), iVar4 <= (int)lVar15)) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
    lVar15 = *param_1;
    iVar4 = (int)param_1[4];
    goto LAB_00136b18;
  case 0xd:
  case 0x10:
    if ((int)*param_3 != 8) {
      local_78 = *param_3;
      local_70 = param_3[1];
      uStack_68 = param_3[2];
      lVar15 = param_4[2];
      lVar16 = *param_4;
      param_3[1] = param_4[1];
      param_3[2] = lVar15;
      *param_3 = lVar16;
      param_4[1] = local_70;
      param_4[2] = uStack_68;
      *param_4 = local_78;
    }
    iVar4 = FUN_001345b0(param_1,param_3);
    if ((int)*param_4 == 5) {
      iVar7 = FUN_0013fed0(param_4[1],&local_78,0);
      if (iVar7 != 0) {
        iVar7 = 1;
        if ((int)param_4[2] == *(int *)((long)param_4 + 0x14)) goto LAB_00136230;
        goto LAB_0013625c;
      }
LAB_00136258:
      iVar7 = 0;
LAB_0013625c:
      iVar9 = FUN_00134700(param_1,param_4);
      if (iVar9 == 0) {
        FUN_001345b0(param_1,param_4);
        iVar9 = FUN_001345b0(param_1,param_4);
        uVar14 = 0x39;
        iVar6 = (int)*param_3;
        goto joined_r0x001363e0;
      }
      iVar9 = (int)param_4[1];
      uVar14 = 0x3c;
      if ((int)*param_3 != 8) goto LAB_001363e4;
LAB_00136280:
      uVar13 = *(uint *)(param_3 + 1);
      if ((int)*param_4 == 8) goto LAB_001363f4;
LAB_00136290:
      iVar6 = -1;
      iVar8 = FUN_0012ea70(param_1);
      if (uVar13 < 0x80000000) goto LAB_00136408;
LAB_001362a4:
      if (iVar8 <= iVar6) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar6 = FUN_0012ea70(param_1);
      if ((int)uVar13 < iVar6) goto LAB_001362d4;
    }
    else {
      if ((int)*param_4 != 6) goto LAB_00136258;
      local_78 = param_4[1];
      iVar7 = 0;
      if ((int)param_4[2] != *(int *)((long)param_4 + 0x14)) goto LAB_0013625c;
LAB_00136230:
      if (0xff < local_78 + 0x7fU) goto LAB_0013625c;
      iVar9 = (int)local_78 + 0x7f;
      uVar14 = 0x3d;
      iVar6 = (int)*param_3;
joined_r0x001363e0:
      if (iVar6 == 8) goto LAB_00136280;
LAB_001363e4:
      uVar13 = 0xffffffff;
      if ((int)*param_4 != 8) goto LAB_00136290;
LAB_001363f4:
      iVar6 = (int)param_4[1];
      iVar8 = FUN_0012ea70(param_1);
      if ((int)uVar13 <= iVar6) goto LAB_001362a4;
LAB_00136408:
      if (iVar8 <= (int)uVar13) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar8 = FUN_0012ea70(param_1);
      if (iVar6 < iVar8) goto LAB_001362d4;
    }
    *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
LAB_001362d4:
    lVar19 = *param_1;
    lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                          (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar19 + 0x40) = lVar16;
    lVar15 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar15 + 1;
    *(uint *)(lVar16 + (long)(int)lVar15 * 4) =
         iVar4 << 7 | (uint)(param_2 == 0xd) << 0xf | iVar7 << 0x18 | uVar14 | iVar9 << 0x10;
    FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
    lVar19 = *param_1;
    lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                          (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar19 + 0x40) = lVar16;
    lVar15 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar15 + 1;
    *(undefined4 *)(lVar16 + (long)(int)lVar15 * 4) = 0x7fffff38;
    FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
    *(int *)(param_3 + 1) = (int)param_1[4] + -1;
    *(int *)param_3 = 0x10;
    return;
  case 0xe:
  case 0xf:
    param_2 = param_2 + 0x2c;
    goto LAB_00135d2c;
  case 0x11:
  case 0x12:
    local_78 = *param_3;
    local_70 = param_3[1];
    param_2 = param_2 + 0x29;
    uStack_68 = param_3[2];
    lVar15 = param_4[2];
    lVar16 = *param_4;
    param_3[1] = param_4[1];
    param_3[2] = lVar15;
    *param_3 = lVar16;
    param_4[1] = local_70;
    param_4[2] = uStack_68;
    *param_4 = local_78;
LAB_00135d2c:
    if ((int)*param_4 == 5) {
      iVar4 = FUN_0013fed0(param_4[1],(long)register0x00000008 + -0x58,0);
      if (iVar4 != 0) {
        iVar4 = 1;
        if ((int)param_4[2] == *(int *)((long)param_4 + 0x14)) goto LAB_001378d0;
        goto LAB_0013790c;
      }
LAB_00137908:
      iVar4 = 0;
LAB_0013790c:
      if ((int)*param_3 == 5) {
        iVar7 = FUN_0013fed0(param_3[1],(long)register0x00000008 + -0x58,0);
        if ((iVar7 != 0) && (iVar4 = 1, (int)param_3[2] == *(int *)((long)param_3 + 0x14)))
        goto LAB_0013795c;
LAB_0013796c:
        iVar6 = FUN_001345b0(param_1,param_3);
        iVar7 = FUN_001345b0(param_1,param_4);
        iVar9 = (int)*param_3;
      }
      else {
        if (((int)*param_3 != 6) ||
           (unaff_x30 = param_3[1], (int)param_3[2] != *(int *)((long)param_3 + 0x14)))
        goto LAB_0013796c;
LAB_0013795c:
        if (0xff < unaff_x30 + 0x7fU) goto LAB_0013796c;
        iVar7 = (int)unaff_x30 + 0x7f;
        iVar6 = FUN_001345b0(param_1,param_4);
        bVar3 = param_2 != 0x3a;
        param_2 = 0x40;
        if (bVar3) {
          param_2 = 0x41;
        }
        iVar9 = (int)*param_3;
      }
      if (iVar9 == 8) goto LAB_00137998;
LAB_00137b08:
      uVar14 = 0xffffffff;
      if ((int)*param_4 != 8) goto LAB_001379a8;
LAB_00137b18:
      iVar9 = (int)param_4[1];
      iVar8 = FUN_0012ea70(param_1);
      if ((int)uVar14 <= iVar9) goto LAB_001379bc;
LAB_00137b2c:
      if (iVar8 <= (int)uVar14) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar8 = FUN_0012ea70(param_1);
      if (iVar9 < iVar8) goto LAB_001379ec;
    }
    else {
      if ((int)*param_4 != 6) goto LAB_00137908;
      unaff_x30 = param_4[1];
      iVar4 = 0;
      if ((int)param_4[2] != *(int *)((long)param_4 + 0x14)) goto LAB_0013790c;
LAB_001378d0:
      if (0xff < unaff_x30 + 0x7fU) goto LAB_0013790c;
      iVar7 = (int)unaff_x30 + 0x7f;
      iVar6 = FUN_001345b0(param_1,param_3);
      param_2 = param_2 + 4;
      if ((int)*param_3 != 8) goto LAB_00137b08;
LAB_00137998:
      uVar14 = *(uint *)(param_3 + 1);
      if ((int)*param_4 == 8) goto LAB_00137b18;
LAB_001379a8:
      iVar9 = -1;
      iVar8 = FUN_0012ea70(param_1);
      if (uVar14 < 0x80000000) goto LAB_00137b2c;
LAB_001379bc:
      if (iVar8 <= iVar9) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar9 = FUN_0012ea70(param_1);
      if ((int)uVar14 < iVar9) goto LAB_001379ec;
    }
    *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
LAB_001379ec:
    lVar19 = *param_1;
    lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                          (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar19 + 0x40) = lVar16;
    lVar15 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar15 + 1;
    *(uint *)(lVar16 + (long)(int)lVar15 * 4) =
         param_2 | iVar4 << 0x18 | iVar6 << 7 | iVar7 << 0x10 | 0x8000;
    FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
    lVar19 = *param_1;
    lVar16 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar19 + 0x40),
                          (int)param_1[4],lVar19 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar19 + 0x40) = lVar16;
    lVar15 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar15 + 1;
    *(undefined4 *)(lVar16 + (long)(int)lVar15 * 4) = 0x7fffff38;
    FUN_00133660(param_1,lVar19,*(undefined4 *)(param_1[2] + 8));
    *(int *)(param_3 + 1) = (int)param_1[4] + -1;
    *(int *)param_3 = 0x10;
    return;
  case 0x13:
    iVar4 = *(int *)((long)param_3 + 0x14);
    if (iVar4 != -1) {
      if (*(uint *)((long)param_4 + 0x14) == 0xffffffff) {
        *(int *)((long)param_4 + 0x14) = iVar4;
      }
      else {
        lVar15 = *(long *)(*param_1 + 0x40);
        uVar14 = *(uint *)((long)param_4 + 0x14);
        do {
          uVar17 = uVar14;
          uVar13 = *(uint *)(lVar15 + (long)(int)uVar17 * 4);
          iVar7 = (uVar13 >> 7) - 0xffffff;
          uVar14 = 0xffffffff;
          if (iVar7 != -1) {
            uVar14 = uVar17 + iVar7 + 1;
          }
        } while (uVar14 != 0xffffffff);
LAB_00136140:
        if (iVar4 + ~uVar17 + 0xffffff >> 0x19 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00138770(param_1[2],"control structure too long");
        }
        *(uint *)(lVar15 + (long)(int)uVar17 * 4) =
             (uVar13 & 0x7f | (iVar4 + ~uVar17) * 0x80) + 0x7fffff80;
      }
    }
    goto LAB_00136b8c;
  case 0x14:
    iVar4 = (int)param_3[2];
    if (iVar4 != -1) {
      if (*(uint *)(param_4 + 2) != 0xffffffff) {
        lVar15 = *(long *)(*param_1 + 0x40);
        uVar14 = *(uint *)(param_4 + 2);
        do {
          uVar17 = uVar14;
          uVar13 = *(uint *)(lVar15 + (long)(int)uVar17 * 4);
          iVar7 = (uVar13 >> 7) - 0xffffff;
          uVar14 = 0xffffffff;
          if (iVar7 != -1) {
            uVar14 = uVar17 + iVar7 + 1;
          }
        } while (uVar14 != 0xffffffff);
        goto LAB_00136140;
      }
      *(int *)(param_4 + 2) = iVar4;
    }
LAB_00136b8c:
    lVar15 = *param_4;
    lVar16 = param_4[2];
    param_3[1] = param_4[1];
    param_3[2] = lVar16;
    *param_3 = lVar15;
switchD_00135b7c_default:
    return;
  default:
    goto switchD_00135b7c_default;
  }
  lVar15 = *param_1;
  uVar10 = *(undefined8 *)(param_1[2] + 0x38);
LAB_00136ac8:
  lVar19 = FUN_0012d3b0(uVar10,*(undefined8 *)(lVar15 + 0x40),(int)param_1[4],lVar15 + 0x18,4,
                        0x7fffffff,"opcodes");
  *(long *)(lVar15 + 0x40) = lVar19;
  lVar16 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar16 + 1;
  *(uint *)(lVar19 + (long)(int)lVar16 * 4) = uVar13;
  FUN_00133660(param_1,lVar15,*(undefined4 *)(param_1[2] + 8));
  iVar4 = (int)param_1[4];
  lVar15 = *param_1;
LAB_00136b18:
  uVar14 = (uint)*(byte *)((long)iVar4 + *(long *)(lVar15 + 0x58) + -1);
  if (uVar14 == 0xffffff80) {
    *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
    cVar12 = -0x7f;
  }
  else {
    *(uint *)(param_1 + 5) = (int)param_1[5] - uVar14;
    cVar12 = *(char *)((long)param_1 + 0x45) + -1;
  }
  *(char *)((long)param_1 + 0x45) = cVar12;
  FUN_00133660(param_1,lVar15,param_5);
  return;
}


