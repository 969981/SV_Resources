/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9ea4c; name: FUN_00f9ea4c
 */


void FUN_00f9ea4c(long *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  long *plVar9;
  uint *puVar10;
  undefined1 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  
  puVar10 = param_2 + 1;
  if (*param_2 != 0) {
    puVar1 = puVar10 + *param_2;
    uVar25 = 0;
    do {
      puVar15 = &DAT_cbf29ce484222645;
      lVar20 = *param_1;
      if ((ulong)((param_1[1] - lVar20 >> 5) * -0x5555555555555555) <= uVar25) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar12 == 0)) {
        lVar27 = 0;
      }
      else {
        puVar21 = (uint *)((long)piVar2 + uVar12);
        lVar27 = (long)puVar21 + (ulong)*puVar21;
      }
      sVar8 = strlen((char *)(lVar27 + 4));
      bVar6 = *(byte *)(lVar27 + 4);
      if (bVar6 != 0) {
        pbVar19 = (byte *)(lVar27 + 5);
        do {
          puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar6 != 0);
      }
      puVar22 = (undefined8 *)(lVar20 + uVar25 * 0x60);
      *puVar22 = puVar15;
      puVar22[1] = (char *)(lVar27 + 4);
      puVar22[2] = sVar8;
      plVar28 = puVar22 + 3;
      plVar9 = (long *)*plVar28;
      *plVar28 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      *plVar28 = 0;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
        uVar11 = 0;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = *(undefined1 *)((long)piVar2 + uVar12);
        }
      }
      *(undefined1 *)(lVar20 + uVar25 * 0x60 + 0x58) = uVar11;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
        uVar11 = 0;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = *(undefined1 *)((long)piVar2 + uVar12);
        }
      }
      *(undefined1 *)(lVar20 + uVar25 * 0x60 + 0x59) = uVar11;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) {
        uVar11 = 0;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = *(undefined1 *)((long)piVar2 + uVar12);
        }
      }
      *(undefined1 *)(lVar20 + uVar25 * 0x60 + 0x5a) = uVar11;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) {
        uVar11 = 0;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = *(undefined1 *)((long)piVar2 + uVar12);
        }
      }
      *(undefined1 *)(lVar20 + uVar25 * 0x60 + 0x5b) = uVar11;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
         (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar12 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)((long)piVar2 + uVar12);
      }
      lVar27 = lVar20 + uVar25 * 0x60;
      plVar9 = (long *)(lVar27 + 0x20);
      lVar13 = *plVar9;
      *(undefined4 *)(lVar27 + 0x5c) = uVar14;
      puVar21 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
      uVar12 = (ulong)*(uint *)((long)puVar21 + (ulong)*puVar21);
      plVar28 = (long *)(lVar27 + 0x28);
      lVar27 = *plVar28;
      lVar17 = lVar27 - lVar13 >> 3;
      if ((ulong)(lVar17 * -0x3333333333333333) < uVar12) {
        plVar26 = (long *)(lVar20 + uVar25 * 0x60 + 0x30);
        if ((ulong)((*plVar26 - lVar27 >> 3) * -0x3333333333333333) <
            uVar12 + lVar17 * 0x3333333333333333) {
          lVar20 = lVar20 + uVar25 * 0x60;
          uVar16 = *(ulong *)(lVar20 + 0x40);
          if (0x7ffffffffffffffe < uVar16) {
            uVar16 = 0x7fffffffffffffff;
          }
          if (uVar16 < uVar12) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar27 = *plVar26 - lVar13 >> 3;
          uVar18 = lVar27 * -0x6666666666666666;
          uVar5 = uVar12;
          if (uVar12 <= uVar18) {
            uVar5 = uVar18;
          }
          puVar22 = (undefined8 *)(lVar20 + 0x38);
          if (uVar16 >> 1 <= (ulong)(lVar27 * -0x3333333333333333)) {
            uVar5 = uVar16;
          }
          if (uVar5 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,uVar5 * 0x28,8);
            if (lVar20 == 0) {
              (**(code **)(*(long *)*puVar22 + 0xe8))();
            }
          }
          lVar27 = lVar20 + lVar17 * 8;
          puVar23 = (undefined8 *)(lVar27 + 0x10);
          lVar13 = uVar12 * 0x28 + lVar17 * -8;
          do {
            uVar24 = *puVar22;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar17 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar17 == 0) {
              puVar23[-2] = &DAT_cbf29ce484222645;
              puVar23[1] = 0;
              puVar23[2] = 0;
              puVar23[-1] = &DAT_03c886bc;
              *puVar23 = 0;
            }
            else {
              if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar24;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
              puVar23[1] = 0;
              puVar23[2] = 0;
              puVar23[-2] = &DAT_cbf29ce484222645;
              puVar23[-1] = &DAT_03c886bc;
              *puVar23 = 0;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            }
            puVar23 = puVar23 + 5;
            lVar13 = lVar13 + -0x28;
          } while (lVar13 != 0);
          lVar13 = *plVar9;
          lVar17 = *plVar28;
          if (lVar17 == lVar13) {
            lVar17 = lVar13;
          }
          else {
            do {
              lVar27 = lVar27 + -0x28;
              lVar17 = lVar17 + -0x28;
              FUN_00fa27fc(puVar22,lVar27,lVar17);
            } while (lVar13 != lVar17);
            lVar17 = *plVar9;
            lVar13 = *plVar28;
          }
          *plVar9 = lVar27;
          *plVar28 = lVar20 + uVar12 * 0x28;
          lVar27 = *plVar26;
          *plVar26 = lVar20 + uVar5 * 0x28;
          if (lVar13 != lVar17) {
            if (*(long **)(lVar13 + -0x10) != (long *)0x0) {
              (**(code **)(**(long **)(lVar13 + -0x10) + 0x20))();
            }
            if (lVar13 + -0x28 != lVar17) {
              do {
                if (*(long **)(lVar13 + -0x38) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar13 + -0x38) + 0x20))();
                }
                lVar13 = lVar13 + -0x28;
              } while (lVar17 + 0x28 != lVar13);
            }
          }
          if (lVar17 != 0) {
            plVar28 = (long *)*puVar22;
            uVar12 = (**(code **)(*plVar28 + 0xf8))(plVar28);
            if (((uVar12 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
              (**(code **)(*plVar28 + 0x18))(plVar28,lVar17,lVar27 - lVar17,8);
            }
            else {
              FUN_00c48fe8(plVar28,lVar17,lVar27 - lVar17,8);
            }
          }
        }
        else {
          FUN_00fa2c64(plVar9);
        }
      }
      else if (lVar17 * -0x3333333333333333 != uVar12) {
        lVar13 = lVar13 + uVar12 * 0x28;
        while (lVar13 != lVar27) {
          plVar26 = (long *)(lVar27 + -0x10);
          lVar27 = lVar27 + -0x28;
          if ((long *)*plVar26 != (long *)0x0) {
            (**(code **)(*(long *)*plVar26 + 0x20))();
          }
        }
        *plVar28 = lVar13;
      }
      puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      puVar21 = puVar3 + 1;
      uVar12 = (ulong)*puVar3;
      if (uVar12 != 0) {
        puVar3 = puVar21 + uVar12;
        lVar20 = 0;
        do {
          piVar2 = (int *)((long)puVar21 + (ulong)*puVar21);
          lVar27 = *plVar9;
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
             (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar12 == 0)) {
            lVar13 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar2 + uVar12);
            lVar13 = (long)puVar4 + (ulong)*puVar4;
          }
          sVar8 = strlen((char *)(lVar13 + 4));
          bVar6 = *(byte *)(lVar13 + 4);
          puVar15 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar19 = (byte *)(lVar13 + 5);
            do {
              puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (bVar6 != 0);
          }
          puVar22 = (undefined8 *)(lVar27 + lVar20 * 0x28);
          puVar22[2] = sVar8;
          *puVar22 = puVar15;
          puVar22[1] = (char *)(lVar13 + 4);
          plVar26 = puVar22 + 3;
          plVar28 = (long *)*plVar26;
          *plVar26 = 0;
          if (plVar28 != (long *)0x0) {
            (**(code **)(*plVar28 + 0x20))();
          }
          *plVar26 = 0;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
            uVar14 = 0;
          }
          else {
            uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = *(undefined4 *)((long)piVar2 + uVar12);
            }
          }
          lVar13 = lVar20 * 0x28;
          puVar21 = puVar21 + 1;
          lVar20 = lVar20 + 1;
          *(undefined4 *)(lVar27 + lVar13 + 0x20) = uVar14;
        } while (puVar21 != puVar3);
      }
      puVar10 = puVar10 + 1;
      uVar25 = uVar25 + 1;
    } while (puVar10 != puVar1);
  }
  return;
}


