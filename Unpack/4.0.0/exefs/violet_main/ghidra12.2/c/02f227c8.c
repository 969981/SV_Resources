/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f227c8; name: FUN_02f227c8
 */


void FUN_02f227c8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint *local_1090;
  undefined8 local_1088;
  uint local_1080 [512];
  uint *local_880;
  undefined8 local_878;
  uint local_870 [256];
  long *local_470;
  uint *local_468 [64];
  uint *local_268 [65];
  
  puVar2 = PTR_PTR_047d1a50;
  local_1090 = local_1080;
  local_1088 = -0x7fffff0000000000;
  local_880 = local_870;
  local_878 = 0x8000010000000000;
  iVar7 = (int)param_1[1];
  lVar21 = tpidr_el0;
  if (0 < iVar7) {
    lVar22 = 0;
    do {
      puVar23 = (uint *)**(undefined8 **)(*(long *)(*param_1 + lVar22 * 8) + 0x640);
      if ((*puVar23 & 0xffff) != 0) {
        puVar12 = puVar23 + 8;
        uVar25 = *puVar23 & 0xffff;
        uVar24 = 0x7fffffff;
        do {
          if ((short)puVar12[1] == 4) {
            lVar8 = (long)(int)local_878;
            if ((int)(local_878._4_4_ & 0x7fffffff) <= (int)local_878) {
              FUN_02f23d90(&local_880,puVar2,lVar8 + 1);
            }
            local_880[(int)local_878] = puVar12[2];
            local_878 = CONCAT44(local_878._4_4_,(int)(lVar8 + 1));
          }
          else if ((short)puVar12[1] == 3) {
            lVar8 = (long)(int)local_1088;
            if ((int)(local_1088._4_4_ & 0x7fffffff) <= (int)local_1088) {
              FUN_02f23c7c(&local_1090,lVar8 + 1);
            }
            *(uint **)(local_1090 + (long)(int)local_1088 * 2) = puVar12;
            local_1088 = CONCAT44(local_1088._4_4_,(int)(lVar8 + 1));
          }
          if ((int)uVar25 < 2) {
            if ((uVar24 == 0) || (puVar23 = *(uint **)(puVar23 + 2), puVar23 == (uint *)0x0)) break;
            uVar25 = *puVar23 & 0xffff;
            if ((int)uVar24 <= (int)(*puVar23 & 0xffff)) {
              uVar25 = uVar24;
            }
            if ((int)uVar25 < 1) break;
            uVar24 = uVar24 - uVar25;
            puVar12 = puVar23 + 8;
            Hint_Prefetch(*(long *)(puVar23 + 2),0,0,0);
            Hint_Prefetch(*(long *)(puVar23 + 2) + 0x40,0,0,0);
            Hint_Prefetch(puVar23 + 0x20,0,0,0);
            Hint_Prefetch(puVar23 + 0x30,0,0,0);
          }
          else {
            uVar25 = uVar25 - 1;
            puVar12 = (uint *)((long)puVar12 + (ulong)(ushort)*puVar12);
          }
        } while (puVar12 != (uint *)0x0);
        iVar7 = (int)param_1[1];
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < iVar7);
    if ((int)local_878 != 0) {
      lVar22 = *(long *)(lVar21 + 0x1000b8);
      if (lVar22 == 0) {
        lVar22 = FUN_00e5d3b4();
        *(long *)(lVar21 + 0x1000b8) = lVar22;
      }
      plVar20 = *(long **)(lVar22 + 0x3e0);
      if (plVar20 != (long *)0x0) {
        lVar22 = *plVar20;
        if (*(code **)(lVar22 + 0x18) != (code *)0x0) {
          (**(code **)(lVar22 + 0x18))("Body AABB breached",0x12,*(undefined8 *)(lVar22 + 0x28));
        }
        puVar1 = (undefined8 *)plVar20[2];
        uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar20[3]) && (plVar20[2] = uVar9, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = "TtBody AABB breached";
          uVar4 = nn::os::GetSystemTick();
          puVar1[1] = uVar4;
        }
        if (((*(byte *)(lVar22 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
          puVar1 = (undefined8 *)plVar20[2];
          uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
          if ((uVar9 <= (ulong)plVar20[3]) && (plVar20[2] = uVar9, puVar1 != (undefined8 *)0x0)) {
            *puVar1 = &DAT_03c4e575;
            puVar1[1] = *(undefined8 *)(plVar20[6] + 8);
          }
        }
      }
      local_470 = plVar20;
      if ((int)local_878 - 1U != 0 && 0 < (int)local_878) {
        puVar23 = local_880 + ((int)local_878 - 1U);
        uVar25 = 0;
        local_268[0] = local_880;
        local_468[0] = puVar23;
        puVar12 = local_880;
LAB_02f22a40:
        lVar22 = (long)(int)uVar25;
LAB_02f22a44:
        do {
          puVar16 = puVar23;
          do {
            puVar23 = puVar16;
            uVar25 = puVar12[(long)puVar23 - (long)puVar12 >> 3];
            puVar15 = puVar12;
            puVar16 = puVar23;
            do {
              do {
                puVar14 = puVar15;
                puVar15 = puVar14 + 1;
              } while ((*puVar14 & 0xffffff) < (uVar25 & 0xffffff));
              puVar18 = puVar16 + 1;
              do {
                puVar16 = puVar18;
                puVar18 = puVar16 + -1;
                uVar24 = *puVar18;
              } while ((uVar25 & 0xffffff) < (uVar24 & 0xffffff));
              if (puVar18 < puVar14) {
                puVar15 = puVar14;
                puVar16 = puVar18;
              }
              else {
                puVar16 = puVar16 + -2;
                if (puVar14 != puVar18) {
                  *puVar18 = *puVar14;
                  *puVar14 = uVar24;
                }
              }
            } while (puVar15 <= puVar16);
            if (puVar16 <= puVar12) {
              puVar12 = puVar15;
              if (puVar15 < puVar23) goto LAB_02f22a44;
              uVar25 = (int)lVar22 - 1;
              if ((int)lVar22 < 1) goto LAB_02f22b1c;
              puVar12 = local_268[uVar25];
              puVar23 = local_468[uVar25];
              goto LAB_02f22a40;
            }
          } while (puVar23 <= puVar15);
          puVar14 = puVar16;
          puVar18 = puVar12;
          if ((long)puVar23 - (long)puVar15 <= (long)puVar16 - (long)puVar12) {
            puVar14 = puVar23;
            puVar18 = puVar15;
            puVar23 = puVar16;
            puVar15 = puVar12;
          }
          local_268[lVar22] = puVar15;
          local_468[lVar22] = puVar23;
          lVar22 = lVar22 + 1;
          puVar12 = puVar18;
          puVar23 = puVar14;
        } while( true );
      }
LAB_02f22b1c:
      uVar6 = local_878 & 0xffffffff;
      lVar22 = *(long *)(param_2 + 8);
      uVar9 = uVar6;
      if (0 < (int)local_878) {
        do {
          uVar13 = uVar9 - 1;
          if ((*(byte *)(*(long *)(lVar22 + 0x38) + ((ulong)local_880[uVar13] & 0xffffff) * 0xc0 +
                        0x88) >> 2 & 1) == 0) {
            iVar7 = (int)local_878 + -1;
            bVar3 = (int)uVar6 != (int)local_878;
            local_878 = CONCAT44(local_878._4_4_,iVar7);
            if (bVar3) {
              local_880[uVar13] = local_880[iVar7];
              lVar22 = *(long *)(param_2 + 8);
            }
          }
          uVar6 = (ulong)((int)uVar6 - 1);
          bVar3 = 1 < (long)uVar9;
          uVar9 = uVar13;
        } while (bVar3);
        uVar6 = local_878 & 0xffffffff;
      }
      (**(code **)(**(long **)(lVar22 + 0x4c0) + 0x50))(*(long **)(lVar22 + 0x4c0),local_880,uVar6);
      uVar25 = local_878._4_4_;
      local_878 = (ulong)local_878._4_4_ << 0x20;
      if (0x100 < (int)uVar25) {
        FUN_02f23ea0(&local_880);
      }
      if (local_470 != (long *)0x0) {
        lVar22 = *local_470;
        if (((*(byte *)(lVar22 + 0x38) & 1) != 0) && (local_470[6] != 0)) {
          puVar1 = (undefined8 *)local_470[2];
          uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
          if ((uVar9 <= (ulong)local_470[3]) && (local_470[2] = uVar9, puVar1 != (undefined8 *)0x0))
          {
            *puVar1 = &DAT_03c4e575;
            puVar1[1] = *(undefined8 *)(local_470[6] + 8);
          }
        }
        puVar1 = (undefined8 *)local_470[2];
        uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)local_470[3]) && (local_470[2] = uVar9, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c2d363;
          uVar4 = nn::os::GetSystemTick();
          puVar1[1] = uVar4;
        }
        if (*(code **)(lVar22 + 0x20) != (code *)0x0) {
          (**(code **)(lVar22 + 0x20))(*(undefined8 *)(lVar22 + 0x28));
        }
      }
    }
  }
  if ((int)local_1088 != 0) {
    lVar22 = *(long *)(lVar21 + 0x1000b8);
    if (lVar22 == 0) {
      lVar22 = FUN_00e5d3b4();
      *(long *)(lVar21 + 0x1000b8) = lVar22;
    }
    plVar20 = *(long **)(lVar22 + 0x3e0);
    if (plVar20 != (long *)0x0) {
      lVar21 = *plVar20;
      if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
        (**(code **)(lVar21 + 0x18))("TOI plane breached",0x12,*(undefined8 *)(lVar21 + 0x28));
      }
      puVar1 = (undefined8 *)plVar20[2];
      uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar20[3]) && (plVar20[2] = uVar9, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "TtTOI plane breached";
        uVar4 = nn::os::GetSystemTick();
        puVar1[1] = uVar4;
      }
      if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
        puVar1 = (undefined8 *)plVar20[2];
        uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar20[3]) && (plVar20[2] = uVar9, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c4e575;
          puVar1[1] = *(undefined8 *)(plVar20[6] + 8);
        }
      }
    }
    local_470 = plVar20;
    if (1 < (int)local_1088) {
      puVar23 = local_1090 + (ulong)((int)local_1088 - 1) * 2;
      uVar25 = 0;
      local_268[0] = local_1090;
      local_468[0] = puVar23;
      puVar12 = local_1090;
LAB_02f22d34:
      lVar21 = (long)(int)uVar25;
LAB_02f22d38:
      puVar16 = puVar23;
LAB_02f22d3c:
      puVar23 = puVar16;
      lVar22 = *(long *)(puVar12 + ((long)puVar23 - (long)puVar12 >> 4) * 2);
      puVar16 = puVar23;
      puVar15 = puVar12;
      do {
        uVar9 = *(ulong *)(lVar22 + 8);
        do {
          while( true ) {
            puVar14 = puVar15;
            lVar8 = *(long *)puVar14;
            bVar3 = uVar9 <= *(ulong *)(lVar8 + 8);
            if ((*(ulong *)(lVar8 + 8) != uVar9) ||
               (bVar3 = *(ulong *)(lVar22 + 0x10) <= *(ulong *)(lVar8 + 0x10),
               *(ulong *)(lVar8 + 0x10) != *(ulong *)(lVar22 + 0x10))) break;
            puVar18 = *(uint **)(*(long *)(lVar8 + 0x18) + 0x20);
            puVar19 = *(uint **)(*(long *)(lVar22 + 0x18) + 0x20);
            puVar15 = puVar14 + 2;
            if (((ulong)*puVar19 & 0xffffff | (ulong)(puVar19[1] & 0xffffff) << 0x20) <=
                ((ulong)*puVar18 & 0xffffff | (ulong)(puVar18[1] & 0xffffff) << 0x20))
            goto LAB_02f22de0;
          }
          puVar15 = puVar14 + 2;
        } while (!bVar3);
LAB_02f22de0:
        do {
          puVar18 = puVar16;
          puVar15 = puVar14 + 2;
          lVar5 = *(long *)puVar18;
          if (uVar9 == *(ulong *)(lVar5 + 8)) {
            if (*(ulong *)(lVar22 + 0x10) == *(ulong *)(lVar5 + 0x10)) {
              puVar19 = *(uint **)(*(long *)(lVar22 + 0x18) + 0x20);
              puVar17 = *(uint **)(*(long *)(lVar5 + 0x18) + 0x20);
              puVar16 = puVar18 + -2;
              if (((ulong)*puVar17 & 0xffffff | (ulong)(puVar17[1] & 0xffffff) << 0x20) <=
                  ((ulong)*puVar19 & 0xffffff | (ulong)(puVar19[1] & 0xffffff) << 0x20)) break;
            }
            else {
              puVar16 = puVar18 + -2;
              if (*(ulong *)(lVar5 + 0x10) <= *(ulong *)(lVar22 + 0x10)) break;
            }
            goto LAB_02f22de0;
          }
          puVar16 = puVar18 + -2;
        } while (uVar9 < *(ulong *)(lVar5 + 8));
        puVar16 = puVar18 + -2;
        if (puVar18 < puVar14) {
          puVar16 = puVar18;
          puVar15 = puVar14;
        }
        else if (puVar18 != puVar14) {
          *(long *)puVar18 = lVar8;
          *(long *)puVar14 = lVar5;
        }
      } while (puVar15 <= puVar16);
      if (puVar12 < puVar16) goto code_r0x02f22e70;
      puVar12 = puVar15;
      if (puVar15 < puVar23) goto LAB_02f22d38;
      uVar25 = (int)lVar21 - 1;
      if (0 < (int)lVar21) {
        puVar12 = local_268[uVar25];
        puVar23 = local_468[uVar25];
        goto LAB_02f22d34;
      }
      if (1 < (int)local_1088) {
        lVar21 = 0;
        iVar7 = 0;
        lVar22 = *(long *)(*(long *)local_1090 + 8);
        iVar10 = (int)local_1088;
        while( true ) {
          lVar8 = *(long *)(*(long *)(local_1090 + lVar21 * 2 + 2) + 8);
          iVar11 = (int)lVar21;
          if (lVar8 != lVar22) {
            lVar22 = (long)iVar7;
            iVar10 = iVar11 - iVar7;
            iVar7 = iVar11 + 1;
            plVar20 = *(long **)(*(long *)(param_2 + 8) + 0x650);
            (**(code **)(*plVar20 + 0x30))(plVar20,param_2,local_1090 + lVar22 * 2,iVar10 + 1);
            lVar22 = lVar8;
            iVar10 = (int)local_1088;
          }
          if ((long)iVar10 <= lVar21 + 2) break;
          lVar21 = lVar21 + 1;
        }
        iVar11 = iVar11 + 2;
        goto LAB_02f22f54;
      }
    }
    iVar7 = 0;
    iVar11 = 1;
