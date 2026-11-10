/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d3380; name: FUN_003d3380
 */


/* WARNING: Removing unreachable block (ram,0x003d34b4) */
/* WARNING: Removing unreachable block (ram,0x003d42a8) */

long FUN_003d3380(int *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  code *pcVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  void *__s2;
  uint *puVar19;
  undefined8 uVar20;
  uint local_6c;
  long local_68;
  undefined4 local_5c;
  long local_58;
  ulong local_50;
  undefined4 local_44 [3];
  
  if (param_1[0x17] != 0x14) {
    if (param_1[0x17] != 0x1c) {
      FUN_003c3950(param_1,0x50,0x259,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x4e9);
      return 0;
    }
    if ((param_1[0x1d] == 0) && (*(long *)(*(long *)(param_1 + 0x174) + 0x1b8) != 0)) {
      if (*(long *)(*(long *)(param_1 + 0x2a) + 0xe0) == 0) {
        FUN_003c3950(param_1,0x50,0x180,0x44,"external/openssl/ssl/statem/statem_srvr.c",0xe13);
        return 0;
      }
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    iVar3 = FUN_003acf80(param_1,uVar7);
    return (ulong)(iVar3 != 0) << 1;
  }
  if (param_2 == 3) {
    local_44[0] = 0x50;
    local_58 = 0;
    local_50 = 0;
    piVar18 = *(int **)(param_1 + 0x21a);
    local_5c = 0;
    pcVar11 = *(code **)(*(long *)(param_1 + 0x198) + 0x1d0);
    if ((pcVar11 == (code *)0x0) ||
       (iVar3 = (*pcVar11)(param_1,local_44,*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x1d8)),
       iVar3 == 1)) {
      uVar9 = *(undefined8 *)(piVar18 + 4);
      uVar7 = *(undefined8 *)(piVar18 + 2);
      uVar20 = *(undefined8 *)(piVar18 + 6);
      lVar13 = *(long *)(param_1 + 0x2a);
      *(undefined8 *)(lVar13 + 0xd0) = *(undefined8 *)(piVar18 + 8);
      *(undefined8 *)(lVar13 + 200) = uVar20;
      *(undefined8 *)(lVar13 + 0xc0) = uVar9;
      *(undefined8 *)(lVar13 + 0xb8) = uVar7;
      if (*piVar18 != 0) {
        uVar4 = piVar18[1];
        if ((uVar4 == 2) || ((uVar4 & 0xff00) != 0x300)) {
          uVar10 = 0x46;
          uVar7 = 0x699;
          iVar3 = 0xfc;
          goto LAB_003d361c;
        }
        param_1[0x1ad] = uVar4;
      }
      piVar12 = *(int **)(param_1 + 2);
      uVar4 = *(uint *)(*(long *)(piVar12 + 0x30) + 0x60);
      if ((uVar4 >> 3 & 1) == 0) {
        iVar3 = FUN_003cddb0(param_1,piVar18,&local_5c);
        if (iVar3 != 0) {
LAB_003d3580:
          if ((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) == 0) ||
             (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) == 0)) {
            iVar5 = piVar18[1];
            param_1[0x1ad] = iVar5;
            *param_1 = iVar5;
          }
          uVar10 = 0x46;
          uVar7 = 0x6b2;
          goto LAB_003d361c;
        }
        piVar12 = *(int **)(param_1 + 2);
        uVar4 = *(uint *)(*(long *)(piVar12 + 0x30) + 0x60);
      }
      else if (*piVar12 != 0x1ffff) {
        iVar3 = 0xff00;
        if (piVar18[1] != 0x100) {
          iVar3 = piVar18[1];
        }
        iVar5 = 0xff00;
        if (*param_1 != 0x100) {
          iVar5 = *param_1;
        }
        if (iVar5 < iVar3) {
          iVar3 = 0x18c;
          goto LAB_003d3580;
        }
      }
      if ((uVar4 >> 3 & 1) != 0) {
LAB_003d3830:
        uVar4 = FUN_003b5740(param_1);
        if ((uVar4 >> 0xd & 1) == 0) {
LAB_003d3868:
          if ((**(int **)(param_1 + 2) != 0x1ffff) ||
             (iVar3 = FUN_003cddb0(param_1,piVar18,&local_5c), iVar3 == 0)) goto LAB_003d38b8;
          uVar10 = 0x46;
          *param_1 = param_1[0x1ad];
          uVar7 = 0x6da;
        }
        else if (*(code **)(*(long *)(param_1 + 0x198) + 0xd0) == (code *)0x0) {
          __s2 = *(void **)(param_1 + 0x2c);
          if ((*(size_t *)((long)__s2 + 0x100) == *(size_t *)(piVar18 + 0x14)) &&
             (iVar3 = memcmp(piVar18 + 0x16,__s2,*(size_t *)((long)__s2 + 0x100)), iVar3 == 0))
          goto LAB_003d3860;
          uVar10 = 0x28;
          iVar3 = 0x134;
          uVar7 = 0x6d0;
        }
        else {
          iVar3 = (**(code **)(*(long *)(param_1 + 0x198) + 0xd0))
                            (param_1,piVar18 + 0x16,piVar18[0x14]);
          if (iVar3 != 0) {
            __s2 = *(void **)(param_1 + 0x2c);
LAB_003d3860:
            *(undefined4 *)((long)__s2 + 0x108) = 1;
            goto LAB_003d3868;
          }
          uVar10 = 0x28;
          iVar3 = 0x134;
          uVar7 = 0x6c6;
        }
        goto LAB_003d361c;
      }
      if ((0x303 < *piVar12) && (*piVar12 != 0x10000)) {
        iVar3 = FUN_003a4580(param_1 + 0x252);
        if (iVar3 != 0) {
          uVar10 = 10;
          iVar3 = 0xb6;
          uVar7 = 0x6ba;
          goto LAB_003d361c;
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) != 0)
        goto LAB_003d3830;
      }
