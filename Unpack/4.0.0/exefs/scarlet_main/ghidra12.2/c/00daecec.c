/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00daecec; name: FUN_00daecec
 */


/* WARNING: Removing unreachable block (ram,0x00daf37c) */
/* WARNING: Removing unreachable block (ram,0x00daf508) */

void FUN_00daecec(long param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  long *local_78;
  undefined8 *puStack_70;
  
  if (param_3 == 0) {
    return;
  }
  if ((int)((ulong)(*(long *)(param_3 + 0x58) - *(long *)(param_3 + 0x50)) >> 3) * -0x49249249 <=
      (int)param_2) {
    return;
  }
  if (((*(long *)(param_4 + 0x88) != 0) || (*(long *)(param_4 + 0x90) != 0)) ||
     (*(long *)(param_4 + 0x40) != 0)) goto LAB_00daed50;
  if ((*(long *)(param_4 + 0x50) == 0) || ((*(byte *)(*(long *)(param_4 + 0x50) + 0x1e8) & 1) == 0))
  {
    if (((*(long *)(param_4 + 8) != 0) &&
        (((*(byte *)(*(long *)(param_4 + 8) + 0x1e8) & 1) != 0 && (*(long *)(param_4 + 8) != 0))))
       && ((*(byte *)(*(long *)(param_4 + 8) + 0x1e8) & 1) != 0)) {
      puVar17 = (uint *)(**(code **)(**(long **)(param_4 + 8) + 0x70))();
      lVar20 = (long)puVar17 + (ulong)*puVar17;
      goto LAB_00daf5fc;
    }
  }
  else {
    lVar20 = FUN_029be138(*(undefined8 *)(param_4 + 0x50));
LAB_00daf5fc:
    if (lVar20 != 0) goto LAB_00daed50;
  }
  if (*(long *)(param_4 + 0x50) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_4 + 0x50) + 0x1e8) & 1) == 0) {
    return;
  }
