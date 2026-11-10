/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc4c38; name: FUN_00bc4c38
 */


undefined8 FUN_00bc4c38(long param_1,ulong *param_2)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  
  puVar9 = PTR_DAT_047dabb0;
  puVar1 = (ulong *)(param_1 + 8);
LAB_00bc4c8c:
  do {
    pbVar19 = (byte *)*param_2;
    if (pbVar19 < (byte *)param_2[1]) {
      bVar7 = *pbVar19;
      uVar13 = (ulong)(uint)bVar7;
      if ((char)bVar7 < '\x01') goto LAB_00bc4cc4;
      *(uint *)(param_2 + 4) = (uint)bVar7;
      *param_2 = (ulong)(pbVar19 + 1);
LAB_00bc4d18:
      iVar11 = (int)uVar13;
      switch((uint)(uVar13 >> 3) & 0x1fffffff) {
      case 1:
        if (iVar11 == 10) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          lVar14 = *(long *)(param_1 + 0x18);
          if (lVar14 == *(long *)puVar9) {
            FUN_00b6eb88((long *)(param_1 + 0x18),*(long *)puVar9);
            lVar14 = *(long *)(param_1 + 0x18);
          }
          uVar13 = FUN_00c0d824(param_2,lVar14);
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          pcVar4 = (char *)*param_2;
          if ((pcVar4 < (char *)param_2[1]) && (*pcVar4 == '\x12')) {
            *param_2 = (ulong)(pcVar4 + 1);
LAB_00bc4df0:
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
            lVar14 = *(long *)(param_1 + 0x30);
            if (lVar14 == *(long *)puVar9) {
              FUN_00b6eb88((long *)(param_1 + 0x30),*(long *)puVar9);
              lVar14 = *(long *)(param_1 + 0x30);
            }
            uVar13 = FUN_00c0d824(param_2,lVar14);
            if ((uVar13 & 1) == 0) {
              return 0;
            }
            pbVar19 = (byte *)*param_2;
            pbVar17 = (byte *)param_2[1];
            if ((pbVar19 < pbVar17) && (*pbVar19 == 0x18)) {
              pbVar19 = pbVar19 + 1;
              *param_2 = (ulong)pbVar19;
LAB_00bc4e4c:
              if (pbVar19 < pbVar17) {
                uVar13 = (ulong)*pbVar19;
                if ((char)*pbVar19 < '\0') goto LAB_00bc4ea8;
                *param_2 = (ulong)(pbVar19 + 1);
              }
              else {
                uVar13 = 0;
LAB_00bc4ea8:
                uVar13 = FUN_00c0944c(param_2,uVar13);
                if ((long)uVar13 < 0) {
                  return 0;
                }
              }
              *(int *)(param_1 + 0x20) = (int)uVar13;
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
              pbVar19 = (byte *)*param_2;
              pbVar17 = (byte *)param_2[1];
              if ((pbVar19 < pbVar17) && (*pbVar19 == 0x20)) {
                pbVar19 = pbVar19 + 1;
                *param_2 = (ulong)pbVar19;
LAB_00bc4ee8:
                if (pbVar19 < pbVar17) {
                  uVar13 = (ulong)*pbVar19;
                  if ((char)*pbVar19 < '\0') goto LAB_00bc4f0c;
                  *param_2 = (ulong)(pbVar19 + 1);
                }
                else {
                  uVar13 = 0;
LAB_00bc4f0c:
                  uVar13 = FUN_00c0944c(param_2,uVar13);
                  if ((long)uVar13 < 0) {
                    return 0;
                  }
                }
                iVar11 = (int)uVar13;
                if (iVar11 - 1U < 3) {
                  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
                  *(int *)(param_1 + 0x24) = iVar11;
                }
                else {
                  if ((*puVar1 & 1) == 0) {
                    uVar13 = FUN_00b7714c(puVar1);
                  }
                  else {
                    uVar13 = *puVar1 & 0xfffffffffffffffe;
                  }
                  FUN_00c001d0(uVar13,4,(long)iVar11);
                }
                pbVar19 = (byte *)*param_2;
                pbVar17 = (byte *)param_2[1];
                if ((pbVar19 < pbVar17) && (*pbVar19 == 0x28)) {
                  pbVar19 = pbVar19 + 1;
                  *param_2 = (ulong)pbVar19;
LAB_00bc4f78:
                  if (pbVar19 < pbVar17) {
                    uVar13 = (ulong)*pbVar19;
                    if ((char)*pbVar19 < '\0') goto LAB_00bc4f9c;
                    *param_2 = (ulong)(pbVar19 + 1);
                  }
                  else {
                    uVar13 = 0;
LAB_00bc4f9c:
                    uVar13 = FUN_00c0944c(param_2,uVar13);
                    if ((long)uVar13 < 0) {
                      return 0;
                    }
                  }
                  iVar11 = (int)uVar13;
                  if (iVar11 - 1U < 0x12) {
                    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
                    *(int *)(param_1 + 0x38) = iVar11;
                  }
                  else {
                    if ((*puVar1 & 1) == 0) {
                      uVar13 = FUN_00b7714c(puVar1);
                    }
                    else {
                      uVar13 = *puVar1 & 0xfffffffffffffffe;
                    }
                    FUN_00c001d0(uVar13,5,(long)iVar11);
                  }
                  pcVar4 = (char *)*param_2;
                  if ((pcVar4 < (char *)param_2[1]) && (*pcVar4 == '2')) {
                    *param_2 = (ulong)(pcVar4 + 1);
LAB_00bc5008:
                    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
                    lVar14 = *(long *)(param_1 + 0x28);
                    if (lVar14 == *(long *)puVar9) {
                      FUN_00b6eb88((long *)(param_1 + 0x28),*(long *)puVar9);
                      lVar14 = *(long *)(param_1 + 0x28);
                    }
                    uVar13 = FUN_00c0d824(param_2,lVar14);
                    if ((uVar13 & 1) == 0) {
                      return 0;
                    }
                    pcVar4 = (char *)*param_2;
                    if ((pcVar4 < (char *)param_2[1]) && (*pcVar4 == ':')) {
                      *param_2 = (ulong)(pcVar4 + 1);
LAB_00bc5060:
                      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
                      lVar14 = *(long *)(param_1 + 0x40);
                      if (lVar14 == *(long *)puVar9) {
                        FUN_00b6eb88((long *)(param_1 + 0x40),*(long *)puVar9);
                        lVar14 = *(long *)(param_1 + 0x40);
                      }
                      uVar13 = FUN_00c0d824(param_2,lVar14);
                      if ((uVar13 & 1) == 0) {
                        return 0;
                      }
                      pcVar4 = (char *)*param_2;
                      if ((pcVar4 < (char *)param_2[1]) && (*pcVar4 == 'B')) {
                        *param_2 = (ulong)(pcVar4 + 1);
LAB_00bc50b8:
                        puVar20 = *(undefined8 **)(param_1 + 0x50);
                        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
                        if (puVar20 == (undefined8 *)0x0) {
                          lVar14 = tpidr_el0;
                          plVar16 = *(long **)(lVar14 + 0x30);
                          if (plVar16 == (long *)0x0) {
                            if (((DAT_04859438 & 1) == 0) &&
                               (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
                              DAT_04859430 = DAT_04859418;
                              __cxa_guard_release(&DAT_04859438);
                            }
                            plVar16 = DAT_04859430;
                            *(long **)(lVar14 + 0x30) = DAT_04859430;
                          }
                          puVar20 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x60,8);
                          puVar20[2] = 0;
                          puVar20[3] = 0;
                          puVar20[4] = 0;
                          *(undefined4 *)(puVar20 + 0xb) = 0;
                          *puVar20 = &PTR_FUN_0455b050;
                          puVar20[1] = puVar20 + 2;
                          puVar20[5] = 0;
                          puVar20[6] = 0;
                          puVar20[7] = 0;
                          puVar20[8] = 0;
                          puVar20[9] = 0;
                          puVar20[10] = 0;
                          *(undefined8 **)(param_1 + 0x50) = puVar20;
                        }
                        pbVar19 = (byte *)*param_2;
                        pbVar17 = (byte *)param_2[1];
                        if ((pbVar19 < pbVar17) && (-1 < (char)*pbVar19)) {
                          pbVar18 = pbVar19 + 1;
                          uVar12 = (uint)*pbVar19;
                          *param_2 = (ulong)pbVar18;
                        }
                        else {
                          uVar12 = FUN_00c0954c(param_2);
                          if ((int)uVar12 < 0) {
                            return 0;
                          }
                          pbVar18 = (byte *)*param_2;
                          pbVar17 = (byte *)param_2[1];
                        }
                        iVar5 = (int)param_2[3];
                        iVar2 = (int)param_2[5];
                        iVar3 = *(int *)((long)param_2 + 0x2c);
                        param_2[1] = (ulong)(pbVar17 + iVar3);
                        iVar11 = (iVar5 - iVar3) + ((int)pbVar18 - (int)pbVar17);
                        iVar8 = 0x7fffffff;
                        if ((int)uVar12 <= 0x7fffffff - iVar11) {
                          iVar8 = iVar11 + uVar12;
                        }
                        iVar11 = iVar2;
                        if (iVar8 <= iVar2) {
                          iVar11 = iVar8;
                        }
                        *(int *)(param_2 + 5) = iVar11;
                        iVar8 = (int)param_2[6];
                        if (iVar11 <= (int)param_2[6]) {
                          iVar8 = iVar11;
                        }
                        iVar11 = iVar5 - iVar8;
                        if (iVar11 == 0 || iVar5 < iVar8) {
                          *(undefined4 *)((long)param_2 + 0x2c) = 0;
                        }
                        else {
                          *(int *)((long)param_2 + 0x2c) = iVar11;
                          param_2[1] = (long)(pbVar17 + iVar3) - (long)iVar11;
                        }
                        uVar13 = param_2[7];
                        *(int *)(param_2 + 7) = (int)uVar13 + -1;
                        if ((int)uVar13 < 1) {
                          return 0;
                        }
                        uVar13 = FUN_00bd31ac(puVar20,param_2);
                        if ((uVar13 & 1) == 0) {
                          return 0;
                        }
                        pbVar17 = (byte *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
                        iVar11 = (int)param_2[6];
                        if (iVar2 <= (int)param_2[6]) {
                          iVar11 = iVar2;
                        }
                        cVar6 = *(char *)((long)param_2 + 0x24);
                        *(int *)(param_2 + 5) = iVar2;
                        param_2[1] = (ulong)pbVar17;
                        iVar8 = (int)param_2[3] - iVar11;
                        if (iVar8 == 0 || (int)param_2[3] < iVar11) {
                          *(undefined4 *)((long)param_2 + 0x2c) = 0;
                        }
                        else {
                          pbVar17 = pbVar17 + -(long)iVar8;
                          *(int *)((long)param_2 + 0x2c) = iVar8;
                          param_2[1] = (ulong)pbVar17;
                        }
                        *(undefined1 *)((long)param_2 + 0x24) = 0;
                        *(int *)(param_2 + 7) = (int)param_2[7] + 1;
                        if (cVar6 == '\0') {
                          return 0;
                        }
                        pbVar19 = (byte *)*param_2;
                        if ((pbVar19 < pbVar17) && (*pbVar19 == 0x48)) {
                          pbVar19 = pbVar19 + 1;
                          *param_2 = (ulong)pbVar19;
LAB_00bc5264:
                          if (pbVar19 < pbVar17) {
                            uVar13 = (ulong)*pbVar19;
                            if ((char)*pbVar19 < '\0') goto LAB_00bc5288;
                            *param_2 = (ulong)(pbVar19 + 1);
                          }
                          else {
                            uVar13 = 0;
LAB_00bc5288:
                            uVar13 = FUN_00c0944c(param_2,uVar13);
                            if ((long)uVar13 < 0) {
                              return 0;
                            }
                          }
                          *(int *)(param_1 + 0x3c) = (int)uVar13;
                          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
                          pcVar4 = (char *)*param_2;
                          if ((pcVar4 < (char *)param_2[1]) && (*pcVar4 == 'R')) {
                            *param_2 = (ulong)(pcVar4 + 1);
LAB_00bc52c8:
                            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
                            lVar14 = *(long *)(param_1 + 0x48);
                            if (lVar14 == *(long *)puVar9) {
                              FUN_00b6eb88((long *)(param_1 + 0x48),*(long *)puVar9);
                              lVar14 = *(long *)(param_1 + 0x48);
                            }
                            uVar13 = FUN_00c0d824(param_2,lVar14);
                            if ((uVar13 & 1) == 0) {
                              return 0;
                            }
                            if ((*param_2 == param_2[1]) &&
                               ((*(int *)((long)param_2 + 0x2c) != 0 ||
                                ((int)param_2[3] == (int)param_2[5])))) {
                              *(undefined4 *)(param_2 + 4) = 0;
                              *(undefined1 *)((long)param_2 + 0x24) = 1;
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_00bc4c8c;
        }
        break;
      case 2:
        if (iVar11 == 0x12) goto LAB_00bc4df0;
        break;
      case 3:
        if (iVar11 == 0x18) {
          pbVar19 = (byte *)*param_2;
          pbVar17 = (byte *)param_2[1];
          goto LAB_00bc4e4c;
        }
        break;
      case 4:
        if (iVar11 == 0x20) {
          pbVar19 = (byte *)*param_2;
          pbVar17 = (byte *)param_2[1];
          goto LAB_00bc4ee8;
        }
        break;
      case 5:
        if (iVar11 == 0x28) {
          pbVar19 = (byte *)*param_2;
          pbVar17 = (byte *)param_2[1];
          goto LAB_00bc4f78;
        }
        break;
      case 6:
        if (iVar11 == 0x32) goto LAB_00bc5008;
        break;
      case 7:
        if (iVar11 == 0x3a) goto LAB_00bc5060;
        break;
      case 8:
        if (iVar11 == 0x42) goto LAB_00bc50b8;
        break;
      case 9:
        if (iVar11 == 0x48) {
          pbVar19 = (byte *)*param_2;
          pbVar17 = (byte *)param_2[1];
          goto LAB_00bc5264;
        }
        break;
      case 10:
        if (iVar11 == 0x52) goto LAB_00bc52c8;
      }
    }
    else {
      uVar13 = 0;
LAB_00bc4cc4:
      iVar11 = FUN_00c096d0(param_2,uVar13);
      bVar10 = iVar11 - 1U < 0x7f;
      *(int *)(param_2 + 4) = iVar11;
      uVar13 = (ulong)CONCAT14(bVar10,iVar11);
      if (bVar10) goto LAB_00bc4d18;
    }
    if (((uint)uVar13 == 0) || (((uint)uVar13 & 7) == 4)) {
      return 1;
    }
    if ((*puVar1 & 1) == 0) {
      uVar15 = FUN_00b7714c(puVar1);
    }
    else {
      uVar15 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar13 = FUN_00c01b50(param_2,uVar13 & 0xffffffff,uVar15);
    if ((uVar13 & 1) == 0) {
      return 0;
    }
  } while( true );
}