LAB_003d38b8:
      param_1[0x32] = 0;
      iVar3 = FUN_003b5980(param_1,piVar18 + 0x56,*piVar18);
      if ((iVar3 == 0) ||
         (iVar3 = FUN_003b5ba0(param_1,piVar18 + 0x56,&local_50,&local_58,*piVar18,1), iVar3 == 0))
      goto LAB_003d3620;
      *(undefined4 *)(*(long *)(param_1 + 0x2a) + 0x3d8) = 0;
      if ((local_58 != 0) && (iVar3 = FUN_0047e430(), 0 < iVar3)) {
        iVar3 = 0;
        do {
          uVar7 = FUN_0047e450(local_58,iVar3);
          iVar5 = FUN_003b1c10();
          if (iVar5 == 0x30000ff) {
            if (param_1[0x224] != 0) {
              uVar10 = 0x28;
              iVar3 = 0x159;
              uVar7 = 0x6f4;
              goto LAB_003d361c;
            }
            *(undefined4 *)(*(long *)(param_1 + 0x2a) + 0x3d8) = 1;
          }
          else {
            iVar5 = FUN_003b1c10(uVar7);
            if ((iVar5 == 0x3005600) && (iVar5 = FUN_003cdb70(param_1), iVar5 == 0)) {
              uVar10 = 0x56;
              iVar3 = 0x175;
              uVar7 = 0x703;
              goto LAB_003d361c;
            }
          }
          iVar3 = iVar3 + 1;
          iVar5 = FUN_0047e430(local_58);
        } while (iVar3 < iVar5);
      }
      uVar8 = local_50;
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
          (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
        uVar7 = FUN_003b4400(param_1);
        lVar13 = FUN_003abbb0(param_1,uVar8,uVar7);
        if (lVar13 == 0) {
          uVar10 = 0x28;
          iVar3 = 0xc1;
          uVar7 = 0x711;
        }
        else {
          if ((param_1[0x168] != 1) ||
             ((lVar15 = *(long *)(*(long *)(param_1 + 0x2a) + 0x238), lVar15 != 0 &&
              (*(int *)(lVar15 + 0x18) == *(int *)(lVar13 + 0x18))))) {
            *(long *)(*(long *)(param_1 + 0x2a) + 0x238) = lVar13;
            goto LAB_003d3a1c;
          }
          uVar10 = 0x2f;
          iVar3 = 0xba;
          uVar7 = 0x71d;
        }
      }
      else {
LAB_003d3a1c:
        iVar3 = FUN_003ba8c0(param_1,0xd,0x80,*(undefined8 *)(piVar18 + 0xa2),0,0);
        if (iVar3 == 0) goto LAB_003d3620;
        if ((*piVar18 == 0) &&
           ((param_1[0xf] == 0 || ((*(byte *)((long)param_1 + 0x696) & 1) == 0)))) {
          iVar3 = FUN_003b97c0(param_1,piVar18);
          if (iVar3 == -1) goto LAB_003d3620;
          if (iVar3 != 1) goto LAB_003d3a44;
          param_1[0x32] = 1;
          piVar12 = *(int **)(param_1 + 2);
          uVar4 = *(uint *)(*(long *)(piVar12 + 0x30) + 0x60);
        }
        else {
LAB_003d3a44:
          iVar3 = FUN_003b92e0(param_1,1);
          if (iVar3 == 0) goto LAB_003d3620;
          piVar12 = *(int **)(param_1 + 2);
          uVar4 = *(uint *)(*(long *)(piVar12 + 0x30) + 0x60);
        }
        if ((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar12)) && (*piVar12 != 0x10000)) {
          memcpy(param_1 + 0x17e,(void *)(*(long *)(param_1 + 0x21a) + 0x30),
                 *(size_t *)(*(long *)(param_1 + 0x21a) + 0x28));
          *(undefined8 *)(param_1 + 0x186) = *(undefined8 *)(*(long *)(param_1 + 0x21a) + 0x28);
          uVar4 = *(uint *)(*(long *)(piVar12 + 0x30) + 0x60);
        }
        if (((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar12)) && (*piVar12 != 0x10000)) ||
           (param_1[0x32] == 0)) {
LAB_003d3d04:
          lVar13 = *(long *)(piVar18 + 0x5a);
          if (lVar13 != 0) {
            piVar12 = piVar18 + 0x5c;
            do {
              if ((char)*piVar12 == '\0') {
                if ((((*(byte *)(param_1 + 0x1a5) >> 6 & 1) != 0) &&
                    (uVar8 = *(ulong *)(piVar18 + 0x9e), 3 < uVar8)) &&
                   ((uVar8 & 0xfffffffffffffffe) != 4)) {
                  lVar15 = *(long *)(piVar18 + 0x9c);
                  uVar17 = (((ulong)*(ushort *)(lVar15 + 4) & 0xff00) << 0x28 |
                           (ulong)*(ushort *)(lVar15 + 4) << 0x38) >> 0x30;
                  lVar13 = (uVar8 - 6) - uVar17;
                  if ((uVar17 <= uVar8 - 6) &&
                     ((*(ushort *)(lVar15 + 2) & 0xff00) == 0 &&
                      (*(ushort *)(lVar15 + 2) & 0xff) == 0)) {
                    uVar4 = FUN_003b5460(param_1);
                    if ((uVar4 & 0xffffff00) == 0x300) {
                      iVar3 = FUN_003b5460(param_1);
                      lVar14 = 0x22;
                      if (iVar3 < 0x303) {
                        lVar14 = 0x12;
                      }
                    }
                    else {
                      lVar14 = 0x12;
                    }
                    if (lVar13 == lVar14) {
                      iVar3 = FUN_003f6d80(lVar15 + uVar17 + 6,&DAT_03cdcf61,lVar13);
                      bVar2 = iVar3 == 0;
                    }
                    else {
                      bVar2 = false;
                    }
                    *(bool *)(*(long *)(param_1 + 0x2a) + 0x404) = bVar2;
                  }
                }
                iVar3 = FUN_003baa30(param_1,0x80,*(undefined8 *)(piVar18 + 0xa2),0,0,1);
                if (iVar3 == 0) goto LAB_003d3620;
                iVar3 = FUN_003ac590(param_1,1,*(long *)(param_1 + 0x2a) + 0x98,0x20,local_5c);
                if (iVar3 < 1) {
                  uVar10 = 0x50;
                  iVar3 = 0x44;
                  uVar7 = 0x7a0;
                  goto LAB_003d361c;
                }
                if (((((param_1[0x32] == 0) && (0x300 < *param_1)) &&
                     ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0))
                    && ((iVar3 = **(int **)(param_1 + 2), iVar3 < 0x304 || (iVar3 == 0x10000)))) &&
                   (*(code **)(param_1 + 0x1e8) != (code *)0x0)) {
                  local_68 = 0;
                  local_6c = 0x100;
                  iVar3 = (**(code **)(param_1 + 0x1e8))
                                    (param_1,*(long *)(param_1 + 0x174) + 0x50,&local_6c,local_50,
                                     &local_68,*(undefined8 *)(param_1 + 0x1ea));
                  uVar8 = local_50;
                  if ((iVar3 != 0) && (0 < (int)local_6c)) {
                    lVar13 = *(long *)(param_1 + 0x174);
                    *(ulong *)(lVar13 + 8) = (ulong)local_6c;
                    param_1[0x32] = 1;
                    *(ulong *)(param_1 + 0x46) = local_50;
                    *(undefined8 *)(lVar13 + 0x1c8) = 0;
                    local_50 = 0;
                    if (local_68 == 0) {
                      uVar7 = FUN_003b4400(param_1);
                      local_68 = FUN_003abbb0(param_1,uVar8,uVar7);
                      if (local_68 == 0) {
                        uVar10 = 0x28;
                        iVar3 = 0xc1;
                        uVar7 = 0x7c5;
                        goto LAB_003d361c;
                      }
                      lVar13 = *(long *)(param_1 + 0x174);
                    }
                    *(long *)(lVar13 + 0x1f0) = local_68;
                    FUN_0047db00(*(undefined8 *)(param_1 + 0x48));
                    uVar7 = FUN_0047da00(*(undefined8 *)(param_1 + 0x46));
                    *(undefined8 *)(param_1 + 0x48) = uVar7;
                    FUN_0047db00(*(undefined8 *)(param_1 + 0x4a));
                    uVar7 = FUN_0047da00(*(undefined8 *)(param_1 + 0x46));
                    *(undefined8 *)(param_1 + 0x4a) = uVar7;
                  }
                }
                *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x298) = 0;
                piVar12 = *(int **)(param_1 + 2);
                uVar4 = *(uint *)(*(long *)(piVar12 + 0x30) + 0x60);
                if ((((uVar4 >> 3 & 1) != 0) || (*piVar12 < 0x304)) || (*piVar12 == 0x10000)) {
                  uVar1 = *(uint *)(*(long *)(param_1 + 0x174) + 0x1e8);
                  if (uVar1 == 0) {
                    if (param_1[0x32] == 0) {
                      iVar3 = FUN_003cd8a0(param_1);
                      if (((iVar3 == 0) || (*(long *)(*(long *)(param_1 + 0x198) + 0x108) == 0)) ||
                         (iVar3 = FUN_0047e430(), iVar3 < 1)) goto LAB_003d40e0;
                      iVar5 = 0;
                      do {
                        puVar19 = (uint *)FUN_0047e450(*(undefined8 *)
                                                        (*(long *)(param_1 + 0x198) + 0x108),iVar5);
                        if (*(ulong *)(piVar18 + 0x5a) != 0) {
                          uVar8 = 1;
                          uVar17 = 0;
                          do {
                            uVar16 = uVar8;
                            if (*puVar19 == (uint)*(byte *)((long)piVar18 + uVar17 + 0x170)) {
                              *(uint **)(*(long *)(param_1 + 0x2a) + 0x298) = puVar19;
                              goto LAB_003d40e4;
                            }
                            uVar8 = (ulong)((int)uVar16 + 1);
                            uVar17 = uVar16;
                          } while (uVar16 < *(ulong *)(piVar18 + 0x5a));
                        }
                        iVar5 = iVar5 + 1;
                        puVar19 = (uint *)0x0;
                      } while (iVar5 != iVar3);
                      goto LAB_003d40e4;
                    }
                    puVar19 = (uint *)0x0;
                    goto LAB_003d40f8;
                  }
                  iVar3 = FUN_003cd8a0(param_1);
                  if (iVar3 == 0) {
                    uVar10 = 0x28;
                    iVar3 = 0x154;
                    uVar7 = 0x7ee;
                    goto LAB_003d361c;
                  }
                  iVar3 = FUN_0047e430(*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x108));
                  if (0 < iVar3) {
                    iVar3 = 0;
                    goto LAB_003d401c;
                  }
                  puVar19 = (uint *)0x0;
                  goto LAB_003d4144;
                }
                if (*(long *)(piVar18 + 0x5a) != 1) {
                  uVar10 = 0x2f;
                  iVar3 = 0x155;
                  uVar7 = 0x7e0;
                  goto LAB_003d361c;
                }
LAB_003d40e0:
                puVar19 = (uint *)0x0;
                goto LAB_003d40e4;
              }
              lVar13 = lVar13 + -1;
              piVar12 = (int *)((long)piVar12 + 1);
            } while (lVar13 != 0);
          }
          uVar10 = 0x32;
          iVar3 = 0xbb;
          uVar7 = 0x784;
        }
        else {
          iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x174) + 0x1f0) + 0x18);
          iVar5 = FUN_0047e430(local_50);
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              lVar13 = FUN_0047e450(local_50,iVar5);
              if (*(int *)(lVar13 + 0x18) == iVar3) goto LAB_003d3d04;
              iVar5 = iVar5 + 1;
              iVar6 = FUN_0047e430(local_50);
            } while (iVar5 < iVar6);
          }
          uVar10 = 0x2f;
          iVar3 = 0xd7;
          uVar7 = 0x776;
        }
      }
      goto LAB_003d361c;
    }
    if (iVar3 != -1) {
      iVar3 = 0xea;
      uVar7 = 0x685;
      uVar10 = local_44[0];
      goto LAB_003d361c;
    }
    param_1[10] = 7;
    bVar2 = true;
    goto LAB_003d3668;
  }
