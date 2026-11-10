/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01613f24; name: FUN_01613f24
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01613f24(long param_1,undefined8 param_2)

{
  long *plVar1;
  char *pcVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined4 uVar20;
  byte *pbVar21;
  ushort *puVar22;
  ulong uVar23;
  uint *puVar24;
  ulong uVar25;
  uint *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  int *piVar29;
  undefined1 *puVar30;
  undefined8 uVar31;
  undefined1 *puVar32;
  long *plVar33;
  undefined1 *puVar34;
  float fVar35;
  uint *local_238;
  undefined1 auStack_220 [24];
  long *local_208;
  int *local_200;
  int *local_1f8;
  undefined1 auStack_1e8 [24];
  long *local_1d0;
  int *local_1c8;
  int *local_1c0;
  uint *local_1b0;
  char *local_1a8;
  size_t local_1a0;
  long *local_198;
  long *local_190;
  undefined1 auStack_158 [64];
  long *local_118;
  long *local_110;
  long local_108;
  long *local_100;
  long *local_f8;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_e8 = PTR_DAT_047d8e88 + 0x10;
  uStack_a0 = 0;
  uStack_e0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = local_e8;
  FUN_016164cc(&local_1b0,param_2);
  uVar9 = FUN_00dc5c18(&local_a8,0,&local_1b0,0,*(undefined8 *)(param_1 + 0x30));
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_016166b8(&local_118,param_2);
    uVar9 = FUN_00dc5c18(&local_e8,0,&local_118,0,*(undefined8 *)(param_1 + 0x30));
    uVar9 = uVar9 & 0xffffffff;
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_1b0 != (uint *)0x0) {
    (**(code **)(*(long *)local_1b0 + 0x20))();
  }
  if ((uVar9 & 1) == 0) goto LAB_01615294;
  FUN_00fb9e50(&local_1b0,&local_a8,&local_e8);
  FUN_00fb4dd0(&local_1c8,&local_1b0);
  puVar7 = PTR_DAT_047d5608;
  if (local_1c0 == (int *)0x0) {
    uVar20 = 0;
    *(undefined4 *)PTR_DAT_047dcac8 = 0;
    goto LAB_016143a0;
  }
  if (*(ushort *)((long)local_1c0 - (long)*local_1c0) < 7) goto LAB_01615804;
  uVar9 = (ulong)((ushort *)((long)local_1c0 - (long)*local_1c0))[3];
  uVar20 = 0;
  if (uVar9 != 0) {
    puVar10 = (uint *)((long)local_1c0 + uVar9);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    local_118 = (long *)0x3c929fe;
    puVar10 = bsearch(&local_118,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar10 != (uint *)0x0) && (local_1c8 != (int *)0x0)) {
      piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar22 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar22;
      if (uVar6 < 7) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)0x0;
        if ((ulong)puVar22[3] != 0) {
          puVar10 = (uint *)((long)piVar3 + (ulong)puVar22[3]);
          piVar29 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar9 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (long)*(char *)((long)piVar29 + uVar9) & 0xffffffff;
      }
      if (*(long *)(puVar7 + uVar9 * 8) == 4) {
        if (uVar6 < 0xb) {
          uVar27 = 0;
LAB_01615420:
          uVar20 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar22[5] != 0) {
            uVar27 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar22[5]);
          }
          if ((uVar6 < 0xd) || ((ulong)puVar22[6] == 0)) goto LAB_01615420;
          uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        }
        if ((uVar27 < *(ushort *)((long)local_1c8 - (long)*local_1c8)) &&
           (uVar9 = (ulong)*(ushort *)(((long)local_1c8 - (long)*local_1c8) + (ulong)uVar27),
           uVar9 != 0)) {
          uVar20 = *(undefined4 *)((long)local_1c8 + uVar9);
        }
        goto LAB_0161411c;
      }
      if ((0xc < uVar6) && ((ulong)puVar22[6] != 0)) {
        uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        goto LAB_0161411c;
      }
    }
LAB_01615804:
    uVar20 = 0;
  }
