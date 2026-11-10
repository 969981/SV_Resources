/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4b294; name: FUN_00a4b294
 */


undefined8 FUN_00a4b294(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  void *__src;
  undefined4 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  void *pvVar13;
  void *__dest;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  int iVar23;
  uint *puVar24;
  long *plVar25;
  undefined4 *puVar26;
  ulong __n;
  ulong __n_00;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined8 *local_e0;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  long *local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  void *local_68;
  
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x10) + 0x1e8) & 1) == 0))
  {
    uVar11 = 0;
  }
  else {
    lVar12 = (**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
    iVar7 = *(int *)(lVar12 + 0xc);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar12 + 0x10);
    if (iVar7 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x50);
      iVar23 = 0;
      puVar24 = (uint *)(lVar12 + 0x20);
      puVar2 = PTR_DAT_047d8e78 + 0x10;
      do {
        __n = (ulong)*puVar24;
        local_68 = (void *)(**(code **)(*DAT_048364e8 + 0x10))(DAT_048364e8,__n,8);
        memcpy(local_68,puVar24 + 4,__n);
        puVar24 = (uint *)((long)(puVar24 + 4) + __n);
        uVar8 = *puVar24;
        uVar17 = (ulong)puVar24[1];
        __n_00 = (ulong)puVar24[2];
        pvVar13 = (void *)(**(code **)(*DAT_048364e8 + 0x10))(DAT_048364e8,uVar17,8);
        memcpy(pvVar13,puVar24 + 4,uVar17);
        __src = (void *)((long)(puVar24 + 4) + uVar17);
        __dest = (void *)(**(code **)(*DAT_048364e8 + 0x10))(DAT_048364e8,__n_00,8);
        memcpy(__dest,__src,__n_00);
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)(param_1 + 0x58) + 0x10))
                            (*(long **)(param_1 + 0x58),0xb0,8);
        if (puVar14 == (undefined8 *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x58) + 0xe8))();
        }
        uVar11 = *(undefined8 *)(param_1 + 0x58);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        plVar25 = puVar14 + 4;
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          FUN_00cf9768(plVar25,&local_68);
          puVar14[5] = puVar2;
          *(undefined1 *)(puVar14 + 6) = 1;
          uVar11 = *(undefined8 *)PTR_DAT_047d8e68;
          puVar14[7] = 0;
          puVar14[8] = 0;
          *(undefined4 *)(puVar14 + 0xd) = 0;
          puVar14[0xb] = 0x3fffffffffffffff;
          puVar14[0xc] = 0;
          *(undefined4 *)(puVar14 + 0x14) = 0;
          puVar14[9] = 0;
          puVar14[10] = uVar11;
          puVar14[0x15] = 0;
          puVar14[0xe] = 0;
          puVar14[0xf] = 0;
          puVar14[0x10] = 0;
          puVar14[0x11] = uVar11;
          puVar14[0x12] = 0x3fffffffffffffff;
          puVar14[0x13] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00a4bc34:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar11;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          FUN_00cf9768(plVar25,&local_68);
          puVar14[5] = PTR_DAT_047d8e78 + 0x10;
          *(undefined1 *)(puVar14 + 6) = 1;
          uVar11 = *(undefined8 *)PTR_DAT_047d8e68;
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar14[0x12] = 0x3fffffffffffffff;
          puVar14[0x13] = 0;
          *(undefined4 *)(puVar14 + 0xd) = 0;
          puVar14[9] = 0;
          puVar14[10] = uVar11;
          *(undefined4 *)(puVar14 + 0x14) = 0;
          puVar14[0xb] = 0x3fffffffffffffff;
          puVar14[0xc] = 0;
          puVar14[0x15] = 0;
          puVar14[0xe] = 0;
          puVar14[0xf] = 0;
          puVar14[0x10] = 0;
          puVar14[0x11] = uVar11;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        puVar20 = (undefined8 *)*puVar1;
        puVar19 = puVar1;
        if (puVar20 == (undefined8 *)0x0) {
          puVar21 = puVar1;
        }
        else {
          puVar4 = (ulong *)PTR_DAT_047d8b70;
          if (*plVar25 != 0) {
            puVar4 = (ulong *)(*plVar25 + 0x30);
          }
          do {
            while( true ) {
              puVar5 = (ulong *)PTR_DAT_047d8b70;
              if (puVar20[4] != 0) {
                puVar5 = (ulong *)(puVar20[4] + 0x30);
              }
              puVar21 = puVar20;
              if (*puVar5 <= *puVar4) break;
              puVar19 = puVar20;
              if ((undefined8 *)*puVar20 == (undefined8 *)0x0) goto LAB_00a4b544;
              puVar20 = (undefined8 *)*puVar20;
            }
            if (*puVar4 <= *puVar5) break;
            puVar19 = puVar20 + 1;
            puVar20 = (undefined8 *)*puVar19;
          } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
        }
