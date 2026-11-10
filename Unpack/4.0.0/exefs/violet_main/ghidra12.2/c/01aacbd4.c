/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aacbd4; name: FUN_01aacbd4
 */


undefined1  [16] FUN_01aacbd4(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  size_t sVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  uint *puVar25;
  uint *puVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long *local_b8;
  long *local_a8 [4];
  long *local_88;
  
  auVar29 = FUN_00cf8cd8();
  uVar22 = auVar29._0_8_;
  uVar23 = uVar22 >> 0x28;
  if ((uVar22 >> 0x20 & 0xff) == 0) {
    uVar22 = 0;
  }
  else {
    if (auVar29._8_4_ == 0) {
      auVar29 = (**(code **)(*param_1 + 0x80))(param_1);
      uVar18 = auVar29._0_8_ >> 0x20;
      uVar23 = auVar29._0_8_ >> 0x28;
      FUN_00cf8c04(param_1);
      uVar22 = uVar18;
    }
    else {
      uVar22 = uVar22 >> 0x20;
      uVar18 = 1;
    }
    if ((auVar29._8_4_ == 0) && ((uVar18 & 0xff) != 0)) {
      uVar27 = 0;
      uVar28 = 0;
      piVar3 = (int *)(param_1[0x3e] + (ulong)*(uint *)param_1[0x3e]);
      if (4 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
        uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        uVar28 = 0;
        if (uVar18 != 0) {
          uVar28 = *(undefined4 *)((long)piVar3 + uVar18);
        }
      }
      *(undefined4 *)(param_1 + 0x42) = uVar28;
      uVar28 = 0;
      if (6 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
        uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
        uVar28 = 0;
        if (uVar18 != 0) {
          uVar28 = *(undefined4 *)((long)piVar3 + uVar18);
        }
      }
      *(undefined4 *)((long)param_1 + 0x214) = uVar28;
      if ((8 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar18 != 0)) {
        uVar27 = *(undefined4 *)((long)piVar3 + uVar18);
      }
      *(undefined4 *)(param_1 + 0x43) = uVar27;
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) {
        bVar7 = false;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6];
        bVar7 = false;
        if (uVar18 != 0) {
          bVar7 = *(char *)((long)piVar3 + uVar18) != '\0';
        }
      }
      *(bool *)(param_1 + 0x4b) = bVar7;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) ||
         (uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar18 == 0)) {
        puVar26 = (uint *)0x0;
      }
      else {
        puVar26 = (uint *)((long)piVar3 + uVar18);
        puVar26 = (uint *)((long)puVar26 + (ulong)*puVar26);
      }
      local_c8 = 0;
      local_d8 = (long *)&DAT_cbf29ce484222645;
      puStack_d0 = &DAT_03c886bc;
      FUN_00ffd4c8(local_a8,param_1 + 8,&local_d8);
      plVar1 = param_1 + 0x44;
      lVar11 = param_1[0x44];
      lVar15 = param_1[0x45] - lVar11 >> 4;
      uVar18 = (ulong)*puVar26;
      if ((ulong)(lVar15 * 0x6db6db6db6db6db7) < uVar18) {
        if ((ulong)((param_1[0x46] - param_1[0x45] >> 4) * 0x6db6db6db6db6db7) <
            uVar18 + lVar15 * -0x6db6db6db6db6db7) {
          uVar17 = param_1[0x48];
          if (0x7ffffffffffffffe < uVar17) {
            uVar17 = 0x7fffffffffffffff;
          }
          if (uVar17 < uVar18) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar11 = param_1[0x46] - lVar11 >> 4;
          uVar13 = lVar11 * -0x2492492492492492;
          uVar5 = uVar18;
          if (uVar18 <= uVar13) {
            uVar5 = uVar13;
          }
          plVar12 = param_1 + 0x47;
          if (uVar17 >> 1 <= (ulong)(lVar11 * 0x6db6db6db6db6db7)) {
            uVar5 = uVar17;
          }
          if (uVar5 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar5 * 0x70,8);
            if (lVar11 == 0) {
              (**(code **)(*(long *)*plVar12 + 0xe8))();
            }
          }
          puVar2 = PTR_DAT_047e2ff8 + 0x10;
          lVar20 = lVar11 + lVar15 * 0x10;
          lVar15 = uVar18 * 0x70 + lVar15 * -0x10;
          puVar21 = (undefined8 *)(lVar20 + 0x20);
          do {
            lVar24 = *plVar12;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar9 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar9 != 0) {
              if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar24;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            }
            puVar21[-1] = 0;
            puVar21[-4] = &DAT_cbf29ce484222645;
            *puVar21 = 0;
            puVar21[1] = 0;
            puVar21[-3] = &DAT_03c886bc;
            puVar21[-2] = 0;
            puVar21[4] = 0;
            puVar21[5] = 0;
            puVar21[6] = 0;
            puVar21[7] = 0;
            puVar21[8] = 0;
            puVar21[9] = 0;
            puVar21[2] = puVar2;
            puVar21[3] = 0;
            if (lVar9 != 0) {
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            }
            lVar15 = lVar15 + -0x70;
            puVar21 = puVar21 + 0xe;
          } while (lVar15 != 0);
          lVar24 = param_1[0x44];
          lVar15 = param_1[0x45];
          if (lVar15 == lVar24) {
            lVar15 = lVar24;
          }
          else {
            do {
              lVar20 = lVar20 + -0x70;
              lVar15 = lVar15 + -0x70;
              FUN_01aad480(plVar12,lVar20,lVar15);
            } while (lVar24 != lVar15);
            lVar24 = param_1[0x44];
            lVar15 = param_1[0x45];
          }
          param_1[0x45] = lVar11 + uVar18 * 0x70;
          lVar9 = param_1[0x46];
          param_1[0x44] = lVar20;
          param_1[0x46] = lVar11 + uVar5 * 0x70;
          if (lVar15 != lVar24) {
            FUN_00db239c(lVar15 + -0x40);
            if (*(long **)(lVar15 + -0x58) != (long *)0x0) {
              (**(code **)(**(long **)(lVar15 + -0x58) + 0x20))();
            }
            if (lVar15 + -0x70 != lVar24) {
              do {
                FUN_00db239c(lVar15 + -0xb0);
                if (*(long **)(lVar15 + -200) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar15 + -200) + 0x20))();
                }
                lVar15 = lVar15 + -0x70;
              } while (lVar24 + 0x70 != lVar15);
            }
          }
          if (lVar24 != 0) {
            plVar12 = (long *)*plVar12;
            uVar18 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar18 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar24,lVar9 - lVar24,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar24,lVar9 - lVar24,8);
            }
          }
        }
        else {
          FUN_01aad338(plVar1);
        }
      }
      else if (lVar15 * 0x6db6db6db6db6db7 != uVar18) {
        FUN_0145361c(plVar1,lVar11 + uVar18 * 0x70);
      }
      puVar25 = puVar26 + 1;
      if (*puVar26 != 0) {
        puVar26 = puVar25 + *puVar26;
        lVar11 = 0;
        do {
          piVar3 = (int *)((long)puVar25 + (ulong)*puVar25);
          lVar15 = *plVar1;
          puVar21 = (undefined8 *)(lVar15 + lVar11 * 0x70);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
             (uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar18 == 0)) {
            lVar20 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar3 + uVar18);
            lVar20 = (long)puVar4 + (ulong)*puVar4;
          }
          sVar10 = strlen((char *)(lVar20 + 4));
          bVar6 = *(byte *)(lVar20 + 4);
          puVar14 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            puVar14 = &DAT_cbf29ce484222645;
            pbVar16 = (byte *)(lVar20 + 5);
            do {
              puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar6 != 0);
          }
          lVar24 = lVar15 + lVar11 * 0x70;
          *puVar21 = puVar14;
          plVar19 = (long *)(lVar24 + 0x18);
          plVar12 = (long *)*plVar19;
          *plVar19 = 0;
          *(char **)(lVar24 + 8) = (char *)(lVar20 + 4);
          *(size_t *)(lVar24 + 0x10) = sVar10;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
          *plVar19 = 0;
          if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
            uVar27 = 0;
          }
          else {
            uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
            uVar27 = 0;
            if (uVar18 != 0) {
              uVar27 = *(undefined4 *)((long)piVar3 + uVar18);
            }
          }
          *(undefined4 *)(lVar15 + lVar11 * 0x70 + 0x20) = uVar27;
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
             (uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar18 == 0)) {
            uVar27 = 0x3dcccccd;
          }
          else {
            uVar27 = *(undefined4 *)((long)piVar3 + uVar18);
          }
          *(undefined4 *)(lVar15 + lVar11 * 0x70 + 0x24) = uVar27;
          uVar27 = 0;
          if (10 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
            uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5];
            uVar27 = 0;
            if (uVar18 != 0) {
              uVar27 = *(undefined4 *)((long)piVar3 + uVar18);
            }
          }
          lVar15 = lVar15 + lVar11 * 0x70;
          *(undefined4 *)(lVar15 + 0x28) = uVar27;
          FUN_00f2b7b8(&local_d8,local_a8,puVar21,&DAT_03c886bc);
          FUN_00dc5c18(lVar15 + 0x30,0,&local_d8,0,0);
          if (local_b8 != (long *)0x0) {
            (**(code **)(*local_b8 + 0x20))();
          }
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x20))();
          }
          puVar25 = puVar25 + 1;
          lVar11 = lVar11 + 1;
        } while (puVar25 != puVar26);
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_a8[0] != (long *)0x0) {
        (**(code **)(*local_a8[0] + 0x20))();
      }
    }
  }
  auVar30._8_8_ = auVar29._8_8_ & 0xffffffff;
  auVar30._0_8_ = uVar23 << 0x28 | auVar29._0_8_ & 0xffffffff | (uVar22 & 0xff) << 0x20;
  return auVar30;
}


