/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307c5c0; name: FUN_0307c5c0
 */


/* WARNING: Removing unreachable block (ram,0x0307caec) */
/* WARNING: Removing unreachable block (ram,0x0307cef4) */

void FUN_0307c5c0(long param_1,int *param_2,long *param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  short sVar27;
  long lVar28;
  undefined2 *puVar29;
  undefined4 *puVar30;
  uint *puVar31;
  uint *puVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  uint local_f8 [2];
  uint local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined1 local_c0;
  uint local_b8 [2];
  undefined2 *local_b0;
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  uint local_90;
  undefined1 local_88;
  short *local_80;
  undefined8 local_78;
  short local_70 [8];
  
  puVar6 = PTR_PTR_047d1a50;
  lVar26 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0x100;
  iVar5 = *(int *)(lVar26 + 0xb8);
  if (iVar5 != 0) {
    lVar26 = *(long *)(lVar26 + 0xb0);
    lVar3 = lVar26 + (long)iVar5 * 8;
    do {
      plVar9 = (long *)(*(long *)(param_1 + 0x48) + (long)*(int *)(lVar26 + 4) * 0x18);
      if ((char)plVar9[2] == '\x01') {
        lVar28 = *plVar9;
      }
      else {
        lVar28 = FUN_03080464();
      }
      iVar5 = *(int *)(lVar28 + 0x30);
      if (iVar5 != 0) {
        lVar25 = *(long *)(lVar28 + 0x28);
        lVar34 = 0;
        bVar8 = true;
        do {
          bVar15 = bVar8;
          if (bVar15) {
            if (1 < iVar5) {
              puVar14 = &LAB_0307d00c;
              goto LAB_0307c6e8;
            }
          }
          else if (1 < iVar5) {
            puVar14 = &LAB_0307d034;
LAB_0307c6e8:
            FUN_03080a60(lVar25,0,iVar5 + -1,puVar14);
          }
          iVar23 = *(int *)(lVar28 + lVar34 * 4 + 0x18);
          lVar19 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar23 * 0x100);
          if (lVar19 == 0) {
            lVar19 = 0;
          }
          else if (*(char *)(lVar19 + 0x30) == '\x01') {
            lVar19 = *(long *)(lVar19 + 0x20);
          }
          else {
            lVar19 = FUN_0307d71c();
          }
          uVar33 = *(uint *)(lVar25 + lVar34 * 4);
          uVar16 = uVar33 - *(int *)(lVar19 + 0x20);
          if ((int)uVar33 < *(int *)(lVar19 + 0x20)) {
            lVar24 = *(long *)(lVar19 + 0x18);
            uVar16 = uVar33;
            if (*(int *)(lVar19 + 0x98) != 0) {
              uVar16 = *(uint *)(*(long *)(lVar19 + 0x90) + (long)(int)uVar33 * 4);
            }
            if (uVar16 != 0xffffffff) {
              plVar9 = (long *)(lVar19 + 0xb0);
              goto LAB_0307c77c;
            }
            uVar16 = uVar33;
          }
          else {
            plVar9 = (long *)(lVar19 + 0xd0);
LAB_0307c77c:
            lVar24 = *plVar9;
          }
          lVar24 = lVar24 + (long)(int)uVar16 * 0x10;
          iVar17 = 1;
          sVar27 = *(short *)(lVar24 + 10) + *(short *)(lVar24 + 8);
          local_78 = 0x8000000400000001;
          local_70[0] = *(short *)(lVar25 + lVar34 * 2 + 8) - sVar27;
          uVar16 = iVar23 << 0x16;
          local_80 = local_70;
          if (iVar5 != 1) {
            lVar24 = lVar25 + 0xc;
            lVar35 = lVar25;
            do {
              lVar20 = lVar24;
              puVar32 = (uint *)(lVar35 + lVar34 * 4 + 0xc);
              if (*puVar32 == uVar33) {
                lVar24 = (long)(int)local_78;
                sVar4 = *(short *)(lVar35 + lVar34 * 2 + 0x14);
                if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)local_78) {
                  FUN_02eaee40(&local_80,puVar6,lVar24 + 1);
                }
                local_80[(int)local_78] = sVar4 - sVar27;
                local_78 = CONCAT44(local_78._4_4_,(int)(lVar24 + 1));
              }
              else {
                local_b0 = (undefined2 *)0x0;
                local_a8 = 0x8000000000000000;
                local_a0 = (undefined4 *)0x0;
                local_98 = 0x8000000000000000;
                local_90 = 0;
                local_b8[0] = uVar33;
                FUN_0309463c(lVar19,local_b8,local_80,local_80 + (int)local_78,&local_b0);
                uVar21 = local_a8;
                puVar29 = local_b0;
                local_f0 = uVar33 | uVar16;
                uVar33 = (uint)local_a8;
                local_e8 = (undefined2 *)0x0;
                local_e0 = 0x8000000000000000;
                if ((int)(uint)local_a8 < 1) {
                  local_e8 = (undefined2 *)0x0;
                  local_e0 = 0x8000000000000000;
                }
                else {
                  local_e8 = (undefined2 *)
                             (**(code **)(*(long *)(puVar6 + 0x20) + 0x18))
                                       (puVar6 + 0x20,(local_a8 & 0xffffffff) << 1);
                  uVar18 = uVar33 & 7;
                  local_e0 = CONCAT44(uVar33,uVar33);
                  puVar11 = local_e8;
                  if (6 < uVar33 - 1) {
                    iVar23 = -(uVar33 & 0xfffffff8);
                    puVar10 = local_e8;
                    do {
                      *puVar10 = *puVar29;
                      puVar10[1] = puVar29[1];
                      puVar10[2] = puVar29[2];
                      puVar10[3] = puVar29[3];
                      puVar10[4] = puVar29[4];
                      puVar10[5] = puVar29[5];
                      puVar10[6] = puVar29[6];
                      puVar1 = puVar29 + 7;
                      puVar11 = puVar10 + 8;
                      puVar29 = puVar29 + 8;
                      iVar23 = iVar23 + 8;
                      puVar10[7] = *puVar1;
                      puVar10 = puVar11;
                    } while (iVar23 != 0);
                  }
                  if ((uVar21 & 7) != 0) {
                    do {
                      uVar18 = uVar18 - 1;
                      *puVar11 = *puVar29;
                      puVar11 = puVar11 + 1;
                      puVar29 = puVar29 + 1;
                    } while (uVar18 != 0);
                  }
                }
                uVar21 = local_98;
                puVar30 = local_a0;
                uVar33 = (uint)local_98;
                local_d8 = (undefined4 *)0x0;
                local_d0 = 0x8000000000000000;
                if ((int)(uint)local_98 < 1) {
                  local_d8 = (undefined4 *)0x0;
                  local_d0 = 0x8000000000000000;
                }
                else {
                  local_d8 = (undefined4 *)
                             (**(code **)(*(long *)puVar6 + 0x18))
                                       (puVar6,(local_98 & 0xffffffff) << 2);
                  uVar18 = uVar33 & 7;
                  local_d0 = CONCAT44(uVar33,uVar33);
                  puVar13 = local_d8;
                  if (6 < uVar33 - 1) {
                    iVar23 = -(uVar33 & 0xfffffff8);
                    puVar12 = local_d8;
                    do {
                      *puVar12 = *puVar30;
                      puVar12[1] = puVar30[1];
                      puVar12[2] = puVar30[2];
                      puVar12[3] = puVar30[3];
                      puVar12[4] = puVar30[4];
                      puVar12[5] = puVar30[5];
                      puVar12[6] = puVar30[6];
                      puVar2 = puVar30 + 7;
                      puVar13 = puVar12 + 8;
                      puVar30 = puVar30 + 8;
                      iVar23 = iVar23 + 8;
                      puVar12[7] = *puVar2;
                      puVar12 = puVar13;
                    } while (iVar23 != 0);
                  }
                  if ((uVar21 & 7) != 0) {
                    do {
                      uVar18 = uVar18 - 1;
                      *puVar13 = *puVar30;
                      puVar13 = puVar13 + 1;
                      puVar30 = puVar30 + 1;
                    } while (uVar18 != 0);
                  }
                }
                local_c8 = local_90;
                local_c0 = local_88;
                iVar23 = (int)param_3[1];
                lVar24 = (long)iVar23;
                if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar23) {
                  FUN_03080bb4(param_3,lVar24 + 1);
                  iVar23 = (int)param_3[1];
                }
                puVar31 = (uint *)(*param_3 + (long)iVar23 * 0x38);
                puVar31[2] = 0;
                puVar31[3] = 0;
                puVar31[4] = 0;
                puVar31[5] = 0x80000000;
                *puVar31 = local_f0;
                FUN_02eaedd0(&local_e8,puVar6 + 0x20);
                *(undefined2 **)(puVar31 + 2) = local_e8;
                puVar31[4] = (uint)local_e0;
                puVar31[5] = local_e0._4_4_;
                local_e8 = (undefined2 *)0x0;
                local_e0 = 0;
                puVar31[6] = 0;
                puVar31[7] = 0;
                puVar31[8] = 0;
                puVar31[9] = 0x80000000;
                FUN_02ed67fc(&local_d8,puVar6);
                lVar7 = local_e0;
                *(undefined4 **)(puVar31 + 6) = local_d8;
                puVar31[8] = (uint)local_d0;
                puVar31[9] = local_d0._4_4_;
                puVar31[10] = local_c8;
                *(undefined1 *)(puVar31 + 0xc) = local_c0;
                *(int *)(param_3 + 1) = (int)(lVar24 + 1);
                uVar21 = (ulong)local_e0._4_4_;
                local_d8 = (undefined4 *)0x0;
                local_d0 = 0x8000000000000000;
                local_e0 = (ulong)local_e0._4_4_ << 0x20;
                if ((-1 < lVar7) && (local_e8 != (undefined2 *)0x0)) {
                  (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_e8,uVar21 << 1)
                  ;
                }
                uVar33 = *puVar32;
                uVar18 = uVar33 - *(int *)(lVar19 + 0x20);
                if ((int)uVar33 < *(int *)(lVar19 + 0x20)) {
                  lVar24 = *(long *)(lVar19 + 0x18);
                  uVar18 = uVar33;
                  if (*(int *)(lVar19 + 0x98) != 0) {
                    uVar18 = *(uint *)(*(long *)(lVar19 + 0x90) + (long)(int)uVar33 * 4);
                  }
                  plVar9 = (long *)(lVar19 + 0xb0);
                  if (uVar18 != 0xffffffff) goto LAB_0307cb80;
                  uVar18 = uVar33;
                }
                else {
                  plVar9 = (long *)(lVar19 + 0xd0);
LAB_0307cb80:
                  lVar24 = *plVar9;
                }
                lVar24 = lVar24 + (long)(int)uVar18 * 0x10;
                sVar4 = *(short *)(lVar24 + 8);
                sVar27 = *(short *)(lVar24 + 10);
                if ((local_78 & 0x7fffffff00000000) == 0) {
                  FUN_02e8bb18(&local_80,puVar6,1);
                }
                uVar21 = local_98;
                sVar27 = sVar27 + sVar4;
                if ((int)local_78 != 1) {
                  local_78 = CONCAT44(local_78._4_4_,1);
                }
                *local_80 = *(short *)(lVar35 + lVar34 * 2 + 0x14) - sVar27;
                uVar22 = (ulong)local_98._4_4_;
                local_98 = (ulong)local_98._4_4_ << 0x20;
                if ((-1 < (long)uVar21) && (local_a0 != (undefined4 *)0x0)) {
                  (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_a0,uVar22 << 2);
                }
                uVar21 = local_a8;
                uVar22 = (ulong)local_a8._4_4_;
                local_a0 = (undefined4 *)0x0;
                local_98 = CONCAT44(0x80000000,(uint)local_98);
                local_a8 = (ulong)local_a8._4_4_ << 0x20;
                if ((-1 < (long)uVar21) && (local_b0 != (undefined2 *)0x0)) {
                  (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_b0,uVar22 << 1)
                  ;
                }
              }
              lVar24 = lVar20 + 0xc;
              lVar35 = lVar20;
            } while (lVar24 != lVar25 + (long)iVar5 * 0xc);
            iVar17 = (int)local_78;
          }
          local_90 = 0;
          local_b0 = (undefined2 *)0x0;
          local_a8 = 0x8000000000000000;
          local_a0 = (undefined4 *)0x0;
          local_98 = 0x8000000000000000;
          local_f8[0] = uVar33;
          FUN_0309463c(lVar19,local_f8,local_80,local_80 + iVar17,&local_b0);
          uVar21 = local_a8;
          puVar29 = local_b0;
          local_f0 = uVar33 | uVar16;
          uVar33 = (uint)local_a8;
          local_e8 = (undefined2 *)0x0;
          local_e0 = 0x8000000000000000;
          if ((int)(uint)local_a8 < 1) {
            local_e8 = (undefined2 *)0x0;
            local_e0 = 0x8000000000000000;
          }
          else {
            local_e8 = (undefined2 *)
                       (**(code **)(*(long *)(puVar6 + 0x20) + 0x18))
                                 (puVar6 + 0x20,(local_a8 & 0xffffffff) << 1);
            uVar16 = uVar33 & 7;
            local_e0 = CONCAT44(uVar33,uVar33);
            puVar11 = local_e8;
            if (6 < uVar33 - 1) {
              iVar23 = -(uVar33 & 0xfffffff8);
              puVar10 = local_e8;
              do {
                *puVar10 = *puVar29;
                puVar10[1] = puVar29[1];
                puVar10[2] = puVar29[2];
                puVar10[3] = puVar29[3];
                puVar10[4] = puVar29[4];
                puVar10[5] = puVar29[5];
                puVar10[6] = puVar29[6];
                puVar1 = puVar29 + 7;
                puVar11 = puVar10 + 8;
                puVar29 = puVar29 + 8;
                iVar23 = iVar23 + 8;
                puVar10[7] = *puVar1;
                puVar10 = puVar11;
              } while (iVar23 != 0);
            }
            if ((uVar21 & 7) != 0) {
              do {
                uVar16 = uVar16 - 1;
                *puVar11 = *puVar29;
                puVar11 = puVar11 + 1;
                puVar29 = puVar29 + 1;
              } while (uVar16 != 0);
            }
          }
          uVar21 = local_98;
          puVar30 = local_a0;
          uVar33 = (uint)local_98;
          local_d8 = (undefined4 *)0x0;
          local_d0 = 0x8000000000000000;
          if ((int)(uint)local_98 < 1) {
            local_d8 = (undefined4 *)0x0;
            local_d0 = 0x8000000000000000;
          }
          else {
            local_d8 = (undefined4 *)
                       (**(code **)(*(long *)puVar6 + 0x18))(puVar6,(local_98 & 0xffffffff) << 2);
            uVar16 = uVar33 & 7;
            local_d0 = CONCAT44(uVar33,uVar33);
            puVar13 = local_d8;
            if (6 < uVar33 - 1) {
              iVar23 = -(uVar33 & 0xfffffff8);
              puVar12 = local_d8;
              do {
                *puVar12 = *puVar30;
                puVar12[1] = puVar30[1];
                puVar12[2] = puVar30[2];
                puVar12[3] = puVar30[3];
                puVar12[4] = puVar30[4];
                puVar12[5] = puVar30[5];
                puVar12[6] = puVar30[6];
                puVar2 = puVar30 + 7;
                puVar13 = puVar12 + 8;
                puVar30 = puVar30 + 8;
                iVar23 = iVar23 + 8;
                puVar12[7] = *puVar2;
                puVar12 = puVar13;
              } while (iVar23 != 0);
            }
            if ((uVar21 & 7) != 0) {
              do {
                uVar16 = uVar16 - 1;
                *puVar13 = *puVar30;
                puVar13 = puVar13 + 1;
                puVar30 = puVar30 + 1;
              } while (uVar16 != 0);
            }
          }
          local_c8 = local_90;
          local_c0 = local_88;
          iVar23 = (int)param_3[1];
          lVar34 = (long)iVar23;
          if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar23) {
            FUN_03080bb4(param_3,lVar34 + 1);
            iVar23 = (int)param_3[1];
          }
          puVar32 = (uint *)(*param_3 + (long)iVar23 * 0x38);
          puVar32[2] = 0;
          puVar32[3] = 0;
          puVar32[4] = 0;
          puVar32[5] = 0x80000000;
          *puVar32 = local_f0;
          FUN_02eaedd0(&local_e8,puVar6 + 0x20);
          *(undefined2 **)(puVar32 + 2) = local_e8;
          puVar32[4] = (uint)local_e0;
          puVar32[5] = local_e0._4_4_;
          local_e8 = (undefined2 *)0x0;
          local_e0 = 0;
          puVar32[6] = 0;
          puVar32[7] = 0;
          puVar32[8] = 0;
          puVar32[9] = 0x80000000;
          FUN_02ed67fc(&local_d8,puVar6);
          lVar19 = local_e0;
          *(undefined4 **)(puVar32 + 6) = local_d8;
          puVar32[8] = (uint)local_d0;
          puVar32[9] = local_d0._4_4_;
          puVar32[10] = local_c8;
          *(undefined1 *)(puVar32 + 0xc) = local_c0;
          *(int *)(param_3 + 1) = (int)(lVar34 + 1);
          uVar21 = (ulong)local_e0._4_4_;
          local_d8 = (undefined4 *)0x0;
          local_d0 = 0x8000000000000000;
          local_e0 = (ulong)local_e0._4_4_ << 0x20;
          if ((-1 < lVar19) && (local_e8 != (undefined2 *)0x0)) {
            (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_e8,uVar21 << 1);
          }
          uVar21 = local_98;
          uVar22 = (ulong)local_98._4_4_;
          local_98 = (ulong)local_98._4_4_ << 0x20;
          if ((-1 < (long)uVar21) && (local_a0 != (undefined4 *)0x0)) {
            (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_a0,uVar22 << 2);
          }
          uVar21 = local_a8;
          uVar22 = (ulong)local_a8._4_4_;
          local_a0 = (undefined4 *)0x0;
          local_98 = CONCAT44(0x80000000,(uint)local_98);
          local_a8 = (ulong)local_a8._4_4_ << 0x20;
          if ((-1 < (long)uVar21) && (local_b0 != (undefined2 *)0x0)) {
            (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_b0,uVar22 << 1);
          }
          uVar21 = local_78;
          uVar22 = (ulong)local_78._4_4_;
          local_78 = (ulong)local_78._4_4_ << 0x20;
          if ((-1 < (long)uVar21) && (local_80 != (short *)0x0)) {
            (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_80,uVar22 << 1);
          }
          lVar34 = 1;
          bVar8 = false;
        } while (bVar15);
      }
      lVar26 = lVar26 + 8;
    } while (lVar26 != lVar3);
  }
  return;
}