LAB_00a4b544:
        local_e0 = (undefined8 *)*puVar19;
        if (local_e0 == (undefined8 *)0x0) {
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = puVar21;
          *puVar19 = puVar14;
          if (**(long **)(param_1 + 0x48) == 0) {
            puVar19 = puVar14;
          }
          else {
            *(long *)(param_1 + 0x48) = **(long **)(param_1 + 0x48);
            puVar19 = (undefined8 *)*puVar19;
          }
          FUN_010108e0(*(undefined8 *)(param_1 + 0x50),puVar19);
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
          local_e0 = puVar14;
        }
        else if (puVar14 != (undefined8 *)0x0) {
          FUN_00a43810(puVar14 + 5);
          if ((long *)puVar14[4] != (long *)0x0) {
            (**(code **)(*(long *)puVar14[4] + 0x20))();
          }
          plVar25 = *(long **)(param_1 + 0x58);
          uVar15 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar15 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,puVar14,0xb0,8);
          }
          else {
            FUN_00c48fe8(plVar25,puVar14,0xb0,8);
          }
        }
        local_70 = 0;
        local_a0 = (undefined4 *)0x0;
        local_98 = (undefined4 *)0x0;
        local_80 = 0x3fffffffffffffff;
        uStack_78 = 0;
        local_90 = (undefined4 *)0x0;
        local_88 = DAT_048364e8;
        if (uVar8 != 0) {
          uVar15 = 0;
          do {
            plVar25 = local_88;
            puVar3 = local_98;
            uVar9 = *(undefined4 *)((long)pvVar13 + uVar15 * 8);
            if (local_98 < local_90) {
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar12 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar12 == 0) {
                *puVar3 = uVar9;
              }
              else {
                if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00a4bc34;
                *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar25;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                *puVar3 = uVar9;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              }
              local_98 = puVar3 + 1;
              puVar3 = local_90;
            }
            else {
              lVar12 = (long)local_98 - (long)local_a0 >> 2;
              uVar16 = lVar12 + 1;
              uVar6 = local_80;
              if (0x7ffffffffffffffe < local_80) {
                uVar6 = 0x7fffffffffffffff;
              }
              if (uVar6 < uVar16) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar22 = (long)local_90 - (long)local_a0 >> 1;
              if (uVar16 <= uVar22) {
                uVar16 = uVar22;
              }
              if (uVar6 >> 1 <= (ulong)((long)local_90 - (long)local_a0 >> 2)) {
                uVar16 = uVar6;
              }
              if (uVar16 == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = (**(code **)(*local_88 + 0x10))(local_88,uVar16 << 2,4);
                if (lVar18 == 0) {
                  (**(code **)(*local_88 + 0xe8))();
                }
              }
              plVar25 = local_88;
              puVar3 = (undefined4 *)(lVar18 + lVar12 * 4);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar12 = nn::os::GetTlsValue(DAT_04865a30);
              puVar26 = local_a0;
              if (lVar12 == 0) {
                *puVar3 = uVar9;
              }
              else {
                if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00a4bc34;
                *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar25;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                *puVar3 = uVar9;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              }
              if (local_98 == local_a0) {
                local_a0 = puVar3;
              }
              else {
                puVar27 = local_98;
                puVar28 = puVar3;
                do {
                  plVar25 = local_88;
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar12 == 0) {
                    puVar28[-1] = puVar27[-1];
                  }
                  else {
                    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00a4bc34;
                    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar25;
                    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                    puVar28[-1] = puVar27[-1];
                    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                  }
                  puVar27 = puVar27 + -1;
                  puVar28 = puVar28 + -1;
                } while (puVar26 != puVar27);
                puVar26 = local_a0;
                local_a0 = puVar28;
              }
              plVar25 = local_88;
              local_98 = puVar3 + 1;
              puVar3 = (undefined4 *)(lVar18 + uVar16 * 4);
              if (puVar26 != (undefined4 *)0x0) {
                lVar12 = (long)local_90 - (long)puVar26;
                local_90 = puVar3;
                uVar16 = (**(code **)(*local_88 + 0xf8))(local_88);
                if (((uVar16 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar25 + 0x18))(plVar25,puVar26,lVar12,4);
                  puVar3 = local_90;
                }
                else {
                  FUN_00c48fe8(plVar25,puVar26,lVar12,4);
                  puVar3 = local_90;
                }
              }
            }
            local_90 = puVar3;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar8);
        }
        FUN_00a42c28(local_e0 + 5,&local_a0,__dest);
        plVar25 = local_88;
        puVar3 = local_a0;
        if (local_a0 != (undefined4 *)0x0) {
          local_98 = local_a0;
          lVar12 = (long)local_90 - (long)local_a0;
          uVar15 = (**(code **)(*local_88 + 0xf8))(local_88);
          if (((uVar15 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,puVar3,lVar12,4);
          }
          else {
            FUN_00c48fe8(plVar25,puVar3,lVar12,4);
          }
        }
        plVar25 = DAT_048364e8;
        uVar15 = (**(code **)(*DAT_048364e8 + 0xf8))(DAT_048364e8);
        if (((uVar15 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,__dest,__n_00,8);
        }
        else {
          FUN_00c48fe8(plVar25,__dest,__n_00,8);
        }
        plVar25 = DAT_048364e8;
        uVar15 = (**(code **)(*DAT_048364e8 + 0xf8))(DAT_048364e8);
        if (((uVar15 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,pvVar13,uVar17,8);
        }
        else {
          FUN_00c48fe8(plVar25,pvVar13,uVar17,8);
        }
        pvVar13 = local_68;
        plVar25 = DAT_048364e8;
        puVar24 = (uint *)((long)__src + __n_00);
        uVar17 = (**(code **)(*DAT_048364e8 + 0xf8))(DAT_048364e8);
        if (((uVar17 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,pvVar13,__n,8);
        }
        else {
          FUN_00c48fe8(plVar25,pvVar13,__n,8);
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 != iVar7);
    }
    FUN_00db2500(param_1 + 8);
    uVar11 = 1;
  }
  return uVar11;
}


