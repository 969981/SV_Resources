/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d73c60; name: FUN_00d73c60
 */


void FUN_00d73c60(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  float fVar17;
  float fVar18;
  
LAB_00d73c88:
  puVar15 = param_2 + -1;
  puVar12 = param_1;
LAB_00d73c90:
  param_1 = puVar12;
  lVar9 = (long)param_2 - (long)param_1;
  uVar7 = lVar9 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    return;
  case 2:
    uVar7 = *puVar15;
    if (*(float *)(*(long *)(*(long *)*param_3 + (uVar7 >> 0x1d & 0x7fffffff8)) + 0x90) <=
        *(float *)(*(long *)(*(long *)*param_3 + (*param_1 >> 0x1d & 0x7fffffff8)) + 0x90)) {
      return;
    }
    if ((*param_1 & 0xff) == 0) {
      if ((uVar7 & 0xff) == 0) {
        return;
      }
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + -4);
      *(undefined1 *)param_1 = 1;
      *(undefined1 *)(param_2 + -1) = 0;
      return;
    }
    uVar1 = *(undefined4 *)((long)param_1 + 4);
    if ((uVar7 & 0xff) == 0) {
      *(undefined4 *)((long)param_2 + -4) = uVar1;
      *(undefined1 *)(param_2 + -1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + -4);
    *(undefined4 *)((long)param_2 + -4) = uVar1;
    return;
  case 3:
    FUN_00d74370(param_1,param_1 + 1,puVar15,param_3);
    return;
  case 4:
    FUN_00d74620(param_1,param_1 + 1,param_1 + 2,puVar15,param_3);
    return;
  case 5:
    FUN_00d74830(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar15,param_3);
    return;
  }
  if (0xf7 < lVar9) {
    uVar11 = uVar7;
    if ((long)uVar7 < 0) {
      uVar11 = uVar7 + 1;
    }
    puVar12 = (ulong *)((long)param_1 + (uVar11 & 0x3ffffffffffffffe) * 4);
    if (lVar9 < 0x1f39) {
      iVar4 = FUN_00d74370(param_1,puVar12,puVar15,param_3);
    }
    else {
      uVar11 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar11 = uVar7;
      }
      lVar9 = (uVar11 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_00d74830(param_1,(undefined1 *)((long)param_1 + lVar9),puVar12,
                           (undefined1 *)((long)puVar12 + lVar9),puVar15,param_3);
    }
    lVar9 = *(long *)*param_3;
    fVar17 = *(float *)(*(long *)(lVar9 + (*param_1 >> 0x1d & 0x7fffffff8)) + 0x90);
    fVar18 = *(float *)(*(long *)(lVar9 + (*puVar12 >> 0x1d & 0x7fffffff8)) + 0x90);
    if (fVar17 <= fVar18) {
      puVar5 = param_2;
LAB_00d73f78:
      puVar10 = puVar5;
      if (param_1 + 2 != puVar10) goto code_r0x00d73f80;
      uVar7 = *puVar15;
      puVar5 = param_1 + 1;
      if (fVar17 <= *(float *)(*(long *)(lVar9 + (uVar7 >> 0x1d & 0x7fffffff8)) + 0x90)) {
        if (puVar5 == puVar15) {
          return;
        }
        puVar5 = param_1 + 2;
        while (fVar17 <= *(float *)(*(long *)(lVar9 + (puVar5[-1] >> 0x1d & 0x7fffffff8)) + 0x90)) {
          puVar5 = puVar5 + 1;
          if (param_2 == puVar5) {
            return;
          }
        }
        if ((puVar5[-1] & 0xff) == 0) {
          if ((uVar7 & 0xff) != 0) {
            *(undefined4 *)((long)puVar5 + -4) = *(undefined4 *)((long)param_2 + -4);
            *(undefined1 *)(puVar5 + -1) = 1;
            *(undefined1 *)(param_2 + -1) = 0;
          }
        }
        else {
          uVar1 = *(undefined4 *)((long)puVar5 + -4);
          if ((uVar7 & 0xff) == 0) {
            *(undefined4 *)((long)param_2 + -4) = uVar1;
            *(undefined1 *)(param_2 + -1) = 1;
            *(undefined1 *)(puVar5 + -1) = 0;
          }
          else {
            *(undefined4 *)((long)puVar5 + -4) = *(undefined4 *)((long)param_2 + -4);
            *(undefined4 *)((long)param_2 + -4) = uVar1;
          }
        }
      }
      puVar10 = puVar15;
      if (puVar5 == puVar15) {
        return;
      }
      while( true ) {
        lVar9 = *(long *)*param_3;
        fVar17 = *(float *)(*(long *)(lVar9 + (*param_1 >> 0x1d & 0x7fffffff8)) + 0x90);
        do {
          puVar12 = puVar5;
          puVar5 = puVar12 + 1;
        } while (fVar17 <= *(float *)(*(long *)(lVar9 + (*puVar12 >> 0x1d & 0x7fffffff8)) + 0x90));
        do {
          puVar16 = puVar10;
          puVar10 = puVar16 + -1;
          uVar7 = *puVar10;
        } while (*(float *)(*(long *)(lVar9 + (uVar7 >> 0x1d & 0x7fffffff8)) + 0x90) < fVar17);
        if (puVar10 <= puVar12) break;
        if ((*puVar12 & 0xff) == 0) {
          if ((uVar7 & 0xff) != 0) {
            *(undefined4 *)((long)puVar12 + 4) = *(undefined4 *)((long)puVar16 + -4);
            *(undefined1 *)puVar12 = 1;
            *(undefined1 *)puVar10 = 0;
          }
        }
        else if ((uVar7 & 0xff) == 0) {
          *(undefined4 *)((long)puVar16 + -4) = *(undefined4 *)((long)puVar12 + 4);
          *(undefined1 *)puVar10 = 1;
          *(undefined1 *)puVar12 = 0;
        }
        else {
          uVar1 = *(undefined4 *)((long)puVar12 + 4);
          *(undefined4 *)((long)puVar12 + 4) = *(undefined4 *)((long)puVar16 + -4);
          *(undefined4 *)((long)puVar16 + -4) = uVar1;
        }
      }
      goto LAB_00d7407c;
    }
    puVar5 = puVar15;
    goto LAB_00d73ef8;
  }
  FUN_00d74370(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 == param_2) {
    return;
  }
  lVar9 = 0x18;
  puVar12 = param_1 + 3;
  puVar15 = param_1 + 2;
  goto LAB_00d73cd4;
