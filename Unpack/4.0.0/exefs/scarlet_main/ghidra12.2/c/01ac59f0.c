/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ac59f0; name: FUN_01ac59f0
 */


void FUN_01ac59f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  char *__s;
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ushort *puVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 *local_80;
  char *local_78;
  size_t local_70;
  long *local_68;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  lVar12 = *(long *)(param_3 + 0x90);
  if (lVar12 == 0) {
    lVar12 = *(long *)(param_3 + 0x88);
    if (lVar12 == 0) {
      if (*(long *)(param_3 + 0x50) == 0) {
        return;
      }
      if ((*(byte *)(*(long *)(param_3 + 0x50) + 0x1e8) & 1) == 0) {
        return;
      }
      piVar23 = (int *)FUN_029d60c8(*(undefined8 *)(param_3 + 0x50));
      goto LAB_01ac5a50;
    }
    if (*(long *)(lVar12 + 0x48) == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(lVar12 + 0x48) + 0x1e8) & 1) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0x48) + 0x220);
    if (lVar12 == 0) {
      return;
    }
  }
  piVar23 = *(int **)(lVar12 + 0x70);
LAB_01ac5a50:
  if (((piVar23 != (int *)0x0) && (6 < *(ushort *)((long)piVar23 - (long)*piVar23))) &&
     (uVar26 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[3], uVar26 != 0)) {
    uVar27 = (ulong)*(uint *)((long)piVar23 + uVar26);
    puVar1 = (uint *)((long)((long)piVar23 + uVar26) + uVar27);
    uVar20 = (ulong)*puVar1;
    plVar18 = (long *)(param_1 + 0x10);
    lVar12 = *(long *)(param_1 + 0x18) - *plVar18 >> 3;
    *(uint *)(param_1 + 0x48) = *puVar1;
    if ((ulong)(lVar12 * 0x6db6db6db6db6db7) < uVar20) {
      if ((ulong)((*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 3) * 0x6db6db6db6db6db7)
          < uVar20 + lVar12 * -0x6db6db6db6db6db7) {
        uVar19 = *(ulong *)(param_1 + 0x30);
        if (0x7ffffffffffffffe < uVar19) {
          uVar19 = 0x7fffffffffffffff;
        }
        if (uVar19 < uVar20) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar17 = *(long *)(param_1 + 0x20) - *plVar18 >> 3;
        uVar16 = lVar17 * -0x2492492492492492;
        uVar6 = uVar20;
        if (uVar20 <= uVar16) {
          uVar6 = uVar16;
        }
        if (uVar19 >> 1 <= (ulong)(lVar17 * 0x6db6db6db6db6db7)) {
          uVar6 = uVar19;
        }
        if (uVar6 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
                             (*(long **)(param_1 + 0x28),uVar6 * 0x38,8);
          if (lVar17 == 0) {
            (**(code **)(**(long **)(param_1 + 0x28) + 0xe8))(*(long **)(param_1 + 0x28));
          }
        }
        lVar13 = lVar17 + lVar12 * 8;
        lVar12 = uVar20 * 0x38 + lVar12 * -8;
        puVar25 = (undefined8 *)(lVar13 + 0x10);
        do {
          uVar24 = *(undefined8 *)(param_1 + 0x28);
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 == 0) {
            puVar25[2] = 0;
            puVar25[3] = 0;
            puVar25[4] = 0;
            puVar25[-2] = 0;
            puVar25[-1] = &DAT_cbf29ce484222645;
            *puVar25 = &DAT_03c886bc;
            puVar25[1] = 0;
          }
          else {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01ac6100;
            *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar24;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            puVar25[3] = 0;
            puVar25[4] = 0;
            puVar25[2] = 0;
            *puVar25 = &DAT_03c886bc;
            puVar25[1] = 0;
            puVar25[-2] = 0;
            puVar25[-1] = &DAT_cbf29ce484222645;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          lVar12 = lVar12 + -0x38;
          puVar25 = puVar25 + 7;
        } while (lVar12 != 0);
        lVar12 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 == lVar12) {
          lVar10 = lVar12;
        }
        else {
          lVar22 = 0;
          do {
            uVar24 = *(undefined8 *)(param_1 + 0x28);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar11 != 0) {
              if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_01ac6100:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar24;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            }
            lVar4 = lVar10 + lVar22;
            lVar5 = lVar13 + lVar22;
            *(undefined8 *)(lVar5 + -0x38) = *(undefined8 *)(lVar4 + -0x38);
            *(undefined8 *)(lVar5 + -0x30) = *(undefined8 *)(lVar4 + -0x30);
            *(undefined8 *)(lVar5 + -0x28) = *(undefined8 *)(lVar4 + -0x28);
            *(undefined8 *)(lVar5 + -0x20) = *(undefined8 *)(lVar4 + -0x20);
            uVar24 = *(undefined8 *)(lVar4 + -0x18);
            *(undefined8 *)(lVar4 + -0x18) = 0;
            *(undefined8 *)(lVar5 + -0x18) = uVar24;
            uVar24 = *(undefined8 *)(lVar4 + -0x10);
            *(undefined1 *)(lVar5 + -8) = *(undefined1 *)(lVar4 + -8);
            *(undefined8 *)(lVar5 + -0x10) = uVar24;
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            }
            lVar22 = lVar22 + -0x38;
          } while (lVar12 - lVar10 != lVar22);
          lVar12 = *(long *)(param_1 + 0x10);
          lVar13 = lVar13 + lVar22;
          lVar10 = *(long *)(param_1 + 0x18);
        }
        *(long *)(param_1 + 0x10) = lVar13;
        *(ulong *)(param_1 + 0x18) = lVar17 + uVar20 * 0x38;
        lVar13 = *(long *)(param_1 + 0x20);
        *(ulong *)(param_1 + 0x20) = lVar17 + uVar6 * 0x38;
        if (lVar10 != lVar12) {
          if (*(long **)(lVar10 + -0x18) != (long *)0x0) {
            (**(code **)(**(long **)(lVar10 + -0x18) + 0x20))();
          }
          if (lVar10 + -0x38 != lVar12) {
            do {
              if (*(long **)(lVar10 + -0x50) != (long *)0x0) {
                (**(code **)(**(long **)(lVar10 + -0x50) + 0x20))();
              }
              lVar10 = lVar10 + -0x38;
            } while (lVar12 + 0x38 != lVar10);
          }
        }
        if (lVar12 != 0) {
          lVar13 = lVar13 - lVar12;
          plVar21 = *(long **)(param_1 + 0x28);
          uVar20 = (**(code **)(*plVar21 + 0xf8))(plVar21);
          if (((uVar20 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
            (**(code **)(*plVar21 + 0x18))(plVar21,lVar12,lVar13,8);
          }
          else {
            FUN_00c48fe8(plVar21,lVar12,lVar13,8);
          }
        }
      }
      else {
        FUN_01ac6148(plVar18);
      }
    }
    if (*puVar1 != 0) {
      uVar20 = 0;
      lVar12 = (long)piVar23 + uVar27 + uVar26 + 9;
      do {
        lVar17 = *plVar18;
        plVar21 = (long *)(lVar17 + uVar20 * 0x38);
        *plVar21 = 0;
        plVar21[5] = 0;
        uVar26 = (ulong)puVar1[uVar20 + 1];
        piVar23 = (int *)((long)(puVar1 + uVar20 + 1) + uVar26);
        puVar14 = (ushort *)((long)piVar23 - (long)*piVar23);
        if ((0xe < *puVar14) && ((ulong)puVar14[7] != 0)) {
          puVar2 = (uint *)((long)piVar23 + (ulong)puVar14[7]);
          uVar27 = (ulong)puVar14[2];
          piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
          if (uVar27 == 0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_80 = *(undefined1 **)PTR_DAT_047d3e30;
            local_78 = *(char **)(PTR_DAT_047d3e30 + 8);
            local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
            local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x18))();
            }
          }
          else {
            puVar2 = (uint *)((long)piVar23 + uVar27);
            uVar19 = (ulong)*puVar2;
            __s = (char *)((long)puVar2 + uVar19 + 4);
            local_70 = strlen(__s);
            bVar7 = *(byte *)((long)puVar2 + uVar19 + 4);
            local_80 = &DAT_cbf29ce484222645;
            if (bVar7 != 0) {
              local_80 = &DAT_cbf29ce484222645;
              pbVar15 = (byte *)(lVar12 + uVar19 + uVar27 + uVar26);
              do {
                local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar15;
                pbVar15 = pbVar15 + 1;
              } while (bVar7 != 0);
            }
            local_68 = (long *)0x0;
            local_78 = __s;
          }
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
             (uVar26 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar26 == 0)) {
            lVar13 = 0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar26);
            lVar13 = (long)puVar2 + (ulong)*puVar2;
          }
          uVar26 = FUN_00c742fc(param_4 + 0xb0,&local_80);
          plVar8 = local_68;
          if ((uVar26 & 1) != 0) {
            *plVar21 = lVar13;
            lVar13 = lVar17 + uVar20 * 0x38;
            *(undefined1 **)(lVar13 + 8) = local_80;
            *(char **)(lVar13 + 0x10) = local_78;
            *(size_t *)(lVar13 + 0x18) = local_70;
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x18))(local_68);
            }
            plVar21 = *(long **)(lVar13 + 0x20);
            *(long **)(lVar13 + 0x20) = plVar8;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x20))();
            }
            *(undefined1 *)(lVar17 + uVar20 * 0x38 + 0x30) = 1;
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
        }
        uVar20 = uVar20 + 1;
        lVar12 = lVar12 + 4;
      } while (uVar20 < *puVar1);
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}


