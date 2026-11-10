/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034eb46c; name: FUN_034eb46c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_034eb46c(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  bool bVar10;
  void *__dest;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *****pppppuVar19;
  int iVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong *puVar27;
  void *__src;
  undefined8 *****apppppuStack_1000d0 [131074];
  void *apvStack_c0 [3];
  ulong local_a8;
  undefined4 local_9c;
  long local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined4 local_74;
  long local_70;
  ulong local_68;
  
  uVar16 = (ulong)*(ushort *)(param_2 + 0x38);
  lVar8 = uVar16 * -0x10 + -0xe0;
  if ((int)param_4[0x1b] == 0) {
    return;
  }
  uVar26 = uVar16 & 0xfffe;
  apvStack_c0[0] = *(void **)(param_2 + 0x20);
  apppppuStack_1000d0[0x1ffff] =
       (undefined8 *****)((long)apppppuStack_1000d0 + (long)(&DAT_00100010 + uVar16 * -0x10));
  apppppuStack_1000d0[0x20000] = apppppuStack_1000d0 + uVar16 * -2 + 0x20000;
  apppppuStack_1000d0[0x20001] = apppppuStack_1000d0 + uVar16 * -2 + 0x1ffff;
  apvStack_c0[2] = PTR_DAT_047e6e40 + 0x10;
  puVar27 = (ulong *)param_4[0x1a];
  apvStack_c0[1] = PTR_DAT_047e6e48 + 0x10;
  local_a8 = uVar26;
  local_98 = param_2;
  local_88 = param_4;
  local_80 = param_1;
  local_70 = param_3;
  local_68 = uVar16;
LAB_034eb500:
  uVar11 = *puVar27;
  uVar14 = *(uint *)(local_70 + 0x28);
  if (uVar14 != 0) {
    iVar20 = 0;
    do {
      iVar2 = iVar20 + (uVar14 >> 1);
      uVar23 = *(ulong *)(*(long *)(local_70 + 0x20) + (long)iVar2 * 8);
      if (uVar23 == uVar11) {
        lVar17 = *(long *)(local_70 + 0x20) + (long)iVar2 * 8;
        goto LAB_034eb550;
      }
      if (uVar23 < uVar11) {
        iVar20 = iVar2 + 1;
      }
      uVar14 = uVar14 - (uVar23 < uVar11) >> 1;
    } while (uVar14 != 0);
  }
  lVar17 = 0;
LAB_034eb550:
  uVar15 = 0x10;
  if (lVar17 != 0) {
    uVar15 = 0x30;
  }
  uVar14 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
  if (uVar14 != 0) {
    uVar7 = 0;
    if (uVar14 != 0) {
      uVar7 = (uint)uVar11 / uVar14;
    }
    for (plVar18 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                             (ulong)((uint)uVar11 - uVar7 * uVar14) * 8); plVar18 != (long *)0x0;
        plVar18 = (long *)*plVar18) {
      if (plVar18[1] == uVar11) {
        if ((plVar18[2] != 0) && (local_90 = *(long *)(plVar18[2] + 0x40), local_90 != 0)) {
          plVar18 = *(long **)(local_98 + 0x28);
          uVar7 = *(uint *)(local_98 + 0x30);
          uVar14 = (uint)local_68;
          if ((uVar7 != 0) &&
             (lVar17 = *(long *)(*(long *)(local_90 + 8) + 0x78), *plVar18 != lVar17)) {
            lVar13 = (ulong)uVar7 * 0x18;
            plVar24 = plVar18;
            goto LAB_034eb634;
          }
          plVar12 = plVar18;
          goto LAB_034eb5e0;
        }
        break;
      }
    }
  }
  goto LAB_034eb98c;
  while (plVar12 = plVar24 + 3, plVar1 = plVar24 + 3, plVar24 = plVar12, *plVar1 != lVar17) {
LAB_034eb634:
    lVar13 = lVar13 + -0x18;
    if (lVar13 == 0) goto LAB_034eb654;
  }