code_r0x00d73f80:
  puVar5 = puVar10 + -1;
  if (fVar18 < *(float *)(*(long *)(lVar9 + (puVar10[-2] >> 0x1d & 0x7fffffff8)) + 0x90))
  goto code_r0x00d73fa0;
  goto LAB_00d73f78;
code_r0x00d73fa0:
  puVar5 = puVar10 + -2;
  bVar3 = (puVar10[-2] & 0xff) == 0;
  if ((*param_1 & 0xff) == 0) {
    if (!bVar3) {
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)puVar10 + -0xc);
      *(undefined1 *)param_1 = 1;
      *(undefined1 *)(puVar10 + -2) = 0;
    }
  }
  else if (bVar3) {
    *(undefined4 *)((long)puVar10 + -0xc) = *(undefined4 *)((long)param_1 + 4);
    *(undefined1 *)(puVar10 + -2) = 1;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((long)param_1 + 4);
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)puVar10 + -0xc);
    *(undefined4 *)((long)puVar10 + -0xc) = uVar1;
  }
  iVar4 = iVar4 + 1;
LAB_00d73ef8:
  puVar10 = param_1 + 1;
  puVar16 = puVar10;
  if (puVar10 < puVar5) {
    while( true ) {
      lVar9 = *(long *)*param_3;
      fVar17 = *(float *)(*(long *)(lVar9 + (*puVar12 >> 0x1d & 0x7fffffff8)) + 0x90);
      puVar10 = puVar16 + -1;
      do {
        puVar8 = puVar10;
        puVar10 = puVar8 + 1;
      } while (fVar17 < *(float *)(*(long *)(lVar9 + (*puVar10 >> 0x1d & 0x7fffffff8)) + 0x90));
      puVar16 = puVar8 + 2;
      do {
        puVar6 = puVar5;
        puVar5 = puVar6 + -1;
        uVar7 = *puVar5;
      } while (*(float *)(*(long *)(lVar9 + (uVar7 >> 0x1d & 0x7fffffff8)) + 0x90) <= fVar17);
      if (puVar5 < puVar10) break;
      if ((*puVar10 & 0xff) == 0) {
        if ((uVar7 & 0xff) != 0) {
          *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)((long)puVar6 + -4);
          *(undefined1 *)puVar10 = 1;
          *(undefined1 *)puVar5 = 0;
        }
      }
      else if ((uVar7 & 0xff) == 0) {
        *(undefined4 *)((long)puVar6 + -4) = *(undefined4 *)((long)puVar8 + 0xc);
        *(undefined1 *)puVar5 = 1;
        *(undefined1 *)puVar10 = 0;
      }
      else {
        uVar1 = *(undefined4 *)((long)puVar8 + 0xc);
        *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)((long)puVar6 + -4);
        *(undefined4 *)((long)puVar6 + -4) = uVar1;
      }
      iVar4 = iVar4 + 1;
      puVar8 = puVar5;
      if (puVar12 != puVar10) {
        puVar8 = puVar12;
      }
      puVar12 = puVar8;
    }
  }
  if (puVar10 != puVar12) {
    uVar7 = *puVar12;
    if (*(float *)(*(long *)(*(long *)*param_3 + (*puVar10 >> 0x1d & 0x7fffffff8)) + 0x90) <
        *(float *)(*(long *)(*(long *)*param_3 + (uVar7 >> 0x1d & 0x7fffffff8)) + 0x90)) {
      if ((*puVar10 & 0xff) == 0) {
        if ((uVar7 & 0xff) != 0) {
          *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)((long)puVar12 + 4);
          *(undefined1 *)puVar10 = 1;
          *(undefined1 *)puVar12 = 0;
        }
      }
      else if ((uVar7 & 0xff) == 0) {
        *(undefined4 *)((long)puVar12 + 4) = *(undefined4 *)((long)puVar10 + 4);
        *(undefined1 *)puVar12 = 1;
        *(undefined1 *)puVar10 = 0;
      }
      else {
        uVar1 = *(undefined4 *)((long)puVar10 + 4);
        *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)((long)puVar12 + 4);
        *(undefined4 *)((long)puVar12 + 4) = uVar1;
      }
      iVar4 = iVar4 + 1;
    }
  }
  if (iVar4 == 0) {
    uVar7 = FUN_00d74ae0(param_1,puVar10,param_3);
    uVar11 = FUN_00d74ae0(puVar10 + 1,param_2,param_3);
    if ((uVar11 & 1) != 0) goto LAB_00d741d8;
    puVar12 = puVar10 + 1;
    if ((uVar7 & 1) != 0) goto LAB_00d73c90;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_00d73c60(puVar10 + 1,param_2,param_3);
    param_2 = puVar10;
    goto LAB_00d73c88;
  }
  FUN_00d73c60(param_1,puVar10,param_3);
  puVar12 = puVar10 + 1;
