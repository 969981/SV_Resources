/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b6f50; name: FUN_034b6f50
 */


undefined8
FUN_034b6f50(undefined8 param_1,undefined4 *param_2,float *param_3,float *param_4,long *param_5,
            int *param_6,byte param_7,uint param_8)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 *local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  
  fVar16 = (float)param_1;
  if (param_3 != (float *)0x0) {
    pfVar5 = param_3;
    if (*param_3 != fVar16) goto LAB_034b6fc0;
    bVar12 = false;
LAB_034b7200:
    puVar7 = *(undefined8 **)(param_2 + 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      puVar11 = puVar7;
      do {
        if (((((puVar11[4] == *param_5) && (*(int *)(puVar11 + 5) == (int)param_5[1])) &&
             (*(int *)(puVar11 + 6) == (int)param_5[2])) &&
            ((*(char *)(puVar11 + 7) == (char)param_5[3] &&
             (*(char *)(puVar11 + 8) == (char)param_5[4])))) && (puVar11[9] == param_5[5])) {
          puVar10 = (undefined8 *)(param_2 + 0x10);
          if (puVar7 != puVar11) {
            puVar10 = puVar8 + 1;
          }
          *puVar10 = puVar11[1];
          lVar6 = puVar11[2];
          *puVar11 = &PTR_LAB_047c4410;
          if (lVar6 == 0) goto LAB_034b73fc;
          uVar3 = *(uint *)(lVar6 + 0x30);
          if (uVar3 == 0) goto LAB_034b73fc;
          puVar8 = *(undefined8 **)(lVar6 + 0x28);
          puVar7 = puVar8 + uVar3;
          if ((undefined8 *)*puVar8 == puVar11) goto LAB_034b73d0;
          lVar9 = (ulong)uVar3 * 8;
          goto LAB_034b7300;
        }
        puVar10 = puVar11 + 1;
        puVar8 = puVar11;
        puVar11 = (undefined8 *)*puVar10;
      } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
    }
    goto LAB_034b7284;
  }
  if (param_4 == (float *)0x0) {
    pfVar5 = (float *)(param_2 + 4);
  }
  else {
    pfVar5 = param_4;
  }
LAB_034b6fc0:
  fVar17 = *pfVar5;
  iVar4 = param_2[5];
  if ((iVar4 != 0) && ((char)param_6[2] == '\0')) {
    if (iVar4 == 2) {
      if (fVar16 <= fVar17) {
        fVar14 = (float)param_2[7];
      }
      else {
        fVar14 = (float)param_2[6];
      }
      fVar14 = fVar14 * 1000.0;
LAB_034b704c:
      iVar4 = (int)fVar14;
    }
    else {
      if (iVar4 == 1) {
        if (fVar16 <= fVar17) {
          fVar14 = (float)param_2[7];
          if (fVar14 != 0.0) {
            fVar15 = fVar17 - fVar16;
            goto LAB_034b7020;
          }
        }
        else {
          fVar14 = (float)param_2[6];
          if (fVar14 != 0.0) {
            fVar15 = fVar16 - fVar17;
LAB_034b7020:
            fVar14 = (fVar15 * 1000.0) / fVar14;
            goto LAB_034b704c;
          }
        }
      }
      iVar4 = 0;
    }
    iVar2 = *param_6;
    if (*param_6 <= iVar4) {
      iVar2 = iVar4;
    }
    *param_6 = iVar2;
  }
  if (*param_6 < 1) {
    bVar12 = true;
    goto LAB_034b7200;
  }
  if ((param_3 != (float *)0x0) || (iVar4 = FUN_034c8a24(*param_2,param_5), iVar4 == 1)) {
    plVar13 = (long *)(param_2 + 0x10);
    puVar7 = (undefined8 *)*plVar13;
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = puVar7;
      puVar11 = (undefined8 *)0x0;
      do {
        puVar10 = puVar8;
        if ((((puVar10[4] == *param_5) && (*(int *)(puVar10 + 5) == (int)param_5[1])) &&
            (*(int *)(puVar10 + 6) == (int)param_5[2])) &&
           (((*(char *)(puVar10 + 7) == (char)param_5[3] &&
             (*(char *)(puVar10 + 8) == (char)param_5[4])) && (puVar10[9] == param_5[5])))) {
          if (fVar17 != fVar16) {
            FUN_034e6c0c(param_1,*(undefined8 *)PTR_DAT_047e7038,puVar10[2],0x10000000,*param_6,
                         param_6[1],0);
            *(byte *)(puVar10 + 10) = param_7 & 1;
            return 1;
          }
          if (puVar7 != puVar10) {
            plVar13 = puVar11 + 1;
          }
          *plVar13 = puVar10[1];
          lVar6 = puVar10[2];
          *puVar10 = &PTR_LAB_047c4410;
          if (lVar6 == 0) goto LAB_034b7444;
          uVar3 = *(uint *)(lVar6 + 0x30);
          if (uVar3 == 0) goto LAB_034b7444;
          puVar8 = *(undefined8 **)(lVar6 + 0x28);
          puVar7 = puVar8 + uVar3;
          if ((undefined8 *)*puVar8 == puVar10) goto LAB_034b7418;
          lVar9 = (ulong)uVar3 * 8;
          goto LAB_034b73a8;
        }
        puVar8 = (undefined8 *)puVar10[1];
        puVar11 = puVar10;
      } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
    }
    if ((fVar17 != fVar16) &&
       (puVar7 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x58),
       puVar7 != (undefined8 *)0x0)) {
      *puVar7 = &PTR_LAB_047c4410;
      puVar7[2] = 0;
      puVar7[3] = param_2;
      memcpy(puVar7 + 4,param_5,0x30);
      *(undefined1 *)(puVar7 + 10) = 0;
      local_80 = *param_6;
      iStack_7c = param_6[1];
      uStack_90 = 0x10000000;
      local_74 = 0;
      local_72 = 0;
      local_78 = 7;
      if ((*(int *)(puVar7[3] + 0x14) == 2) && ((char)param_6[2] == '\0')) {
        local_72 = 1;
        lVar6 = 0x1c;
        if (fVar17 <= fVar16) {
          lVar6 = 0x18;
        }
        *param_6 = (int)(*(float *)(puVar7[3] + lVar6) * 1000.0);
      }
      *(byte *)(puVar7 + 10) = param_7 & 1;
      local_98 = puVar7;
      local_88 = fVar17;
      fStack_84 = fVar16;
      lVar6 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_98,0);
      puVar7[2] = lVar6;
      if (lVar6 != 0) {
        if (*plVar13 == 0) {
          *plVar13 = (long)puVar7;
          puVar7[1] = 0;
          return 1;
        }
        puVar7[1] = *plVar13;
        *plVar13 = (long)puVar7;
        return 1;
      }
    }
    goto joined_r0x034b745c;
  }
  goto LAB_034b7460;
  while (puVar1 = puVar8 + 1, puVar10 = puVar8 + 1, puVar8 = puVar1,
        (undefined8 *)*puVar10 != puVar11) {
LAB_034b7300:
    lVar9 = lVar9 + -8;
    if (lVar9 == 0) {
      puVar8 = puVar7;
      break;
    }
  }