LAB_0161411c:
  *(undefined4 *)PTR_DAT_047dcac8 = uVar20;
  if (local_1c0 == (int *)0x0) {
LAB_01615824:
    uVar20 = 0;
  }
  else {
    if ((6 < *(ushort *)((long)local_1c0 - (long)*local_1c0)) &&
       (uVar9 = (ulong)((ushort *)((long)local_1c0 - (long)*local_1c0))[3], uVar9 != 0)) {
      puVar10 = (uint *)((long)local_1c0 + uVar9);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
      local_118 = (long *)0x3c99630;
      puVar10 = bsearch(&local_118,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar10 != (uint *)0x0) && (local_1c8 != (int *)0x0)) {
        piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
        puVar22 = (ushort *)((long)piVar3 - (long)*piVar3);
        uVar6 = *puVar22;
        if (uVar6 < 7) {
          piVar29 = (int *)0x0;
        }
        else {
          piVar29 = (int *)0x0;
          if ((ulong)puVar22[3] != 0) {
            puVar10 = (uint *)((long)piVar3 + (ulong)puVar22[3]);
            piVar29 = (int *)((long)puVar10 + (ulong)*puVar10);
          }
        }
        if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
           (uVar9 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar9 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = (long)*(char *)((long)piVar29 + uVar9) & 0xffffffff;
        }
        if (*(long *)(puVar7 + uVar9 * 8) == 4) {
          fVar35 = 0.0;
          if (uVar6 < 0xb) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            if ((ulong)puVar22[5] != 0) {
              uVar27 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar22[5]);
            }
            if ((0xe < uVar6) && ((ulong)puVar22[7] != 0)) {
              fVar35 = (float)*(double *)((long)piVar3 + (ulong)puVar22[7]);
            }
          }
          if ((uVar27 < *(ushort *)((long)local_1c8 - (long)*local_1c8)) &&
             (uVar9 = (ulong)*(ushort *)(((long)local_1c8 - (long)*local_1c8) + (ulong)uVar27),
             uVar9 != 0)) {
            fVar35 = *(float *)((long)local_1c8 + uVar9);
          }
        }
        else {
          if ((uVar6 < 0xf) || ((ulong)puVar22[7] == 0)) goto LAB_01614244;
          fVar35 = (float)*(double *)((long)piVar3 + (ulong)puVar22[7]);
        }
        if (0.0 < fVar35) {
          *(float *)PTR_DAT_047dcad0 = fVar35;
        }
      }
    }
LAB_01614244:
    if (local_1c0 == (int *)0x0) goto LAB_01615824;
    if ((6 < *(ushort *)((long)local_1c0 - (long)*local_1c0)) &&
       (uVar9 = (ulong)((ushort *)((long)local_1c0 - (long)*local_1c0))[3], uVar9 != 0)) {
      puVar10 = (uint *)((long)local_1c0 + uVar9);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
      local_118 = (long *)0x3bf0087;
      bsearch(&local_118,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (local_1c0 == (int *)0x0) goto LAB_01615824;
    }
    if (*(ushort *)((long)local_1c0 - (long)*local_1c0) < 7) goto LAB_01615824;
    uVar9 = (ulong)((ushort *)((long)local_1c0 - (long)*local_1c0))[3];
    uVar20 = 0;
    if (uVar9 != 0) {
      puVar10 = (uint *)((long)local_1c0 + uVar9);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
      local_118 = (long *)0x3c50f85;
      puVar10 = bsearch(&local_118,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar10 != (uint *)0x0) && (local_1c8 != (int *)0x0)) {
        piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
        puVar22 = (ushort *)((long)piVar3 - (long)*piVar3);
        uVar6 = *puVar22;
        if (uVar6 < 7) {
          piVar29 = (int *)0x0;
        }
        else {
          piVar29 = (int *)0x0;
          if ((ulong)puVar22[3] != 0) {
            puVar10 = (uint *)((long)piVar3 + (ulong)puVar22[3]);
            piVar29 = (int *)((long)puVar10 + (ulong)*puVar10);
          }
        }
        if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
           (uVar9 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar9 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = (long)*(char *)((long)piVar29 + uVar9) & 0xffffffff;
        }
        if (*(long *)(puVar7 + uVar9 * 8) == 4) {
          if (uVar6 < 0xb) {
            uVar27 = 0;
LAB_0161542c:
            uVar20 = 0;
          }
          else {
            uVar27 = 0;
            if ((ulong)puVar22[5] != 0) {
              uVar27 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar22[5]);
            }
            if ((uVar6 < 0xd) || ((ulong)puVar22[6] == 0)) goto LAB_0161542c;
            uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
          }
          if ((uVar27 < *(ushort *)((long)local_1c8 - (long)*local_1c8)) &&
             (uVar9 = (ulong)*(ushort *)(((long)local_1c8 - (long)*local_1c8) + (ulong)uVar27),
             uVar9 != 0)) {
            uVar20 = *(undefined4 *)((long)local_1c8 + uVar9);
          }
          goto LAB_016143a0;
        }
        if ((0xc < uVar6) && ((ulong)puVar22[6] != 0)) {
          uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
          goto LAB_016143a0;
        }
      }
      goto LAB_01615824;
    }
  }