LAB_003d367c:
  if (param_2 != 5) {
    if (param_2 != 4) {
      return 1;
    }
    if (param_1[0x32] == 0) {
      pcVar11 = *(code **)(*(long *)(param_1 + 0x154) + 0x1b8);
      if (pcVar11 != (code *)0x0) {
        iVar3 = (*pcVar11)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x154) + 0x1c0));
        if (iVar3 == 0) {
          uVar8 = 0x50;
          uVar7 = 0x17a;
          uVar10 = 0x179;
          uVar9 = 0x8f7;
          goto LAB_003d3bb0;
        }
        if (iVar3 < 0) {
          param_1[10] = 4;
          return 4;
        }
        param_1[10] = 1;
      }
LAB_003d36f4:
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) ||
          (iVar3 = **(int **)(param_1 + 2), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
        uVar9 = *(undefined8 *)(param_1 + 0x46);
        uVar7 = FUN_003b4400(param_1);
        lVar13 = FUN_003abbb0(param_1,uVar9,uVar7);
        if (lVar13 == 0) {
          uVar8 = 0x28;
          uVar7 = 0x17a;
          uVar10 = 0xc1;
          uVar9 = 0x909;
          goto LAB_003d3bb0;
        }
        *(long *)(*(long *)(param_1 + 0x2a) + 0x238) = lVar13;
      }
      if (param_1[0x32] == 0) {
        lVar13 = FUN_003d9da0(param_1,1);
        if ((int)lVar13 == 0) {
          return lVar13;
        }
        if (*(code **)(param_1 + 0x250) == (code *)0x0) {
          iVar3 = *(int *)(*(long *)(param_1 + 0x174) + 0x1b0);
        }
        else {
          iVar3 = (**(code **)(param_1 + 0x250))
                            (param_1,(*(uint *)(*(long *)(*(long *)(param_1 + 0x2a) + 0x238) + 0x1c)
                                     & 6) != 0);
          *(int *)(*(long *)(param_1 + 0x174) + 0x1b0) = iVar3;
        }
        if (iVar3 != 0) {
          param_1[0x1d0] = 0;
        }
      }
    }
    else {
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
          (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) && (iVar3 != 0x10000))
      goto LAB_003d36f4;
      *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x238) =
           *(undefined8 *)(*(long *)(param_1 + 0x174) + 0x1f0);
    }
    param_1[0x1c7] = 0;
    if (((param_1[0x1c2] != -1) && (lVar13 = *(long *)(param_1 + 0x198), lVar13 != 0)) &&
       ((pcVar11 = *(code **)(lVar13 + 0x210), pcVar11 != (code *)0x0 &&
        (*(long *)(*(long *)(param_1 + 0x2a) + 0x2e0) != 0)))) {
      **(long **)(param_1 + 0x154) = *(long *)(*(long *)(param_1 + 0x2a) + 0x2e0);
      iVar3 = (*pcVar11)(param_1,*(undefined8 *)(lVar13 + 0x218));
      if (iVar3 == 0) {
        if (*(long *)(param_1 + 0x1cc) != 0) {
          param_1[0x1c7] = 1;
        }
      }
      else {
        if (iVar3 != 3) {
          uVar8 = 0x50;
          uVar7 = 0x233;
          uVar10 = 0xe2;
          uVar9 = 0x885;
          goto LAB_003d3bb0;
        }
        param_1[0x1c7] = 0;
      }
    }
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) ||
         (iVar3 = **(int **)(param_1 + 2), iVar3 < 0x304)) || (iVar3 == 0x10000)) &&
       (lVar13 = FUN_003d42d0(param_1), (int)lVar13 == 0)) {
      return lVar13;
    }
  }
  local_50 = CONCAT44(local_50._4_4_,0x70);
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x2a) + 0x238) + 0x1c) >> 5 & 1) == 0) ||
     (*(long *)(param_1 + 0x232) == 0)) {
    return 1;
  }
  if (*(long *)(param_1 + 0x238) == 0) {
    uVar8 = 0x73;
    uVar7 = 0x25e;
    uVar10 = 0xdf;
    uVar9 = 0x504;
  }
  else {
    iVar3 = FUN_003daa60(param_1,&local_50);
    if (iVar3 < 0) {
      param_1[10] = 4;
      return 5;
    }
    if (iVar3 != 2) {
      return 1;
    }
    uVar8 = local_50 & 0xffffffff;
    uVar10 = 0xdf;
    if ((int)local_50 != 0x73) {
      uVar10 = 0xe2;
    }
    uVar7 = 0x25e;
    uVar9 = 0x50e;
  }
