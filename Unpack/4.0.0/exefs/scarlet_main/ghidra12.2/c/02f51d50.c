/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f51d50; name: FUN_02f51d50
 */


void FUN_02f51d50(uint *param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int iVar8;
  uint *puVar9;
  long *plVar10;
  uint *puVar11;
  ushort uVar12;
  uint uVar13;
  long lVar14;
  short sVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  uint *unaff_x24;
  uint unaff_w25;
  uint unaff_w26;
  uint *puVar22;
  ulong uVar23;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  char local_98;
  ulong local_90;
  ulong local_88;
  byte local_80;
  long local_78;
  long local_70;
  uint local_68;
  uint local_64;
  
  iVar16 = *(int *)((long)param_3 + 0xc);
  if (iVar16 == 0) {
    puVar22 = (uint *)0x0;
  }
  else {
    unaff_x24 = (uint *)*param_3;
    uVar12 = *(ushort *)((long)param_3 + 10);
    unaff_w26 = (uint)uVar12;
    unaff_w25 = iVar16 - (uint)uVar12;
    puVar22 = (uint *)0x0;
    if (uVar12 != 0) {
      puVar22 = (uint *)((long)unaff_x24 + (ulong)*(ushort *)(param_3 + 1) + 0x20);
    }
  }
  if ((param_5 != (long *)0x0) &&
     ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) < (int)param_5[1] + iVar16)) {
    FUN_02f523ac(param_5);
  }
  lStack_b0 = *(long *)(param_2 + 0x8a8);
  local_b8 = *(long *)(param_2 + 0x8b8);
  lVar17 = *(long *)(lStack_b0 + 0x48);
  local_a8 = *(undefined8 *)(param_2 + 0x508);
  lStack_a0 = param_2 + 0x530;
  local_80 = 0x24;
  if (puVar22 == (uint *)0x0) {
    return;
  }
  plVar18 = *(long **)(param_2 + 0x4b8);
  do {
    if (((~puVar22[1] & 0xffffff) != 0) && ((~*puVar22 & 0xffffff) != 0)) {
      local_98 = '\x01';
      lVar20 = *(long *)(param_2 + 0x38);
      uVar23 = (ulong)puVar22[1] & 0xffffff;
      uVar7 = lVar20 + uVar23 * 0xc0;
      uVar19 = (ulong)*puVar22 & 0xffffff;
      if ((*(char *)(lVar17 + (ulong)*(ushort *)(uVar7 + 0x8a) * 0x50 + 0x18) == '\x01') ||
         (*(char *)(lVar17 + (ulong)*(ushort *)(lVar20 + uVar19 * 0xc0 + 0x8a) * 0x50 + 0x18) ==
          '\x01')) {
        puVar11 = (uint *)(lVar20 + uVar23 * 0xc0 + 0x54);
        uVar5 = *puVar11;
        puVar9 = (uint *)(lVar20 + uVar19 * 0xc0 + 0x54);
        if (((*puVar9 | uVar5) >> 8 & 1) == 0) goto LAB_02f52280;
        if (param_5 == (long *)0x0) {
          plVar21 = (long *)0x0;
          if ((uVar5 & 1) == 0) goto LAB_02f51fa4;
LAB_02f51fc0:
          if ((int)param_4[3] < 0xf81) {
            puVar6 = (undefined4 *)(param_4[2] + (long)(int)param_4[3] + 0x20);
          }
          else {
            puVar6 = (undefined4 *)FUN_031c36f4(param_4);
          }
          uVar7 = uVar19;
          uVar19 = uVar23;
        }
        else {
          lVar14 = (long)(int)param_5[1];
          plVar21 = (long *)(*param_5 + lVar14 * 0x10);
          *(int *)(param_5 + 1) = (int)(lVar14 + 1);
          lVar14 = (lVar14 + 1) * 0x10 + lVar14 * -0x10;
          puVar6 = (undefined4 *)((long)plVar21 + 0xc);
          do {
            lVar14 = lVar14 + -0x10;
            *puVar6 = 0;
            puVar6 = puVar6 + 4;
          } while (lVar14 != 0);
          lVar14 = param_4[3];
          iVar16 = *(int *)((long)param_4 + 0x1c);
          iVar8 = *(int *)(*param_4 + 8);
          *plVar21 = param_4[2];
          *(short *)(plVar21 + 1) = (short)lVar14;
          *(short *)((long)plVar21 + 10) = (short)iVar16;
          *(int *)((long)plVar21 + 0xc) = -(iVar16 + iVar8);
          if ((*puVar11 & 1) != 0) goto LAB_02f51fc0;
LAB_02f51fa4:
          if (((*(byte *)puVar9 >> 1 & 1) != 0) && ((*puVar22 & 0xffffff) < (puVar22[1] & 0xffffff))
             ) goto LAB_02f51fc0;
          if ((int)param_4[3] < 0xf81) {
            puVar6 = (undefined4 *)(param_4[2] + (long)(int)param_4[3] + 0x20);
          }
          else {
            puVar6 = (undefined4 *)FUN_031c36f4(param_4);
          }
          uVar7 = uVar23;
        }
        lVar14 = lVar20 + uVar7 * 0xc0;
        puVar6[2] = 0x201;
        *(undefined2 *)(puVar6 + 3) = 0;
        *(undefined1 *)((long)puVar6 + 0xf) = 8;
        puVar6[1] = *(undefined4 *)(lVar14 + 0x50);
        lVar20 = lVar20 + uVar19 * 0xc0;
        *puVar6 = *(undefined4 *)(lVar20 + 0x50);
        *(undefined2 *)((long)puVar6 + 0xe) = 0x24;
        *(undefined2 *)((long)puVar6 + 10) = 0x8000;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(lVar14 + 0xb0);
        *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(lVar20 + 0xb0);
        iVar16 = *(int *)((long)param_4 + 0x1c) + 1;
        *(int *)(param_4 + 3) = (int)param_4[3] + 0x20;
        *(int *)((long)param_4 + 0x1c) = iVar16;
        if (plVar21 == (long *)0x0) goto LAB_02f52280;
        iVar8 = iVar16 + *(int *)(*param_4 + 8) + *(int *)((long)plVar21 + 0xc);
        if (iVar8 != 0) goto LAB_02f52220;
LAB_02f5227c:
        *(int *)((long)plVar21 + 0xc) = iVar8;
      }
      else {
        uVar5 = *(uint *)(lVar20 + uVar23 * 0xc0 + 0x54);
        if ((((uVar5 & 5) != 0) &&
            (uVar13 = *(uint *)(lVar20 + uVar19 * 0xc0 + 0x54), (uVar13 & 5) != 0)) &&
           ((*param_1 & (uVar13 | uVar5)) == 0)) goto LAB_02f52280;
        local_88 = lVar20 + uVar19 * 0xc0;
        if (param_5 == (long *)0x0) {
          plVar21 = (long *)0x0;
        }
        else {
          lVar20 = (long)(int)param_5[1];
          plVar21 = (long *)(*param_5 + lVar20 * 0x10);
          *(int *)(param_5 + 1) = (int)(lVar20 + 1);
          lVar20 = (lVar20 + 1) * 0x10 + lVar20 * -0x10;
          puVar6 = (undefined4 *)((long)plVar21 + 0xc);
          do {
            lVar20 = lVar20 + -0x10;
            *puVar6 = 0;
            puVar6 = puVar6 + 4;
          } while (lVar20 != 0);
          iVar8 = *(int *)(*param_4 + 8);
          lVar20 = param_4[3];
          iVar16 = *(int *)((long)param_4 + 0x1c);
          *plVar21 = param_4[2];
          *(short *)(plVar21 + 1) = (short)lVar20;
          *(short *)((long)plVar21 + 10) = (short)iVar16;
          *(int *)((long)plVar21 + 0xc) = -(iVar16 + iVar8);
        }
        local_90 = uVar7;
        if (plVar18 == (long *)0x0) {
          uVar19 = 0x24;
        }
        else {
          uVar19 = (**(code **)(*plVar18 + 0x48))(plVar18);
        }
        uVar7 = local_90;
        uVar5 = (uint)uVar19;
        local_80 = (byte)uVar19;
        local_70 = *(long *)(local_90 + 0x78);
        if (*(char *)(local_70 + 0x18) == '\x15') {
          plVar10 = (long *)(local_70 + ((uVar19 & 0xff) >> 2 & 0x38) + 0x48);
          lVar20 = *plVar10;
          local_70 = 0;
          if (lVar20 != 0) {
            local_70 = lVar20 + (long)plVar10;
          }
        }
        lVar20 = *(long *)(local_88 + 0x78);
        if (*(char *)(lVar20 + 0x18) == '\x15') {
          plVar10 = (long *)(lVar20 + ((uVar19 & 0xff) >> 2 & 7) * 8 + 0x48);
          lVar14 = *plVar10;
          lVar20 = 0;
          if (lVar14 != 0) {
            lVar20 = lVar14 + (long)plVar10;
          }
        }
        bVar1 = *(byte *)(local_70 + 0x19);
        bVar2 = *(byte *)(lVar20 + 0x19);
        uVar13 = (uint)bVar2;
        local_64 = (uint)bVar1;
        local_68 = (uint)bVar2;
        if ((((*(byte *)(local_90 + 0x54) >> 2 & 1) == 0) || (bVar1 != 3)) ||
           ((*(uint *)(local_88 + 0x54) >> 1 & 1) == 0)) {
          uVar13 = local_64;
LAB_02f52168:
          uVar23 = (ulong)bVar2;
          local_78 = local_70;
          local_70 = lVar20;
          local_68 = (uint)bVar1;
          local_64 = (uint)bVar2;
        }
        else {
          if (((*(byte *)(local_b8 + (ulong)*(byte *)(local_90 + 0x89) * 0x50 + 0x41) >> 6 & 1) == 0
              ) && ((*(byte *)(local_b8 + (ulong)*(byte *)(local_88 + 0x89) * 0x50 + 0x41) >> 6 & 1)
                    == 0)) {
            uVar13 = 3;
            goto LAB_02f52168;
          }
          local_90 = local_88;
          uVar5 = uVar5 >> 3 & 0x1c | uVar5 & 3 | (uVar5 >> 2) << 5;
          uVar23 = 3;
          uVar19 = (ulong)uVar5;
          local_80 = (byte)uVar5;
          local_98 = '\0';
          local_88 = uVar7;
          local_78 = lVar20;
        }
        if ((local_98 == '\0') ||
           (((*(byte *)(local_90 + 0x54) & 1) == 0 &&
            ((local_90 <= local_88 || ((*(uint *)(local_88 + 0x54) >> 1 & 1) == 0)))))) {
          uVar7 = (ulong)uVar13;
          uVar19 = uVar23;
          uVar4 = local_90;
          lVar20 = local_78;
        }
        else {
          local_80 = (byte)(uVar19 >> 3) & 0x1c | (byte)uVar19 & 3 |
                     (byte)(((uint)uVar19 >> 2 & 7) << 5);
          uVar19 = (ulong)uVar13;
          uVar7 = uVar23;
          uVar4 = local_88;
          local_88 = local_90;
          lVar20 = local_70;
          local_70 = local_78;
          local_68 = (uint)uVar23;
          local_64 = uVar13;
        }
        local_78 = lVar20;
        local_90 = uVar4;
        (**(code **)(param_1 + uVar7 * 0x1a + uVar19 * 2 + 2))(&local_b8,param_4);
        if (plVar21 != (long *)0x0) {
          iVar16 = *(int *)((long)param_4 + 0x1c);
          iVar8 = iVar16 + *(int *)(*param_4 + 8) + *(int *)((long)plVar21 + 0xc);
          if (iVar8 != 0) {
LAB_02f52220:
            sVar15 = (short)iVar16;
            puVar9 = (uint *)*plVar21;
            if (puVar9 == (uint *)param_4[2]) {
              uVar12 = *(ushort *)((long)plVar21 + 10);
            }
            else {
              uVar12 = *(ushort *)((long)plVar21 + 10);
              puVar11 = puVar9;
              puVar3 = (uint *)param_4[2];
              if ((uint)uVar12 == (*puVar9 & 0xffff)) {
                puVar11 = *(uint **)(puVar9 + 2);
                *(undefined4 *)(plVar21 + 1) = 0;
                uVar12 = 0;
                puVar3 = (uint *)param_4[2];
              }
              puVar9 = puVar3;
              if (puVar11 == puVar9) {
                sVar15 = (short)*(undefined4 *)((long)param_4 + 0x1c);
              }
              else {
                sVar15 = (short)*puVar11;
                puVar9 = puVar11;
              }
            }
            *(ushort *)((long)plVar21 + 10) = sVar15 - uVar12;
            *plVar21 = (long)puVar9;
            goto LAB_02f5227c;
          }
          *(undefined4 *)((long)plVar21 + 0xc) = 0;
          *(int *)(param_5 + 1) = (int)param_5[1] + -1;
        }
      }
    }
LAB_02f52280:
    if ((int)unaff_w26 < 2) {
      if (unaff_w25 == 0) {
        return;
      }
      unaff_x24 = *(uint **)(unaff_x24 + 2);
      if (unaff_x24 == (uint *)0x0) {
        return;
      }
      unaff_w26 = *unaff_x24 & 0xffff;
      if ((int)unaff_w25 <= (int)(*unaff_x24 & 0xffff)) {
        unaff_w26 = unaff_w25;
      }
      if ((int)unaff_w26 < 1) {
        return;
      }
      unaff_w25 = unaff_w25 - unaff_w26;
      puVar22 = unaff_x24 + 8;
      Hint_Prefetch(*(long *)(unaff_x24 + 2),0,0,0);
      Hint_Prefetch(*(long *)(unaff_x24 + 2) + 0x40,0,0,0);
      Hint_Prefetch(unaff_x24 + 0x20,0,0,0);
      Hint_Prefetch(unaff_x24 + 0x30,0,0,0);
      if (puVar22 == (uint *)0x0) {
        return;
      }
    }
    else {
      unaff_w26 = unaff_w26 - 1;
      puVar22 = puVar22 + 2;
      if (puVar22 == (uint *)0x0) {
        return;
      }
    }
  } while( true );
}