LAB_02f22f54:
    plVar20 = *(long **)(*(long *)(param_2 + 8) + 0x650);
    (**(code **)(*plVar20 + 0x30))(plVar20,param_2,local_1090 + (long)iVar7 * 2,iVar11 - iVar7);
    uVar25 = local_1088._4_4_;
    local_1088 = (ulong)local_1088._4_4_ << 0x20;
    if (0x100 < (int)uVar25) {
      FUN_02f23f2c(&local_1090);
    }
    if (local_470 != (long *)0x0) {
      lVar21 = *local_470;
      if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (local_470[6] != 0)) {
        puVar1 = (undefined8 *)local_470[2];
        uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)local_470[3]) && (local_470[2] = uVar9, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c4e575;
          puVar1[1] = *(undefined8 *)(local_470[6] + 8);
        }
      }
      puVar1 = (undefined8 *)local_470[2];
      uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)local_470[3]) && (local_470[2] = uVar9, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c2d363;
        uVar4 = nn::os::GetSystemTick();
        puVar1[1] = uVar4;
      }
      if (*(code **)(lVar21 + 0x20) != (code *)0x0) {
        (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
      }
    }
  }
  uVar9 = local_878;
  uVar6 = (ulong)local_878._4_4_;
  local_878 = (ulong)local_878._4_4_ << 0x20;
  if ((-1 < (long)uVar9) && (local_880 != (uint *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_880,uVar6 << 2);
  }
  lVar21 = local_1088;
  local_878 = CONCAT44(0x80000000,(int)local_878);
  uVar9 = (ulong)local_1088._4_4_;
  local_880 = (uint *)0x0;
  local_1088 = (ulong)local_1088._4_4_ << 0x20;
  if ((-1 < lVar21) && (local_1090 != (uint *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1090,uVar9 << 3);
  }
  return;
code_r0x02f22e70:
  if (puVar15 < puVar23) goto code_r0x02f22e78;
  goto LAB_02f22d3c;
code_r0x02f22e78:
  puVar14 = puVar16;
  puVar18 = puVar12;
  if ((long)puVar23 - (long)puVar15 <= (long)puVar16 - (long)puVar12) {
    puVar14 = puVar23;
    puVar18 = puVar15;
    puVar23 = puVar16;
    puVar15 = puVar12;
  }
  local_268[lVar21] = puVar15;
  local_468[lVar21] = puVar23;
  lVar21 = lVar21 + 1;
  puVar12 = puVar18;
  puVar23 = puVar14;
  goto LAB_02f22d38;
}


