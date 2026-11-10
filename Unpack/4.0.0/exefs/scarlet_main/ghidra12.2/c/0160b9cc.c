/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160b9cc; name: FUN_0160b9cc
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0160b9cc(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  uint *puVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  float fVar26;
  long local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x460));
  uVar10 = (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2));
  puVar3 = (uint *)((long)param_2 + uVar10);
  uVar16 = (ulong)*puVar3;
  puVar3 = (uint *)((long)puVar3 + uVar16);
  puVar20 = puVar3 + 1;
  uVar17 = (ulong)*puVar3;
  if (uVar17 != 0) {
    plVar1 = (long *)(param_1 + 0x48);
    puVar3 = puVar20 + uVar17;
    plVar2 = (long *)(param_1 + 0x78);
    lVar25 = (long)param_2 + uVar16 + uVar10 + 9;
    do {
      piVar4 = (int *)((long)puVar20 + (ulong)*puVar20);
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar10 == 0)) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        plVar19 = *(long **)PTR_DAT_047d3e30;
        plVar24 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x18))(plVar24);
        }
      }
      else {
        uVar16 = (ulong)*(uint *)((long)piVar4 + uVar10);
        bVar5 = *(byte *)((long)((long)piVar4 + uVar10) + uVar16 + 4);
        if (bVar5 == 0) {
          plVar24 = (long *)0x0;
          plVar19 = (long *)&DAT_cbf29ce484222645;
        }
        else {
          plVar19 = (long *)&DAT_cbf29ce484222645;
          pbVar11 = (byte *)(lVar25 + uVar16 + uVar10 + (ulong)*puVar20);
          do {
            plVar19 = (long *)(((ulong)plVar19 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar5 != 0);
          plVar24 = (long *)0x0;
        }
      }
      plVar23 = *(long **)(param_1 + 0x480);
      lVar7 = (**(code **)(*plVar23 + 0x10))(plVar23,0x60,8);
      if (lVar7 == 0) {
        local_70 = 0;
        local_68 = 0;
        local_80 = 0;
        local_78 = (long *)0x0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0160c374;
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar23;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        FUN_0160c3c0(lVar7,*(undefined8 *)(param_1 + 0x480),piVar4);
        local_70 = 0x60;
        local_68 = 8;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        local_80 = lVar7;
        local_78 = plVar23;
      }
      plVar18 = *(long **)(param_1 + 0x50);
      if (plVar18 == (long *)0x0) {
LAB_0160bb90:
        plVar22 = (long *)(**(code **)(**(long **)(param_1 + 0x80) + 0x10))
                                    (*(long **)(param_1 + 0x80),0x38,8);
        if (plVar22 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x80) + 0xe8))();
        }
        uVar21 = *(undefined8 *)(param_1 + 0x80);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          plVar22[2] = (long)plVar19;
          plVar22[3] = local_80;
          plVar22[5] = local_70;
          plVar22[6] = local_68;
          plVar22[4] = (long)local_78;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0160c374;
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar21;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          plVar22[2] = (long)plVar19;
          plVar22[3] = local_80;
          plVar22[5] = local_70;
          plVar22[6] = local_68;
          plVar22[4] = (long)local_78;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        *plVar22 = 0;
        plVar22[1] = (long)plVar19;
        fVar26 = (float)(*(long *)(param_1 + 0xa0) + 1);
        if ((plVar18 == (long *)0x0) || (*(float *)(param_1 + 0xa8) * (float)plVar18 < fVar26)) {
          uVar10 = (ulong)(plVar18 < (long *)0x3 ||
                          ((ulong)plVar18 & (ulong)((long)plVar18 + -1)) != 0) | (long)plVar18 << 1;
          uVar16 = (ulong)(fVar26 / *(float *)(param_1 + 0xa8));
          if (uVar16 <= uVar10) {
            uVar16 = uVar10;
          }
          if (uVar16 - 1 == 0) {
            uVar16 = 2;
          }
          else if ((uVar16 & uVar16 - 1) != 0) {
            uVar16 = std::__next_prime(uVar16);
          }
          uVar10 = *(ulong *)(param_1 + 0x50);
          if (uVar10 < uVar16) {
            uVar17 = uVar16;
LAB_0160bf68:
            FUN_0160c8c8(plVar1,uVar17);
          }
          else if (uVar16 < uVar10) {
            uVar17 = (ulong)((float)*(ulong *)(param_1 + 0xa0) / *(float *)(param_1 + 0xa8));
            if ((uVar10 < 3) ||
               (uVar15 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
               uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
               1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar17 = std::__next_prime(uVar17);
            }
            else if (1 < uVar17) {
              uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
            }
            if (uVar17 <= uVar16) {
              uVar17 = uVar16;
            }
            if (uVar17 < uVar10) goto LAB_0160bf68;
          }
          plVar18 = *(long **)(param_1 + 0x50);
          if (((ulong)plVar18 & (ulong)((long)plVar18 + -1)) == 0) {
            plVar23 = (long *)((ulong)((long)plVar18 + -1) & (ulong)plVar19);
          }
          else if (plVar19 < plVar18) {
            plVar23 = plVar19;
          }
          else {
            uVar10 = 0;
            if (plVar18 != (long *)0x0) {
              uVar10 = (ulong)plVar19 / (ulong)plVar18;
            }
            plVar23 = (long *)((long)plVar19 - uVar10 * (long)plVar18);
          }
        }
        plVar19 = *(long **)(*plVar1 + (long)plVar23 * 8);
        if (plVar19 == (long *)0x0) {
          *plVar22 = *plVar2;
          *plVar2 = (long)plVar22;
          *(long **)(*plVar1 + (long)plVar23 * 8) = plVar2;
          if (*plVar22 != 0) {
            plVar19 = *(long **)(*plVar22 + 8);
            if (((ulong)plVar18 & (ulong)((long)plVar18 + -1)) == 0) {
              plVar19 = (long *)((ulong)plVar19 & (ulong)((long)plVar18 + -1));
            }
            else if (plVar18 <= plVar19) {
              uVar10 = 0;
              if (plVar18 != (long *)0x0) {
                uVar10 = (ulong)plVar19 / (ulong)plVar18;
              }
              plVar19 = (long *)((long)plVar19 - uVar10 * (long)plVar18);
            }
            plVar19 = (long *)(*plVar1 + (long)plVar19 * 8);
            goto LAB_0160bc9c;
          }
        }
        else {
          *plVar22 = *plVar19;
LAB_0160bc9c:
          *plVar19 = (long)plVar22;
        }
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      }
      else {
        puVar12 = (undefined1 *)((long)plVar18 + -1);
        if (((ulong)plVar18 & (ulong)puVar12) == 0) {
          plVar23 = (long *)((ulong)puVar12 & (ulong)plVar19);
          plVar22 = *(long **)(*plVar1 + (long)plVar23 * 8);
          if (plVar22 == (long *)0x0) goto LAB_0160bb90;
          do {
            plVar22 = (long *)*plVar22;
            if ((plVar22 == (long *)0x0) ||
               ((long *)plVar22[1] != plVar19 &&
                (long *)((ulong)plVar22[1] & (ulong)puVar12) != plVar23)) goto LAB_0160bb90;
          } while ((long *)plVar22[2] != plVar19);
        }
        else {
          plVar23 = plVar19;
          if (plVar18 <= plVar19) {
            uVar10 = 0;
            if (plVar18 != (long *)0x0) {
              uVar10 = (ulong)plVar19 / (ulong)plVar18;
            }
            plVar23 = (long *)((long)plVar19 - uVar10 * (long)plVar18);
          }
          plVar22 = *(long **)(*plVar1 + (long)plVar23 * 8);
          if (plVar22 == (long *)0x0) goto LAB_0160bb90;
          do {
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) goto LAB_0160bb90;
            plVar13 = (long *)plVar22[1];
            if (plVar13 != plVar19) {
              if (plVar18 <= plVar13) {
                uVar10 = 0;
                if (plVar18 != (long *)0x0) {
                  uVar10 = (ulong)plVar13 / (ulong)plVar18;
                }
                plVar13 = (long *)((long)plVar13 - uVar10 * (long)plVar18);
              }
              if (plVar13 != plVar23) goto LAB_0160bb90;
            }
          } while ((long *)plVar22[2] != plVar19);
        }
        if (lVar7 != 0) {
          FUN_016181bc(&local_78,lVar7);
        }
      }
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x20))(plVar24);
      }
      plVar19 = *(long **)(param_1 + 0xb8);
      lVar7 = plVar22[3];
      if (plVar19 < *(long **)(param_1 + 0xc0)) {
        uVar21 = *(undefined8 *)(param_1 + 200);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *plVar19 = lVar7;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0160c374;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar21;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *plVar19 = lVar7;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *(long **)(param_1 + 0xb8) = plVar19 + 1;
      }
      else {
        uVar16 = *(ulong *)(param_1 + 0xd0);
        lVar8 = (long)plVar19 - *(long *)(param_1 + 0xb0) >> 3;
        uVar10 = lVar8 + 1;
        if (0x7ffffffffffffffe < uVar16) {
          uVar16 = 0x7fffffffffffffff;
        }
        if (uVar16 < uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = (long)*(long **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0);
        uVar17 = lVar14 >> 2;
        if (uVar10 <= uVar17) {
          uVar10 = uVar17;
        }
        if (uVar16 >> 1 <= (ulong)(lVar14 >> 3)) {
          uVar10 = uVar16;
        }
        if (uVar10 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = (**(code **)(**(long **)(param_1 + 200) + 0x10))
                             (*(long **)(param_1 + 200),uVar10 << 3,8);
          if (lVar14 == 0) {
            (**(code **)(**(long **)(param_1 + 200) + 0xe8))();
          }
        }
        plVar19 = (long *)(lVar14 + lVar8 * 8);
        uVar21 = *(undefined8 *)(param_1 + 200);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *plVar19 = lVar7;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_0160c374:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar21;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *plVar19 = lVar7;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar7 = *(long *)(param_1 + 0xb0);
        lVar8 = *(long *)(param_1 + 0xb8);
        plVar24 = plVar19;
        if (lVar8 != lVar7) {
          do {
            uVar21 = *(undefined8 *)(param_1 + 200);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar9 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar9 == 0) {
              plVar24[-1] = *(long *)(lVar8 + -8);
            }
            else {
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0160c374;
              *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar21;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              plVar24[-1] = *(long *)(lVar8 + -8);
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            }
            lVar8 = lVar8 + -8;
            plVar24 = plVar24 + -1;
          } while (lVar7 != lVar8);
          lVar7 = *(long *)(param_1 + 0xb0);
        }
        *(long **)(param_1 + 0xb0) = plVar24;
        *(long **)(param_1 + 0xb8) = plVar19 + 1;
        lVar8 = *(long *)(param_1 + 0xc0);
        *(ulong *)(param_1 + 0xc0) = lVar14 + uVar10 * 8;
        if (lVar7 != 0) {
          plVar19 = *(long **)(param_1 + 200);
          lVar8 = lVar8 - lVar7;
          uVar10 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,lVar7,lVar8,8);
          }
          else {
            FUN_00c48fe8(plVar19,lVar7,lVar8,8);
          }
        }
      }
      puVar20 = puVar20 + 1;
      lVar25 = lVar25 + 4;
    } while (puVar20 != puVar3);
  }
  FUN_0160cc10(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return;
}


