/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bce208; name: FUN_00bce208
 */


/* WARNING: Removing unreachable block (ram,0x00bce288) */

undefined8 FUN_00bce208(long param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  
  puVar8 = PTR_DAT_047dabb0;
LAB_00bce258:
  do {
    pbVar18 = (byte *)*param_2;
    if (pbVar18 < (byte *)param_2[1]) {
      bVar6 = *pbVar18;
      uVar12 = (ulong)(uint)bVar6;
      if ((char)bVar6 < '\x01') goto LAB_00bce290;
      *(uint *)(param_2 + 4) = (uint)bVar6;
      *param_2 = (ulong)(pbVar18 + 1);
LAB_00bce2b4:
      iVar10 = (int)uVar12;
      switch((uint)(uVar12 >> 3) & 0x1fffffff) {
      case 1:
        if (iVar10 == 10) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          lVar13 = *(long *)(param_1 + 0x18);
          if (lVar13 == *(long *)puVar8) {
            FUN_00b6eb88((long *)(param_1 + 0x18),*(long *)puVar8);
            lVar13 = *(long *)(param_1 + 0x18);
          }
          uVar12 = FUN_00c0d824(param_2,lVar13);
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          pcVar3 = (char *)*param_2;
          if ((pcVar3 < (char *)param_2[1]) && (*pcVar3 == '\x12')) {
            *param_2 = (ulong)(pcVar3 + 1);
LAB_00bce36c:
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
            lVar13 = *(long *)(param_1 + 0x20);
            if (lVar13 == *(long *)puVar8) {
              FUN_00b6eb88((long *)(param_1 + 0x20),*(long *)puVar8);
              lVar13 = *(long *)(param_1 + 0x20);
            }
            uVar12 = FUN_00c0d824(param_2,lVar13);
            if ((uVar12 & 1) == 0) {
              return 0;
            }
            pcVar3 = (char *)*param_2;
            if ((pcVar3 < (char *)param_2[1]) && (*pcVar3 == '\x1a')) {
              *param_2 = (ulong)(pcVar3 + 1);
LAB_00bce3c4:
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
              lVar13 = *(long *)(param_1 + 0x28);
              if (lVar13 == *(long *)puVar8) {
                FUN_00b6eb88((long *)(param_1 + 0x28),*(long *)puVar8);
                lVar13 = *(long *)(param_1 + 0x28);
              }
              uVar12 = FUN_00c0d824(param_2,lVar13);
              if ((uVar12 & 1) == 0) {
                return 0;
              }
              pcVar3 = (char *)*param_2;
              if ((pcVar3 < (char *)param_2[1]) && (*pcVar3 == '\"')) {
                *param_2 = (ulong)(pcVar3 + 1);
LAB_00bce41c:
                puVar19 = *(undefined8 **)(param_1 + 0x30);
                *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
                if (puVar19 == (undefined8 *)0x0) {
                  lVar13 = tpidr_el0;
                  plVar14 = *(long **)(lVar13 + 0x30);
                  if (plVar14 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar14 = DAT_04859430;
                    *(long **)(lVar13 + 0x30) = DAT_04859430;
                  }
                  puVar19 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0x58,8);
                  puVar19[3] = 0;
                  puVar19[4] = 0;
                  puVar19[2] = 0;
                  *puVar19 = &PTR_FUN_0455b460;
                  puVar19[1] = puVar19 + 2;
                  puVar19[9] = 0;
                  *(undefined1 *)(puVar19 + 10) = 0;
                  puVar19[5] = 0;
                  puVar19[6] = 0;
                  puVar19[7] = 0;
                  puVar19[8] = 0;
                  *(undefined8 **)(param_1 + 0x30) = puVar19;
                }
                pbVar18 = (byte *)*param_2;
                pbVar16 = (byte *)param_2[1];
                if ((pbVar18 < pbVar16) && (-1 < (char)*pbVar18)) {
                  pbVar17 = pbVar18 + 1;
                  uVar11 = (uint)*pbVar18;
                  *param_2 = (ulong)pbVar17;
                }
                else {
                  uVar11 = FUN_00c0954c(param_2);
                  if ((int)uVar11 < 0) {
                    return 0;
                  }
                  pbVar17 = (byte *)*param_2;
                  pbVar16 = (byte *)param_2[1];
                }
                iVar4 = (int)param_2[3];
                iVar1 = (int)param_2[5];
                iVar2 = *(int *)((long)param_2 + 0x2c);
                param_2[1] = (ulong)(pbVar16 + iVar2);
                iVar10 = (iVar4 - iVar2) + ((int)pbVar17 - (int)pbVar16);
                iVar7 = 0x7fffffff;
                if ((int)uVar11 <= 0x7fffffff - iVar10) {
                  iVar7 = iVar10 + uVar11;
                }
                iVar10 = iVar1;
                if (iVar7 <= iVar1) {
                  iVar10 = iVar7;
                }
                *(int *)(param_2 + 5) = iVar10;
                iVar7 = (int)param_2[6];
                if (iVar10 <= (int)param_2[6]) {
                  iVar7 = iVar10;
                }
                iVar10 = iVar4 - iVar7;
                if (iVar10 == 0 || iVar4 < iVar7) {
                  *(undefined4 *)((long)param_2 + 0x2c) = 0;
                }
                else {
                  *(int *)((long)param_2 + 0x2c) = iVar10;
                  param_2[1] = (long)(pbVar16 + iVar2) - (long)iVar10;
                }
                uVar12 = param_2[7];
                *(int *)(param_2 + 7) = (int)uVar12 + -1;
                if ((int)uVar12 < 1) {
                  return 0;
                }
                uVar12 = FUN_00bd8318(puVar19,param_2);
                if ((uVar12 & 1) == 0) {
                  return 0;
                }
                pbVar16 = (byte *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
                iVar10 = (int)param_2[6];
                if (iVar1 <= (int)param_2[6]) {
                  iVar10 = iVar1;
                }
                cVar5 = *(char *)((long)param_2 + 0x24);
                *(int *)(param_2 + 5) = iVar1;
                param_2[1] = (ulong)pbVar16;
                iVar7 = (int)param_2[3] - iVar10;
                if (iVar7 == 0 || (int)param_2[3] < iVar10) {
                  *(undefined4 *)((long)param_2 + 0x2c) = 0;
                }
                else {
                  pbVar16 = pbVar16 + -(long)iVar7;
                  *(int *)((long)param_2 + 0x2c) = iVar7;
                  param_2[1] = (ulong)pbVar16;
                }
                *(undefined1 *)((long)param_2 + 0x24) = 0;
                *(int *)(param_2 + 7) = (int)param_2[7] + 1;
                if (cVar5 == '\0') {
                  return 0;
                }
                pbVar18 = (byte *)*param_2;
                if ((pbVar18 < pbVar16) && (*pbVar18 == 0x28)) {
                  pbVar18 = pbVar18 + 1;
                  *param_2 = (ulong)pbVar18;
LAB_00bce604:
                  if ((pbVar18 < pbVar16) && (-1 < (char)*pbVar18)) {
                    uVar12 = (ulong)*pbVar18;
                    *param_2 = (ulong)(pbVar18 + 1);
                  }
                  else {
                    auVar20 = FUN_00c09268(param_2);
                    uVar12 = auVar20._0_8_;
                    if ((auVar20._8_8_ & 1) == 0) {
                      return 0;
                    }
                  }
                  *(bool *)(param_1 + 0x38) = uVar12 != 0;
                  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
                  pbVar18 = (byte *)*param_2;
                  pbVar16 = (byte *)param_2[1];
                  if ((pbVar18 < pbVar16) && (*pbVar18 == 0x30)) {
                    pbVar18 = pbVar18 + 1;
                    *param_2 = (ulong)pbVar18;
LAB_00bce668:
                    if ((pbVar18 < pbVar16) && (-1 < (char)*pbVar18)) {
                      uVar12 = (ulong)*pbVar18;
                      *param_2 = (ulong)(pbVar18 + 1);
                    }
                    else {
                      auVar20 = FUN_00c09268(param_2);
                      uVar12 = auVar20._0_8_;
                      if ((auVar20._8_8_ & 1) == 0) {
                        return 0;
                      }
                    }
                    *(bool *)(param_1 + 0x39) = uVar12 != 0;
                    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
                    if ((*param_2 == param_2[1]) &&
                       ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])
                        ))) {
                      *(undefined4 *)(param_2 + 4) = 0;
                      *(undefined1 *)((long)param_2 + 0x24) = 1;
                      return 1;
                    }
                  }
                }
              }
            }
          }
          goto LAB_00bce258;
        }
        break;
      case 2:
        if (iVar10 == 0x12) goto LAB_00bce36c;
        break;
      case 3:
        if (iVar10 == 0x1a) goto LAB_00bce3c4;
        break;
      case 4:
        if (iVar10 == 0x22) goto LAB_00bce41c;
        break;
      case 5:
        if (iVar10 == 0x28) {
          pbVar18 = (byte *)*param_2;
          pbVar16 = (byte *)param_2[1];
          goto LAB_00bce604;
        }
        break;
      case 6:
        if (iVar10 == 0x30) {
          pbVar18 = (byte *)*param_2;
          pbVar16 = (byte *)param_2[1];
          goto LAB_00bce668;
        }
      }
    }
    else {
      uVar12 = 0;
LAB_00bce290:
      iVar10 = FUN_00c096d0(param_2,uVar12);
      bVar9 = iVar10 - 1U < 0x7f;
      *(int *)(param_2 + 4) = iVar10;
      uVar12 = (ulong)CONCAT14(bVar9,iVar10);
      if (bVar9) goto LAB_00bce2b4;
    }
    if (((uint)uVar12 == 0) || (((uint)uVar12 & 7) == 4)) {
      return 1;
    }
    uVar15 = *(ulong *)(param_1 + 8);
    if ((uVar15 & 1) == 0) {
      uVar15 = FUN_00b7714c((ulong *)(param_1 + 8));
    }
    else {
      uVar15 = uVar15 & 0xfffffffffffffffe;
    }
    uVar12 = FUN_00c01b50(param_2,uVar12 & 0xffffffff,uVar15);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  } while( true );
}


