/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03234cfc; name: FUN_03234cfc
 */


int FUN_03234cfc(MutexType *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  short sVar7;
  MutexType MVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  void *__dest;
  void *__dest_00;
  void *__src;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  short *psVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  int *piVar28;
  char *pcVar29;
  long *plVar30;
  long *plVar31;
  uint *puVar32;
  uint *puVar33;
  undefined8 *puVar34;
  byte local_280;
  byte local_27f;
  long *local_178;
  undefined1 uStack_170;
  byte local_16f;
  
  lVar9 = tpidr_el0;
  lVar13 = *(long *)(lVar9 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar13;
  }
  plVar30 = *(long **)(lVar13 + 0x3e0);
  if (plVar30 != (long *)0x0) {
    lVar13 = *plVar30;
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))("GetNextJob",10,*(undefined8 *)(lVar13 + 0x28));
    }
    puVar34 = (undefined8 *)plVar30[2];
    uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar30[3]) && (plVar30[2] = uVar14, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = "TtGetNextJob";
      uVar11 = nn::os::GetSystemTick();
      puVar34[1] = uVar11;
    }
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar30[6] != 0)) {
      puVar34 = (undefined8 *)plVar30[2];
      uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar30[3]) && (plVar30[2] = uVar14, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = &DAT_03c4e575;
        puVar34[1] = *(undefined8 *)(plVar30[6] + 8);
      }
    }
  }
  local_178 = plVar30;
  do {
    nn::os::LockMutex(param_1);
    lVar13 = *(long *)(param_1 + 0x20);
    lVar27 = (long)DAT_048857a0;
    lVar15 = *(long *)(lVar9 + 0x1000b8);
    if (lVar15 == 0) {
      lVar15 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar15;
    }
    if (*(int *)(lVar15 + lVar27 * 8 + 1000) == 0) {
      iVar16 = *(int *)(param_1 + 0x68);
    }
    else {
      lVar27 = (long)DAT_048857a0;
      if (lVar15 == 0) {
        lVar15 = FUN_00e5d3b4();
        *(long *)(lVar9 + 0x1000b8) = lVar15;
      }
      iVar16 = (int)*(char *)(*(long *)(param_1 + 0x130) +
                             (long)*(int *)(lVar15 + lVar27 * 8 + 1000));
    }
    lVar27 = (long)iVar16 * 0x16 + 0xbc;
    while (MVar8 = param_1[lVar27], -1 < (char)MVar8) {
      uVar14 = (ulong)(byte)MVar8;
      lVar27 = lVar27 + 1;
      piVar28 = (int *)(lVar13 + uVar14 * 0x18 + 0x4c);
      iVar16 = *piVar28;
      if (iVar16 != 0) {
        lVar15 = lVar13 + uVar14 * 0x18;
        plVar31 = (long *)(lVar15 + 0x38);
        puVar32 = (uint *)(lVar15 + 0x44);
        uVar26 = *puVar32;
        memcpy(&uStack_170,(void *)(*plVar31 + (long)(int)uVar26 * 0x100),0xf6);
        puVar33 = (uint *)(lVar15 + 0x40);
        uVar12 = 0;
        if (uVar26 + 1 != *puVar33) {
          uVar12 = uVar26 + 1;
        }
        *puVar32 = uVar12;
        *piVar28 = iVar16 + -1;
        iVar16 = (**(code **)(param_1 + 0x28))(param_1,lVar13,&uStack_170,&local_280);
        if (iVar16 != 1) goto LAB_0323558c;
        uVar12 = *puVar33;
        if ((int)uVar12 <= *piVar28) {
          uVar17 = uVar12 * 2;
          uVar26 = 8;
          if (uVar12 != 0) {
            uVar26 = uVar17;
          }
          if ((int)uVar12 < (int)uVar26) {
            uVar12 = uVar26;
            if ((int)uVar26 <= (int)uVar17) {
              uVar12 = uVar17;
            }
            __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                       (PTR_PTR_047d1a50,
                                        -(ulong)(uVar12 >> 0x1f) & 0xffffff0000000000 |
                                        (ulong)uVar12 << 8);
            if ((__dest != (void *)0x0) && (lVar15 = *plVar31, lVar15 != 0)) {
              if (*piVar28 != 0) {
                iVar16 = *(int *)(lVar13 + uVar14 * 0x18 + 0x48);
                lVar27 = (long)(int)*puVar32;
                if ((int)*puVar32 < iVar16) {
                  __src = (void *)(lVar15 + lVar27 * 0x100);
                  __dest_00 = __dest;
                  iVar16 = *piVar28;
                }
                else {
                  uVar26 = *puVar33;
                  memcpy(__dest,(void *)(lVar15 + lVar27 * 0x100),((int)uVar26 - lVar27) * 0x100);
                  __dest_00 = (void *)((long)__dest + ((int)uVar26 - lVar27) * 0x100);
                  __src = (void *)*plVar31;
                }
                memcpy(__dest_00,__src,(long)iVar16 << 8);
              }
              *puVar32 = 0;
              *(int *)(lVar13 + uVar14 * 0x18 + 0x48) = *piVar28;
            }
            if (*puVar33 != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],*plVar31,0);
              *puVar33 = 0;
              *plVar31 = 0;
            }
            *plVar31 = (long)__dest;
            *puVar33 = uVar12;
          }
        }
        uVar26 = *puVar32;
        if (*puVar32 == 0) {
          *puVar32 = uVar12;
          uVar26 = uVar12;
        }
        *puVar32 = uVar26 - 1;
        memcpy((void *)(*plVar31 + (long)(int)(uVar26 - 1) * 0x100),&uStack_170,0x100);
        *piVar28 = *piVar28 + 1;
        iVar16 = *(int *)(param_1 + 0xb8);
        if ((int)(uint)(byte)MVar8 < iVar16) {
          psVar19 = (short *)(lVar13 + uVar14 * 2 + 0x2a);
          sVar7 = *psVar19;
          if (sVar7 != 0) {
            *psVar19 = sVar7 + -1;
            lVar15 = uVar14 * 8;
            goto LAB_03235580;
          }
        }
        iVar4 = *(int *)(param_1 + 0x60);
        iVar21 = *(int *)(param_1 + 100);
        lVar15 = (long)iVar4;
        if (iVar21 <= iVar4) {
          bVar20 = 0;
          iVar21 = iVar4;
          goto LAB_032354fc;
        }
        bVar20 = 0;
        lVar25 = lVar15 * 0x18;
        lVar27 = lVar15;
        goto LAB_032354c8;
      }
    }
    iVar16 = *(int *)(param_1 + 0x60);
    uVar14 = (ulong)iVar16;
    iVar4 = *(int *)(param_1 + 100);
    if (iVar16 < iVar4) {
      uVar18 = (ulong)(uint)(iVar4 - iVar16) & 3;
      if (~uVar14 + (long)iVar4 < 3) {
        iVar21 = 0;
      }
      else {
        iVar21 = 0;
        lVar27 = -((long)iVar4 - uVar14 & 0xfffffffffffffffc);
        piVar28 = (int *)(lVar13 + uVar14 * 0x18 + 0x4c);
        do {
          iVar5 = *piVar28;
          piVar1 = piVar28 + 6;
          piVar2 = piVar28 + 0xc;
          piVar3 = piVar28 + 0x12;
          piVar28 = piVar28 + 0x18;
          iVar21 = *piVar3 + *piVar2 + *piVar1 + iVar5 + iVar21;
          uVar14 = uVar14 + 4;
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0);
      }
      if ((iVar4 - iVar16 & 3U) != 0) {
        piVar28 = (int *)(lVar13 + uVar14 * 0x18 + 0x4c);
        do {
          iVar21 = *piVar28 + iVar21;
          uVar18 = uVar18 - 1;
          piVar28 = piVar28 + 6;
        } while (uVar18 != 0);
      }
      if (iVar21 == 0) goto LAB_03234f00;
    }
    else {
LAB_03234f00:
      uVar12 = *(uint *)(param_1 + 0x38);
      if ((int)uVar12 < 1) {
        uVar26 = 0;
      }
      else {
        if (uVar12 == 1) {
          uVar14 = 0;
          uVar26 = 0;
        }
        else {
          uVar14 = 0;
          uVar26 = 0;
          do {
            uVar17 = (uint)uVar14;
            if (*(short *)(lVar13 + uVar14 * 2) < 1) {
              uVar22 = (uint)(*(int *)(lVar13 + (long)(int)(uVar17 + *(int *)(param_1 + 0x44)) *
                                                0x18 + 0x4c) != 0);
            }
            else {
              uVar22 = 1;
            }
            if (*(short *)(lVar13 + uVar14 * 2 + 2) < 1) {
              uVar23 = uVar17 + 1;
              uVar24 = (uint)(*(int *)(lVar13 + (long)(int)(uVar17 + *(int *)(param_1 + 0x44) + 1) *
                                                0x18 + 0x4c) != 0);
            }
            else {
              uVar23 = uVar17 | 1;
              uVar24 = 1;
            }
            uVar14 = uVar14 + 2;
            uVar26 = uVar24 << (ulong)(uVar23 & 0x1f) | uVar22 << (ulong)(uVar17 & 0x1f) | uVar26;
          } while (((ulong)uVar12 & 0xfffffffe) != uVar14);
        }
        if ((uVar12 & 1) != 0) {
          if (*(short *)(lVar13 + uVar14 * 2) < 1) {
            uVar12 = (uint)(*(int *)(lVar13 + (long)(int)(*(int *)(param_1 + 0x44) + (uint)uVar14) *
                                              0x18 + 0x4c) != 0);
          }
          else {
            uVar12 = 1;
          }
          uVar26 = uVar12 << (ulong)((uint)uVar14 & 0x1f) | uVar26;
        }
      }
      if ((*(uint *)(lVar13 + 0x20) & uVar26) == 0) {
        lVar27 = (long)DAT_048857a0;
        if (lVar15 == 0) {
          lVar15 = FUN_00e5d3b4();
          *(long *)(lVar9 + 0x1000b8) = lVar15;
        }
        if (*(int *)(lVar15 + lVar27 * 8 + 1000) == 0) {
          if ((uVar26 == 0) && (0 < *(int *)(param_1 + 0xb8))) {
            lVar15 = 0;
            do {
              lVar27 = lVar13 + lVar15 * 2;
              uVar6 = *(ushort *)(lVar27 + 0x2a);
              *(undefined2 *)(lVar27 + 0x2a) = 0;
              uVar12 = (uint)uVar6;
              if (uVar12 != 0) {
                iVar16 = uVar12 + 1;
                do {
                  nn::os::ReleaseSemaphore(*(SemaphoreType **)(param_1 + lVar15 * 8 + 0x90),1);
                  iVar16 = iVar16 + -1;
                } while (1 < iVar16);
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < *(int *)(param_1 + 0xb8));
          }
          goto LAB_03235930;
        }
        psVar19 = (short *)(lVar13 + (long)**(char **)(param_1 + 0x130) * 2 + 0x2a);
        sVar7 = *psVar19;
        if (sVar7 != 0) {
          *psVar19 = sVar7 + -1;
          nn::os::ReleaseSemaphore
                    (*(SemaphoreType **)(param_1 + (long)**(char **)(param_1 + 0x130) * 8 + 0x90),1)
          ;
        }
      }
      if ((uVar26 == 0) && (*(int *)(lVar13 + 0x24) != 1)) goto LAB_032358d8;
    }
    lVar27 = (long)DAT_048857a0;
    lVar15 = *(long *)(lVar9 + 0x1000b8);
    if (lVar15 == 0) {
      lVar15 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar15;
    }
    lVar15 = (long)*(char *)(*(long *)(param_1 + 0x130) + (long)*(int *)(lVar15 + lVar27 * 8 + 1000)
                            );
    lVar13 = lVar13 + lVar15 * 2;
    *(short *)(lVar13 + 0x2a) = *(short *)(lVar13 + 0x2a) + 1;
    nn::os::UnlockMutex(param_1);
    lVar13 = *(long *)(lVar9 + 0x1000b8);
    if (lVar13 == 0) {
      lVar13 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar13;
    }
    plVar31 = *(long **)(lVar13 + 0x3e0);
    if (plVar31 != (long *)0x0) {
      lVar13 = *plVar31;
      if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
        (**(code **)(lVar13 + 0x18))("NoJobAvailable",0xe,*(undefined8 *)(lVar13 + 0x28));
      }
      puVar34 = (undefined8 *)plVar31[2];
      uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar31[3]) && (plVar31[2] = uVar14, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = "TtNoJobAvailable";
        uVar11 = nn::os::GetSystemTick();
        puVar34[1] = uVar11;
      }
      if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar31[6] != 0)) {
        puVar34 = (undefined8 *)plVar31[2];
        uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
        if ((uVar14 <= (ulong)plVar31[3]) && (plVar31[2] = uVar14, puVar34 != (undefined8 *)0x0)) {
          *puVar34 = &DAT_03c4e575;
          puVar34[1] = *(undefined8 *)(plVar31[6] + 8);
        }
      }
    }
    nn::os::AcquireSemaphore(*(SemaphoreType **)(param_1 + lVar15 * 8 + 0x90));
    lVar13 = *(long *)(lVar9 + 0x1000b8);
    if (lVar13 == 0) {
      lVar13 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar13;
    }
    plVar31 = *(long **)(lVar13 + 0x3e0);
    if (plVar31 != (long *)0x0) {
      lVar13 = *plVar31;
      if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar31[6] != 0)) {
        puVar34 = (undefined8 *)plVar31[2];
        uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
        if ((uVar14 <= (ulong)plVar31[3]) && (plVar31[2] = uVar14, puVar34 != (undefined8 *)0x0)) {
          *puVar34 = &DAT_03c4e575;
          puVar34[1] = *(undefined8 *)(plVar31[6] + 8);
        }
      }
      puVar34 = (undefined8 *)plVar31[2];
      uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar31[3]) && (plVar31[2] = uVar14, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = &DAT_03c2d363;
        uVar11 = nn::os::GetSystemTick();
        puVar34[1] = uVar11;
      }
      if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
        (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
      }
    }
  } while( true );