LAB_016143a0:
  *(undefined4 *)PTR_DAT_047dcad8 = uVar20;
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  uVar31 = *(undefined8 *)PTR_DAT_047d8288;
  local_108 = 0xe;
  local_100 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d8290 = uVar31;
  local_118 = (long *)0xbe9a82cdcb430d57;
  local_110 = (long *)0x3c71806;
  FUN_00cee868(auStack_1e8,&local_1c8,&local_118);
  lVar11 = FUN_0116d064(uVar31,auStack_1e8);
  if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  local_118 = (long *)0x4c68c8d870acc6ec;
  local_110 = (long *)0x3c85812;
  local_108 = 0xe;
  local_100 = (long *)0x0;
  FUN_00d996a8(&local_200,&local_1c8,&local_118);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar13 = param_1 + 0x188;
  if ((local_1f8 == (int *)0x0) || (*(ushort *)((long)local_1f8 - (long)*local_1f8) < 7))
  goto LAB_01615844;
  uVar9 = (ulong)((ushort *)((long)local_1f8 - (long)*local_1f8))[3];
  uVar20 = 0;
  if (uVar9 != 0) {
    puVar10 = (uint *)((long)local_1f8 + uVar9);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    local_118 = (long *)0x3c6adf8;
    puVar10 = bsearch(&local_118,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar10 != (uint *)0x0) && (local_200 != (int *)0x0)) {
      piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar22 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar22;
      if (uVar6 < 7) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)0x0;
        if ((ulong)puVar22[3] != 0) {
          puVar10 = (uint *)((long)piVar3 + (ulong)puVar22[3]);
          piVar29 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar9 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (long)*(char *)((long)piVar29 + uVar9) & 0xffffffff;
      }
      if (*(long *)(puVar7 + uVar9 * 8) == 4) {
        if (uVar6 < 0xb) {
          uVar27 = 0;
LAB_01615438:
          uVar20 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar22[5] != 0) {
            uVar27 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar22[5]);
          }
          if ((uVar6 < 0xd) || ((ulong)puVar22[6] == 0)) goto LAB_01615438;
          uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        }
        if ((uVar27 < *(ushort *)((long)local_200 - (long)*local_200)) &&
           (uVar9 = (ulong)*(ushort *)(((long)local_200 - (long)*local_200) + (ulong)uVar27),
           uVar9 != 0)) {
          uVar20 = *(undefined4 *)((long)local_200 + uVar9);
        }
        goto LAB_01614574;
      }
      if ((0xc < uVar6) && ((ulong)puVar22[6] != 0)) {
        uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        goto LAB_01614574;
      }
    }
LAB_01615844:
    uVar20 = 0;
  }
LAB_01614574:
  local_118 = (long *)CONCAT44(local_118._4_4_,uVar20);
  FUN_01615cfc(lVar13,&local_118);
  if ((local_1f8 == (int *)0x0) || (*(ushort *)((long)local_1f8 - (long)*local_1f8) < 7))
  goto LAB_01615864;
  uVar9 = (ulong)((ushort *)((long)local_1f8 - (long)*local_1f8))[3];
  uVar20 = 0;
  if (uVar9 != 0) {
    puVar10 = (uint *)((long)local_1f8 + uVar9);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    local_118 = (long *)0x3c92a10;
    puVar10 = bsearch(&local_118,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar10 != (uint *)0x0) && (local_200 != (int *)0x0)) {
      piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar22 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar22;
      if (uVar6 < 7) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)0x0;
        if ((ulong)puVar22[3] != 0) {
          puVar10 = (uint *)((long)piVar3 + (ulong)puVar22[3]);
          piVar29 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar9 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (long)*(char *)((long)piVar29 + uVar9) & 0xffffffff;
      }
      if (*(long *)(puVar7 + uVar9 * 8) == 4) {
        if (uVar6 < 0xb) {
          uVar27 = 0;
LAB_01615444:
          uVar20 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar22[5] != 0) {
            uVar27 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar22[5]);
          }
          if ((uVar6 < 0xd) || ((ulong)puVar22[6] == 0)) goto LAB_01615444;
          uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        }
        if ((uVar27 < *(ushort *)((long)local_200 - (long)*local_200)) &&
           (uVar9 = (ulong)*(ushort *)(((long)local_200 - (long)*local_200) + (ulong)uVar27),
           uVar9 != 0)) {
          uVar20 = *(undefined4 *)((long)local_200 + uVar9);
        }
        goto LAB_0161468c;
      }
      if ((0xc < uVar6) && ((ulong)puVar22[6] != 0)) {
        uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        goto LAB_0161468c;
      }
    }
LAB_01615864:
    uVar20 = 0;
  }
