/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bcc048; name: FUN_00bcc048
 */


/* WARNING: Removing unreachable block (ram,0x00bcc0b8) */

undefined8 FUN_00bcc048(long param_1,ulong *param_2)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  char *pcVar15;
  ulong uVar16;
  long *plVar17;
  byte *pbVar18;
  int iVar19;
  char *pcVar20;
  byte *pbVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  
  puVar6 = PTR_DAT_047dabb0;
  lVar5 = tpidr_el0;
LAB_00bcc088:
  pbVar2 = (byte *)*param_2;
  if (pbVar2 < (byte *)param_2[1]) {
    bVar4 = *pbVar2;
    uVar10 = (ulong)(uint)bVar4;
    if ((char)bVar4 < '\x01') goto LAB_00bcc0c0;
    *(uint *)(param_2 + 4) = (uint)bVar4;
    *param_2 = (ulong)(pbVar2 + 1);
LAB_00bcc0e4:
    uVar12 = (uint)(uVar10 >> 3) & 0x1fffffff;
    iVar8 = (int)uVar10;
    if (uVar12 == 3) {
      if (iVar8 != 0x1a) goto LAB_00bcc340;
      goto LAB_00bcc390;
    }
    if (uVar12 == 2) {
      if (iVar8 == 0x12) {
LAB_00bcc16c:
        uVar10 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar10 + -1;
        if ((int)uVar10 < 1) {
          return 0;
        }
        do {
          piVar14 = *(int **)(param_1 + 0x30);
          if (piVar14 == (int *)0x0) {
            iVar8 = *(int *)(param_1 + 0x28);
            iVar19 = *(int *)(param_1 + 0x2c);
LAB_00bcc1c0:
            if (iVar8 <= iVar19) {
              FUN_00c11f04(param_1 + 0x20,(iVar19 - iVar8) + 1);
              piVar14 = *(int **)(param_1 + 0x30);
            }
            iVar19 = *piVar14;
LAB_00bcc1dc:
            *piVar14 = iVar19 + 1;
            uVar22 = FUN_00ba916c(0,*(undefined8 *)(param_1 + 0x20));
            iVar8 = *(int *)(param_1 + 0x28);
            *(int *)(param_1 + 0x28) = iVar8 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar8 * 8 + 8) = uVar22;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x28);
            iVar19 = *piVar14;
            if (iVar19 <= iVar8) {
              if (iVar19 == *(int *)(param_1 + 0x2c)) goto LAB_00bcc1c0;
              goto LAB_00bcc1dc;
            }
            *(int *)(param_1 + 0x28) = iVar8 + 1;
            uVar22 = *(undefined8 *)(piVar14 + (long)iVar8 * 2 + 2);
          }
          pbVar2 = (byte *)*param_2;
          if (pbVar2 < (byte *)param_2[1]) {
            uVar10 = (ulong)*pbVar2;
            if ((char)*pbVar2 < '\0') goto LAB_00bcc234;
            *param_2 = (ulong)(pbVar2 + 1);
          }
          else {
            uVar10 = 0;
LAB_00bcc234:
            uVar10 = FUN_00c0944c(param_2,uVar10);
            if ((long)uVar10 < 0) {
              uVar10 = 0;
            }
          }
          iVar13 = (int)param_2[3];
          iVar1 = (int)param_2[5];
          iVar8 = (iVar13 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
          iVar9 = (int)uVar10;
          uVar10 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
          param_2[1] = uVar10;
          iVar19 = 0x7fffffff;
          if (iVar9 <= 0x7fffffff - iVar8 && -1 < iVar9) {
            iVar19 = iVar8 + iVar9;
          }
          iVar8 = iVar1;
          if (iVar19 <= iVar1) {
            iVar8 = iVar19;
          }
          *(int *)(param_2 + 5) = iVar8;
          iVar19 = (int)param_2[6];
          if (iVar8 <= (int)param_2[6]) {
            iVar19 = iVar8;
          }
          iVar8 = iVar13 - iVar19;
          if (iVar8 == 0 || iVar13 < iVar19) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar8;
            param_2[1] = uVar10 - (long)iVar8;
          }
          uVar10 = FUN_00bce208(uVar22,param_2);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          pcVar20 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar8 = (int)param_2[6];
          if (iVar1 <= (int)param_2[6]) {
            iVar8 = iVar1;
          }
          cVar3 = *(char *)((long)param_2 + 0x24);
          *(int *)(param_2 + 5) = iVar1;
          param_2[1] = (ulong)pcVar20;
          iVar19 = (int)param_2[3] - iVar8;
          if (iVar19 == 0 || (int)param_2[3] < iVar8) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar20 = pcVar20 + -(long)iVar19;
            *(int *)((long)param_2 + 0x2c) = iVar19;
            param_2[1] = (ulong)pcVar20;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          if (cVar3 == '\0') {
            return 0;
          }
          pcVar15 = (char *)*param_2;
          if (pcVar20 <= pcVar15) {
            *(int *)(param_2 + 7) = (int)param_2[7] + 1;
            goto LAB_00bcc088;
          }
          if (*pcVar15 != '\x12') goto LAB_00bcc370;
          *param_2 = (ulong)(pcVar15 + 1);
        } while( true );
      }
      goto LAB_00bcc340;
    }
    if ((uVar12 == 1) && (iVar8 == 10)) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      lVar11 = *(long *)(param_1 + 0x18);
      if (lVar11 == *(long *)puVar6) {
        FUN_00b6eb88((long *)(param_1 + 0x18),*(long *)puVar6);
        lVar11 = *(long *)(param_1 + 0x18);
      }
      uVar10 = FUN_00c0d824(param_2,lVar11);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      pcVar20 = (char *)*param_2;
      if ((pcVar20 < (char *)param_2[1]) && (*pcVar20 == '\x12')) {
        *param_2 = (ulong)(pcVar20 + 1);
        goto LAB_00bcc16c;
      }
      goto LAB_00bcc088;
    }
  }
  else {
    uVar10 = 0;
LAB_00bcc0c0:
    iVar8 = FUN_00c096d0(param_2,uVar10);
    bVar7 = iVar8 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar8;
    uVar10 = (ulong)CONCAT14(bVar7,iVar8);
    if (bVar7) goto LAB_00bcc0e4;
  }
