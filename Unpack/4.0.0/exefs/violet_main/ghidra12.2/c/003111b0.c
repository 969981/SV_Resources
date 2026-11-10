/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003111b0; name: FUN_003111b0
 */


void FUN_003111b0(uint *param_1,ulong param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint uVar25;
  long *plVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  byte local_70;
  byte local_6f;
  uint local_68;
  
  if (PTR_DAT_047ccac0[0x10] == '\0') {
    if ((param_2 & 1) != 0) goto LAB_00311248;
LAB_003111f0:
    if ((*(long *)(param_2 & 0xfffffffffffffffc) == 0) ||
       (1 < *(uint *)(*(long *)(param_2 & 0xfffffffffffffffc) + 8))) {
      FUN_00311bc0(param_2,param_3);
      return;
    }
    uVar28 = 0;
    bVar8 = false;
  }
  else {
    FUN_00311b40(param_2);
    if ((param_2 & 1) == 0) goto LAB_003111f0;
LAB_00311248:
    lVar17 = 0x48;
    if ((~(uint)param_2 & 3) != 0) {
      lVar17 = 0x40;
    }
    uVar11 = *(uint *)((param_2 & 0xfffffffffffffffc) + lVar17);
    uVar28 = (ulong)uVar11;
    pbVar15 = (byte *)((long)param_1 + (uVar28 & 0x3f) + 0x30);
    bVar2 = *pbVar15;
    *pbVar15 = bVar2 + 1;
    if ((byte)(bVar2 + 1) == 0xff) {
      uVar20 = 0;
      param_1[0xb] = 0;
      lVar17 = 0;
      do {
        lVar1 = lVar17 + 2;
        bVar2 = *(byte *)((long)param_1 + lVar17 + 0x30) >> 1;
        *(byte *)((long)param_1 + lVar17 + 0x30) = bVar2;
        bVar6 = *(byte *)((long)param_1 + lVar17 + 0x31) >> 1;
        uVar20 = uVar20 + bVar2 + (uint)bVar6;
        *(byte *)((long)param_1 + lVar17 + 0x31) = bVar6;
        lVar17 = lVar1;
      } while (lVar1 != 0x40);
    }
    else {
      uVar20 = param_1[0xb] + 1;
    }
    uVar13 = (ulong)(uVar11 >> 6) & 0x3f;
    param_1[0xb] = uVar20;
    if ((*(ulong *)(param_1 + uVar13 * 4 + 0x1c) == param_2) ||
       (uVar13 = (ulong)(uVar11 >> 0xc) & 0x3f, *(ulong *)(param_1 + uVar13 * 4 + 0x1c) == param_2))
    {
      if (param_1[4] < param_1[uVar13 * 4 + 0x1e]) {
        iVar9 = (param_1[4] - param_1[uVar13 * 4 + 0x1e]) + param_1[6];
        uVar11 = iVar9 + 0x3e;
        if (uVar11 < 0x7f) {
          pbVar15 = (byte *)FUN_00311a20(param_3,1);
        }
        else {
          iVar9 = iVar9 + -0x41;
          iVar12 = FUN_00319a80(iVar9);
          pbVar15 = (byte *)FUN_00311a20(param_3,iVar12);
          if (iVar12 + -1 != 0) {
            *pbVar15 = 0xff;
            FUN_00319ac0(iVar9,pbVar15 + 1,iVar12 + -1);
            return;
          }
        }
        *pbVar15 = (byte)uVar11 | 0x80;
        return;
      }
    }
    bVar8 = uVar20 >> 5 <= (uint)*pbVar15;
  }
  plVar26 = (long *)(param_2 & 0xfffffffffffffffc);
  uVar13 = FUN_003168c0(param_2,*(undefined1 *)(param_3 + 0x38));
  bVar7 = false;
  if (((param_2 & 1) != 0) && (uVar13 < 0x200)) {
    bVar7 = bVar8;
  }
  lVar17 = *plVar26;
  if (*(int *)(lVar17 + 8) == 1) {
    uVar11 = *(uint *)(*plVar26 + 0x60);
  }
  else if (*(int *)(lVar17 + 8) == 0) {
    uVar11 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(*plVar26 + 0x28) * 4);
  }
  else {
    uVar11 = FUN_0038cbd0(plVar26[2],plVar26[1],*(undefined4 *)PTR_DAT_047cc650);
    lVar17 = *plVar26;
  }
  uVar20 = uVar11 >> 6 & 0x3f;
  uVar29 = (ulong)uVar20;
  uVar22 = uVar29;
  if ((*(long *)(param_1 + uVar29 * 4 + 0x11c) == lVar17) ||
     (uVar22 = (ulong)(uVar11 >> 0xc & 0x3f), *(long *)(param_1 + uVar22 * 4 + 0x11c) == lVar17)) {
    if (param_1[4] < param_1[uVar22 * 4 + 0x11e]) {
      iVar9 = (param_1[4] - param_1[uVar22 * 4 + 0x11e]) + param_1[6];
      uVar20 = iVar9 + 0x3e;
      if (!bVar7) {
        if (uVar20 < 0xf) {
          uVar11 = 1;
        }
        else {
          uVar11 = FUN_00319a80(iVar9 + 0x2f);
        }
        FUN_00312180(&local_90,param_2,*(undefined1 *)(param_3 + 0x38));
        if (local_68 < 0x7f) {
          iVar12 = 1;
        }
        else {
          iVar12 = FUN_00319a80(local_68 - 0x7f);
        }
        pbVar15 = (byte *)FUN_00311a20(param_3,iVar12 + uVar11 + (uint)local_6f);
        if (uVar11 - 1 == 0) {
          *pbVar15 = (byte)uVar20;
        }
        else {
          *pbVar15 = 0xf;
          FUN_00319ac0(iVar9 + 0x2f,pbVar15 + 1,uVar11 - 1);
        }
        pbVar16 = pbVar15 + uVar11;
        if (iVar12 == 1) {
          *pbVar16 = local_70 | (byte)local_68;
        }
        else {
          *pbVar16 = local_70 | 0x7f;
          FUN_00319ac0(local_68 - 0x7f,pbVar16 + 1,iVar12 + -1);
        }
        if (local_6f != 0) {
          pbVar15[iVar12 + uVar11] = 0;
        }
        lStack_a8 = lStack_88;
        local_b0 = local_90;
        lStack_98 = lStack_78;
        lStack_a0 = lStack_80;
        FUN_003122b0(param_3,&local_b0);
        return;
      }
      if (uVar20 < 0x3f) {
        uVar10 = 1;
      }
      else {
        uVar10 = FUN_00319a80();
      }
      FUN_00312180(&local_90,param_2,*(undefined1 *)(param_3 + 0x38));
      if (local_68 < 0x7f) {
        iVar12 = 1;
      }
      else {
        iVar12 = FUN_00319a80();
      }
      pbVar15 = (byte *)FUN_00311a20(param_3,iVar12 + uVar10 + (uint)local_6f);
      if (uVar10 - 1 == 0) {
        *pbVar15 = (byte)uVar20 | 0x40;
        pbVar16 = pbVar15 + uVar10;
        if (iVar12 == 1) goto LAB_003117e4;
LAB_00311758:
        *pbVar16 = local_70 | 0x7f;
        FUN_00319ac0(local_68 - 0x7f,pbVar16 + 1,iVar12 + -1);
      }
      else {
        *pbVar15 = 0x7f;
        FUN_00319ac0(iVar9 + -1,pbVar15 + 1,uVar10 - 1);
        pbVar16 = pbVar15 + uVar10;
        if (iVar12 != 1) goto LAB_00311758;
LAB_003117e4:
        *pbVar16 = local_70 | (byte)local_68;
      }
      if (local_6f != 0) {
        pbVar15[iVar12 + uVar10] = 0;
      }
      lStack_a8 = lStack_88;
      local_b0 = local_90;
      lStack_98 = lStack_78;
      lStack_a0 = lStack_80;
      FUN_003122b0(param_3,&local_b0);
      goto LAB_00311810;
    }
  }
  bVar8 = (param_2 & 1) == 0;
  if ((bool)((bVar8 && uVar13 < 0x200) | bVar7)) {
    if (lVar17 == 0) {
      uVar10 = (uint)*(byte *)(plVar26 + 1);
    }
    else {
      uVar10 = (uint)plVar26[1];
    }
    FUN_00312180(&local_90,param_2,*(undefined1 *)(param_3 + 0x38));
    if (uVar10 < 0x7f) {
      iVar9 = 1;
    }
    else {
      iVar9 = FUN_00319a80(uVar10 - 0x7f);
    }
    if (local_68 < 0x7f) {
      uVar23 = 1;
    }
    else {
      uVar23 = FUN_00319a80();
    }
    puVar14 = (undefined1 *)FUN_00311a20(param_3,iVar9 + 1);
    *puVar14 = 0x40;
    if (iVar9 + -1 == 0) {
      puVar14[1] = (char)uVar10;
      puVar18 = (undefined8 *)*plVar26;
    }
    else {
      puVar14[1] = 0x7f;
      FUN_00319ac0(uVar10 - 0x7f,puVar14 + 2,iVar9 + -1);
      puVar18 = (undefined8 *)*plVar26;
    }
    if ((puVar18 != (undefined8 *)0x0) && (plVar19 = (long *)*puVar18, plVar19 != (long *)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = *plVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_a8 = plVar26[1];
    local_b0 = *plVar26;
    lStack_98 = plVar26[3];
    lStack_a0 = plVar26[2];
    FUN_003122b0(param_3,&local_b0);
    pbVar15 = (byte *)FUN_00311a20(param_3,uVar23 + local_6f);
    if (uVar23 - 1 == 0) {
      *pbVar15 = local_70 | (byte)local_68;
      if (local_6f != 0) goto LAB_00311598;
    }
    else {
      *pbVar15 = local_70 | 0x7f;
      FUN_00319ac0(local_68 - 0x7f,pbVar15 + 1,uVar23 - 1);
      if (local_6f != 0) {
LAB_00311598:
        pbVar15[uVar23] = 0;
      }
    }
    lStack_c8 = lStack_88;
    local_d0 = local_90;
    lStack_b8 = lStack_78;
    lStack_c0 = lStack_80;
    FUN_003122b0(param_3,&local_d0);
  }
  else {
    FUN_00311bc0(param_2,param_3);
  }
  if (!bVar7) {
    if (!bVar8 || uVar13 >= 0x200) {
      return;
    }
    uVar22 = (ulong)*param_1;
    uVar21 = param_1[4];
    uVar10 = param_1[5];
    uVar28 = (ulong)uVar10;
    uVar23 = param_1[6];
    if (uVar22 < uVar13) {
      if (uVar10 == 0) {
        return;
      }
      while( true ) {
        uVar21 = uVar21 + 1;
        uVar23 = uVar23 - 1;
        if (uVar21 == 0) break;
        uVar11 = param_1[2];
        uVar20 = 0;
        if (uVar11 != 0) {
          uVar20 = uVar21 / uVar11;
        }
        uVar11 = (uint)*(ushort *)(*(long *)(param_1 + 8) + (ulong)(uVar21 - uVar20 * uVar11) * 2);
        if (((uint)uVar28 < uVar11) || (uVar23 == 0xffffffff)) {
          param_1[4] = uVar21;
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = (uint)uVar28 - uVar11 & 0xffff;
        uVar28 = (ulong)uVar11;
        param_1[5] = uVar11;
        param_1[6] = uVar23;
        if (uVar11 == 0) {
          param_1[4] = uVar21;
          return;
        }
      }
LAB_00311a04:
      param_1[4] = 0;
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar25 = uVar23;
    if (uVar22 < uVar13 + uVar28) {
      uVar27 = uVar21;
      do {
        uVar27 = uVar27 + 1;
        if (uVar27 == 0) goto LAB_00311a04;
        uVar10 = param_1[2];
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar27 / uVar10;
        }
        uVar10 = (uint)*(ushort *)(*(long *)(param_1 + 8) + (ulong)(uVar27 - uVar5 * uVar10) * 2);
        uVar5 = (uint)uVar28 - uVar10;
        if (((uint)uVar28 < uVar10) || (uVar25 == 0)) {
          param_1[4] = uVar27;
          goto LAB_00311a10;
        }
        uVar10 = uVar5 & 0xffff;
        uVar28 = (ulong)uVar10;
        uVar25 = uVar25 - 1;
        param_1[5] = uVar10;
        param_1[6] = uVar25;
      } while (uVar22 < uVar13 + (ushort)uVar5);
      param_1[4] = uVar27;
    }
    if (uVar25 < *param_1) {
      uVar27 = param_1[2];
      uVar23 = uVar21 + uVar23 + 1;
      uVar21 = 0;
      if (uVar27 != 0) {
        uVar21 = uVar23 / uVar27;
      }
      *(short *)(*(long *)(param_1 + 8) + (ulong)(uVar23 - uVar21 * uVar27) * 2) = (short)uVar13;
      param_1[5] = uVar10 + (int)uVar13 & 0xffff;
      param_1[6] = uVar25 + 1;
      if (uVar23 == 0) {
        return;
      }
      puVar18 = (undefined8 *)*plVar26;
      if (*(undefined8 **)(param_1 + uVar29 * 4 + 0x11c) == puVar18) {
        param_1[uVar29 * 4 + 0x11e] = uVar23;
        return;
      }
      if (*(undefined8 **)(param_1 + uVar29 * 4 + 0x11c) == (undefined8 *)0x0) {
        plVar26 = (long *)*puVar18;
        uVar28 = uVar29;
        if (plVar26 != (long *)0x0) {
          do {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar8) {
              *plVar26 = *plVar26 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        uVar11 = uVar11 >> 0xc & 0x3f;
        uVar28 = (ulong)uVar11;
        puVar24 = *(undefined8 **)(param_1 + uVar28 * 4 + 0x11c);
        if (puVar24 == puVar18) {
          param_1[uVar28 * 4 + 0x11e] = uVar23;
          return;
        }
        plVar26 = (long *)*puVar18;
        if (plVar26 != (long *)0x0) {
          do {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar8) {
              *plVar26 = *plVar26 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar24 = *(undefined8 **)(param_1 + uVar28 * 4 + 0x11c);
        }
        if (puVar24 != (undefined8 *)0x0) {
          if (param_1[uVar28 * 4 + 0x11e] <= param_1[uVar29 * 4 + 0x11e]) {
            uVar20 = uVar11;
          }
          param_1 = param_1 + (ulong)uVar20 * 4 + 0x11c;
          puVar24 = *(undefined8 **)param_1;
          *(undefined8 **)param_1 = puVar18;
          param_1[2] = uVar23;
          plVar26 = (long *)*puVar24;
          if (plVar26 == (long *)0x0) {
            return;
          }
          do {
            lVar17 = *plVar26;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar8) {
              *plVar26 = lVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar17 + -1 == 0) {
            (*(code *)puVar24[3])(puVar24[4]);
            return;
          }
          return;
        }
      }
      *(undefined8 **)(param_1 + uVar28 * 4 + 0x11c) = puVar18;
      param_1[uVar28 * 4 + 0x11e] = uVar23;
      return;
    }
LAB_00311a10:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_00311810:
  FUN_00311e10(param_1,param_2,uVar13,uVar28,uVar11);
  return;
}


