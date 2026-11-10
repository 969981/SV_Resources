/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d03778; name: FUN_00d03778
 */


void FUN_00d03778(long param_1,long *param_2,void *param_3)

{
  size_t __n;
  void *pvVar1;
  void *__src;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  void *__dest;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  
  uVar3 = *(ulong *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  plVar16 = (long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8));
  if (lVar6 == lVar2) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (void *)(*plVar16 + (uVar3 & 0x1ff) * 8);
  }
  if (param_3 == pvVar5) {
    uVar7 = 0;
  }
  else {
    uVar10 = ((long)param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar16) * 0x40;
    uVar7 = uVar10 - ((long)pvVar5 - *plVar16 >> 3);
    if (uVar7 != 0) {
      if ((long)uVar10 < 1) {
        uVar9 = 0x1ff - uVar10;
        uVar10 = 0x3fe - uVar10;
        if (-1 < (long)uVar9) {
          uVar10 = uVar9;
        }
        __dest = (void *)(plVar16[-((long)uVar10 >> 9)] +
                          ((uVar10 & 0x1ffffffffffffe00) - uVar9) * 8 + 0xff8);
        plVar18 = plVar16 + -((long)uVar10 >> 9);
      }
      else {
        plVar18 = (long *)((long)plVar16 + (uVar10 >> 6 & 0x3fffffffffffff8));
        __dest = (void *)(*plVar18 + (uVar10 & 0x1ff) * 8);
      }
      goto LAB_00d03810;
    }
  }
  __dest = pvVar5;
  plVar18 = plVar16;
