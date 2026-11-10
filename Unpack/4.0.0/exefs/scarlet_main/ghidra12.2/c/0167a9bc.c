/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167a9bc; name: FUN_0167a9bc
 */


void FUN_0167a9bc(long param_1,undefined1 *param_2,long *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  byte *pbVar24;
  undefined1 auStack_90 [8];
  long *local_88;
  long *local_80;
  undefined8 *local_78;
  long lStack_70;
  long local_68;
  
  *param_2 = 0;
  lVar15 = param_3[3];
  uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0);
  *(undefined1 *)(lVar15 + 0xa8) = 0;
  if (*(char *)(lVar15 + 0xa6) != '\0') {
    uVar14 = 0;
    do {
      *(char *)(lVar15 + 0xa8) = (char)uVar14 + '\x01';
      plVar21 = *(long **)(lVar15 + uVar14 * 8);
      if (plVar21 == (long *)0x0) break;
      uVar14 = (**(code **)(*plVar21 + 0x200))(plVar21);
      if ((uVar14 & 1) == 0) {
        uVar8 = (**(code **)(*plVar21 + 0x98))(plVar21);
        cVar5 = FUN_01481420(uVar18,uVar8);
        if (cVar5 == '\n') goto LAB_0167b048;
      }
      else {
LAB_0167b048:
        FUN_0167bf08(lVar15,plVar21);
      }
      uVar14 = (ulong)*(byte *)(lVar15 + 0xa8);
    } while (*(byte *)(lVar15 + 0xa8) < *(byte *)(lVar15 + 0xa6));
  }
  puVar16 = (undefined8 *)param_3[3];
  if (((*(char *)((long)puVar16 + 0xa7) == '\x01') && (*(char *)((long)puVar16 + 0xa6) != '\0')) &&
     (plVar21 = (long *)*puVar16, plVar21 != (long *)0x0)) {
    puVar17 = (undefined2 *)param_3[1];
    plVar20 = (long *)param_3[2];
    iVar9 = (**(code **)(*plVar21 + 0x98))(plVar21);
    iVar10 = (**(code **)(*plVar20 + 0x98))(plVar20);
    if ((iVar9 == iVar10) && (*(char *)(puVar17 + 5) != '\a')) {
      uVar14 = (**(code **)(*plVar20 + 0x510))(plVar20,0xc);
      if ((uVar14 & 1) == 0) {
        uVar3 = *puVar17;
        if (((*PTR_DAT_047d7940 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d7940);
        }
        uVar18 = *(undefined8 *)PTR_DAT_047d7948;
        *(undefined8 *)PTR_DAT_047d7950 = uVar18;
        piVar12 = (int *)FUN_00cf60cc(uVar18,uVar3);
        if (((10 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
            (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar14 != 0)) &&
           ((bVar6 = *(byte *)((long)piVar12 + uVar14), 8 < bVar6 ||
            ((1 << (ulong)(bVar6 & 0x1f) & 0x1d1U) == 0)))) goto LAB_0167aab8;
      }
      FUN_0167bf08(puVar16,plVar21);
    }
  }
LAB_0167aab8:
  local_80 = (long *)param_3[2];
  local_78 = (undefined8 *)param_3[3];
  lVar15 = *(long *)(param_1 + 0x78);
  local_88 = (long *)param_3[1];
  if (((*(char *)((long)local_78 + 0xa7) != '\0') || (*(char *)((long)local_78 + 0xa9) != '\0')) &&
     (*(char *)((long)local_78 + 0xa6) == '\0')) {
    uVar14 = FUN_01681494(*(undefined8 *)(*(long *)(lVar15 + 0x240) + 0x38));
    if ((uVar14 & 1) == 0) {
      uVar18 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = (**(code **)(*(long *)param_3[2] + 0x98))();
      FUN_0167a95c(uVar18,uVar8);
      *param_2 = 1;
      return;
    }
    local_80 = (long *)param_3[2];
    local_78 = (undefined8 *)param_3[3];
    local_88 = (long *)param_3[1];
    lVar15 = *(long *)(param_1 + 0x78);
  }
  FUN_0167b7a4(*(undefined8 *)(lVar15 + 0x480),auStack_90,&local_88);
  lStack_70 = param_3[6];
  local_80 = (long *)param_3[2];
  local_78 = (undefined8 *)param_3[3];
  local_88 = (long *)param_3[1];
  FUN_0167b8d8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x440),auStack_90,&local_88);
  local_88 = (long *)param_3[2];
  lStack_70 = param_3[3];
  local_80 = (long *)param_3[1];
  local_68 = param_3[5];
  local_78 = (undefined8 *)param_3[6];
  FUN_0167c08c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x3c0),auStack_90,&local_88);
  lVar15 = param_3[3];
  if (*(char *)(lVar15 + 0xa6) != '\0') {
    local_88 = (long *)param_3[1];
    plVar21 = (long *)param_3[2];
    lVar19 = *(long *)(*(long *)(param_1 + 0x78) + 0x3e0);
    lVar23 = param_3[5];
    lStack_70 = param_3[6];
    uVar14 = (ulong)local_68 >> 0x10;
    local_68 = CONCAT62((uint6)uVar14 & 0xffffffffff00,0x3a);
    local_80 = plVar21;
    local_78 = (undefined8 *)lVar15;
    FUN_0167c404(*(undefined8 *)(*(long *)(lVar19 + 0x78) + 0x360),auStack_90,&local_88);
    if (((lVar23 != 0) && ((*(char *)(lVar15 + 0xa7) != '\0' || (*(char *)(lVar15 + 0xa9) != '\0')))
        ) && (*(char *)(lVar15 + 0xa6) == '\0')) {
      uVar18 = *(undefined8 *)(lVar19 + 0x20);
      uVar8 = (**(code **)(*plVar21 + 0x98))(plVar21);
      FUN_0167bf90(uVar18,uVar8,2);
    }
  }
  puVar17 = (undefined2 *)param_3[1];
  plVar21 = (long *)param_3[2];
  lVar23 = param_3[3];
  cVar5 = *(char *)((long)param_3 + 0x21);
  lVar15 = param_3[5];
  lVar19 = param_3[6];
  uVar3 = *puVar17;
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  puVar4 = PTR_DAT_047d7950;
  uVar18 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar18;
  piVar12 = (int *)FUN_00cf60cc(uVar18,uVar3);
  if ((((*(ushort *)((long)piVar12 - (long)*piVar12) < 0xb) ||
       (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar14 == 0)) ||
      ((bVar6 = *(byte *)((long)piVar12 + uVar14), bVar6 < 10 &&
       ((1 << (ulong)(bVar6 & 0x1f) & 0x3d1U) != 0)))) ||
     ((uVar14 = FUN_01682144(*(undefined8 *)(param_1 + 0x38),puVar17,plVar21), cVar5 != '\0' ||
      ((uVar14 & 1) != 0)))) {
    local_88 = plVar21;
    local_80 = (long *)puVar17;
    local_78 = (undefined8 *)lVar19;
    lStack_70 = lVar23;
    local_68 = lVar15;
    FUN_0167bd30(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x380),auStack_90,&local_88);
  }
  puVar17 = (undefined2 *)param_3[2];
  puVar16 = (undefined8 *)param_3[3];
  plVar21 = (long *)param_3[1];
  lVar15 = param_3[6];
  lVar23 = *(long *)(*(long *)(param_1 + 0x78) + 0x3a0);
  local_68._0_3_ = 0x10036;
  local_88 = plVar21;
  local_80 = (long *)puVar17;
  local_78 = puVar16;
  lStack_70 = lVar15;
  FUN_0167c404(*(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x360),auStack_90,&local_88);
  local_68 = CONCAT53(local_68._3_5_,0x37);
  local_88 = plVar21;
  local_80 = (long *)puVar17;
  local_78 = puVar16;
  lStack_70 = lVar15;
  FUN_0167c404(*(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x360),auStack_90,&local_88);
  FUN_0167b588(lVar23,puVar17,plVar21,puVar16);
  pbVar24 = PTR_DAT_047d7940;
  plVar21 = (long *)param_3[1];
  lVar15 = *plVar21;
  puVar17 = (undefined2 *)param_3[2];
  puVar16 = (undefined8 *)param_3[3];
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar18 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)puVar4 = uVar18;
  piVar12 = (int *)FUN_00cf60cc(uVar18,(short)lVar15);
  if (((10 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
      (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar14 != 0)) &&
     (*(char *)((long)piVar12 + uVar14) == '\x01')) {
    local_88 = plVar21;
    local_80 = (long *)puVar17;
    local_78 = puVar16;
    uVar18 = FUN_0167bf00(*(undefined8 *)(param_1 + 0x78));
    FUN_016804d0(uVar18,auStack_90,&local_88);
  }
  plVar21 = (long *)*param_3;
  puVar17 = (undefined2 *)param_3[1];
  uVar3 = *puVar17;
  puVar16 = (undefined8 *)param_3[2];
  lVar15 = param_3[3];
  if (((*pbVar24 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar18 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)puVar4 = uVar18;
  piVar12 = (int *)FUN_00cf60cc(uVar18,uVar3);
  if (((10 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
      (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar14 != 0)) &&
     (*(char *)((long)piVar12 + uVar14) == '\x02')) {
    local_88 = plVar21;
    local_80 = (long *)puVar17;
    local_78 = puVar16;
    lStack_70 = lVar15;
    uVar18 = FUN_0167b580(*(undefined8 *)(param_1 + 0x78));
    FUN_0167e9fc(uVar18,auStack_90,&local_88);
  }
  puVar17 = (undefined2 *)param_3[1];
  plVar21 = (long *)param_3[2];
  puVar16 = (undefined8 *)param_3[3];
  lVar15 = param_3[5];
  uVar1 = *(undefined1 *)((long)param_3 + 0x22);
  uVar3 = *puVar17;
  if (((*pbVar24 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar18 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)puVar4 = uVar18;
  piVar12 = (int *)FUN_00cf60cc(uVar18,uVar3);
  if (((*(ushort *)((long)piVar12 - (long)*piVar12) < 0xb) ||
      (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar14 == 0)) ||
     (*(char *)((long)piVar12 + uVar14) != '\t')) {
    local_68 = CONCAT71(local_68._1_7_,uVar1);
    local_88 = plVar21;
    local_80 = (long *)puVar17;
    local_78 = puVar16;
    lStack_70 = lVar15;
    FUN_0167ba2c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x460),auStack_90,&local_88);
    goto LAB_0167ade8;
  }
  if ((*(char *)((long)puVar16 + 0xa6) == '\0') ||
     ((*(char *)((long)puVar16 + 0xa7) == '\x01' && ((long *)*puVar16 == plVar21))))
  goto LAB_0167ade8;
  bVar6 = (**(code **)(*plVar21 + 0x118))(plVar21);
  *(undefined1 *)(puVar16 + 0x15) = 0;
  if (*(char *)((long)puVar16 + 0xa6) == '\0') {
    bVar7 = 0;
    if (*(char *)((long)puVar16 + 0xa7) == '\0') {
LAB_0167b3b4:
      pbVar24 = PTR_DAT_047d7940;
      if ((bVar7 != 0) || (*(char *)((long)puVar16 + 0xa9) == '\0')) goto LAB_0167ade8;
    }
  }
  else {
    plVar20 = (long *)*puVar16;
    *(undefined1 *)(puVar16 + 0x15) = 1;
    if (plVar20 == (long *)0x0) goto LAB_0167ade8;
    do {
      bVar7 = (**(code **)(*plVar20 + 0x118))(plVar20);
      if (bVar6 < bVar7) {
        lVar15 = *(long *)(param_1 + 0x20);
        uVar8 = (**(code **)(*plVar21 + 0x98))(plVar21);
        uVar11 = (**(code **)(*plVar20 + 0x98))(plVar20);
        uVar18 = *(undefined8 *)(lVar15 + 0x18);
LAB_0167b110:
        uVar13 = 0x4a;
LAB_0167b11c:
        FUN_0167ebc0(uVar18,0xcb,uVar8,uVar13,uVar11,0xffff0000);
LAB_0167b124:
        FUN_0167bf08(puVar16,plVar20);
      }
      else {
        uVar14 = FUN_01242e68(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),plVar20);
        if ((uVar14 & 1) == 0) {
          uVar14 = *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
          if (((uint)uVar14 >> 10 & 1) == 0) {
            if (((uint)uVar14 >> 0xb & 1) != 0) {
              uVar14 = (**(code **)(*plVar20 + 0x78))(plVar20);
              if ((uVar14 & 1) == 0) goto LAB_0167b1b0;
              uVar14 = *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
            }
            if ((uVar14 & 0x10001000) == 0) {
              if (((uint)uVar14 >> 0x11 & 1) != 0) {
                plVar22 = (long *)(**(code **)plVar20[5])(plVar20 + 5);
                if (((*PTR_DAT_047d3f00 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
                  uVar18 = FUN_01b07aa4();
                  *(undefined8 *)PTR_DAT_047d3f08 = uVar18;
                  __cxa_guard_release(PTR_DAT_047d3f00);
                }
                for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
                  if (plVar22 == (long *)PTR_DAT_047d3f08) {
                    if (*(char *)((long)plVar20 + 0x714) != '\0') goto LAB_0167b1b0;
                    break;
                  }
                }
              }
              goto LAB_0167b164;
            }
          }
LAB_0167b1b0:
          lVar15 = *(long *)(param_1 + 0x20);
          uVar8 = (**(code **)(*plVar21 + 0x98))(plVar21);
          uVar18 = *(undefined8 *)(lVar15 + 0x18);
          uVar11 = (**(code **)(*plVar20 + 0x98))(plVar20);
          goto LAB_0167b110;
        }
LAB_0167b164:
        local_88 = (long *)((ulong)local_88 & 0xffffffffffffff00);
        uVar14 = FUN_0292e5d8(*(undefined8 *)(param_1 + 0x38),&local_88,plVar21,plVar20,puVar17);
        if ((uVar14 & 1) == 0) {
          if ((char)local_88 == '\0') {
            lVar15 = *(long *)(param_1 + 0x20);
            uVar8 = (**(code **)(*plVar21 + 0x98))(plVar21);
            uVar11 = (**(code **)(*plVar20 + 0x98))(plVar20);
            uVar18 = *(undefined8 *)(lVar15 + 0x18);
            uVar13 = 0x49;
            goto LAB_0167b11c;
          }
          goto LAB_0167b124;
        }
      }
      bVar2 = *(byte *)(puVar16 + 0x15);
      bVar7 = *(byte *)((long)puVar16 + 0xa6);
      if (bVar7 <= bVar2) break;
      *(byte *)(puVar16 + 0x15) = bVar2 + 1;
      plVar20 = (long *)puVar16[bVar2];
    } while (plVar20 != (long *)0x0);
    if (*(char *)((long)puVar16 + 0xa7) == '\0') goto LAB_0167b3b4;
    if (bVar7 != 0) goto LAB_0167ade8;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = (**(code **)(*plVar21 + 0x98))(plVar21);
  FUN_0167bf90(uVar18,uVar8,1);
LAB_0167ade8:
  lVar15 = param_3[3];
  if ((((*(char *)(lVar15 + 0xa7) == '\0') && (*(char *)(lVar15 + 0xa9) == '\0')) ||
      (*(char *)(lVar15 + 0xa6) != '\0')) ||
     (uVar14 = FUN_01681494(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x240) + 0x38),
                            param_3[2],param_3[1]), (uVar14 & 1) != 0)) {
    if ((char)param_3[4] != '\0') {
      return;
    }
    puVar17 = (undefined2 *)param_3[1];
    plVar21 = (long *)param_3[2];
    plVar20 = (long *)param_3[3];
    uVar3 = *puVar17;
    if (((*pbVar24 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar18 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)puVar4 = uVar18;
    piVar12 = (int *)FUN_00cf60cc(uVar18,uVar3);
    if ((((10 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
         (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar14 != 0)) &&
        ((bVar6 = *(byte *)((long)piVar12 + uVar14), 9 < bVar6 ||
         ((1 << (ulong)(bVar6 & 0x1f) & 0x3d1U) == 0)))) &&
       ((uVar14 = FUN_01482ab0(*puVar17), (uVar14 & 1) == 0 &&
        (*(undefined1 *)(plVar20 + 0x15) = 0, *(char *)((long)plVar20 + 0xa6) != '\0')))) {
      plVar22 = (long *)*plVar20;
      *(undefined1 *)(plVar20 + 0x15) = 1;
      while (plVar22 != (long *)0x0) {
        if (((plVar22 != plVar21) &&
            (uVar14 = (**(code **)(*plVar22 + 0x588))(plVar22), (uVar14 & 1) != 0)) &&
           (uVar14 = FUN_01482688(*(undefined8 *)(param_1 + 0x38),plVar21,plVar22,*puVar17),
           (uVar14 & 1) == 0)) {
          FUN_0292d99c(*(undefined8 *)(param_1 + 0x38),plVar21,plVar22);
          FUN_0167bf08(plVar20,plVar22);
        }
        bVar6 = *(byte *)(plVar20 + 0x15);
        if (*(byte *)((long)plVar20 + 0xa6) <= bVar6) break;
        *(byte *)(plVar20 + 0x15) = bVar6 + 1;
        plVar22 = (long *)plVar20[bVar6];
      }
    }
    lVar15 = param_3[3];
    if ((*(char *)(lVar15 + 0xa7) == '\0') && (*(char *)(lVar15 + 0xa9) == '\0')) {
      return;
    }
    if (*(char *)(lVar15 + 0xa6) != '\0') {
      return;
    }
    uVar14 = FUN_01681494(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x240) + 0x38),
                          param_3[2],param_3[1]);
    if ((uVar14 & 1) != 0) {
      return;
    }
    FUN_016800cc(param_1,param_3[2]);
  }
  FUN_0167fd40(param_1,param_3[2],param_3[1],*param_3);
  *param_2 = 1;
  return;
}