LAB_0161468c:
  local_118 = (long *)CONCAT44(local_118._4_4_,uVar20);
  FUN_01615cfc(lVar13,&local_118);
  if ((local_1f8 == (int *)0x0) || (*(ushort *)((long)local_1f8 - (long)*local_1f8) < 7))
  goto LAB_01615884;
  uVar9 = (ulong)((ushort *)((long)local_1f8 - (long)*local_1f8))[3];
  uVar20 = 0;
  if (uVar9 != 0) {
    puVar10 = (uint *)((long)local_1f8 + uVar9);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    local_118 = (long *)0x3c71815;
    puVar10 = bsearch(&local_118,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar10 != (uint *)0x0) && (local_200 != (int *)0x0)) {
      piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar22 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar22;
      if (uVar6 < 7) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)0x0;
        if ((ulong)puVar22[3] != 0) {
          puVar10 = (uint *)((long)piVar3 + (ulong)puVar22[3]);
          piVar29 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar9 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (long)*(char *)((long)piVar29 + uVar9) & 0xffffffff;
      }
      if (*(long *)(puVar7 + uVar9 * 8) == 4) {
        if (uVar6 < 0xb) {
          uVar27 = 0;
LAB_01615450:
          uVar20 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar22[5] != 0) {
            uVar27 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar22[5]);
          }
          if ((uVar6 < 0xd) || ((ulong)puVar22[6] == 0)) goto LAB_01615450;
          uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        }
        if ((uVar27 < *(ushort *)((long)local_200 - (long)*local_200)) &&
           (uVar9 = (ulong)*(ushort *)(((long)local_200 - (long)*local_200) + (ulong)uVar27),
           uVar9 != 0)) {
          uVar20 = *(undefined4 *)((long)local_200 + uVar9);
        }
        goto LAB_016147a4;
      }
      if ((0xc < uVar6) && ((ulong)puVar22[6] != 0)) {
        uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        goto LAB_016147a4;
      }
    }
LAB_01615884:
    uVar20 = 0;
  }
LAB_016147a4:
  local_118 = (long *)CONCAT44(local_118._4_4_,uVar20);
  FUN_01615cfc(lVar13,&local_118);
  if ((local_1f8 == (int *)0x0) || (*(ushort *)((long)local_1f8 - (long)*local_1f8) < 7))
  goto LAB_016158a4;
  uVar9 = (ulong)((ushort *)((long)local_1f8 - (long)*local_1f8))[3];
  uVar20 = 0;
  if (uVar9 != 0) {
    puVar10 = (uint *)((long)local_1f8 + uVar9);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    local_118 = (long *)0x3c6436f;
    puVar10 = bsearch(&local_118,puVar10 + 1,(ulong)*puVar10,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar10 != (uint *)0x0) && (local_200 != (int *)0x0)) {
      piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar22 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar22;
      if (uVar6 < 7) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)0x0;
        if ((ulong)puVar22[3] != 0) {
          puVar10 = (uint *)((long)piVar3 + (ulong)puVar22[3]);
          piVar29 = (int *)((long)puVar10 + (ulong)*puVar10);
        }
      }
      if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar9 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (long)*(char *)((long)piVar29 + uVar9) & 0xffffffff;
      }
      if (*(long *)(puVar7 + uVar9 * 8) == 4) {
        if (uVar6 < 0xb) {
          uVar27 = 0;
LAB_0161545c:
          uVar20 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar22[5] != 0) {
            uVar27 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar22[5]);
          }
          if ((uVar6 < 0xd) || ((ulong)puVar22[6] == 0)) goto LAB_0161545c;
          uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        }
        if ((uVar27 < *(ushort *)((long)local_200 - (long)*local_200)) &&
           (uVar9 = (ulong)*(ushort *)(((long)local_200 - (long)*local_200) + (ulong)uVar27),
           uVar9 != 0)) {
          uVar20 = *(undefined4 *)((long)local_200 + uVar9);
        }
        goto LAB_016148c0;
      }
      if ((0xc < uVar6) && ((ulong)puVar22[6] != 0)) {
        uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar22[6]);
        goto LAB_016148c0;
      }
    }
LAB_016158a4:
    uVar20 = 0;
  }