LAB_003d3bb0:
  FUN_003c3950(param_1,uVar8,uVar7,uVar10,"external/openssl/ssl/statem/statem_srvr.c",uVar9);
  return 0;
  while( true ) {
    iVar3 = iVar3 + 1;
    iVar5 = FUN_0047e430(*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x108));
    if (iVar5 <= iVar3) break;
LAB_003d401c:
    puVar19 = (uint *)FUN_0047e450(*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x108),iVar3);
    if (uVar1 == *puVar19) {
      *(uint **)(*(long *)(param_1 + 0x2a) + 0x298) = puVar19;
      break;
    }
  }
LAB_003d4144:
  if (*(long *)(*(long *)(param_1 + 0x2a) + 0x298) == 0) {
    uVar10 = 0x28;
    iVar3 = 0x155;
    uVar7 = 0x7fc;
  }
  else {
    if (*(ulong *)(piVar18 + 0x5a) != 0) {
      uVar8 = 1;
      uVar17 = 0;
      do {
        uVar16 = uVar8;
        if (uVar1 == *(byte *)((long)piVar18 + uVar17 + 0x170)) goto LAB_003d40e4;
        uVar8 = (ulong)((int)uVar16 + 1);
        uVar17 = uVar16;
      } while (uVar16 < *(ulong *)(piVar18 + 0x5a));
    }
    uVar10 = 0x2f;
    iVar3 = 0x156;
    uVar7 = 0x807;
  }
  goto LAB_003d361c;