LAB_03235568:
  lVar25 = lVar13 + ((lVar27 << 0x20) >> 0x1f);
  lVar15 = (lVar27 << 0x20) >> 0x1d;
  *(short *)(lVar25 + 0x2a) = *(short *)(lVar25 + 0x2a) + -1;
LAB_03235580:
  nn::os::ReleaseSemaphore(*(SemaphoreType **)(param_1 + lVar15 + 0x90),1);
  goto LAB_0323558c;
LAB_032358d8:
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar15 = 0;
    do {
      lVar27 = lVar13 + lVar15 * 2;
      uVar6 = *(ushort *)(lVar27 + 0x2a);
      *(undefined2 *)(lVar27 + 0x2a) = 0;
      uVar12 = (uint)uVar6;
      if (uVar12 != 0) {
        iVar16 = uVar12 + 1;
        do {
          nn::os::ReleaseSemaphore(*(SemaphoreType **)(param_1 + lVar15 * 8 + 0x90),1);
          iVar16 = iVar16 + -1;
        } while (1 < iVar16);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0xb8));
  }
LAB_03235930:
  nn::os::UnlockMutex(param_1);
  bVar10 = false;
  iVar16 = 2;
  if (plVar30 == (long *)0x0) goto LAB_0323563c;
  goto LAB_032355b4;