LAB_00d7407c:
  goto LAB_00d73c90;
LAB_00d741d8:
  param_2 = puVar10;
  if ((uVar7 & 1) != 0) {
    return;
  }
  goto LAB_00d73c88;
LAB_00d73cd4:
  puVar5 = puVar12;
  uVar13 = *puVar15;
  uVar7 = *puVar5;
  uVar11 = uVar7 >> 0x20;
  if (*(float *)(*(long *)(*(long *)*param_3 + (uVar13 >> 0x1d & 0x7fffffff8)) + 0x90) <
      *(float *)(*(long *)(*(long *)*param_3 + uVar11 * 8) + 0x90)) {
    lVar14 = lVar9;
    do {
      lVar2 = lVar14 + -8;
      *(ulong *)((long)param_1 + lVar14) = uVar13;
      if (lVar2 == 0) {
        puVar12 = param_1;
        goto LAB_00d73d7c;
      }
      uVar13 = *(ulong *)((long)param_1 + lVar14 + -0x10);
      lVar14 = lVar2;
    } while (*(float *)(*(long *)(*(long *)*param_3 + (uVar13 >> 0x1d & 0x7fffffff8)) + 0x90) <
             *(float *)(*(long *)(*(long *)*param_3 + uVar11 * 8) + 0x90));
    puVar12 = (ulong *)((long)param_1 + lVar2);
LAB_00d73d7c:
    *puVar12 = uVar7;
  }
  lVar9 = lVar9 + 8;
  puVar12 = puVar5 + 1;
  puVar15 = puVar5;
  if (puVar5 + 1 == param_2) {
    return;
  }
  goto LAB_00d73cd4;
}


