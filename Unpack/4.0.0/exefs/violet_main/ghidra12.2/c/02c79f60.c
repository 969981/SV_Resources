/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c79f60; name: FUN_02c79f60
 */


bool FUN_02c79f60(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  short *psVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  short sVar9;
  long *plVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  unkuint9 Var14;
  int iVar15;
  long *plVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  bool bVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong *puVar32;
  long *plVar33;
  ulong uVar34;
  ulong uVar35;
  ulong *local_98;
  ulong *local_90;
  ulong *local_88;
  ulong *local_80;
  undefined8 *local_78;
  
  if (((*PTR_DAT_047e23d8 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047e23d8), iVar15 != 0)) {
    FUN_00100190(&LAB_02c7b8bc,PTR_DAT_047e23e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e23d8);
  }
  lVar28 = *(long *)PTR_DAT_047e23e0;
  *(long *)PTR_DAT_047e2428 = lVar28;
  lVar29 = *(long *)(lVar28 + 0x58);
  for (lVar17 = *(long *)(lVar28 + 0x50); lVar17 != lVar29; lVar17 = lVar17 + 0x28) {
    (**(code **)(lVar17 + 0x18))
              (*(long *)(lVar28 + 0x28) + *(long *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10),
               *(undefined8 *)(lVar17 + 0x20));
  }
  if (((*PTR_DAT_047d8c40 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar17 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar17;
  lVar29 = *(long *)(lVar17 + 0x360);
  plVar33 = (long *)(lVar29 + 0x10);
  lVar17 = nn::os::GetCurrentThread();
  do {
    if (*plVar33 != 0 || *(long *)(lVar29 + 0x18) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar29 + 0x20));
        while (*plVar33 == 0 && *(long *)(lVar29 + 0x18) == 0) {
          cVar13 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar26) {
            *plVar33 = lVar17;
            *(undefined8 *)(lVar29 + 0x18) = 0;
            cVar13 = ExclusiveMonitorsStatus();
          }
          if (cVar13 == '\0') goto LAB_02c7a028;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar13 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar26) {
      *plVar33 = lVar17;
      *(undefined8 *)(lVar29 + 0x18) = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
LAB_02c7a028:
  FUN_00d04214(lVar29,10);
  do {
    lVar17 = *plVar33;
    lVar28 = *(long *)(lVar29 + 0x18);
    cVar13 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar26) {
      *plVar33 = lVar17;
      *(long *)(lVar29 + 0x18) = lVar28;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  do {
    lVar25 = *plVar33;
    lVar27 = *(long *)(lVar29 + 0x18);
    if (lVar25 != lVar17 || lVar27 != lVar28) {
      bVar26 = false;
      ClearExclusiveLocal();
      goto joined_r0x02c7a0a0;
    }
    cVar13 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar26) {
      *plVar33 = 0;
      *(long *)(lVar29 + 0x14) = lVar28;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  bVar26 = true;
joined_r0x02c7a0a0:
  if (!bVar26) {
    do {
      lVar17 = *plVar33;
      lVar28 = *(long *)(lVar29 + 0x18);
      if (lVar17 != lVar25 || lVar28 != lVar27) {
        bVar26 = false;
        ClearExclusiveLocal();
        lVar25 = lVar17;
        lVar27 = lVar28;
        goto joined_r0x02c7a0a0;
      }
      cVar13 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar26) {
        *plVar33 = 0;
        *(long *)(lVar29 + 0x14) = lVar27;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    bVar26 = true;
    lVar25 = lVar17;
    lVar27 = lVar28;
    goto joined_r0x02c7a0a0;
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar29 + 0x20));
  if (((*PTR_DAT_047d8c58 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  lVar29 = *(long *)PTR_DAT_047d8c60;
  *(long *)PTR_DAT_047d8c68 = lVar29;
  plVar33 = (long *)(lVar29 + 0x110);
  lVar17 = nn::os::GetCurrentThread();
  do {
    if (*plVar33 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar29 + 0x118));
        while (*plVar33 == 0) {
          cVar13 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar26) {
            *plVar33 = lVar17;
            cVar13 = ExclusiveMonitorsStatus();
          }
          if (cVar13 == '\0') goto LAB_02c7a0f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar13 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar26) {
      *plVar33 = lVar17;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
LAB_02c7a0f0:
  plVar33 = *(long **)(lVar29 + 0xd8);
  plVar10 = *(long **)(lVar29 + 0xe0);
  if (plVar33 != plVar10) {
    puVar1 = (undefined8 *)(lVar29 + 0xb0);
    plVar2 = (long *)(lVar29 + 0x98);
    do {
      uVar35 = *(ulong *)(*plVar33 + 0x48);
      if ((uVar35 < *(ulong *)(lVar29 + 0xd0)) &&
         ((uVar31 = uVar35 >> 3, *(ulong *)(lVar29 + 0x68) <= uVar35 ||
          ((*(ulong *)(*(long *)(lVar29 + 0x60) + (uVar31 & 0x1ffffffffffffff8)) >> (uVar35 & 0x3f)
           & 1) == 0)))) {
        plVar16 = *(long **)(*(long *)(lVar29 + 0x28) + uVar35 * 8);
        *(undefined8 *)(*(long *)(lVar29 + 0x28) + uVar35 * 8) = 0;
        if (plVar16 != (long *)0x0) {
          lVar17 = plVar16[6];
          psVar3 = (short *)(lVar17 + 0x1a);
          do {
            sVar9 = *psVar3;
            cVar13 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar26) {
              *psVar3 = sVar9 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*plVar16 + 0x50))();
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if ((uVar35 < (ulong)(*(long *)(lVar29 + 0x30) - *(long *)(lVar29 + 0x28) >> 3)) &&
           ((*(ulong *)(lVar29 + 0x68) <= uVar35 ||
            ((*(ulong *)(*(long *)(lVar29 + 0x60) + (uVar31 & 0x1ffffffffffffff8)) >>
              (uVar35 & 0x3f) & 1) == 0)))) {
          uVar23 = *(long *)(lVar29 + 0xd0) - 1;
          if (uVar23 == uVar35) {
            do {
              *(ulong *)(lVar29 + 0xd0) = uVar23;
              if ((uVar23 == 0) || (uVar23 = uVar23 - 1, *(ulong *)(lVar29 + 0x68) <= uVar23))
              break;
            } while ((*(ulong *)(*(long *)(lVar29 + 0x60) + (uVar23 >> 3 & 0x1ffffffffffffff8)) >>
                      (uVar23 & 0x3f) & 1) != 0);
          }
          puVar18 = *(ulong **)(lVar29 + 0x98);
          puVar32 = *(ulong **)(lVar29 + 0xa0);
          uVar23 = (long)puVar32 - (long)puVar18;
          uVar34 = (long)uVar23 >> 3;
          if (uVar23 == 0) {
LAB_02c7a380:
            if (*(ulong **)(lVar29 + 0xa8) == puVar32) {
              uVar19 = *(ulong *)(lVar29 + 0xb8);
              if (0x7ffffffffffffffe < uVar19) {
                uVar19 = 0x7fffffffffffffff;
              }
              if (uVar19 <= uVar34) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar23 = uVar23 >> 2;
              if (uVar23 <= uVar34) {
                uVar23 = uVar34 + 1;
              }
              if (uVar19 >> 1 <= uVar34) {
                uVar23 = uVar19;
              }
              local_80 = (ulong *)0x0;
              local_78 = puVar1;
              if (uVar23 == 0) {
                puVar18 = (ulong *)0x0;
              }
              else {
                puVar18 = (ulong *)(**(code **)(*(long *)*puVar1 + 0x10))
                                             ((long *)*puVar1,uVar23 << 3,8);
                if (puVar18 == (ulong *)0x0) {
                  (**(code **)(*(long *)*puVar1 + 0xe8))();
                }
              }
              puVar32 = puVar18 + uVar34;
              local_80 = puVar18 + uVar23;
              uVar30 = *puVar1;
              local_98 = puVar18;
              local_90 = puVar32;
              local_88 = puVar32;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar17 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar17 == 0) {
                *puVar32 = uVar35;
              }
              else {
                if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_02c7aed4:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar30;
                *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
                *puVar32 = uVar35;
                *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
                puVar32 = local_88;
              }
              local_88 = puVar32 + 1;
              FUN_028b0fd4(puVar1,*(undefined8 *)(lVar29 + 0x98),*(undefined8 *)(lVar29 + 0xa0),
                           &local_90);
              puVar18 = *(ulong **)(lVar29 + 0x98);
              puVar32 = *(ulong **)(lVar29 + 0xa0);
              *(ulong **)(lVar29 + 0x98) = local_90;
              *(ulong **)(lVar29 + 0xa0) = local_88;
              puVar20 = *(ulong **)(lVar29 + 0xa8);
              *(ulong **)(lVar29 + 0xa8) = local_80;
              local_88 = puVar32;
              if ((long)puVar32 - (long)puVar18 != 0) {
                local_88 = puVar32 + (((long)puVar32 - (long)puVar18) - 8U >> 3 ^ 0xffffffffffffffff
                                     );
              }
              local_98 = puVar18;
              local_90 = puVar18;
              local_80 = puVar20;
              if (puVar18 != (ulong *)0x0) {
                plVar16 = (long *)*local_78;
                uVar23 = (**(code **)(*plVar16 + 0xf8))(plVar16);
                if (((uVar23 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar16 + 0x18))(plVar16,puVar18,(long)puVar20 - (long)puVar18,8);
                }
                else {
                  FUN_00c48fe8(plVar16,puVar18,(long)puVar20 - (long)puVar18,8);
                }
              }
            }
            else {
              uVar30 = *puVar1;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar17 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar17 == 0) {
                *puVar32 = uVar35;
              }
              else {
                if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_02c7aed4;
                *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar30;
                *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
                *puVar32 = uVar35;
                *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
              }
              *(ulong **)(lVar29 + 0xa0) = puVar32 + 1;
            }
          }
          else if (uVar23 == 8) {
            if (uVar35 < *puVar18) goto LAB_02c7a380;
            FUN_00c6e61c(plVar2,1);
            ((undefined8 *)*plVar2)[1] = *(undefined8 *)*plVar2;
            *(ulong *)*plVar2 = uVar35;
          }
          else {
            if (uVar23 == 0xfffffffffffffff8) {
              *(ulong **)(lVar29 + 0xa0) = puVar18;
LAB_02c7a1f4:
              uVar24 = 0;
              uVar23 = uVar34;
              uVar19 = uVar34;
              do {
                Var14 = (unkuint9)uVar19;
                uVar4 = uVar24 + (long)((float)(unkint9)Var14 * 0.5);
                uVar8 = uVar4;
                uVar19 = uVar23 - uVar4;
                if (puVar18[uVar4] <= uVar35) {
                  uVar8 = uVar24;
                  uVar23 = uVar4;
                  uVar19 = (long)((float)(unkint9)Var14 * 0.5);
                }
                uVar24 = uVar8;
              } while (2 < uVar19);
              if (uVar8 <= uVar23 && uVar23 < uVar34) {
                while (puVar18[uVar23] <= uVar35) {
                  uVar23 = uVar23 - 1;
                  if ((uVar23 < uVar8) || (uVar34 <= uVar23)) goto LAB_02c7a264;
                }
                uVar23 = uVar23 + 1;
              }
LAB_02c7a264:
              if (uVar23 != uVar34) {
                if (uVar23 < uVar34 && uVar8 <= uVar23) {
                  uVar8 = uVar23;
                }
                if (uVar8 + 1 < uVar34 + 1) {
                  memmove(puVar18 + uVar8 + 1,puVar18 + uVar8,(uVar34 - uVar8) * 8);
                }
                uVar34 = uVar8;
              }
            }
            else {
              FUN_00c6e61c(plVar2,1);
              if (2 < uVar34) {
                puVar18 = (ulong *)*plVar2;
                goto LAB_02c7a1f4;
              }
            }
            *(ulong *)(*plVar2 + uVar34 * 8) = uVar35;
          }
          if (*(ulong *)(lVar29 + 0x68) <= uVar35) {
            FUN_00d7684c((long *)(lVar29 + 0x60),uVar35 + 1,0);
          }
          lVar17 = *(long *)(lVar29 + 0x60);
          *(ulong *)(lVar17 + (uVar31 & 0x1ffffffffffffff8)) =
               *(ulong *)(lVar17 + (uVar31 & 0x1ffffffffffffff8)) | 1L << (uVar35 & 0x3f);
        }
      }
      plVar33 = plVar33 + 1;
    } while (plVar33 != plVar10);
    plVar33 = *(long **)(lVar29 + 0xd8);
  }
  *(long **)(lVar29 + 0xe0) = plVar33;
  *(undefined8 *)(lVar29 + 0x110) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar29 + 0x118));
  if (((*PTR_DAT_047dcb08 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047dcb08), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047dcb98,PTR_DAT_047dcb10,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dcb08);
  }
  *(undefined8 *)PTR_DAT_047dcb18 = *(undefined8 *)PTR_DAT_047dcb10;
  FUN_010bbe68();
  if (((*PTR_DAT_047dd2e8 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047dd2e8), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047dd9c8,PTR_DAT_047dd2f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd2e8);
  }
  *(undefined8 *)PTR_DAT_047dd2f8 = *(undefined8 *)PTR_DAT_047dd2f0;
  FUN_02c7fc1c();
  if (((*PTR_DAT_047e2400 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047e2400), iVar15 != 0)) {
    FUN_00100190(&LAB_02c7b564,PTR_DAT_047e2408,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2400);
  }
  lVar17 = *(long *)PTR_DAT_047e2408;
  *(long *)PTR_DAT_047e2430 = lVar17;
  bVar11 = *(byte *)(lVar17 + *(long *)(lVar17 + 0x88) + 0x46);
  if (bVar11 < 3) {
    if (bVar11 != *(byte *)(lVar17 + 0x44)) {
      *(byte *)(lVar17 + 0x44) = bVar11;
      FUN_028b47f8();
    }
  }
  else if (bVar11 == 3) {
    FUN_028b4930();
  }
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar17 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar17;
  if (*(char *)(lVar17 + 0x39) == '\0') {
    plVar33 = *(long **)(*(long *)(lVar17 + 0x200) + 0x60);
    (**(code **)(*plVar33 + 0x40))(plVar33,1);
  }
  if (((*PTR_DAT_047d8a70 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a70);
  }
  uVar30 = *(undefined8 *)PTR_DAT_047d8a78;
  *(undefined8 *)PTR_DAT_047d8a80 = uVar30;
  lVar17 = (**(code **)**(undefined8 **)(param_1 + 0x248))(*(undefined8 **)(param_1 + 0x248),0);
  FUN_00d9cdfc((float)((double)*(long *)(lVar17 + 8) / 1000000000.0),uVar30);
  lVar17 = *(long *)(DAT_0485a0a0 + 0x70) + 0x150;
  if ((double)*(long *)(*(long *)(DAT_0485a0a0 + 0x70) + 0x158) <=
      (double)*(long *)(DAT_0485a0a0 + 0x130)) {
    lVar17 = DAT_0485a0a0 + 0x128;
  }
  lVar29 = *(long *)(lVar17 + 8);
  if (lVar29 < 0x3f940ac) {
    if (lVar29 < 0x2faf081) {
      if (lVar29 < 0x1fca057) {
        uVar22 = (uint)(0xfe502b < lVar29);
      }
      else {
        uVar22 = 2;
      }
    }
    else {
      uVar22 = 3;
    }
  }
  else {
    uVar22 = 4;
  }
  cVar12 = *(char *)(*(long *)(param_1 + 0x30) + 0x20);
  cVar13 = *(char *)(*(long *)(param_1 + 0x30) + 0x21);
  uVar7 = (int)cVar12;
  if (cVar13 != '\0') {
    uVar7 = uVar22;
  }
  if (*(char *)(DAT_0485a0a0 + 0xc0) != '\0') {
    (**(code **)PTR_DAT_047e0bd8)
              (*(undefined8 *)
                (*(long *)(*(long *)(DAT_0485a0a0 + 0x30) + 0x6030) +
                (ulong)*(uint *)(DAT_0485a0a0 + 0xc4) * 0x20),(int)cVar12 + 1);
    cVar13 = *(char *)(*(long *)(param_1 + 0x30) + 0x21);
  }
  uVar22 = (int)cVar12;
  if ((int)cVar12 <= (int)uVar7) {
    uVar22 = uVar7;
  }
  if ((cVar13 != '\0') && (1.0 < (double)*(long *)(lVar17 + 8) / 83333333.0)) {
    uVar22 = 4;
  }
  if (((*PTR_DAT_047d8858 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8858), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047dd600,PTR_DAT_047d8860,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8858);
  }
  lVar17 = *(long *)PTR_DAT_047d8860;
  *(long *)PTR_DAT_047d8868 = lVar17;
  iVar15 = (**(code **)(**(long **)(param_1 + 0x248) + 0x18))();
  if (0 < iVar15) {
    (**(code **)(**(long **)(param_1 + 0x248) + 8))(*(long **)(param_1 + 0x248),0,uVar22);
    iVar15 = (**(code **)(**(long **)(param_1 + 0x248) + 0x18))();
    if (1 < iVar15) {
      (**(code **)(**(long **)(param_1 + 0x248) + 8))(*(long **)(param_1 + 0x248),1,uVar22);
      iVar15 = (**(code **)(**(long **)(param_1 + 0x248) + 0x18))();
      if (2 < iVar15) {
        lVar29 = 0;
        do {
          plVar33 = *(long **)(param_1 + 0x248);
          if ((*(ulong *)(*(long *)(lVar17 + 0x60) + (lVar29 + 0x100000000U >> 6 & 0x3ffffff) * 8)
               >> (lVar29 + 0x100000000U & 0x3f) & 1) == 0) {
            (**(code **)(*plVar33 + 8))(plVar33,(int)lVar29 + 2,uVar22);
          }
          else {
            (**(code **)(*plVar33 + 0x10))(plVar33,(int)lVar29 + 2,0);
          }
          iVar15 = (**(code **)(**(long **)(param_1 + 0x248) + 0x18))();
          lVar28 = lVar29 + 3;
          lVar29 = lVar29 + 1;
        } while (lVar28 < iVar15);
      }
    }
  }
  local_98 = *(ulong **)(param_1 + 0x248);
  local_90 = (ulong *)0x0;
  if (((DAT_048638a8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_048638a8), iVar15 != 0)) {
    FUN_00100190(&LAB_02c7b5ec,&DAT_04863898,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048638a8);
  }
  lVar17 = DAT_04863898;
  DAT_04863900 = DAT_04863898;
  if (0 < *(int *)(DAT_04863898 + 0x30)) {
    uVar35 = 0;
    lVar29 = 1;
    do {
      lVar28 = (**(code **)*local_98)(local_98,uVar35 & 0xffffffff);
      lVar21 = *(long *)(lVar28 + 8);
      *(long *)(*(long *)(lVar17 + 0x38) + ((ulong)*(uint *)(lVar17 + 0x28) + uVar35 * 0x3d) * 8) =
           lVar21;
      lVar27 = 1;
      lVar28 = 0x70;
      lVar25 = lVar29;
      do {
        lVar5 = *(long *)(*(long *)(lVar17 + lVar28) + 8) + uVar35 * 0x10;
        lVar28 = lVar28 + 0x20;
        lVar6 = lVar25 + (ulong)*(uint *)(lVar17 + 0x28) +
                         ((lVar27 + (ulong)*(uint *)(lVar17 + 0x28)) / 0x3d) * -0x3d;
        lVar25 = lVar25 + 1;
        lVar27 = lVar27 + 1;
        *(long *)(lVar5 + 8) =
             (*(long *)(lVar5 + 8) + lVar21) - *(long *)(*(long *)(lVar17 + 0x38) + lVar6 * 8);
      } while (lVar28 != 0x7f0);
      uVar35 = uVar35 + 1;
      lVar29 = lVar29 + 0x3d;
    } while ((long)uVar35 < (long)*(int *)(lVar17 + 0x30));
  }
  uVar35 = (ulong)*(uint *)(lVar17 + 0x28) + 0x3c;
  *(int *)(lVar17 + 0x28) = (int)uVar35 + (int)(uVar35 / 0x3d) * -0x3d;
  FUN_00c47454(*(undefined8 *)PTR_DAT_047d8d98,&local_98);
  lVar17 = *(long *)(param_1 + 0x278) + 1;
  uVar35 = lVar17 * 0x32f8f21e7e10d6d;
  *(long *)(param_1 + 0x278) = lVar17;
  if ((uVar35 >> 3 | uVar35 << 0x3d) < 0x7482296a44b8d) {
    uVar30 = FUN_02b29020();
    if (((DAT_04859438 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04859438), iVar15 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    (**(code **)(*DAT_04859430 + 0x50))(DAT_04859430,uVar30);
  }
  return *(char *)(param_1 + 0x250) == '\0';
}