LAB_032354c8:
  do {
    if (*(int *)(lVar13 + 0x4c + lVar25) != 0) {
      if (*(short *)(lVar13 + 0x4c + lVar27 * 2 + -0x22) != 0) goto LAB_03235568;
      bVar20 = 1;
    }
    lVar27 = lVar27 + 1;
    lVar25 = lVar25 + 0x18;
  } while (iVar21 != lVar27);
LAB_032354fc:
  if (iVar21 < *(int *)(param_1 + 0x48)) {
    lVar27 = (long)*(int *)(param_1 + 0x48) - (long)iVar21;
    piVar28 = (int *)(lVar13 + (long)iVar21 * 0x18 + 0x4c);
    do {
      if (*piVar28 != 0) {
        if (iVar16 <= iVar4) goto LAB_0323558c;
        goto LAB_03235548;
      }
      lVar27 = lVar27 + -1;
      piVar28 = piVar28 + 6;
    } while (lVar27 != 0);
  }
  if ((bool)(iVar4 < iVar16 & bVar20)) {
LAB_03235548:
    do {
      lVar27 = lVar15;
      if (*(short *)(lVar13 + 0x2a + lVar15 * 2) != 0) goto LAB_03235568;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar16);
  }
LAB_0323558c:
  *(short *)(lVar13 + (ulong)local_16f * 2) = *(short *)(lVar13 + (ulong)local_16f * 2) + 1;
  nn::os::UnlockMutex(param_1);
  iVar16 = 0;
  bVar10 = true;
  if (plVar30 != (long *)0x0) {
LAB_032355b4:
    lVar13 = *plVar30;
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar30[6] != 0)) {
      puVar34 = (undefined8 *)plVar30[2];
      uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar30[3]) && (plVar30[2] = uVar14, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = &DAT_03c4e575;
        puVar34[1] = *(undefined8 *)(plVar30[6] + 8);
      }
    }
    puVar34 = (undefined8 *)plVar30[2];
    uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar30[3]) && (plVar30[2] = uVar14, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = &DAT_03c2d363;
      uVar11 = nn::os::GetSystemTick();
      puVar34[1] = uVar11;
    }
    if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
      (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
    }
  }
