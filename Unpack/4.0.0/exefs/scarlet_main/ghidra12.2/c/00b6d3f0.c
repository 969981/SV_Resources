/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b6d3f0; name: FUN_00b6d3f0
 */


undefined4 FUN_00b6d3f0(long param_1)

{
  short *psVar1;
  ulong uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  void *pvVar21;
  void *__dest;
  ulong uVar22;
  ulong uVar23;
  void *__src;
  long *plVar24;
  long *plVar25;
  void *pvVar26;
  byte *pbVar27;
  void *pvVar28;
  undefined8 uVar29;
  double dVar30;
  undefined2 local_1d8;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  long local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined *local_80;
  undefined *puStack_78;
  undefined1 local_70;
  
  puVar8 = PTR_DAT_047d6e90;
  iVar14 = *(int *)(param_1 + 0xc);
  if (iVar14 - 5U < 0xc) {
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    puVar10 = PTR_DAT_047d6ea0;
    puVar9 = PTR_DAT_047d6e98;
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if ((((lVar19 == 0) || (*(char *)(lVar19 + 0xadf1) == '\0')) ||
        (*(char *)(lVar19 + 0xae02) == '\0')) || (*(int *)(lVar19 + 0xadf4) == -1)) {
      *(undefined4 *)(param_1 + 0xc) = 0x11;
      if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar19 = *(long *)puVar9;
      *(long *)puVar10 = lVar19;
      if (lVar19 != 0) {
        *(undefined1 *)(lVar19 + 0xadf1) = 0;
        *(undefined1 *)(lVar19 + 0xae02) = 0;
        if (*(uint *)(lVar19 + 0xadf4) != 0xffffffff) {
          nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar19 + 0xadf4));
        }
      }
      goto LAB_00b6de14;
    }
    iVar14 = *(int *)(param_1 + 0xc);
  }
  puVar8 = PTR_DAT_047d6e90;
  switch(iVar14) {
  case 0:
    if (*(char *)(param_1 + 0x8ac) != '\0') {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      memset((void *)(param_1 + 0x48),0,0x400);
      memset((void *)(param_1 + 0x594),0,0x304);
      *(undefined2 *)(param_1 + 0x8ac) = 0;
      *(undefined1 *)(param_1 + 0x8b4) = 0;
LAB_00b6da3c:
      uVar16 = 2;
LAB_00b6ddb0:
      FUN_00b6c1c0(param_1,uVar16);
    }
    break;
  case 1:
    nn::os::GetSystemTick();
    lVar19 = nn::os::ConvertToTimeSpan();
    lVar19 = lVar19 - *(long *)(param_1 + 0x8b8);
    *(long *)(param_1 + 0x8c0) = lVar19;
    dVar30 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x8c8));
    if (dVar30 <= (double)lVar19 / 1000000.0) goto LAB_00b6da3c;
    break;
  case 2:
    nn::os::GetSystemTick();
    lVar19 = nn::os::ConvertToTimeSpan();
    lVar19 = lVar19 - *(long *)(param_1 + 0x8b8);
    *(long *)(param_1 + 0x8c0) = lVar19;
    pbVar27 = PTR_DAT_047d6e90;
    dVar30 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x8c8));
    if (dVar30 <= (double)lVar19 / 1000000.0) {
      FUN_00b09990();
LAB_00b6dd64:
      uVar16 = 1;
LAB_00b6dd68:
      *(undefined4 *)(param_1 + 0xc) = uVar16;
      *(undefined4 *)(param_1 + 0x8c8) = 1000;
      nn::os::GetSystemTick();
      uVar29 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x8b8) = uVar29;
    }
    else {
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      plVar24 = (long *)PTR_DAT_047d6ea0;
      plVar25 = (long *)PTR_DAT_047d6e98;
      lVar19 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar19;
      if ((lVar19 == 0) || (*(char *)(lVar19 + 0xadf0) == '\0')) {
        if (((*pbVar27 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0))
        {
          FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6e90);
        }
        lVar19 = *plVar25;
        *plVar24 = lVar19;
        if (lVar19 != 0) {
          uVar18 = *(uint *)(lVar19 + 0xadec);
          if (uVar18 < 0x20) {
            if (uVar18 == 0) goto LAB_00b6d8e4;
          }
          else {
            uVar18 = 0x20;
          }
          uVar15 = 0;
          __dest = (void *)((ulong)&local_1d0 | 3);
          do {
            if (((*pbVar27 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar27), iVar14 != 0)) {
              FUN_00100190(&LAB_00b0a8ac,plVar25,&PTR_LOOP_04483000);
              __cxa_guard_release(pbVar27);
            }
            lVar19 = *plVar25;
            *plVar24 = lVar19;
            if (lVar19 != 0) {
              if (uVar15 <= *(uint *)(lVar19 + 0xadec)) {
                memcpy(__dest,(void *)(lVar19 + uVar15 * 0x148 + 0x944c),0x148);
                pvVar21 = *(void **)(param_1 + 0x18);
                if (pvVar21 == *(void **)(param_1 + 0x20)) {
                  uVar23 = *(ulong *)(param_1 + 0x30);
                  lVar19 = (long)pvVar21 - *(long *)(param_1 + 0x10) >> 3;
                  if (0x7ffffffffffffffe < uVar23) {
                    uVar23 = 0x7fffffffffffffff;
                  }
                  uVar2 = lVar19 * -0x7063e7063e7063e7 + 1;
                  if (uVar23 < uVar2) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar20 = (long)*(void **)(param_1 + 0x20) - *(long *)(param_1 + 0x10) >> 3;
                  uVar22 = lVar20 * 0x1f3831f3831f3832;
                  if (uVar2 <= uVar22) {
                    uVar2 = uVar22;
                  }
                  if (uVar23 >> 1 <= (ulong)(lVar20 * -0x7063e7063e7063e7)) {
                    uVar2 = uVar23;
                  }
                  if (uVar2 == 0) {
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
                                       (*(long **)(param_1 + 0x28),uVar2 * 0x148,4);
                    if (lVar20 == 0) {
                      (**(code **)(**(long **)(param_1 + 0x28) + 0xe8))();
                    }
                  }
                  pvVar21 = (void *)(lVar20 + lVar19 * 8);
                  uVar29 = *(undefined8 *)(param_1 + 0x28);
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar19 == 0) {
                    memcpy(pvVar21,__dest,0x148);
                  }
                  else {
                    if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00b6e9b4;
                    *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar29;
                    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                    memcpy(pvVar21,__dest,0x148);
                    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                  }
                  pvVar28 = *(void **)(param_1 + 0x10);
                  __src = *(void **)(param_1 + 0x18);
                  pvVar26 = pvVar21;
                  if (__src != pvVar28) {
                    do {
                      uVar29 = *(undefined8 *)(param_1 + 0x28);
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      pvVar26 = (void *)((long)pvVar26 + -0x148);
                      __src = (void *)((long)__src + -0x148);
                      lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar19 == 0) {
                        memcpy(pvVar26,__src,0x148);
                      }
                      else {
                        if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00b6e9b4;
                        *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar29;
                        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                        memcpy(pvVar26,__src,0x148);
                        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                      }
                    } while (pvVar28 != __src);
                    pvVar28 = *(void **)(param_1 + 0x10);
                    plVar25 = (long *)PTR_DAT_047d6e98;
                  }
                  *(void **)(param_1 + 0x10) = pvVar26;
                  *(long *)(param_1 + 0x18) = (long)pvVar21 + 0x148;
                  lVar19 = *(long *)(param_1 + 0x20);
                  *(ulong *)(param_1 + 0x20) = lVar20 + uVar2 * 0x148;
                  pbVar27 = PTR_DAT_047d6e90;
                  plVar24 = (long *)PTR_DAT_047d6ea0;
                  if (pvVar28 == (void *)0x0) goto LAB_00b6e208;
                  plVar25 = *(long **)(param_1 + 0x28);
                  lVar19 = lVar19 - (long)pvVar28;
                  uVar23 = (**(code **)(*plVar25 + 0xf8))(plVar25);
                  if (((uVar23 & 1) == 0) ||
                     (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
                    (**(code **)(*plVar25 + 0x18))(plVar25,pvVar28,lVar19,4);
                  }
                  else {
                    FUN_00c48fe8(plVar25,pvVar28,lVar19,4);
                  }
                }
                else {
                  uVar29 = *(undefined8 *)(param_1 + 0x28);
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar19 == 0) {
                    memcpy(pvVar21,__dest,0x148);
                  }
                  else {
                    if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_00b6e9b4:
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar29;
                    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                    memcpy(pvVar21,__dest,0x148);
                    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                  }
                  *(long *)(param_1 + 0x18) = (long)pvVar21 + 0x148;
                }
                plVar24 = (long *)PTR_DAT_047d6ea0;
                plVar25 = (long *)PTR_DAT_047d6e98;
              }
            }
LAB_00b6e208:
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar18);
        }
