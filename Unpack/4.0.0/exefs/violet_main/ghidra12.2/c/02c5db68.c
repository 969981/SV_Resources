/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c5db68; name: FUN_02c5db68
 */


void FUN_02c5db68(uint param_1,ulong param_2)

{
  MutexType *pMVar1;
  short *psVar2;
  ulong uVar3;
  short sVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  long lVar21;
  undefined1 auStack_78 [16];
  ulong local_68;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar16 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar16;
  plVar17 = DAT_0485e990;
  if (lVar16 != 0) {
    if (DAT_0485e990 != (long *)0x0) {
      if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) == 0) {
        pMVar1 = (MutexType *)(lVar16 + 0x250);
        uVar10 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
        if ((uVar10 & 1) == 0) {
          nn::os::LockMutex(pMVar1);
          puVar18 = *(ulong **)(lVar16 + 0x278);
          uVar10 = (ulong)param_1;
          if (puVar18 < *(ulong **)(lVar16 + 0x280)) {
            uVar19 = *(undefined8 *)(lVar16 + 0x288);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar11 == 0) {
              *puVar18 = uVar10;
              puVar18[1] = param_2;
            }
            else {
              if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02c5e140;
              *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar19;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
              *puVar18 = uVar10;
              puVar18[1] = param_2;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            }
            *(ulong **)(lVar16 + 0x278) = puVar18 + 2;
          }
          else {
            uVar15 = *(ulong *)(lVar16 + 0x290);
            lVar11 = (long)puVar18 - *(long *)(lVar16 + 0x270) >> 4;
            uVar3 = lVar11 + 1;
            if (0x7ffffffffffffffe < uVar15) {
              uVar15 = 0x7fffffffffffffff;
            }
            if (uVar15 < uVar3) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar13 = (long)*(ulong **)(lVar16 + 0x280) - *(long *)(lVar16 + 0x270);
            uVar14 = lVar13 >> 3;
            if (uVar3 <= uVar14) {
              uVar3 = uVar14;
            }
            if (uVar15 >> 1 <= (ulong)(lVar13 >> 4)) {
              uVar3 = uVar15;
            }
            if (uVar3 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (**(code **)(**(long **)(lVar16 + 0x288) + 0x10))
                                 (*(long **)(lVar16 + 0x288),uVar3 << 4,8);
              if (lVar13 == 0) {
                (**(code **)(**(long **)(lVar16 + 0x288) + 0xe8))();
              }
            }
            uVar19 = *(undefined8 *)(lVar16 + 0x288);
            puVar18 = (ulong *)(lVar13 + lVar11 * 0x10);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar11 == 0) {
              *puVar18 = uVar10;
              puVar18[1] = param_2;
            }
            else {
              if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02c5e140:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar19;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
              *puVar18 = uVar10;
              puVar18[1] = param_2;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            }
            lVar11 = *(long *)(lVar16 + 0x270);
            lVar21 = *(long *)(lVar16 + 0x278);
            puVar20 = puVar18;
            if (lVar21 != lVar11) {
              do {
                uVar19 = *(undefined8 *)(lVar16 + 0x288);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar12 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar12 == 0) {
                  uVar10 = *(ulong *)(lVar21 + -8);
                  puVar20[-2] = *(ulong *)(lVar21 + -0x10);
                  puVar20[-1] = uVar10;
                }
                else {
                  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_02c5e140;
                  *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar19;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                  uVar10 = *(ulong *)(lVar21 + -8);
                  puVar20[-2] = *(ulong *)(lVar21 + -0x10);
                  puVar20[-1] = uVar10;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                }
                lVar21 = lVar21 + -0x10;
                puVar20 = puVar20 + -2;
              } while (lVar11 != lVar21);
              lVar11 = *(long *)(lVar16 + 0x270);
            }
            *(ulong **)(lVar16 + 0x278) = puVar18 + 2;
            lVar21 = *(long *)(lVar16 + 0x280);
            *(ulong **)(lVar16 + 0x270) = puVar20;
            *(ulong *)(lVar16 + 0x280) = lVar13 + uVar3 * 0x10;
            if (lVar11 != 0) {
              plVar17 = *(long **)(lVar16 + 0x288);
              lVar21 = lVar21 - lVar11;
              uVar10 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar10 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar11,lVar21,8);
              }
              else {
                FUN_00c48fe8(plVar17,lVar11,lVar21,8);
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
          return;
        }
      }
      else {
        DAT_0485e990 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          lVar11 = plVar17[6];
          psVar2 = (short *)(lVar11 + 0x1a);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar17 + 0x50))();
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
        }
      }
    }
    puVar8 = PTR_DAT_047d0a08;
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(ulong *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
    }
    local_68 = param_2;
    if (param_1 == 2) {
      uVar19 = 2;
    }
    else if (param_1 == 1) {
      if (*(long *)(lVar16 + 0x70) != 0) {
        FUN_028a060c(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x8140),param_2);
      }
      if (uVar10 != param_2) {
        plVar5 = *(long **)(lVar16 + 0x80);
        for (plVar17 = *(long **)(lVar16 + 0x78); plVar17 != plVar5; plVar17 = plVar17 + 2) {
          if ((*plVar17 != 0) && (lVar11 = *(long *)(*plVar17 + 0x10), lVar11 != 0)) {
            FUN_0190fb38(lVar11 + -0x28,&local_68);
          }
        }
      }
      uVar19 = 1;
    }
    else {
      if (param_1 == 0) {
        if (*(long *)(lVar16 + 0x70) != 0) {
          FUN_028a054c(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x8140),param_2);
        }
        if (uVar10 != param_2) {
          plVar5 = *(long **)(lVar16 + 0x80);
          for (plVar17 = *(long **)(lVar16 + 0x78); plVar17 != plVar5; plVar17 = plVar17 + 2) {
            if ((*plVar17 != 0) && (lVar11 = *(long *)(*plVar17 + 0x10), lVar11 != 0)) {
              FUN_0178e9f0(lVar11 + -0x28,&local_68);
            }
          }
        }
        uVar10 = 0;
        if (*(long *)puVar8 != 0) {
          uVar10 = *(ulong *)(*(long *)puVar8 + 0xb8);
        }
        if (((local_68 == uVar10) && (*(long *)PTR_DAT_047d0860 != 0)) &&
           (lVar11 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea44,0x77), lVar11 != 0))
        {
          FUN_00789990(auStack_78);
        }
      }
      uVar19 = 0;
    }
    FUN_0284ea34(lVar16 + 0xb0,uVar19,local_68,lVar16);
  }
  return;
}


