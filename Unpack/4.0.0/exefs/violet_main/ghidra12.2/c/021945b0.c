/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021945b0; name: FUN_021945b0
 */


void FUN_021945b0(void *param_1,void *param_2)

{
  float *pfVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_90 [48];
  
LAB_021945e8:
  __src = (void *)((long)param_2 + -0x30);
  pvVar7 = param_1;
LAB_021945f8:
  param_1 = pvVar7;
  uVar6 = (long)param_2 - (long)param_1;
  switch(((long)uVar6 >> 4) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_0219490c_caseD_0;
  case 2:
    if (*(float *)((long)param_2 + -0x28) < *(float *)((long)param_1 + 8)) {
      memcpy(auStack_90,param_1,0x30);
      memcpy(param_1,__src,0x2c);
      memcpy(__src,auStack_90,0x2c);
      return;
    }
    return;
  case 3:
    FUN_02197130(param_1,(long)param_1 + 0x30,__src);
    return;
  case 4:
    FUN_021972c0(param_1,(long)param_1 + 0x30,(long)param_1 + 0x60,__src);
    return;
  case 5:
    FUN_021973f0(param_1,(long)param_1 + 0x30,(long)param_1 + 0x60,(long)param_1 + 0x90,__src);
    return;
  default:
    if ((long)uVar6 < 0x5d0) {
      FUN_02197580(param_1,param_2);
      return;
    }
    pvVar7 = (void *)((long)param_1 + (uVar6 / 0x60) * 0x30);
    if ((long)uVar6 < 0xbb51) {
      iVar4 = FUN_02197130(param_1,pvVar7,__src);
    }
    else {
      lVar2 = (uVar6 / 0xc0) * 2 + uVar6 / 0xc0;
      iVar4 = FUN_021973f0(param_1,(void *)((long)param_1 + lVar2 * 0x10),pvVar7,
                           (void *)((long)pvVar7 + lVar2 * 0x10),__src);
    }
    fVar11 = *(float *)((long)param_1 + 8);
    fVar12 = *(float *)((long)param_1 + (uVar6 / 0x60) * 0x30 + 8);
    if (fVar12 <= fVar11) break;
    pvVar10 = __src;
    goto LAB_02194684;
  }
  pvVar9 = (void *)((long)param_2 + -0x60);
  while (pvVar10 = pvVar9, param_1 != pvVar10) {
    pvVar9 = (void *)((long)pvVar10 + -0x30);
    if (*(float *)((long)pvVar10 + 8) < fVar12) goto code_r0x02194720;
  }
  pvVar9 = (void *)((long)param_1 + 0x30);
  if (*(float *)((long)param_2 + -0x28) <= fVar11) {
    if (pvVar9 == __src) {
      return;
    }
    pvVar9 = (void *)((long)param_1 + 0x60);
    while (*(float *)((long)pvVar9 + -0x28) <= fVar11) {
      pvVar9 = (void *)((long)pvVar9 + 0x30);
      if (param_2 == pvVar9) {
        return;
      }
    }
    memcpy(auStack_90,(void *)((long)pvVar9 + -0x30),0x30);
    memcpy((void *)((long)pvVar9 + -0x30),__src,0x2c);
    memcpy(__src,auStack_90,0x2c);
  }
  if (pvVar9 == __src) {
    return;
  }
  pvVar10 = __src;
  while( true ) {
    pvVar7 = (void *)((long)pvVar9 + -0x30);
    do {
      pvVar9 = pvVar7;
      pvVar7 = (void *)((long)pvVar9 + 0x30);
    } while (*(float *)((long)pvVar9 + 0x38) <= *(float *)((long)param_1 + 8));
    pvVar9 = (void *)((long)pvVar9 + 0x60);
    do {
      pfVar1 = (float *)((long)pvVar10 + -0x28);
      pvVar10 = (void *)((long)pvVar10 + -0x30);
    } while (*(float *)((long)param_1 + 8) < *pfVar1);
    if (pvVar10 <= pvVar7) break;
    memcpy(auStack_90,pvVar7,0x30);
    memcpy(pvVar7,pvVar10,0x2c);
    memcpy(pvVar10,auStack_90,0x2c);
  }
  goto LAB_021945f8;
code_r0x02194720:
  memcpy(auStack_90,param_1,0x30);
  memcpy(param_1,pvVar10,0x2c);
  memcpy(pvVar10,auStack_90,0x2c);
  iVar4 = iVar4 + 1;
LAB_02194684:
  pvVar9 = (void *)((long)param_1 + 0x30);
  pvVar8 = pvVar9;
  if (pvVar9 < pvVar10) {
    while( true ) {
      pvVar9 = (void *)((long)pvVar8 - 0x30);
      do {
        pvVar8 = pvVar9;
        pvVar9 = (void *)((long)pvVar8 + 0x30);
      } while (*(float *)((long)pvVar8 + 0x38) < *(float *)((long)pvVar7 + 8));
      pvVar8 = (void *)((long)pvVar8 + 0x60);
      do {
        pfVar1 = (float *)((long)pvVar10 + -0x28);
        pvVar10 = (void *)((long)pvVar10 + -0x30);
      } while (*(float *)((long)pvVar7 + 8) <= *pfVar1);
      if (pvVar10 < pvVar9) break;
      memcpy(auStack_90,pvVar9,0x30);
      memcpy(pvVar9,pvVar10,0x2c);
      memcpy(pvVar10,auStack_90,0x2c);
      iVar4 = iVar4 + 1;
      pvVar3 = pvVar10;
      if (pvVar7 != pvVar9) {
        pvVar3 = pvVar7;
      }
      pvVar7 = pvVar3;
    }
  }
  if ((pvVar9 != pvVar7) && (*(float *)((long)pvVar7 + 8) < *(float *)((long)pvVar9 + 8))) {
    memcpy(auStack_90,pvVar9,0x30);
    memcpy(pvVar9,pvVar7,0x2c);
    memcpy(pvVar7,auStack_90,0x2c);
    iVar4 = iVar4 + 1;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_021976a0(param_1,pvVar9);
    uVar5 = FUN_021976a0((void *)((long)pvVar9 + 0x30),param_2);
    if ((uVar5 & 1) != 0) goto LAB_0219496c;
    pvVar7 = (void *)((long)pvVar9 + 0x30);
    if ((uVar6 & 1) != 0) goto LAB_021945f8;
  }
  if (((long)param_2 - (long)pvVar9 >> 4) * -0x5555555555555555 <=
      ((long)pvVar9 - (long)param_1 >> 4) * -0x5555555555555555) {
    FUN_021945b0((long)pvVar9 + 0x30,param_2);
    param_2 = pvVar9;
    goto LAB_021945e8;
  }
  FUN_021945b0(param_1,pvVar9);
  pvVar7 = (void *)((long)pvVar9 + 0x30);
  goto LAB_021945f8;
LAB_0219496c:
  param_2 = pvVar9;
  if ((uVar6 & 1) != 0) {
switchD_0219490c_caseD_0:
    return;
  }
  goto LAB_021945e8;
}