LAB_00b6d8e4:
        lVar19 = *(long *)(param_1 + 0x10);
        lVar20 = *(long *)(param_1 + 0x18);
        goto LAB_00b6dc68;
      }
    }
    break;
  case 3:
    nn::os::GetSystemTick();
    lVar19 = nn::os::ConvertToTimeSpan();
    lVar19 = lVar19 - *(long *)(param_1 + 0x8b8);
    *(long *)(param_1 + 0x8c0) = lVar19;
    dVar30 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x8c8));
    if (dVar30 <= (double)lVar19 / 1000000.0) {
LAB_00b6dc54:
      lVar19 = *(long *)(param_1 + 0x10);
      lVar20 = *(long *)(param_1 + 0x18);
      if (lVar20 != lVar19) {
        lVar20 = lVar20 + -0x148;
        *(long *)(param_1 + 0x18) = lVar20;
      }
LAB_00b6dc68:
      bVar13 = lVar20 == lVar19;
      uVar17 = 4;
      uVar16 = 2;
LAB_00b6dda8:
      if (!bVar13) {
        uVar16 = uVar17;
      }
      goto LAB_00b6ddb0;
    }
    break;
  case 4:
    nn::os::GetSystemTick();
    lVar19 = nn::os::ConvertToTimeSpan();
    lVar19 = lVar19 - *(long *)(param_1 + 0x8b8);
    *(long *)(param_1 + 0x8c0) = lVar19;
    dVar30 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x8c8));
    if (dVar30 <= (double)lVar19 / 1000000.0) {
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar19 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar19;
      if (lVar19 != 0) {
        *(undefined1 *)(lVar19 + 0xadf1) = 0;
        *(undefined1 *)(lVar19 + 0xae02) = 0;
        if (*(uint *)(lVar19 + 0xadf4) != 0xffffffff) {
          nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar19 + 0xadf4));
        }
      }
      uVar16 = 3;
      goto LAB_00b6dd68;
    }
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if ((((lVar19 != 0) && (*(char *)(lVar19 + 0xadf1) != '\0')) &&
        (*(char *)(lVar19 + 0xae02) != '\0')) && (*(int *)(lVar19 + 0xadf4) != -1)) {
      uVar16 = 5;
      goto LAB_00b6ddb0;
    }
    break;
  case 5:
    nn::os::GetSystemTick();
    lVar19 = nn::os::ConvertToTimeSpan();
    lVar19 = lVar19 - *(long *)(param_1 + 0x8b8);
    *(long *)(param_1 + 0x8c0) = lVar19;
    dVar30 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x8c8));
    if (dVar30 <= (double)lVar19 / 1000000.0) {
      if (((*PTR_DAT_047d6e90 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar19 = *(long *)PTR_DAT_047d6e98;
      *(long *)PTR_DAT_047d6ea0 = lVar19;
      if (lVar19 != 0) {
        *(undefined1 *)(lVar19 + 0xadf1) = 0;
        *(undefined1 *)(lVar19 + 0xae02) = 0;
        if (*(uint *)(lVar19 + 0xadf4) != 0xffffffff) {
          nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar19 + 0xadf4));
        }
      }
      goto LAB_00b6dd64;
    }
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if (lVar19 != 0) {
      puVar3 = (ushort *)(lVar19 + 0xb004);
      if ((ulong)*puVar3 != 0) {
        memcpy((char *)(param_1 + 0x48),(void *)(lVar19 + 0xae04),(ulong)*puVar3);
        uVar6 = *puVar3;
        *puVar3 = 0;
        if (uVar6 != 0) {
          if (*(char *)(param_1 + 0x48) != '\x01') goto LAB_00b6dc54;
          uVar16 = 6;
          goto LAB_00b6ddb0;
        }
      }
    }
    break;
  case 6:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if (lVar19 != 0) {
      puVar3 = (ushort *)(lVar19 + 0xb004);
      if ((ulong)*puVar3 != 0) {
        memcpy((void *)(param_1 + 0x48),(void *)(lVar19 + 0xae04),(ulong)*puVar3);
        uVar6 = *puVar3;
        *puVar3 = 0;
        if (uVar6 != 0) {
          if (uVar6 - 4 < 0xc) {
            snprintf((char *)(param_1 + 0x594),0x100,"%s",(void *)(param_1 + 0x48));
            psVar1 = (short *)(param_1 + 0x694);
            *(uint *)(param_1 + 0x894) = (uint)uVar6;
            lVar19 = FUN_019c9f30(psVar1,0x100,(char *)(param_1 + 0x594),uVar6);
            if (lVar19 != 0) {
              *(undefined2 *)(param_1 + (lVar19 - (ulong)(lVar19 == 0x100)) * 2 + 0x694) = 0;
            }
            if (*(int *)(param_1 + 8) != 1) {
LAB_00b6e328:
              uVar16 = 7;
              goto LAB_00b6ddb0;
            }
            FUN_00b6ed00();
            FUN_02b055e0();
            if (*psVar1 != 0) {
              lVar19 = 0x90;
              lVar20 = FUN_02b055e0();
              do {
                if (*(short *)(lVar20 + lVar19) == 0) break;
                uVar15 = FUN_0131cbf0((short *)(lVar20 + lVar19),psVar1);
                if ((uVar15 & 1) != 0) goto LAB_00b6e328;
                lVar19 = lVar19 + 0x40;
              } while (lVar19 != 0xcd0);
            }
          }
          memset((void *)(param_1 + 0x594),0,0x304);
          goto LAB_00b6dc54;
        }
      }
    }
    break;
  case 7:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if (lVar19 != 0) {
      puVar3 = (ushort *)(lVar19 + 0xb004);
      if ((ulong)*puVar3 != 0) {
        memcpy((void *)(param_1 + 0x48),(void *)(lVar19 + 0xae04),(ulong)*puVar3);
        uVar6 = *puVar3;
        *puVar3 = 0;
        if (uVar6 != 0) {
          if ((*(char *)(param_1 + 0x48) != '\0') || (*(int *)(param_1 + 8) != 0)) {
            if ((*(char *)(param_1 + 0x48) == '\x01') && (*(int *)(param_1 + 8) == 1))
            goto LAB_00b6dcc8;
            goto LAB_00b6dc54;
          }
          *(undefined4 *)(param_1 + 0xc) = 8;
          *(undefined4 *)(param_1 + 0x8b0) = 0;
        }
      }
    }
    break;
  case 8:
    iVar14 = *(int *)(param_1 + 0x8b0);
    if (iVar14 != 0) {
      if (iVar14 == 1) {
LAB_00b6dcc8:
        uVar16 = 9;
        goto LAB_00b6ddb0;
      }
      lVar19 = *(long *)(param_1 + 0x18);
      if (lVar19 != *(long *)(param_1 + 0x10)) {
        lVar19 = lVar19 + -0x148;
        *(long *)(param_1 + 0x18) = lVar19;
      }
      uVar16 = 4;
      bVar13 = lVar19 != *(long *)(param_1 + 0x10) && iVar14 == 2;
      uVar17 = 2;
      goto LAB_00b6dda8;
    }
    break;
  case 9:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    puVar10 = PTR_DAT_047d6ea0;
    puVar9 = PTR_DAT_047d6e98;
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if ((lVar19 == 0) || (*(char *)(lVar19 + 0xae00) == '\0')) {
      if (*(int *)(param_1 + 8) == 0) {
        lVar19 = FUN_019c9f30(param_1 + 0x694,0x100,param_1 + 0x594,*(undefined4 *)(param_1 + 0x894)
                             );
        if (lVar19 != 0) {
          *(undefined2 *)(param_1 + (lVar19 - (ulong)(lVar19 == 0x100)) * 2 + 0x694) = 0;
        }
        FUN_00b6ed00();
        FUN_02b06254(param_1 + 0x694);
        *(undefined1 *)(param_1 + 0x8b4) = 1;
        *(undefined4 *)(param_1 + 0xc) = 0x11;
        if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
          FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6e90);
        }
        lVar19 = *(long *)puVar9;
        *(long *)puVar10 = lVar19;
        goto joined_r0x00b6d574;
      }
      uVar16 = 10;
      goto LAB_00b6ddb0;
    }
    break;
  case 10:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if ((lVar19 == 0) || (*(char *)(lVar19 + 0xae00) == '\0')) {
      uVar16 = 0xb;
      goto LAB_00b6ddb0;
    }
    break;
  case 0xb:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if ((lVar19 == 0) || (*(char *)(lVar19 + 0xae00) == '\0')) {
      uVar16 = 0xc;
LAB_00b6d5f8:
      *(undefined4 *)(param_1 + 0xc) = uVar16;
    }
    break;
  case 0xc:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    puVar10 = PTR_DAT_047d6ea0;
    puVar9 = PTR_DAT_047d6e98;
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if (lVar19 != 0) {
      puVar3 = (ushort *)(lVar19 + 0xb004);
      if ((ulong)*puVar3 != 0) {
        memcpy((void *)(param_1 + 0x48),(void *)(lVar19 + 0xae04),(ulong)*puVar3);
        uVar6 = *puVar3;
        *puVar3 = 0;
        if (uVar6 != 0) {
          if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8cc8);
          }
          lVar19 = *(long *)PTR_DAT_047d8cd0;
          *(long *)PTR_DAT_047d8cd8 = lVar19;
          if (lVar19 == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(lVar19 + 0x50);
          }
          lVar19 = tpidr_el0;
          if (*(long *)(lVar19 + 0x30) == 0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            *(undefined8 *)(lVar19 + 0x30) = DAT_04859430;
          }
          uVar4 = *(undefined8 *)(lVar19 + 0x30);
          uVar5 = *(undefined8 *)(lVar19 + 0x38);
          *(undefined8 *)(lVar19 + 0x30) = uVar29;
          local_1d0 = PTR_DAT_047dabc0;
          *(undefined2 *)(lVar19 + 0x38) = 1;
          puVar12 = PTR_LAB_047daba8;
          puVar11 = PTR_DAT_047dab98;
          local_1d0 = local_1d0 + 0x10;
          uStack_1c8 = 0;
          local_1c0 = 0;
          if (*(long *)PTR_DAT_047dab98 != 2) {
            local_80 = PTR_DAT_047daba0 + 0x10;
            puStack_78 = PTR_LAB_047daba8;
            local_70 = 0;
            if (*(long *)PTR_DAT_047dab98 != 2) {
              do {
                lVar20 = *(long *)puVar11;
                if (lVar20 != 0) break;
                cVar7 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(puVar11,0x10);
                if (bVar13) {
                  *(undefined8 *)puVar11 = 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              puVar11 = PTR_DAT_047dab98;
              DataMemoryBarrier(2,3);
              if (lVar20 == 0) {
                FUN_00bb162c(&local_80);
                *(undefined8 *)PTR_DAT_047dab98 = 2;
              }
              else {
                while (lVar20 == 1) {
                  sched_yield();
                  lVar20 = *(long *)puVar11;
                }
              }
            }
          }
          local_1a8 = 0;
          uStack_1b0 = *(undefined8 *)PTR_DAT_047dabb0;
          local_1b8 = 0;
          uVar15 = FUN_00c11428(&local_1d0,(void *)(param_1 + 0x48),uVar6);
          if ((uVar15 & 1) == 0) {
            *(undefined4 *)(param_1 + 0xc) = 0x11;
            if (((*puVar8 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
              FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d6e90);
            }
            lVar20 = *(long *)puVar9;
            *(long *)puVar10 = lVar20;
            if (lVar20 != 0) {
              *(undefined1 *)(lVar20 + 0xadf1) = 0;
              *(undefined1 *)(lVar20 + 0xae02) = 0;
              if (*(uint *)(lVar20 + 0xadf4) != 0xffffffff) {
                nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar20 + 0xadf4));
              }
            }
          }
          else {
            lVar20 = local_1b8;
            if (local_1b8 == 0) {
              lVar20 = *(long *)(*(long *)PTR_DAT_047dabc8 + 0x18);
            }
            *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(lVar20 + 0x30);
            *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(lVar20 + 0x18);
            FUN_00b6c1c0(param_1,0xd);
          }
          FUN_00b71404(&local_1d0);
          *(undefined8 *)(lVar19 + 0x30) = uVar4;
          local_1d8 = (undefined2)uVar5;
          *(undefined2 *)(lVar19 + 0x38) = local_1d8;
        }
      }
    }
    break;
  case 0xd:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if ((lVar19 == 0) || (*(char *)(lVar19 + 0xae00) == '\0')) {
      uVar16 = 0xe;
      goto LAB_00b6ddb0;
    }
    break;
  case 0xe:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if ((lVar19 == 0) || (*(char *)(lVar19 + 0xae00) == '\0')) {
      uVar16 = 0xf;
      goto LAB_00b6d5f8;
    }
    break;
  case 0xf:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if (lVar19 != 0) {
      puVar3 = (ushort *)(lVar19 + 0xb004);
      if ((ulong)*puVar3 != 0) {
        memcpy((void *)(param_1 + 0x48),(void *)(lVar19 + 0xae04),(ulong)*puVar3);
        uVar6 = *puVar3;
        *puVar3 = 0;
        if (uVar6 != 0) {
          uVar16 = 0x10;
          goto LAB_00b6ddb0;
        }
      }
    }
    break;
  case 0x10:
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    puVar10 = PTR_DAT_047d6ea0;
    puVar9 = PTR_DAT_047d6e98;
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if ((lVar19 == 0) || (*(char *)(lVar19 + 0xae00) == '\0')) {
      *(undefined1 *)(param_1 + 0x8b4) = 1;
      *(undefined4 *)(param_1 + 0xc) = 0x11;
      if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
        FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6e90);
      }
      lVar19 = *(long *)puVar9;
      *(long *)puVar10 = lVar19;
joined_r0x00b6d574:
      if (lVar19 != 0) {
        *(undefined1 *)(lVar19 + 0xadf1) = 0;
        *(undefined1 *)(lVar19 + 0xae02) = 0;
        if (*(uint *)(lVar19 + 0xadf4) != 0xffffffff) {
          nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar19 + 0xadf4));
        }
      }
    }
    break;
  default:
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 0x8ad) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0x11;
    if (((*PTR_DAT_047d6e90 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar14 != 0)) {
      FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6e90);
    }
    lVar19 = *(long *)PTR_DAT_047d6e98;
    *(long *)PTR_DAT_047d6ea0 = lVar19;
    if (lVar19 != 0) {
      *(undefined1 *)(lVar19 + 0xadf1) = 0;
      *(undefined1 *)(lVar19 + 0xae02) = 0;
      if (*(uint *)(lVar19 + 0xadf4) != 0xffffffff) {
        nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar19 + 0xadf4));
      }
    }
  }
  *(undefined2 *)(param_1 + 0x8ac) = 0;
LAB_00b6de14:
  return *(undefined4 *)(param_1 + 0xc);
}