LAB_00bcc340:
  if (((uint)uVar10 == 0) || (((uint)uVar10 & 7) == 4)) {
    return 1;
  }
  uVar16 = *(ulong *)(param_1 + 8);
  if ((uVar16 & 1) == 0) {
    uVar16 = FUN_00b7714c((ulong *)(param_1 + 8));
  }
  else {
    uVar16 = uVar16 & 0xfffffffffffffffe;
  }
  uVar10 = FUN_00c01b50(param_2,uVar10 & 0xffffffff,uVar16);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  goto LAB_00bcc088;
LAB_00bcc370:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if (*pcVar15 == '\x1a') {
    *param_2 = (ulong)(pcVar15 + 1);
LAB_00bcc390:
    puVar23 = *(undefined8 **)(param_1 + 0x38);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    if (puVar23 == (undefined8 *)0x0) {
      plVar17 = *(long **)(lVar5 + 0x30);
      if (plVar17 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar17 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      puVar23 = (undefined8 *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
      puVar23[3] = 0;
      puVar23[4] = 0;
      puVar23[2] = 0;
      *puVar23 = &PTR_FUN_0455b390;
      puVar23[1] = puVar23 + 2;
      puVar23[9] = 0;
      *(undefined1 *)(puVar23 + 10) = 0;
      puVar23[5] = 0;
      puVar23[6] = 0;
      puVar23[7] = 0;
      puVar23[8] = 0;
      *(undefined8 **)(param_1 + 0x38) = puVar23;
    }
    pbVar2 = (byte *)*param_2;
    pbVar18 = (byte *)param_2[1];
    if ((pbVar2 < pbVar18) && (-1 < (char)*pbVar2)) {
      pbVar21 = pbVar2 + 1;
      uVar12 = (uint)*pbVar2;
      *param_2 = (ulong)pbVar21;
    }
    else {
      uVar12 = FUN_00c0954c(param_2);
      if ((int)uVar12 < 0) {
        return 0;
      }
      pbVar21 = (byte *)*param_2;
      pbVar18 = (byte *)param_2[1];
    }
    iVar9 = (int)param_2[3];
    iVar1 = (int)param_2[5];
    iVar13 = *(int *)((long)param_2 + 0x2c);
    param_2[1] = (ulong)(pbVar18 + iVar13);
    iVar8 = (iVar9 - iVar13) + ((int)pbVar21 - (int)pbVar18);
    iVar19 = 0x7fffffff;
    if ((int)uVar12 <= 0x7fffffff - iVar8) {
      iVar19 = iVar8 + uVar12;
    }
    iVar8 = iVar1;
    if (iVar19 <= iVar1) {
      iVar8 = iVar19;
    }
    *(int *)(param_2 + 5) = iVar8;
    iVar19 = (int)param_2[6];
    if (iVar8 <= (int)param_2[6]) {
      iVar19 = iVar8;
    }
    iVar8 = iVar9 - iVar19;
    if (iVar8 == 0 || iVar9 < iVar19) {
      *(undefined4 *)((long)param_2 + 0x2c) = 0;
    }
    else {
      *(int *)((long)param_2 + 0x2c) = iVar8;
      param_2[1] = (long)(pbVar18 + iVar13) - (long)iVar8;
    }
    uVar10 = param_2[7];
    *(int *)(param_2 + 7) = (int)uVar10 + -1;
    if ((int)uVar10 < 1) {
      return 0;
    }
    uVar10 = FUN_00bd7410(puVar23,param_2);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    *(int *)(param_2 + 5) = iVar1;
    cVar3 = *(char *)((long)param_2 + 0x24);
    uVar10 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
    iVar19 = (int)param_2[3];
    iVar8 = (int)param_2[6];
    if (iVar1 <= (int)param_2[6]) {
      iVar8 = iVar1;
    }
    iVar13 = iVar19 - iVar8;
    param_2[1] = uVar10;
    if (iVar13 == 0 || iVar19 < iVar8) {
      iVar13 = 0;
      *(undefined4 *)((long)param_2 + 0x2c) = 0;
    }
    else {
      uVar10 = uVar10 - (long)iVar13;
      *(int *)((long)param_2 + 0x2c) = iVar13;
      param_2[1] = uVar10;
    }
    *(undefined1 *)((long)param_2 + 0x24) = 0;
    *(int *)(param_2 + 7) = (int)param_2[7] + 1;
    if (cVar3 == '\0') {
      return 0;
    }
    if ((*param_2 == uVar10) && ((iVar19 == iVar1 || (iVar13 != 0)))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  }
  goto LAB_00bcc088;
}