LAB_034eb5e0:
  if ((plVar12 == plVar18 + (ulong)uVar7 * 3) || (uVar7 = *(uint *)(plVar12 + 2), uVar7 == 0)) {
LAB_034eb654:
    if (uVar14 != 0) {
      if (uVar14 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        pppppuVar19 = apppppuStack_1000d0[0x20000];
        do {
          uVar11 = uVar11 + 2;
          pppppuVar19[-2] = (undefined8 ****)0x0;
          pppppuVar19[-1] = (undefined8 ****)0x42c8000000000000;
          *pppppuVar19 = (undefined8 ****)0x0;
          pppppuVar19[1] = (undefined8 ****)0x42c8000000000000;
          pppppuVar19 = pppppuVar19 + 4;
        } while (uVar26 != uVar11);
      }
      if ((local_68 & 1) != 0) {
        apppppuStack_1000d0[uVar16 * -2 + uVar11 * 2 + 0x1fffe] = (undefined8 *****)0x0;
        (apppppuStack_1000d0 + uVar16 * -2 + uVar11 * 2 + 0x1fffe)[1] =
             (undefined8 *****)0x42c8000000000000;
      }
    }
  }
  else {
    if (uVar7 <= uVar14) {
      uVar14 = uVar7;
    }
    if (uVar14 != 0) {
      uVar23 = (ulong)uVar14;
      uVar11 = uVar23 & 3;
      if (uVar23 - 1 < 3) {
        uVar22 = 0;
      }
      else {
        lVar17 = 0;
        uVar22 = 0;
        do {
          puVar21 = (undefined8 *)((long)apppppuStack_1000d0 + lVar17 + lVar8 + 0x1000d0);
          uVar25 = ((undefined8 *)(plVar12[1] + lVar17))[1];
          uVar22 = uVar22 + 4;
          *puVar21 = *(undefined8 *)(plVar12[1] + lVar17);
          puVar21[1] = uVar25;
          uVar25 = *(undefined8 *)(plVar12[1] + lVar17 + 0x18);
          puVar21[2] = *(undefined8 *)(plVar12[1] + lVar17 + 0x10);
          puVar21[3] = uVar25;
          uVar25 = *(undefined8 *)(plVar12[1] + lVar17 + 0x28);
          puVar21[4] = *(undefined8 *)(plVar12[1] + lVar17 + 0x20);
          puVar21[5] = uVar25;
          lVar13 = plVar12[1] + lVar17;
          lVar17 = lVar17 + 0x40;
          uVar25 = *(undefined8 *)(lVar13 + 0x38);
          puVar21[6] = *(undefined8 *)(lVar13 + 0x30);
          puVar21[7] = uVar25;
        } while ((uVar23 & 0xfffc) != uVar22);
      }
      if ((uVar14 & 3) != 0) {
        lVar17 = uVar22 << 4;
        do {
          puVar21 = (undefined8 *)(plVar12[1] + lVar17);
          puVar3 = (undefined8 *)((long)apppppuStack_1000d0 + lVar17 + lVar8 + 0x1000d0);
          uVar25 = puVar21[1];
          uVar11 = uVar11 - 1;
          lVar17 = lVar17 + 0x10;
          *puVar3 = *puVar21;
          puVar3[1] = uVar25;
        } while (uVar11 != 0);
      }
    }
    if (uVar7 < (uint)local_68) {
      uVar11 = (ulong)uVar14;
      uVar22 = (ulong)(uVar14 - 1);
      uVar14 = (uint)local_68 - uVar14;
      uVar23 = ~uVar11 + local_68;
      if ((uVar14 & 3) != 0) {
        lVar17 = -((ulong)uVar14 & 3);
        pppppuVar19 = apppppuStack_1000d0 + uVar16 * -2 + uVar11 * 2 + 0x1fffe;
        do {
          puVar21 = (undefined8 *)(plVar12[1] + uVar22 * 0x10);
          uVar11 = uVar11 + 1;
          ppppuVar4 = (undefined8 ****)puVar21[1];
          bVar10 = lVar17 != -1;
          lVar17 = lVar17 + 1;
          *pppppuVar19 = (undefined8 ****)*puVar21;
          pppppuVar19[1] = ppppuVar4;
          pppppuVar19 = pppppuVar19 + 2;
        } while (bVar10);
      }
      if (2 < uVar23) {
        lVar17 = local_68 - uVar11;
        puVar21 = (undefined8 *)((long)apppppuStack_1000d0[0x1ffff] + uVar11 * 0x10);
        do {
          puVar3 = (undefined8 *)(plVar12[1] + uVar22 * 0x10);
          lVar17 = lVar17 + -4;
          uVar25 = puVar3[1];
          puVar21[-4] = *puVar3;
          puVar21[-3] = uVar25;
          puVar3 = (undefined8 *)(plVar12[1] + uVar22 * 0x10);
          uVar25 = puVar3[1];
          puVar21[-2] = *puVar3;
          puVar21[-1] = uVar25;
          puVar3 = (undefined8 *)(plVar12[1] + uVar22 * 0x10);
          uVar25 = puVar3[1];
          *puVar21 = *puVar3;
          puVar21[1] = uVar25;
          puVar3 = (undefined8 *)(plVar12[1] + uVar22 * 0x10);
          uVar25 = puVar3[1];
          puVar21[2] = *puVar3;
          puVar21[3] = uVar25;
          puVar21 = puVar21 + 8;
        } while (lVar17 != 0);
      }
    }
  }
  plVar18 = local_88;
  if ((char)local_88[0x1c] == '\0') {
    plVar18 = *(long **)PTR_DAT_047e6cb8;
    do {
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
        puVar9 = PTR_DAT_047e6958;
        *plVar18 = (long)apvStack_c0[2];
        plVar18[1] = 0;
        lVar17 = *(long *)(puVar9 + 8);
        plVar18[2] = 0;
        plVar18[3] = lVar17;
        plVar12 = (long *)(puVar9 + 0x10);
        if (*(long *)(puVar9 + 0x10) != 0) {
          plVar12 = (long *)(lVar17 + 0x10);
        }
        *plVar12 = (long)plVar18;
        *(int *)puVar9 = *(int *)puVar9 + 1;
        *(long **)(puVar9 + 8) = plVar18;
        *plVar18 = (long)apvStack_c0[1];
        plVar18[8] = 0;
        plVar18[9] = 0;
        plVar18[0xc] = 0;
        plVar18[0xd] = 0;
        plVar18[0x12] = 0;
        plVar18[0x13] = 0;
        plVar18[0x16] = 0;
        plVar18[0x17] = 0;
        plVar18[0x1a] = 0;
        plVar18[0x1b] = 0;
        *(long **)PTR_DAT_047e6cb8 = plVar18;
        *(undefined2 *)(plVar18 + 0x1c) = 0x101;
      }
    } while ((char)plVar18[0x1c] == '\0');
  }
  uVar14 = *(uint *)(plVar18 + 0xd);
  if (uVar14 != 0) {
    uVar11 = *puVar27;
    iVar20 = 0;
    do {
      iVar2 = iVar20 + (uVar14 >> 1);
      uVar23 = *(ulong *)(plVar18[0xc] + (long)iVar2 * 8);
      if (uVar23 == uVar11) {
        local_74 = 1;
        goto LAB_034eb8d0;
      }
      if (uVar23 < uVar11) {
        iVar20 = iVar2 + 1;
      }
      uVar14 = uVar14 - (uVar23 < uVar11) >> 1;
    } while (uVar14 != 0);
  }
  local_74 = 0;