LAB_003d40e4:
  if (param_1[0x32] == 0) {
LAB_003d4110:
    FUN_0047db00(*(undefined8 *)(param_1 + 0x46));
    *(ulong *)(param_1 + 0x46) = local_50;
    if (local_50 == 0) {
      uVar10 = 0x50;
      iVar3 = 0x44;
      uVar7 = 0x83a;
LAB_003d361c:
      FUN_003c3950(param_1,uVar10,0x209,iVar3,"external/openssl/ssl/statem/statem_srvr.c",uVar7);
LAB_003d3620:
      FUN_0047db00(local_50);
      FUN_0047db00(local_58);
      FUN_00452f80(*(undefined8 *)(piVar18 + 0xa2),"external/openssl/ssl/statem/statem_srvr.c",0x855
                  );
      FUN_00452f80(*(undefined8 *)(param_1 + 0x21a),"external/openssl/ssl/statem/statem_srvr.c",
                   0x856);
      param_1[0x21a] = 0;
      param_1[0x21b] = 0;
      return 0;
    }
    local_50 = 0;
    if (param_1[0x32] == 0) {
      if (puVar19 == (uint *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar19;
      }
      *(uint *)(*(long *)(param_1 + 0x174) + 0x1e8) = uVar4;
      iVar3 = FUN_003d6e10(param_1);
      if (iVar3 == 0) goto LAB_003d3620;
    }
  }
  else {
    piVar12 = *(int **)(param_1 + 2);
    uVar4 = *(uint *)(*(long *)(piVar12 + 0x30) + 0x60);
LAB_003d40f8:
    if ((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar12)) && (*piVar12 != 0x10000)) goto LAB_003d4110;
  }
  FUN_0047db00(local_50);
  FUN_0047db00(local_58);
  FUN_00452f80(*(undefined8 *)(piVar18 + 0xa2),"external/openssl/ssl/statem/statem_srvr.c",0x84e);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x21a),"external/openssl/ssl/statem/statem_srvr.c",0x84f);
  bVar2 = false;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
LAB_003d3668:
  if (bVar2) {
    return 3;
  }
  param_2 = 4;
  goto LAB_003d367c;
}