LAB_00d03810:
  lVar14 = (long)__dest - *plVar18;
  uVar9 = *(long *)(param_1 + 0x48) - 1;
  lVar13 = lVar14 >> 3;
  uVar10 = lVar13 + 1;
  if (uVar9 >> 1 < uVar7) {
    if (lVar14 < -7) {
      uVar10 = 0x1fe - lVar13;
      uVar7 = 0x3fd - lVar13;
      if (-1 < (long)uVar10) {
        uVar7 = uVar10;
      }
      plVar16 = plVar18 + -((long)uVar7 >> 9);
      pvVar5 = (void *)(*plVar16 + ((uVar7 & 0x1ffffffffffffe00) - uVar10) * 8 + 0xff8);
    }
    else {
      plVar16 = (long *)((long)plVar18 + (uVar10 >> 6 & 0x3fffffffffffff8));
      pvVar5 = (void *)(*plVar16 + (uVar10 & 0x1ff) * 8);
    }
    uVar7 = *(long *)(param_1 + 0x48) + uVar3;
    plVar17 = (long *)(lVar2 + (uVar7 >> 6 & 0x3fffffffffffff8));
    if (lVar6 == lVar2) {
      pvVar12 = (void *)0x0;
    }
    else {
      pvVar12 = (void *)(*plVar17 + (uVar7 & 0x1ff) * 8);
    }
    if ((pvVar5 != pvVar12) &&
       (lVar13 = (((long)pvVar12 - *plVar17 >> 3) + ((long)plVar17 - (long)plVar16) * 0x40) -
                 ((long)pvVar5 - *plVar16 >> 3), 0 < lVar13)) {
      do {
        lVar6 = (*plVar16 + 0x1000) - (long)pvVar5 >> 3;
        lVar2 = lVar13;
        pvVar12 = (void *)((long)pvVar5 + lVar13 * 8);
        if (lVar6 <= lVar13) {
          lVar2 = lVar6;
          pvVar12 = (void *)(*plVar16 + 0x1000);
        }
        if ((long)pvVar12 - (long)pvVar5 != 0) {
          lVar14 = (*plVar18 - (long)__dest) + 0x1000;
          lVar4 = (long)pvVar12 - (long)pvVar5 >> 3;
          lVar6 = lVar14 >> 3;
          pvVar1 = (void *)((long)pvVar5 + lVar14);
          if (lVar4 <= lVar6) {
            lVar6 = lVar4;
            pvVar1 = pvVar12;
          }
          if ((long)pvVar1 - (long)pvVar5 != 0) {
            memmove(__dest,pvVar5,(long)pvVar1 - (long)pvVar5);
          }
          if (lVar6 != 0) {
            uVar3 = lVar6 + ((long)__dest - *plVar18 >> 3);
            if ((long)uVar3 < 1) {
              uVar7 = 0x1ff - uVar3;
              uVar3 = 0x3fe - uVar3;
              if (-1 < (long)uVar7) {
                uVar3 = uVar7;
              }
              plVar18 = plVar18 + -((long)uVar3 >> 9);
              __dest = (void *)(*plVar18 + ((uVar3 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8);
            }
            else {
              plVar18 = (long *)((long)plVar18 + (uVar3 >> 6 & 0x3fffffffffffff8));
              __dest = (void *)(*plVar18 + (uVar3 & 0x1ff) * 8);
            }
          }
          if (pvVar1 != pvVar12) {
            lVar4 = (long)pvVar12 - (long)pvVar1 >> 3;
            lVar14 = (*plVar18 - (long)__dest) + 0x1000;
            lVar6 = lVar14 >> 3;
            __src = (void *)((long)pvVar1 + lVar14);
            if (lVar4 <= lVar6) {
              lVar6 = lVar4;
              __src = pvVar12;
            }
            if ((long)__src - (long)pvVar1 != 0) {
              memmove(__dest,pvVar1,(long)__src - (long)pvVar1);
            }
            if (lVar6 != 0) {
              uVar3 = lVar6 + ((long)__dest - *plVar18 >> 3);
              if ((long)uVar3 < 1) {
                uVar7 = 0x1ff - uVar3;
                uVar3 = 0x3fe - uVar3;
                if (-1 < (long)uVar7) {
                  uVar3 = uVar7;
                }
                plVar18 = plVar18 + -((long)uVar3 >> 9);
                __dest = (void *)(*plVar18 + ((uVar3 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8);
              }
              else {
                plVar18 = (long *)((long)plVar18 + (uVar3 >> 6 & 0x3fffffffffffff8));
                __dest = (void *)(*plVar18 + (uVar3 & 0x1ff) * 8);
              }
            }
            while (__src != pvVar12) {
              lVar4 = (long)pvVar12 - (long)__src >> 3;
              lVar14 = (*plVar18 - (long)__dest) + 0x1000;
              lVar6 = lVar14 >> 3;
              pvVar1 = (void *)((long)__src + lVar14);
              if (lVar4 <= lVar6) {
                lVar6 = lVar4;
                pvVar1 = pvVar12;
              }
              if ((long)pvVar1 - (long)__src != 0) {
                memmove(__dest,__src,(long)pvVar1 - (long)__src);
              }
              __src = pvVar1;
              if (lVar6 != 0) {
                uVar3 = lVar6 + ((long)__dest - *plVar18 >> 3);
                if ((long)uVar3 < 1) {
                  uVar7 = 0x1ff - uVar3;
                  uVar3 = 0x3fe - uVar3;
                  if (-1 < (long)uVar7) {
                    uVar3 = uVar7;
                  }
                  plVar18 = plVar18 + -((long)uVar3 >> 9);
                  __dest = (void *)(*plVar18 + ((uVar3 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8);
                }
                else {
                  plVar18 = (long *)((long)plVar18 + (uVar3 >> 6 & 0x3fffffffffffff8));
                  __dest = (void *)(*plVar18 + (uVar3 & 0x1ff) * 8);
                }
              }
            }
          }
        }
        lVar13 = lVar13 - lVar2;
        if (lVar2 != 0) {
          uVar3 = lVar2 + ((long)pvVar5 - *plVar16 >> 3);
          if ((long)uVar3 < 1) {
            uVar7 = 0x1ff - uVar3;
            uVar3 = 0x3fe - uVar3;
            if (-1 < (long)uVar7) {
              uVar3 = uVar7;
            }
            plVar16 = plVar16 + -((long)uVar3 >> 9);
            pvVar5 = (void *)(*plVar16 + ((uVar3 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8);
          }
          else {
            plVar16 = (long *)((long)plVar16 + (uVar3 >> 6 & 0x3fffffffffffff8));
            pvVar5 = (void *)(*plVar16 + (uVar3 & 0x1ff) * 8);
          }
        }
      } while (0 < lVar13);
      uVar3 = *(ulong *)(param_1 + 0x40);
      uVar9 = *(long *)(param_1 + 0x48) - 1;
      lVar2 = *(long *)(param_1 + 8);
      lVar6 = *(long *)(param_1 + 0x10);
    }
    lVar13 = 0;
    if (lVar6 - lVar2 != 0) {
      lVar13 = (lVar6 - lVar2) * 0x40 + -1;
    }
    *(ulong *)(param_1 + 0x48) = uVar9;
    if (0x3ff < lVar13 - (uVar3 + uVar9)) {
      plVar16 = *(long **)(param_1 + 0x50);
      uVar15 = *(undefined8 *)(lVar6 + -8);
      uVar3 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar15,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar16,uVar15,0x1000,8);
      }
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    }
  }
  else {
    if (lVar14 < -7) {
      uVar10 = 0x1fe - lVar13;
      uVar7 = 0x3fd - lVar13;
      if (-1 < (long)uVar10) {
        uVar7 = uVar10;
      }
      plVar17 = plVar18 + -((long)uVar7 >> 9);
      lVar2 = *plVar17 + ((uVar7 & 0x1ffffffffffffe00) - uVar10) * 8 + 0xff8;
    }
    else {
      plVar17 = (long *)((long)plVar18 + (uVar10 >> 6 & 0x3fffffffffffff8));
      lVar2 = *plVar17 + (uVar10 & 0x1ff) * 8;
    }
    if ((__dest != pvVar5) &&
       (lVar6 = (lVar13 + ((long)plVar18 - (long)plVar16) * 0x40) - ((long)pvVar5 - *plVar16 >> 3),
       0 < lVar6)) {
      do {
        pvVar5 = (void *)*plVar18;
        if (pvVar5 == __dest) {
          plVar18 = plVar18 + -1;
          pvVar5 = (void *)*plVar18;
          __dest = (void *)((long)pvVar5 + 0x1000);
        }
        lVar14 = (long)__dest - (long)pvVar5 >> 3;
        lVar13 = lVar6;
        pvVar12 = (void *)((long)__dest + lVar6 * -8);
        if (lVar14 <= lVar6) {
          lVar13 = lVar14;
          pvVar12 = pvVar5;
        }
        if (__dest != pvVar12) {
          pvVar5 = __dest;
          do {
            lVar14 = lVar2 - *plVar17 >> 3;
            if (lVar2 - *plVar17 < 9) {
              uVar7 = 0x200 - lVar14;
              uVar3 = 0x3ff - lVar14;
              if (-1 < (long)uVar7) {
                uVar3 = uVar7;
              }
              plVar16 = plVar17 + -((long)uVar3 >> 9);
              lVar14 = *plVar16 + ((uVar3 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8;
            }
            else {
              plVar16 = (long *)((long)plVar17 + (lVar14 - 1U >> 6 & 0x3fffffffffffff8));
              lVar14 = *plVar16 + (lVar14 - 1U & 0x1ff) * 8;
            }
            lVar11 = (long)pvVar5 - (long)pvVar12 >> 3;
            lVar8 = (lVar14 + 8) - *plVar16;
            lVar4 = lVar8 >> 3;
            pvVar1 = (void *)((long)pvVar5 - lVar8);
            if (lVar11 <= lVar4) {
              lVar4 = lVar11;
              pvVar1 = pvVar12;
            }
            __n = (long)pvVar5 - (long)pvVar1;
            if (__n != 0) {
              memmove((void *)((lVar14 + 8) - __n),pvVar1,__n);
            }
            if (lVar4 != 0) {
              uVar3 = (lVar2 - *plVar17 >> 3) - lVar4;
              if ((long)uVar3 < 1) {
                uVar7 = 0x1ff - uVar3;
                uVar3 = 0x3fe - uVar3;
                if (-1 < (long)uVar7) {
                  uVar3 = uVar7;
                }
                plVar17 = plVar17 + -((long)uVar3 >> 9);
                lVar2 = *plVar17 + ((uVar3 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8;
              }
              else {
                plVar17 = (long *)((long)plVar17 + (uVar3 >> 6 & 0x3fffffffffffff8));
                lVar2 = *plVar17 + (uVar3 & 0x1ff) * 8;
              }
            }
            pvVar5 = pvVar1;
          } while (pvVar1 != pvVar12);
        }
        __dest = (void *)((long)__dest + -8);
        lVar6 = lVar6 - lVar13;
        if (lVar13 + -1 != 0) {
          uVar3 = ((long)__dest - *plVar18 >> 3) - (lVar13 + -1);
          if ((long)uVar3 < 1) {
            uVar7 = 0x1ff - uVar3;
            uVar3 = 0x3fe - uVar3;
            if (-1 < (long)uVar7) {
              uVar3 = uVar7;
            }
            plVar18 = plVar18 + -((long)uVar3 >> 9);
            __dest = (void *)(*plVar18 + ((uVar3 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8);
          }
          else {
            plVar18 = (long *)((long)plVar18 + (uVar3 >> 6 & 0x3fffffffffffff8));
            __dest = (void *)(*plVar18 + (uVar3 & 0x1ff) * 8);
          }
        }
      } while (0 < lVar6);
      uVar3 = *(ulong *)(param_1 + 0x40);
      uVar9 = *(long *)(param_1 + 0x48) - 1;
    }
    *(ulong *)(param_1 + 0x40) = uVar3 + 1;
    *(ulong *)(param_1 + 0x48) = uVar9;
    if (0x3ff < uVar3 + 1) {
      plVar16 = *(long **)(param_1 + 0x50);
      uVar15 = **(undefined8 **)(param_1 + 8);
      uVar3 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar15,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar16,uVar15,0x1000,8);
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x200;
    }
  }
  return;
}