LAB_034b73d0:
  if (puVar7 != puVar8) {
    if (uVar3 < 2) {
      iVar4 = 0;
    }
    else {
      *puVar8 = puVar7[-1];
      iVar4 = *(int *)(lVar6 + 0x30) + -1;
    }
    *(int *)(lVar6 + 0x30) = iVar4;
  }
LAB_034b73fc:
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
LAB_034b7284:
  if (!bVar12 && (param_7 & 1) == 0) {
    return 1;
  }
  goto joined_r0x034b745c;
  while (puVar1 = puVar8 + 1, puVar11 = puVar8 + 1, puVar8 = puVar1,
        (undefined8 *)*puVar11 != puVar10) {
LAB_034b73a8:
    lVar9 = lVar9 + -8;
    if (lVar9 == 0) {
      puVar8 = puVar7;
      break;
    }
  }
LAB_034b7418:
  if (puVar7 != puVar8) {
    if (uVar3 < 2) {
      iVar4 = 0;
    }
    else {
      *puVar8 = puVar7[-1];
      iVar4 = *(int *)(lVar6 + 0x30) + -1;
    }
    *(int *)(lVar6 + 0x30) = iVar4;
  }
LAB_034b7444:
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar10);
joined_r0x034b745c:
  if (param_3 == (float *)0x0) {
LAB_034b7460:
    pfVar5 = (float *)(param_2 + 4);
    if (param_4 != (float *)0x0) {
      pfVar5 = param_4;
    }
    if ((param_7 & 1) != 0) {
      return 1;
    }
    fVar17 = *pfVar5;
    iVar4 = FUN_034c8a24(*param_2,param_5);
    if (iVar4 != 1) {
      return 1;
    }
    param_3 = (float *)FUN_034b7674(param_2 + 8,param_5);
    if (param_3 == (float *)0x0) {
      return 1;
    }
  }
  else {
    fVar17 = *param_3;
    if ((param_7 & 1) != 0) {
      FUN_034b4d58(param_2 + 8,param_5);
      goto LAB_034b74a0;
    }
  }
  *param_3 = fVar16;
LAB_034b74a0:
  if (fVar17 != fVar16) {
    FUN_034b773c(fVar17,param_1,param_2,param_5,param_8 & 1);
  }
  return 1;
}