LAB_016148c0:
  local_118 = (long *)CONCAT44(local_118._4_4_,uVar20);
  FUN_01615cfc(lVar13,&local_118);
  local_118 = (long *)&DAT_2a6e6a7d864add5d;
  local_110 = (long *)0x3c19a53;
  local_108 = 0xd;
  local_100 = (long *)0x0;
  FUN_00cee868(auStack_220,&local_1c8,&local_118);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  FUN_00cbf4c0(&local_118,auStack_220);
  uVar9 = FUN_00dc5c18(param_1 + 0x38,0,&local_118,0,*(undefined8 *)(param_1 + 0x30));
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if ((uVar9 & 1) == 0) {
    if (local_208 != (long *)0x0) {
      (**(code **)(*local_208 + 0x20))();
    }
    FUN_00db239c(auStack_158);
    FUN_00db239c(&local_198);
  }
  else {
    puVar10 = (uint *)(**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
    piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
    puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    puVar10 = puVar4 + 1;
    uVar9 = (ulong)*puVar4;
    if (uVar9 != 0) {
      local_238 = puVar10 + uVar9;
      plVar1 = (long *)(param_1 + 0x78);
      plVar33 = (long *)(param_1 + 0xa8);
      do {
        piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 == 0)) {
          puVar30 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar3 + uVar9);
          puVar30 = (undefined1 *)((long)puVar4 + (ulong)*puVar4);
        }
        pcVar2 = puVar30 + 4;
        sVar12 = strlen(pcVar2);
        bVar5 = puVar30[4];
        puVar34 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar34 = &DAT_cbf29ce484222645;
          pbVar21 = puVar30 + 5;
          do {
            puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar5 != 0);
        }
        puVar32 = *(undefined1 **)(param_1 + 0x80);
        if (puVar32 == (undefined1 *)0x0) {
LAB_01614af0:
          plVar17 = (long *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                                      (*(long **)(param_1 + 0xb0),0x38,8);
          if (plVar17 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0xb0) + 0xe8))();
          }
          uVar31 = *(undefined8 *)(param_1 + 0xb0);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar13 != 0) {
            if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_016158e0;
            *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar31;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          }
          plVar17[2] = (long)puVar34;
          plVar17[3] = (long)pcVar2;
          plVar17[6] = (long)piVar3;
          plVar17[4] = sVar12;
          plVar17[5] = 0;
          if (lVar13 != 0) {
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          }
          *plVar17 = 0;
          plVar17[1] = (long)puVar34;
          fVar35 = (float)(*(long *)(param_1 + 0xd0) + 1);
          if ((puVar32 == (undefined1 *)0x0) ||
             (*(float *)(param_1 + 0xd8) * (float)puVar32 < fVar35)) {
            uVar9 = (ulong)(puVar32 < (undefined1 *)0x3 ||
                           ((ulong)puVar32 & (ulong)(puVar32 + -1)) != 0) | (long)puVar32 << 1;
            uVar23 = (ulong)(fVar35 / *(float *)(param_1 + 0xd8));
            if (uVar23 <= uVar9) {
              uVar23 = uVar9;
            }
            if (uVar23 - 1 == 0) {
              uVar23 = 2;
            }
            else if ((uVar23 & uVar23 - 1) != 0) {
              uVar23 = std::__next_prime(uVar23);
            }
            uVar9 = *(ulong *)(param_1 + 0x80);
            if (uVar9 < uVar23) {
              uVar25 = uVar23;
LAB_01614c78:
              FUN_01616190(plVar1,uVar25);
            }
            else if (uVar23 < uVar9) {
              uVar25 = (ulong)((float)*(ulong *)(param_1 + 0xd0) / *(float *)(param_1 + 0xd8));
              if ((uVar9 < 3) ||
                 (uVar19 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
                 uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333),
                 1 < (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar25 = std::__next_prime(uVar25);
              }
              else if (1 < uVar25) {
                uVar25 = 1L << (-LZCOUNT(uVar25 - 1) & 0x3fU);
              }
              if (uVar25 <= uVar23) {
                uVar25 = uVar23;
              }
              if (uVar25 < uVar9) goto LAB_01614c78;
            }
            puVar32 = *(undefined1 **)(param_1 + 0x80);
            if (((ulong)puVar32 & (ulong)(puVar32 + -1)) == 0) {
              puVar30 = (undefined1 *)((ulong)(puVar32 + -1) & (ulong)puVar34);
            }
            else if (puVar34 < puVar32) {
              puVar30 = puVar34;
            }
            else {
              uVar9 = 0;
              if (puVar32 != (undefined1 *)0x0) {
                uVar9 = (ulong)puVar34 / (ulong)puVar32;
              }
              puVar30 = puVar34 + -(uVar9 * (long)puVar32);
            }
          }
          plVar18 = *(long **)(*plVar1 + (long)puVar30 * 8);
          if (plVar18 == (long *)0x0) {
            *plVar17 = *plVar33;
            *plVar33 = (long)plVar17;
            *(long **)(*plVar1 + (long)puVar30 * 8) = plVar33;
            if (*plVar17 != 0) {
              puVar30 = *(undefined1 **)(*plVar17 + 8);
              if (((ulong)puVar32 & (ulong)(puVar32 + -1)) == 0) {
                puVar30 = (undefined1 *)((ulong)puVar30 & (ulong)(puVar32 + -1));
              }
              else if (puVar32 <= puVar30) {
                uVar9 = 0;
                if (puVar32 != (undefined1 *)0x0) {
                  uVar9 = (ulong)puVar30 / (ulong)puVar32;
                }
                puVar30 = puVar30 + -(uVar9 * (long)puVar32);
              }
              plVar18 = (long *)(*plVar1 + (long)puVar30 * 8);
              goto LAB_01614bac;
            }
          }
          else {
            *plVar17 = *plVar18;
LAB_01614bac:
            *plVar18 = (long)plVar17;
          }
          *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
        }
        else {
          puVar16 = puVar32 + -1;
          if (((ulong)puVar32 & (ulong)puVar16) == 0) {
            puVar30 = (undefined1 *)((ulong)puVar16 & (ulong)puVar34);
            plVar17 = *(long **)(*plVar1 + (long)puVar30 * 8);
            if (plVar17 == (long *)0x0) goto LAB_01614af0;
            do {
              plVar17 = (long *)*plVar17;
              if ((plVar17 == (long *)0x0) ||
                 ((undefined1 *)plVar17[1] != puVar34 &&
                  (undefined1 *)((ulong)plVar17[1] & (ulong)puVar16) != puVar30)) goto LAB_01614af0;
            } while ((undefined1 *)plVar17[2] != puVar34);
          }
          else {
            puVar30 = puVar34;
            if (puVar32 <= puVar34) {
              uVar9 = 0;
              if (puVar32 != (undefined1 *)0x0) {
                uVar9 = (ulong)puVar34 / (ulong)puVar32;
              }
              puVar30 = puVar34 + -(uVar9 * (long)puVar32);
            }
            plVar17 = *(long **)(*plVar1 + (long)puVar30 * 8);
            if (plVar17 == (long *)0x0) goto LAB_01614af0;
            do {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_01614af0;
              puVar16 = (undefined1 *)plVar17[1];
              if (puVar16 != puVar34) {
                if (puVar32 <= puVar16) {
                  uVar9 = 0;
                  if (puVar32 != (undefined1 *)0x0) {
                    uVar9 = (ulong)puVar16 / (ulong)puVar32;
                  }
                  puVar16 = puVar16 + -(uVar9 * (long)puVar32);
                }
                if (puVar16 != puVar30) goto LAB_01614af0;
              }
            } while ((undefined1 *)plVar17[2] != puVar34);
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != local_238);
    }
    if (local_208 != (long *)0x0) {
      (**(code **)(*local_208 + 0x20))();
    }
    FUN_00db239c(auStack_158);
    FUN_00db239c(&local_198);
    FUN_016168a4(&local_1b0,param_2);
    uVar9 = FUN_00dc5c18(param_1 + 0xe0,0,&local_1b0,0,*(undefined8 *)(param_1 + 0x30));
    if (local_190 != (long *)0x0) {
      (**(code **)(*local_190 + 0x20))();
    }
    if (local_1b0 != (uint *)0x0) {
      (**(code **)(*(long *)local_1b0 + 0x20))();
    }
    if ((uVar9 & 1) != 0) {
      puVar14 = (uint *)(**(code **)(**(long **)(param_1 + 0xe8) + 0x70))();
      piVar3 = (int *)((long)puVar14 + (ulong)*puVar14);
      uVar23 = (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3));
      puVar4 = (uint *)((long)piVar3 + uVar23);
      uVar25 = (ulong)*puVar4;
      puVar4 = (uint *)((long)puVar4 + uVar25);
      puVar10 = puVar4 + 1;
      uVar9 = (ulong)*puVar4;
      if (uVar9 != 0) {
        lVar13 = (long)puVar14 + uVar25 + uVar23 + (ulong)*puVar14 + 9;
        plVar1 = (long *)(param_1 + 0x120);
        puVar4 = puVar10 + uVar9;
        do {
          uVar27 = *puVar10;
          piVar3 = (int *)((long)puVar10 + (ulong)uVar27);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
             (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 == 0)) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_1b0 = *(uint **)PTR_DAT_047d3e30;
            local_1a8 = *(char **)(PTR_DAT_047d3e30 + 8);
            local_1a0 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
            local_198 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (local_198 != (long *)0x0) {
              (**(code **)(*local_198 + 0x18))();
            }
          }
          else {
            puVar14 = (uint *)((long)piVar3 + uVar9);
            uVar23 = (ulong)*puVar14;
            pcVar2 = (char *)((long)puVar14 + uVar23 + 4);
            local_1a0 = strlen(pcVar2);
            bVar5 = *(byte *)((long)puVar14 + uVar23 + 4);
            local_1b0 = (uint *)&DAT_cbf29ce484222645;
            if (bVar5 != 0) {
              local_1b0 = (uint *)&DAT_cbf29ce484222645;
              pbVar21 = (byte *)(lVar13 + uVar23 + uVar9 + (ulong)uVar27);
              do {
                local_1b0 = (uint *)(((ulong)local_1b0 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar21;
                pbVar21 = pbVar21 + 1;
              } while (bVar5 != 0);
            }
            local_198 = (long *)0x0;
            local_1a8 = pcVar2;
          }
          puVar14 = *(uint **)(param_1 + 0x128);
          if (puVar14 != (uint *)0x0) {
            uVar9 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
            uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
            uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar9 < 2) {
              puVar24 = (uint *)((ulong)((long)puVar14 + -1) & (ulong)local_1b0);
            }
            else {
              puVar24 = local_1b0;
              if (puVar14 <= local_1b0) {
                uVar23 = 0;
                if (puVar14 != (uint *)0x0) {
                  uVar23 = (ulong)local_1b0 / (ulong)puVar14;
                }
                puVar24 = (uint *)((long)local_1b0 - uVar23 * (long)puVar14);
              }
            }
            puVar28 = *(undefined8 **)(*plVar1 + (long)puVar24 * 8);
            if ((puVar28 != (undefined8 *)0x0) &&
               (plVar33 = (long *)*puVar28, plVar33 != (long *)0x0)) {
              if (uVar9 < 2) {
                do {
                  if ((uint *)plVar33[1] == local_1b0) {
                    if ((uint *)plVar33[2] == local_1b0) goto LAB_01614e98;
                  }
                  else if ((uint *)((ulong)plVar33[1] & (ulong)((long)puVar14 + -1)) != puVar24)
                  break;
                  plVar33 = (long *)*plVar33;
                } while (plVar33 != (long *)0x0);
              }
              else {
                do {
                  puVar26 = (uint *)plVar33[1];
                  if (puVar26 == local_1b0) {
                    if ((uint *)plVar33[2] == local_1b0) goto LAB_01614e98;
                  }
                  else {
                    if (puVar14 <= puVar26) {
                      uVar9 = 0;
                      if (puVar14 != (uint *)0x0) {
                        uVar9 = (ulong)puVar26 / (ulong)puVar14;
                      }
                      puVar26 = (uint *)((long)puVar26 - uVar9 * (long)puVar14);
                    }
                    if (puVar26 != puVar24) break;
                  }
                  plVar33 = (long *)*plVar33;
                } while (plVar33 != (long *)0x0);
              }
            }
          }
          plVar33 = *(long **)(param_1 + 0x30);
          plVar17 = (long *)(**(code **)(*plVar33 + 0x10))(plVar33,0x1b0,8);
          if (plVar17 == (long *)0x0) {
            local_108 = 0;
            local_100 = (long *)0x0;
            local_118 = (long *)0x0;
            local_110 = (long *)0x0;
          }
          else {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_016158e0:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar33;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            FUN_01616a90(plVar17,*(undefined8 *)(param_1 + 0x30),&local_1b0);
            local_108 = 0x1b0;
            local_100 = (long *)&DAT_00000008;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            local_118 = plVar17;
            local_110 = plVar33;
          }
          puVar14 = local_1b0;
          puVar24 = *(uint **)(param_1 + 0x128);
          if (puVar24 == (uint *)0x0) {
LAB_01614fb4:
            plVar33 = (long *)(**(code **)(**(long **)(param_1 + 0x158) + 0x10))
                                        (*(long **)(param_1 + 0x158),0x50,8);
            if (plVar33 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x158) + 0xe8))();
            }
            uVar31 = *(undefined8 *)(param_1 + 0x158);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar15 != 0) {
              if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_016158e0;
              *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar31;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            }
            plVar33[2] = (long)local_1b0;
            plVar33[3] = (long)local_1a8;
            plVar33[4] = local_1a0;
            plVar33[5] = (long)local_198;
            if (local_198 != (long *)0x0) {
              (**(code **)(*local_198 + 0x18))();
            }
            plVar17 = local_118;
            local_118 = (long *)0x0;
            plVar33[8] = local_108;
            plVar33[9] = (long)local_100;
            plVar33[6] = (long)plVar17;
            plVar33[7] = (long)local_110;
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            }
            *plVar33 = 0;
            plVar33[1] = (long)puVar14;
            fVar35 = (float)(*(long *)(param_1 + 0x178) + 1);
            if ((puVar24 == (uint *)0x0) ||
               (puVar26 = local_238, *(float *)(param_1 + 0x180) * (float)puVar24 < fVar35)) {
              uVar9 = (ulong)(puVar24 < (uint *)0x3 ||
                             ((ulong)puVar24 & (ulong)((long)puVar24 + -1)) != 0) |
                      (long)puVar24 << 1;
              uVar23 = (ulong)(fVar35 / *(float *)(param_1 + 0x180));
              if (uVar23 <= uVar9) {
                uVar23 = uVar9;
              }
              if (uVar23 - 1 == 0) {
                uVar23 = 2;
              }
              else if ((uVar23 & uVar23 - 1) != 0) {
                uVar23 = std::__next_prime(uVar23);
              }
              uVar9 = *(ulong *)(param_1 + 0x128);
              if (uVar9 < uVar23) {
                uVar25 = uVar23;
LAB_01615238:
                FUN_01616e58(plVar1,uVar25);
              }
              else if (uVar23 < uVar9) {
                uVar25 = (ulong)((float)*(ulong *)(param_1 + 0x178) / *(float *)(param_1 + 0x180));
                if ((uVar9 < 3) ||
                   (uVar19 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
                   uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333),
                   1 < (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                  uVar25 = std::__next_prime(uVar25);
                }
                else if (1 < uVar25) {
                  uVar25 = 1L << (-LZCOUNT(uVar25 - 1) & 0x3fU);
                }
                if (uVar25 <= uVar23) {
                  uVar25 = uVar23;
                }
                if (uVar25 < uVar9) goto LAB_01615238;
              }
              puVar24 = *(uint **)(param_1 + 0x128);
              if (((ulong)puVar24 & (ulong)((long)puVar24 + -1)) == 0) {
                puVar26 = (uint *)((ulong)((long)puVar24 + -1) & (ulong)puVar14);
              }
              else if (puVar14 < puVar24) {
                puVar26 = puVar14;
              }
              else {
                uVar9 = 0;
                if (puVar24 != (uint *)0x0) {
                  uVar9 = (ulong)puVar14 / (ulong)puVar24;
                }
                puVar26 = (uint *)((long)puVar14 - uVar9 * (long)puVar24);
              }
            }
            plVar17 = *(long **)(*plVar1 + (long)puVar26 * 8);
            if (plVar17 == (long *)0x0) {
              *plVar33 = *(long *)(param_1 + 0x150);
              *(long **)(param_1 + 0x150) = plVar33;
              *(long *)(*(long *)(param_1 + 0x120) + (long)puVar26 * 8) = param_1 + 0x150;
              if (*plVar33 != 0) {
                puVar14 = *(uint **)(*plVar33 + 8);
                if (((ulong)puVar24 & (ulong)((long)puVar24 + -1)) == 0) {
                  puVar14 = (uint *)((ulong)puVar14 & (ulong)((long)puVar24 + -1));
                }
                else if (puVar24 <= puVar14) {
                  uVar9 = 0;
                  if (puVar24 != (uint *)0x0) {
                    uVar9 = (ulong)puVar14 / (ulong)puVar24;
                  }
                  puVar14 = (uint *)((long)puVar14 - uVar9 * (long)puVar24);
                }
                plVar17 = (long *)(*plVar1 + (long)puVar14 * 8);
                goto LAB_016150f8;
              }
            }
            else {
              *plVar33 = *plVar17;
LAB_016150f8:
              *plVar17 = (long)plVar33;
            }
            *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 1;
            local_118 = (long *)0x0;
          }
          else {
            puVar30 = (undefined1 *)((long)puVar24 + -1);
            if (((ulong)puVar24 & (ulong)puVar30) == 0) {
              local_238 = (uint *)((ulong)puVar30 & (ulong)local_1b0);
              plVar33 = *(long **)(*plVar1 + (long)local_238 * 8);
              if (plVar33 == (long *)0x0) goto LAB_01614fb4;
              do {
                plVar33 = (long *)*plVar33;
                if ((plVar33 == (long *)0x0) ||
                   ((uint *)plVar33[1] != local_1b0 &&
                    (uint *)((ulong)plVar33[1] & (ulong)puVar30) != local_238)) goto LAB_01614fb4;
              } while ((uint *)plVar33[2] != local_1b0);
            }
            else {
              local_238 = local_1b0;
              if (puVar24 <= local_1b0) {
                uVar9 = 0;
                if (puVar24 != (uint *)0x0) {
                  uVar9 = (ulong)local_1b0 / (ulong)puVar24;
                }
                local_238 = (uint *)((long)local_1b0 - uVar9 * (long)puVar24);
              }
              plVar33 = *(long **)(*plVar1 + (long)local_238 * 8);
              if (plVar33 == (long *)0x0) goto LAB_01614fb4;
              do {
                plVar33 = (long *)*plVar33;
                if (plVar33 == (long *)0x0) goto LAB_01614fb4;
                puVar26 = (uint *)plVar33[1];
                if (puVar26 != local_1b0) {
                  if (puVar24 <= puVar26) {
                    uVar9 = 0;
                    if (puVar24 != (uint *)0x0) {
                      uVar9 = (ulong)puVar26 / (ulong)puVar24;
                    }
                    puVar26 = (uint *)((long)puVar26 - uVar9 * (long)puVar24);
                  }
                  if (puVar26 != local_238) goto LAB_01614fb4;
                }
              } while ((uint *)plVar33[2] != local_1b0);
            }
            local_118 = (long *)0x0;
            if (plVar17 != (long *)0x0) {
              FUN_020d9118(&local_110,plVar17);
            }
          }
          if (lVar11 != 0) {
            FUN_0116d3a8(lVar11,plVar33[6]);
          }
LAB_01614e98:
          FUN_016158e4(plVar33[6],piVar3);
          if (local_198 != (long *)0x0) {
            (**(code **)(*local_198 + 0x20))();
          }
          puVar10 = puVar10 + 1;
          lVar13 = lVar13 + 4;
        } while (puVar10 != puVar4);
      }
      FUN_01615ca0(param_1);
    }
  }
LAB_01615294:
  FUN_00db239c(&local_e8);
  FUN_00db239c(&local_a8);
  return;
}


