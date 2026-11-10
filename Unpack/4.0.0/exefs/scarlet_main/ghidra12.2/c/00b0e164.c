/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0e164; name: FUN_00b0e164
 */


void FUN_00b0e164(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  size_t sVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  void *__dest;
  undefined8 uVar16;
  
  if (*(char *)(param_2 + 0xd) == '\x01') {
    puVar1 = (undefined8 *)(param_1 + 0x140);
    FUN_00b10e8c(puVar1);
    FUN_00b112c0(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
    pvVar14 = *(void **)(param_1 + 0x140);
    pvVar5 = *(void **)(param_1 + 0x148);
    pvVar12 = pvVar14;
    if (pvVar14 == pvVar5) {
      pvVar6 = pvVar5;
    }
    else {
      pvVar6 = pvVar14;
      pvVar11 = pvVar5;
      do {
        if (*(char *)((long)pvVar6 + 0x104) != '\0') {
          pvVar11 = pvVar6;
        }
        pvVar6 = (void *)((long)pvVar6 + 0x108);
      } while (pvVar5 != pvVar6);
      if (pvVar11 != pvVar5) {
        memcpy((void *)(param_1 + 0x178),pvVar11,0x105);
        pvVar11 = (void *)((long)pvVar11 + 0x108);
        if (0 < (long)pvVar11 - (long)pvVar14) {
          lVar7 = (long)pvVar11 - (long)pvVar14 >> 3;
          lVar15 = lVar7 * 0xf83e0f83e0f83e1;
          pvVar5 = *(void **)(param_1 + 0x110);
          if ((*(long *)(param_1 + 0x118) - (long)pvVar5 >> 3) * 0xf83e0f83e0f83e1 < lVar15) {
            lVar9 = (long)pvVar5 - *(long *)(param_1 + 0x108) >> 3;
            uVar10 = *(ulong *)(param_1 + 0x128);
            if (0x7ffffffffffffffe < uVar10) {
              uVar10 = 0x7fffffffffffffff;
            }
            uVar2 = lVar9 * 0xf83e0f83e0f83e1 + lVar15;
            if (uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar15 = *(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x108) >> 3;
            uVar8 = lVar15 * 0x1f07c1f07c1f07c2;
            if (uVar2 <= uVar8) {
              uVar2 = uVar8;
            }
            if (uVar10 >> 1 <= (ulong)(lVar15 * 0xf83e0f83e0f83e1)) {
              uVar2 = uVar10;
            }
            if (uVar2 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = (**(code **)(**(long **)(param_1 + 0x120) + 0x10))
                                 (*(long **)(param_1 + 0x120),uVar2 * 0x108,8);
              if (lVar15 == 0) {
                (**(code **)(**(long **)(param_1 + 0x120) + 0xe8))();
              }
            }
            __dest = (void *)(lVar15 + lVar9 * 8);
            pvVar6 = (void *)((long)__dest + lVar7 * 8);
            lVar7 = lVar7 << 3;
            pvVar12 = __dest;
            do {
              uVar16 = *(undefined8 *)(param_1 + 0x120);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar9 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar9 == 0) {
                memcpy(pvVar12,pvVar14,0x108);
              }
              else {
                if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00b0e9a0;
                *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar16;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                memcpy(pvVar12,pvVar14,0x108);
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              }
              pvVar12 = (void *)((long)pvVar12 + 0x108);
              pvVar14 = (void *)((long)pvVar14 + 0x108);
              lVar7 = lVar7 + -0x108;
            } while (lVar7 != 0);
            pvVar14 = *(void **)(param_1 + 0x108);
            if (pvVar14 != pvVar5) {
              pvVar12 = pvVar5;
              do {
                uVar16 = *(undefined8 *)(param_1 + 0x120);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                __dest = (void *)((long)__dest + -0x108);
                pvVar12 = (void *)((long)pvVar12 + -0x108);
                lVar7 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar7 == 0) {
                  memcpy(__dest,pvVar12,0x108);
                }
                else {
                  if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00b0e9a0;
                  *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar16;
                  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
                  memcpy(__dest,pvVar12,0x108);
                  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
                }
              } while (pvVar14 != pvVar12);
            }
            pvVar14 = *(void **)(param_1 + 0x110);
            for (; pvVar14 != pvVar5; pvVar5 = (void *)((long)pvVar5 + 0x108)) {
              uVar16 = *(undefined8 *)(param_1 + 0x120);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar7 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar7 == 0) {
                memcpy(pvVar6,pvVar5,0x108);
              }
              else {
                if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00b0e9a0;
                *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar16;
                *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
                memcpy(pvVar6,pvVar5,0x108);
                *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
              }
              pvVar6 = (void *)((long)pvVar6 + 0x108);
            }
            lVar9 = *(long *)(param_1 + 0x108);
            *(void **)(param_1 + 0x108) = __dest;
            *(void **)(param_1 + 0x110) = pvVar6;
            lVar7 = *(long *)(param_1 + 0x118);
            *(ulong *)(param_1 + 0x118) = lVar15 + uVar2 * 0x108;
            if (lVar9 != 0) {
              plVar13 = *(long **)(param_1 + 0x120);
              lVar7 = lVar7 - lVar9;
              uVar10 = (**(code **)(*plVar13 + 0xf8))(plVar13);
              if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar13 + 0x18))(plVar13,lVar9,lVar7,8);
              }
              else {
                FUN_00c48fe8(plVar13,lVar9,lVar7,8);
              }
            }
          }
          else if (lVar15 < 1) {
            pvVar12 = (void *)((long)pvVar5 + lVar7 * -8);
            pvVar6 = pvVar5;
            if (pvVar12 < pvVar5) {
              do {
                uVar16 = *(undefined8 *)(param_1 + 0x120);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar15 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar15 == 0) {
                  memcpy(pvVar6,pvVar12,0x108);
                }
                else {
                  if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00b0e9a0;
                  *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar16;
                  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
                  memcpy(pvVar6,pvVar12,0x108);
                  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
                }
                pvVar12 = (void *)((long)pvVar12 + 0x108);
                pvVar6 = (void *)((long)pvVar6 + 0x108);
              } while (pvVar12 < pvVar5);
            }
            *(void **)(param_1 + 0x110) = pvVar6;
            if (lVar7 * -8 != 0) {
              memmove((void *)((long)pvVar5 + lVar7 * 8),pvVar5,lVar7 * -8);
            }
            if ((long)pvVar11 - (long)pvVar14 != 0) {
              memmove(pvVar5,pvVar14,(long)pvVar11 - (long)pvVar14);
            }
          }
          else {
            if (pvVar14 != pvVar11) {
              do {
                uVar16 = *(undefined8 *)(param_1 + 0x120);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar7 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar7 == 0) {
                  memcpy(pvVar5,pvVar14,0x108);
                }
                else {
                  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00b0e9a0:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar16;
                  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
                  memcpy(pvVar5,pvVar14,0x108);
                  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
                }
                pvVar14 = (void *)((long)pvVar14 + 0x108);
                pvVar5 = (void *)((long)pvVar5 + 0x108);
              } while (pvVar11 != pvVar14);
            }
            *(void **)(param_1 + 0x110) = pvVar5;
          }
        }
        pvVar12 = (void *)*puVar1;
        if (pvVar11 == pvVar12) {
          pvVar5 = *(void **)(param_1 + 0x148);
        }
        else {
          sVar3 = *(long *)(param_1 + 0x148) - (long)pvVar11;
          if (sVar3 == 0) {
            pvVar11 = pvVar12;
          }
          else {
            memmove(pvVar12,pvVar11,sVar3);
            pvVar11 = (void *)*puVar1;
          }
          pvVar5 = (void *)((long)pvVar12 + sVar3);
          *(void **)(param_1 + 0x148) = pvVar5;
          pvVar12 = pvVar11;
        }
        pvVar14 = pvVar11;
      }
      pvVar6 = pvVar5;
      if (pvVar14 != pvVar5) {
        do {
          pvVar6 = pvVar5;
          iVar4 = *(int *)((long)pvVar14 + 0x7c) - *(int *)(param_1 + 500);
          pvVar5 = pvVar14;
          if ((iVar4 != -2 && iVar4 != 1) &&
              (*(int *)(param_1 + 500) != 0 || *(int *)((long)pvVar14 + 0x7c) != 0))
          goto LAB_00b0e92c;
          *(undefined1 *)((long)pvVar14 + 0x80) = 1;
          FUN_00b10e8c(param_1 + 0x108,pvVar14);
          memcpy((void *)(param_1 + 0x178),pvVar14,0x105);
          pvVar6 = (void *)((long)pvVar14 + 0x108);
          pvVar5 = *(void **)(param_1 + 0x148);
          pvVar14 = pvVar6;
        } while (pvVar6 != *(void **)(param_1 + 0x148));
        pvVar5 = pvVar6;
LAB_00b0e92c:
        pvVar12 = (void *)*puVar1;
      }
    }
    if (pvVar5 != pvVar12) {
      sVar3 = (long)pvVar6 - (long)pvVar5;
      if (sVar3 != 0) {
        memmove(pvVar12,pvVar5,sVar3);
      }
      *(size_t *)(param_1 + 0x148) = (long)pvVar12 + sVar3;
    }
  }
  return;
}