LAB_0323563c:
  if (bVar10) {
    if ((param_2 & 1) == 0) {
      do {
        uVar14 = (ulong)local_27f;
        if (*(long *)(lVar9 + 0x1000b8) == 0) {
          uVar11 = FUN_00e5d3b4();
          *(undefined8 *)(lVar9 + 0x1000b8) = uVar11;
        }
        plVar30 = *(long **)(param_1 + 0x338);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x10))(plVar30,uVar14,local_280);
        }
        iVar16 = (**(code **)(*(long *)(param_1 + uVar14 * 0x20 + 0x148) + (ulong)local_280 * 8))
                           (param_1,&local_280);
        plVar30 = *(long **)(param_1 + 0x338);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x18))(plVar30,uVar14);
        }
      } while (iVar16 == 0);
    }
    else {
      do {
        bVar20 = local_27f;
        uVar14 = (ulong)local_27f;
        pcVar29 = "TtOther";
        if (local_27f < 0xf) {
          pcVar29 = (&PTR_s_TtPhysics_2012_046ab458)[(char)local_27f];
        }
        lVar13 = *(long *)(lVar9 + 0x1000b8);
        if (lVar13 == 0) {
          lVar13 = FUN_00e5d3b4();
          *(long *)(lVar9 + 0x1000b8) = lVar13;
        }
        plVar30 = *(long **)(lVar13 + 0x3e0);
        if ((plVar30 != (long *)0x0) &&
           (puVar34 = (undefined8 *)plVar30[2], puVar34 < (undefined8 *)plVar30[4])) {
          *puVar34 = pcVar29;
          uVar11 = nn::os::GetSystemTick();
          puVar34[1] = uVar11;
          plVar30[2] = (long)(puVar34 + 2);
        }
        plVar31 = *(long **)(param_1 + 0x338);
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 0x10))(plVar31,bVar20,local_280);
        }
        iVar16 = (**(code **)(*(long *)(param_1 + uVar14 * 0x20 + 0x148) + (ulong)local_280 * 8))
                           (param_1,&local_280);
        plVar31 = *(long **)(param_1 + 0x338);
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 0x18))(plVar31,bVar20);
        }
        if (plVar30 != (long *)0x0) {
          lVar13 = *plVar30;
          if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar30[6] != 0)) {
            puVar34 = (undefined8 *)plVar30[2];
            uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
            if ((uVar14 <= (ulong)plVar30[3]) && (plVar30[2] = uVar14, puVar34 != (undefined8 *)0x0)
               ) {
              *puVar34 = &DAT_03c4e575;
              puVar34[1] = *(undefined8 *)(plVar30[6] + 8);
            }
          }
          puVar34 = (undefined8 *)plVar30[2];
          uVar14 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= (ulong)plVar30[3]) && (plVar30[2] = uVar14, puVar34 != (undefined8 *)0x0))
          {
            *puVar34 = &DAT_03c2d363;
            uVar11 = nn::os::GetSystemTick();
            puVar34[1] = uVar11;
          }
          if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
            (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
          }
        }
      } while (iVar16 == 0);
    }
  }
  return iVar16;
}