LAB_00daed50:
  bVar6 = *(byte *)(param_1 + 0x71);
  uVar8 = 1 << (ulong)(param_2 & 0x1f);
  if ((uVar8 & bVar6) == 0) {
    lVar20 = *(long *)(param_3 + 0x50) + (long)(int)param_2 * 0x38;
    lVar21 = *(long *)(lVar20 + 8);
    if (lVar21 != lVar20) {
      cVar7 = *(char *)(param_4 + 0x98);
      puVar1 = (undefined8 *)(param_1 + 0x50);
      plVar28 = *(long **)(param_1 + 0x30);
      puVar2 = PTR_DAT_047e3278 + 0x10;
      do {
        plVar22 = (long *)(lVar21 + 0x10);
        lVar18 = *plVar22;
        for (lVar29 = *(long *)(lVar18 + 0x70); lVar29 != lVar18 + 0x68;
            lVar29 = *(long *)(lVar29 + 8)) {
          FUN_00daf8b8(&local_98,*(long *)(lVar29 + 0x10) + 0x30,param_2);
          plVar12 = (long *)FUN_00dafa58(param_3,plVar22,*(undefined4 *)(param_3 + 0x194));
          plVar9 = local_98;
          lVar27 = *plVar12;
          plVar12 = (long *)PTR_DAT_047d8b70;
          if (local_98 != (long *)0x0) {
            plVar12 = local_98 + 6;
          }
          local_90 = (undefined8 *)*plVar12;
          plVar12 = (long *)PTR_PTR_047d4508;
          if (local_98 != (long *)0x0) {
            plVar12 = local_98 + 7;
          }
          local_88 = (undefined8 *)*plVar12;
          if (local_98 == (long *)0x0) {
            local_80 = (undefined8 *)0x0;
          }
          else {
            local_80 = (undefined8 *)local_98[8];
            local_78 = (long *)0x0;
            (**(code **)(*local_98 + 0x18))(local_98);
          }
          local_78 = plVar9;
          lVar13 = FUN_00c5e550(param_4,&local_90);
          local_b0 = plVar28;
          if (local_78 == (long *)0x0) {
            if (lVar13 == 0) goto LAB_00daee7c;
LAB_00daeff4:
            lVar14 = *(long *)(lVar29 + 0x10);
            plVar12 = (long *)(**(code **)(*plVar28 + 0x10))(plVar28,0xd8,8);
            if (plVar12 == (long *)0x0) {
              local_a8 = 0;
              local_a0 = 0;
              local_b8 = (long *)0x0;
              local_b0 = (long *)0x0;
            }
            else {
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar15 = nn::os::GetTlsValue(DAT_04865a30);
              plVar9 = local_98;
              if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00daf8ac;
              *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar28;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
              plVar4 = (long *)PTR_DAT_047d8b70;
              if (local_98 != (long *)0x0) {
                plVar4 = local_98 + 6;
              }
              local_90 = (undefined8 *)*plVar4;
              plVar4 = (long *)PTR_PTR_047d4508;
              if (local_98 != (long *)0x0) {
                plVar4 = local_98 + 7;
              }
              local_88 = (undefined8 *)*plVar4;
              if (local_98 == (long *)0x0) {
                local_80 = (undefined8 *)0x0;
              }
              else {
                local_80 = (undefined8 *)local_98[8];
                local_78 = (long *)0x0;
                (**(code **)(*local_98 + 0x18))(local_98);
              }
              local_78 = plVar9;
              FUN_00dafd60(plVar12,plVar22,lVar27,lVar14 + 0x30,&local_90,
                           *(undefined8 *)(param_1 + 0x30));
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              local_a8 = 0xd8;
              local_a0 = 8;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
              local_b8 = plVar12;
            }
            FUN_00db0504(plVar12,param_3,param_5,param_6,lVar13,cVar7 != '\0');
            puVar16 = *(undefined8 **)(param_1 + 0x40);
            if (puVar16 < *(undefined8 **)(param_1 + 0x48)) {
LAB_00daef48:
              uVar26 = *puVar1;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar27 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar27 != 0) {
                if (0xf < *(ulong *)(lVar27 + 0x80)) {
LAB_00daf8ac:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = uVar26;
                *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
              }
              *puVar16 = local_b8;
              puVar16[1] = local_b0;
              puVar16[2] = local_a8;
              puVar16[3] = local_a0;
              if (lVar27 != 0) {
                *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
              }
              *(undefined8 **)(param_1 + 0x40) = puVar16 + 4;
            }
            else {
              uVar24 = *(ulong *)(param_1 + 0x58);
              lVar27 = (long)puVar16 - *(long *)(param_1 + 0x38) >> 5;
              uVar3 = lVar27 + 1;
              if (0x7ffffffffffffffe < uVar24) {
                uVar24 = 0x7fffffffffffffff;
              }
              if (uVar24 < uVar3) {
LAB_00daf8b0:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar13 = (long)*(undefined8 **)(param_1 + 0x48) - *(long *)(param_1 + 0x38);
              uVar19 = lVar13 >> 4;
              local_78 = (long *)0x0;
              if (uVar3 <= uVar19) {
                uVar3 = uVar19;
              }
              if (uVar24 >> 1 <= (ulong)(lVar13 >> 5)) {
                uVar3 = uVar24;
              }
              if (uVar3 == 0) {
                puVar16 = (undefined8 *)0x0;
                puStack_70 = puVar1;
              }
              else {
                puStack_70 = puVar1;
                puVar16 = (undefined8 *)
                          (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar3 << 5,8);
                if (puVar16 == (undefined8 *)0x0) {
                  (**(code **)(*(long *)*puVar1 + 0xe8))();
                }
              }
              puVar25 = puVar16 + lVar27 * 4;
              local_78 = puVar16 + uVar3 * 4;
              uVar26 = *puVar1;
              local_90 = puVar16;
              local_88 = puVar25;
              local_80 = puVar25;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar27 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar27 != 0) {
                if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_00daf8ac;
                *(undefined8 *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = uVar26;
                *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
              }
              *puVar25 = local_b8;
              puVar25[1] = local_b0;
              puVar25[2] = local_a8;
              puVar25[3] = local_a0;
              if (lVar27 != 0) {
                *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
              }
              local_80 = local_80 + 4;
              puVar16 = *(undefined8 **)(param_1 + 0x38);
              puVar25 = *(undefined8 **)(param_1 + 0x40);
              if (puVar25 == puVar16) {
                puVar25 = puVar16;
              }
              else {
                do {
                  puVar10 = local_88;
                  uVar26 = *puVar1;
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar27 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar27 != 0) {
                    if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_00daf8ac;
                    *(undefined8 *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = uVar26;
                    *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
                  }
                  uVar26 = puVar25[-4];
                  puVar25[-4] = 0;
                  puVar10[-4] = uVar26;
                  uVar26 = puVar25[-3];
                  puVar5 = puVar25 + -2;
                  uVar23 = puVar25[-1];
                  puVar25 = puVar25 + -4;
                  puVar10[-2] = *puVar5;
                  puVar10[-1] = uVar23;
                  puVar10[-3] = uVar26;
                  if (lVar27 != 0) {
                    *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
                  }
                  local_88 = local_88 + -4;
                } while (puVar16 != puVar25);
                puVar16 = *(undefined8 **)(param_1 + 0x38);
                puVar25 = *(undefined8 **)(param_1 + 0x40);
              }
              *(undefined8 **)(param_1 + 0x38) = local_88;
              *(undefined8 **)(param_1 + 0x40) = local_80;
              plVar12 = *(long **)(param_1 + 0x48);
              *(long **)(param_1 + 0x48) = local_78;
              local_90 = puVar16;
              local_88 = puVar16;
              local_80 = puVar25;
              local_78 = plVar12;
              FUN_00db0094(&local_90);
            }
          }
          else {
            (**(code **)(*local_78 + 0x20))();
            if (lVar13 != 0) goto LAB_00daeff4;
LAB_00daee7c:
            if (cVar7 != '\0') {
              lVar13 = *(long *)(lVar29 + 0x10);
              local_b8 = (long *)(**(code **)(*plVar28 + 0x10))(plVar28,0x30,8);
              if (local_b8 == (long *)0x0) {
                local_a8 = 0;
                local_a0 = 0;
                local_b8 = (long *)0x0;
                local_b0 = (long *)0x0;
              }
              else {
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar14 = nn::os::GetTlsValue(DAT_04865a30);
                if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00daf8ac;
                *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar28;
                *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
                *local_b8 = (long)puVar2;
                local_b8[1] = lVar27;
                local_b8[2] = *(long *)(lVar13 + 0x30);
                local_b8[3] = *(long *)(lVar13 + 0x38);
                local_b8[4] = *(long *)(lVar13 + 0x40);
                plVar12 = *(long **)(lVar13 + 0x48);
                local_b8[5] = (long)plVar12;
                if (plVar12 != (long *)0x0) {
                  (**(code **)(*plVar12 + 0x18))();
                }
                local_a8 = 0x30;
                local_a0 = 8;
                *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
              }
              puVar16 = *(undefined8 **)(param_1 + 0x40);
              if (*(undefined8 **)(param_1 + 0x48) <= puVar16) {
                uVar24 = *(ulong *)(param_1 + 0x58);
                lVar27 = (long)puVar16 - *(long *)(param_1 + 0x38) >> 5;
                uVar3 = lVar27 + 1;
                if (0x7ffffffffffffffe < uVar24) {
                  uVar24 = 0x7fffffffffffffff;
                }
                if (uVar24 < uVar3) goto LAB_00daf8b0;
                lVar13 = (long)*(undefined8 **)(param_1 + 0x48) - *(long *)(param_1 + 0x38);
                uVar19 = lVar13 >> 4;
                local_78 = (long *)0x0;
                if (uVar3 <= uVar19) {
                  uVar3 = uVar19;
                }
                if (uVar24 >> 1 <= (ulong)(lVar13 >> 5)) {
                  uVar3 = uVar24;
                }
                if (uVar3 == 0) {
                  puVar16 = (undefined8 *)0x0;
                  puStack_70 = puVar1;
                }
                else {
                  puStack_70 = puVar1;
                  puVar16 = (undefined8 *)
                            (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar3 << 5,8);
                  if (puVar16 == (undefined8 *)0x0) {
                    (**(code **)(*(long *)*puVar1 + 0xe8))();
                  }
                }
                puVar25 = puVar16 + lVar27 * 4;
                local_78 = puVar16 + uVar3 * 4;
                uVar26 = *puVar1;
                local_90 = puVar16;
                local_88 = puVar25;
                local_80 = puVar25;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar27 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar27 != 0) {
                  if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_00daf8ac;
                  *(undefined8 *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = uVar26;
                  *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
                }
                *puVar25 = local_b8;
                puVar25[1] = local_b0;
                puVar25[2] = local_a8;
                puVar25[3] = local_a0;
                if (lVar27 != 0) {
                  *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
                }
                local_80 = local_80 + 4;
                puVar16 = *(undefined8 **)(param_1 + 0x38);
                puVar25 = *(undefined8 **)(param_1 + 0x40);
                if (puVar25 == puVar16) {
                  puVar25 = puVar16;
                }
                else {
                  do {
                    puVar10 = local_88;
                    uVar26 = *puVar1;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar27 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar27 != 0) {
                      if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_00daf8ac;
                      *(undefined8 *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = uVar26;
                      *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
                    }
                    uVar26 = puVar25[-4];
                    puVar25[-4] = 0;
                    puVar10[-4] = uVar26;
                    uVar26 = puVar25[-3];
                    puVar5 = puVar25 + -2;
                    uVar23 = puVar25[-1];
                    puVar25 = puVar25 + -4;
                    puVar10[-2] = *puVar5;
                    puVar10[-1] = uVar23;
                    puVar10[-3] = uVar26;
                    if (lVar27 != 0) {
                      *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
                    }
                    local_88 = local_88 + -4;
                  } while (puVar16 != puVar25);
                  puVar16 = *(undefined8 **)(param_1 + 0x38);
                  puVar25 = *(undefined8 **)(param_1 + 0x40);
                }
                *(undefined8 **)(param_1 + 0x38) = local_88;
                *(undefined8 **)(param_1 + 0x40) = local_80;
                plVar12 = *(long **)(param_1 + 0x48);
                *(long **)(param_1 + 0x48) = local_78;
                local_90 = puVar16;
                local_88 = puVar16;
                local_80 = puVar25;
                local_78 = plVar12;
                FUN_00db0094(&local_90);
                goto LAB_00daefc8;
              }
              goto LAB_00daef48;
            }
          }
LAB_00daefc8:
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
        }
        lVar21 = *(long *)(lVar21 + 8);
      } while (lVar21 != lVar20);
      bVar6 = *(byte *)(param_1 + 0x71);
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(byte *)(param_1 + 0x71) = bVar6 | (byte)uVar8;
  }
  return;
}