LAB_034eb8d0:
  if ((int)local_68 != 0) {
    uVar11 = 0;
    pppppuVar19 = apppppuStack_1000d0[0x20001];
    __src = apvStack_c0[0];
    local_9c = uVar15;
    do {
      __dest = (void *)FUN_034ebdd8(local_80,uVar15,local_74);
      lVar17 = local_90;
      if (__dest != (void *)0x0) {
        uVar5 = *(undefined4 *)((long)__src + 0x24);
        uVar25 = *(undefined8 *)(*(long *)(local_90 + 8) + 0x78);
        memcpy(__dest,__src,0x24);
        uVar15 = local_9c;
        uVar26 = local_a8;
        *(float *)((long)__dest + 0x40) = *(float *)((long)pppppuVar19 + -4) * 100.0;
        *(float *)((long)__dest + 0x3c) = *(float *)(pppppuVar19 + -1) * 100.0;
        *(undefined4 *)((long)__dest + 0x4c) = *(undefined4 *)pppppuVar19;
        uVar6 = *(undefined4 *)((long)pppppuVar19 + 4);
        *(undefined8 *)((long)__dest + 0x60) = uVar25;
        *(undefined4 *)((long)__dest + 0x58) = uVar5;
        *(int *)((long)__dest + 0x5c) = (int)uVar11;
        *(undefined8 *)((long)__dest + 0x44) = 0;
        *(undefined4 *)((long)__dest + 0x50) = uVar6;
        FUN_03447c20(lVar17,local_98,__dest);
      }
      uVar11 = uVar11 + 1;
      __src = (void *)((long)__src + 0x28);
      pppppuVar19 = pppppuVar19 + 2;
    } while (local_68 != uVar11);
  }
LAB_034eb98c:
  puVar27 = puVar27 + 1;
  if (puVar27 == (ulong *)(local_88[0x1a] + (ulong)*(uint *)(local_88 + 0x1b) * 8)) {
    return;
  }
  goto LAB_034eb500;
}


