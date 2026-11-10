/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111a948; name: FUN_0111a948
 */


void FUN_0111a948(long *param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  long lVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  int iVar7;
  long *__dest;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ushort uVar20;
  long *plVar21;
  ulong uVar22;
  char *pcVar23;
  long lVar24;
  long *plVar25;
  void *pvVar26;
  ulong *puVar27;
  undefined8 local_2a8;
  undefined8 local_2a0 [64];
  undefined8 *local_a0 [4];
  int local_80 [2];
  ulong local_78;
  int local_70 [4];
  
  pMVar2 = (MutexType *)(param_1 + 8);
  nn::os::LockMutex(pMVar2);
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar16 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar16;
  if ((((lVar16 != 0) && (lVar12 = *(long *)PTR_DAT_047d0a08, lVar12 != 0)) &&
      (lVar24 = *(long *)(lVar12 + 0xb8), lVar24 != 0)) && (lVar24 == *(long *)(lVar12 + 0xc0))) {
    *(undefined8 *)(lVar16 + 0x138) = 0;
    lVar18 = *(long *)(lVar12 + 0xd8);
    if (lVar18 != lVar12 + 0xd0) {
      do {
        local_2a0[0] = *(undefined8 *)(lVar18 + 0x10);
        FUN_00fe9c44(lVar16 + 0x110,local_2a0);
        lVar18 = *(long *)(lVar18 + 8);
      } while (lVar18 != lVar12 + 0xd0);
      uVar19 = *(ulong *)(lVar16 + 0x138);
      if (uVar19 != 0) {
        if (*(ulong *)(lVar16 + 0x118) < uVar19) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar21 = *(long **)(lVar16 + 0x110);
        lVar12 = uVar19 << 3;
        __dest = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,lVar12,8);
        if (__dest == (long *)0x0) {
          (**(code **)(*plVar21 + 0xe8))(plVar21);
        }
        if (*(long *)(lVar16 + 0x138) != 0) {
          memmove(__dest,*(void **)(lVar16 + 0x130),*(long *)(lVar16 + 0x138) << 3);
        }
        if (lVar12 != 0) {
          plVar25 = __dest;
          local_2a8 = param_1;
          do {
            lVar16 = param_1[0x15];
            lVar18 = param_1[0x16];
            if (lVar18 - lVar16 == 0) {
              uVar13 = 0;
            }
            else {
              lVar15 = *plVar25;
              uVar13 = (uint)(*(long *)(lVar16 + 0x10) == lVar15);
              if (lVar16 + 0x18 != lVar18) {
                if (*(long *)(lVar16 + 0x28) == lVar15) {
                  uVar13 = uVar13 + 1;
                }
                if (lVar16 + 0x30 != lVar18) {
                  if (*(long *)(lVar16 + 0x40) == lVar15) {
                    uVar13 = uVar13 + 1;
                  }
                  if (lVar16 + 0x48 != lVar18) {
                    if (*(long *)(lVar16 + 0x58) == lVar15) {
                      uVar13 = uVar13 + 1;
                    }
                    if (lVar16 + 0x60 != lVar18) {
                      lVar3 = lVar16 + 0x78;
                      if (*(long *)(lVar16 + 0x70) == lVar15) {
                        uVar13 = uVar13 + 1;
                      }
                      while (lVar3 != lVar18) {
                        plVar1 = (long *)(lVar3 + 0x10);
                        lVar3 = lVar3 + 0x18;
                        if (*plVar1 == lVar15) {
                          uVar13 = uVar13 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            if ((uVar13 & 0xff00) != 0) {
              uVar13 = 0x100;
            }
            if ((uVar13 & 0xffff) != 0) {
              FUN_016947d8(local_a0);
              puVar6 = local_a0[0];
              if (local_a0[0] != (undefined8 *)0x0) {
                if (local_a0[0][3] + 1 <= (ulong)local_a0[0][2]) {
                  *(undefined1 *)(local_a0[0][1] + local_a0[0][3]) = 3;
                  local_a0[0][3] = local_a0[0][3] + 1;
                }
                uVar14 = 0xffffff80;
                if (0xff < (uVar13 & 0xffff)) {
                  uVar14 = 0xffffff81;
                }
                uVar11 = uVar13;
                if (0x7f < (uVar13 & 0xffff)) {
                  uVar11 = uVar14;
                }
                lVar15 = FUN_0111b030(uVar11);
                if ((ulong)(puVar6[3] + lVar15) <= (ulong)puVar6[2]) {
                  *(char *)(puVar6[1] + puVar6[3]) = (char)uVar11;
                  lVar15 = puVar6[3] + 1;
                  puVar6[3] = lVar15;
                  if ((uVar11 & 0xff) == 0x81) {
                    *(short *)(puVar6[1] + lVar15) = (short)uVar13;
                    lVar15 = puVar6[3] + 2;
                  }
                  else {
                    if ((uVar11 & 0xff) != 0x80) goto LAB_0111ae10;
                    *(char *)(puVar6[1] + lVar15) = (char)uVar13;
                    lVar15 = puVar6[3] + 1;
                  }
                  puVar6[3] = lVar15;
                }
              }
LAB_0111ae10:
              memset(local_2a0,0,0x200);
              uVar14 = (int)((ulong)(lVar18 - lVar16) >> 3) * 0xaaab & 0xffff;
              if (uVar14 == 0) {
                if (*plVar25 == lVar24) goto LAB_0111af8c;
                uVar17 = 0;
LAB_0111ae94:
                uVar22 = FUN_0111b1ec(param_1[0xc]);
                if ((uVar22 & 1) != 0) {
                  if (puVar6 == (undefined8 *)0x0) {
                    uVar9 = 0;
                    uVar10 = 0;
                  }
                  else {
                    uVar9 = *puVar6;
                    uVar10 = puVar6[3];
                  }
                  uVar22 = (**(code **)(*(long *)param_1[0xc] + 0x68))
                                     ((long *)param_1[0xc],uVar9,uVar10,plVar25);
                  if (((uVar17 & 0xffff) != 0) && ((uVar22 & 1) != 0)) {
                    lVar16 = param_1[0x16];
                    lVar18 = (uVar17 & 0xffff) << 1;
                    do {
                      pvVar26 = (void *)(param_1[0x15] +
                                        (ulong)*(ushort *)((long)local_2a0 + lVar18 + -2) * 0x18);
                      sVar5 = lVar16 - ((long)pvVar26 + 0x18);
                      if (sVar5 != 0) {
                        memmove(pvVar26,(void *)((long)pvVar26 + 0x18),sVar5);
                      }
                      lVar16 = (long)pvVar26 + sVar5;
                      lVar18 = lVar18 + -2;
                      param_1[0x16] = lVar16;
                    } while (lVar18 != 0);
                  }
                }
              }
              else {
                uVar20 = 0;
                uVar17 = 0;
                puVar4 = puVar6 + 1;
                do {
                  lVar16 = param_1[0x15];
                  uVar22 = (ulong)uVar20;
                  if (*(long *)(lVar16 + uVar22 * 0x18 + 0x10) == *plVar25) {
                    if (puVar6 != (undefined8 *)0x0) {
                      puVar27 = (ulong *)(lVar16 + uVar22 * 0x18);
                      uVar8 = *puVar27;
                      if (0x7f < uVar8) {
                        if (uVar8 < 0x100) {
                          uVar8 = 0x80;
                        }
                        else if (uVar8 < 0x10000) {
                          uVar8 = 0x81;
                        }
                        else {
                          uVar11 = 0xffffff82;
                          if (uVar8 >> 0x20 != 0) {
                            uVar11 = 0xffffff83;
                          }
                          uVar8 = (ulong)uVar11;
                        }
                      }
                      lVar18 = FUN_0111b030(uVar8);
                      pcVar23 = (char *)(lVar16 + uVar22 * 0x18 + 8);
                      lVar16 = FUN_0111b030(*pcVar23 != '\0');
                      param_1 = local_2a8;
                      if (lVar18 + lVar16 + puVar6[3] + 4U <= (ulong)puVar6[2]) {
                        *(undefined1 *)(puVar6[1] + puVar6[3]) = 0xb9;
                        puVar6[3] = puVar6[3] + 1;
                        local_78 = 2;
                        FUN_0111b0ac(local_80,&local_78,puVar4);
                        if (local_80[0] == 0) {
                          *(undefined1 *)(puVar6[1] + puVar6[3]) = 0xb9;
                          puVar6[3] = puVar6[3] + 1;
                          local_78 = 1;
                          FUN_0111b0ac(local_70,&local_78,puVar4);
                          if (local_70[0] == 0) {
                            FUN_0111b0ac(&local_78,puVar27,puVar4);
                            if ((int)local_78 == 0) {
                              *(char *)(puVar6[1] + puVar6[3]) = *pcVar23;
                              puVar6[3] = puVar6[3] + 1;
                              goto LAB_0111ac24;
                            }
                          }
                          else {
                            local_78 = local_78 & 0xffffffff00000000;
                          }
                          local_78 = local_78 & 0xffffffff00000000;
                        }
                        else {
                          local_80[0] = 0;
                        }
                      }
                    }
LAB_0111ac24:
                    uVar22 = uVar17 & 0xffff;
                    uVar11 = (int)uVar17 + 1;
                    uVar17 = (ulong)uVar11;
                    *(ushort *)((long)local_2a0 + uVar22 * 2) = uVar20;
                    if ((uVar13 & 0xffff) <= (uVar11 & 0xffff)) break;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar14);
                if (*plVar25 != lVar24) goto LAB_0111ae94;
                if ((uVar17 & 0xffff) != 0) {
                  lVar16 = param_1[0x16];
                  lVar18 = (uVar17 & 0xffff) << 1;
                  do {
                    pvVar26 = (void *)(param_1[0x15] +
                                      (ulong)*(ushort *)((long)local_2a0 + lVar18 + -2) * 0x18);
                    sVar5 = lVar16 - ((long)pvVar26 + 0x18);
                    if (sVar5 != 0) {
                      memmove(pvVar26,(void *)((long)pvVar26 + 0x18),sVar5);
                    }
                    lVar16 = (long)pvVar26 + sVar5;
                    lVar18 = lVar18 + -2;
                    param_1[0x16] = lVar16;
                  } while (lVar18 != 0);
                }
LAB_0111af8c:
                if (puVar6 == (undefined8 *)0x0) {
                  uVar9 = 0;
                  uVar10 = 0;
                }
                else {
                  uVar9 = *puVar6;
                  uVar10 = puVar6[3];
                }
                (**(code **)(*param_1 + 0x30))(param_1,uVar9,uVar10,lVar24,param_1[0xc]);
              }
              FUN_01694aa8(local_a0);
            }
            plVar25 = plVar25 + 1;
          } while (plVar25 != __dest + uVar19);
        }
        uVar19 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar19 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,__dest,lVar12,8);
        }
        else {
          FUN_00c48fe8(plVar21,__dest,lVar12,8);
        }
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
  return;
}


