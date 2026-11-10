/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bad120; name: FUN_00bad120
 */


void FUN_00bad120(long *param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  long unaff_x20;
  long *plVar16;
  long unaff_x21;
  long lVar17;
  void *__s1;
  long *plVar18;
  long *plVar19;
  ulong local_68;
  
  if (param_2 == 0) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      lVar17 = tpidr_el0;
      plVar9 = *(long **)(lVar17 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar17 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar6,0,8);
      }
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d == 0) {
    unaff_x21 = param_2 << 3;
    unaff_x20 = tpidr_el0;
    plVar9 = *(long **)(unaff_x20 + 0x30);
    local_68 = param_2;
    if (plVar9 != (long *)0x0) goto LAB_00bad178;
    if ((DAT_04859438 & 1) == 0) goto LAB_00bad684;
  }
  else {
    FUN_01f6e360();
LAB_00bad684:
    iVar5 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar5 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar9 = DAT_04859430;
  *(long **)(unaff_x20 + 0x30) = DAT_04859430;
LAB_00bad178:
  lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,unaff_x21,8);
  lVar17 = *param_1;
  *param_1 = lVar6;
  if (lVar17 != 0) {
    plVar9 = *(long **)(unaff_x20 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(unaff_x20 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar17,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar17,0,8);
    }
  }
  uVar4 = local_68 - 1;
  uVar7 = local_68;
  if (local_68 == 0 || uVar4 == 0) {
    uVar7 = 1;
  }
  uVar10 = uVar7 & 3;
  param_1[1] = local_68;
  if (uVar7 - 1 < 3) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar11 * 8) = 0;
      *(undefined8 *)(*param_1 + uVar11 * 8 + 8) = 0;
      *(undefined8 *)(*param_1 + uVar11 * 8 + 0x10) = 0;
      lVar6 = uVar11 * 8;
      uVar11 = uVar11 + 4;
      *(undefined8 *)(*param_1 + lVar6 + 0x18) = 0;
    } while ((uVar7 & 0xfffffffffffffffc) != uVar11);
  }
  if (uVar10 != 0) {
    lVar6 = uVar11 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar6) = 0;
      uVar10 = uVar10 - 1;
      lVar6 = lVar6 + 8;
    } while (uVar10 != 0);
  }
  plVar9 = (long *)param_1[2];
  if (plVar9 != (long *)0x0) {
    uVar7 = local_68 - (local_68 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar10 = plVar9[1];
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar10 = uVar10 & uVar4;
    }
    else if (local_68 <= uVar10) {
      uVar11 = 0;
      if (local_68 != 0) {
        uVar11 = uVar10 / local_68;
      }
      uVar10 = uVar10 - uVar11 * local_68;
    }
    *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
    for (plVar19 = (long *)*plVar9; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
      uVar11 = plVar19[1];
      if (uVar7 < 2) {
        uVar11 = uVar11 & uVar4;
      }
      else if (local_68 <= uVar11) {
        uVar15 = 0;
        if (local_68 != 0) {
          uVar15 = uVar11 / local_68;
        }
        uVar11 = uVar11 - uVar15 * local_68;
      }
      if (uVar11 == uVar10) {
        uVar11 = uVar10;
      }
      else if (*(long *)(*param_1 + uVar11 * 8) == 0) {
        *(long **)(*param_1 + uVar11 * 8) = plVar9;
      }
      else {
        plVar18 = (long *)*plVar19;
        plVar16 = plVar19;
        if (plVar18 != (long *)0x0) {
          bVar3 = *(byte *)(plVar19 + 2);
          __n = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            __n = plVar19[3];
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
              uVar15 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
              if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                uVar15 = plVar18[3];
              }
              while( true ) {
                plVar8 = plVar18;
                if (uVar15 != 0) break;
                plVar18 = (long *)*plVar8;
                plVar16 = plVar8;
                if (plVar18 == (long *)0x0) break;
                uVar15 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
                if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                  uVar15 = plVar18[3];
                }
              }
            }
            else {
              plVar8 = plVar19;
              do {
                plVar16 = plVar18;
                bVar2 = *(byte *)(plVar16 + 2);
                sVar1 = (ulong)(bVar2 >> 1);
                if ((bVar2 & 1) != 0) {
                  sVar1 = plVar16[3];
                }
                if (__n != sVar1) {
LAB_00bad4c0:
                  plVar16 = plVar8;
                  break;
                }
                pcVar14 = (char *)plVar16[4];
                if ((bVar2 & 1) == 0) {
                  pcVar14 = (char *)((long)plVar16 + 0x11);
                }
                pcVar13 = (char *)((long)plVar19 + 0x11);
                uVar15 = (ulong)(bVar3 >> 1);
                do {
                  if (*pcVar13 != *pcVar14) goto LAB_00bad4c0;
                  uVar15 = uVar15 - 1;
                  pcVar13 = pcVar13 + 1;
                  pcVar14 = pcVar14 + 1;
                } while (uVar15 != 0);
                plVar8 = plVar16;
                plVar18 = (long *)*plVar16;
              } while ((long *)*plVar16 != (long *)0x0);
            }
          }
          else {
            bVar3 = *(byte *)(plVar18 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar18[3];
            }
            if (__n == 0) {
              while( true ) {
                plVar8 = plVar18;
                if (sVar1 != 0) break;
                plVar18 = (long *)*plVar8;
                plVar16 = plVar8;
                if (plVar18 == (long *)0x0) break;
                sVar1 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
                if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                  sVar1 = plVar18[3];
                }
              }
            }
            else if (__n == sVar1) {
              __s1 = (void *)plVar19[4];
              pvVar12 = (void *)plVar18[4];
              if ((bVar3 & 1) == 0) {
                pvVar12 = (void *)((long)plVar18 + 0x11);
              }
              iVar5 = memcmp(__s1,pvVar12,__n);
              while( true ) {
                plVar8 = plVar18;
                if (iVar5 != 0) break;
                plVar18 = (long *)*plVar8;
                plVar16 = plVar8;
                if (plVar18 == (long *)0x0) break;
                bVar3 = *(byte *)(plVar18 + 2);
                sVar1 = (ulong)(bVar3 >> 1);
                if ((bVar3 & 1) != 0) {
                  sVar1 = plVar18[3];
                }
                if (__n != sVar1) break;
                pvVar12 = (void *)plVar18[4];
                if ((bVar3 & 1) == 0) {
                  pvVar12 = (void *)((long)plVar18 + 0x11);
                }
                iVar5 = memcmp(__s1,pvVar12,__n);
              }
            }
          }
        }
        *plVar9 = *plVar16;
        *plVar16 = **(long **)(*param_1 + uVar11 * 8);
        **(long **)(*param_1 + uVar11 * 8) = (long)plVar19;
        plVar19 = plVar9;
        uVar11 = uVar10;
      }
      plVar9 = plVar19;
      uVar10 = uVar11;
    }
  }
  return;
}


