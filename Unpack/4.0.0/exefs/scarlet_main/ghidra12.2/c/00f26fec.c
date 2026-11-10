/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f26fec; name: FUN_00f26fec
 */


void FUN_00f26fec(long param_1,long param_2,ulong *param_3,ulong param_4,undefined4 param_5,
                 ulong param_6)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  void *pvVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  uint uVar20;
  int *piVar21;
  long lVar22;
  undefined8 uVar23;
  bool bVar24;
  byte *__s;
  long lVar25;
  long lVar26;
  bool bVar27;
  long *plVar28;
  long *local_1f0;
  int *local_1e8;
  int *local_1e0;
  byte *local_1d8;
  int *local_1d0;
  byte *local_1c8;
  size_t local_1c0;
  long *local_1b8;
  int local_1b0 [2];
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  uint local_180;
  int local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  int local_170;
  int local_16c;
  undefined8 local_168;
  char local_160;
  byte local_15f;
  int local_15c;
  char local_150 [16];
  int local_140;
  long *local_138;
  undefined1 auStack_130 [80];
  long *local_e0;
  char local_d8;
  int *local_d0;
  byte *local_c8;
  size_t local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 uStack_a0;
  undefined2 uStack_9f;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 uStack_88;
  undefined2 uStack_87;
  
  if (param_2 == 0) {
    return;
  }
  local_150[0] = '\0';
  local_e0 = (long *)0x0;
  local_d8 = '\0';
  local_b8 = 0;
  local_1b0[0] = 0;
  local_1a8 = (long *)0x0;
  plVar10 = (long *)FUN_00d44228();
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  iVar9 = *(int *)(param_2 + 0x10);
  plVar28 = *(long **)(param_2 + 0x18);
  local_15c = 0;
  local_1a8 = plVar10;
  memset(&local_1a0,0,0x43);
  local_1b0[0] = iVar9;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  local_1a8 = plVar28;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  memcpy(&local_1a0,(void *)(param_2 + 0x20),0x48);
  local_b8 = 1;
  if (local_160 != '\0') {
    local_170 = 6;
    local_1d0 = (int *)0x2b43ccf36e7f8220;
    local_1c8 = (byte *)0x3c2ec10;
    local_1c0 = 0x1d;
    local_1b8 = (long *)0x0;
    if (((*PTR_DAT_047d4928 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar9 != 0)) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
    lVar26 = *(long *)PTR_DAT_047d4930;
    *(long *)PTR_DAT_047d4938 = lVar26;
    uVar17 = FUN_00fb1cf4(&local_1d0,lVar26 + 0x198);
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x20))();
    }
    if ((uVar17 & 1) == 0) {
      local_170 = 0;
      goto LAB_00f277e8;
    }
  }
  if (local_15f == 0) {
    if (local_170 == 0) {
      if (local_16c == 0) goto LAB_00f270c4;
    }
    else if (0 < local_170) {
      if (local_16c < 1) {
        FUN_00f291dc(&local_1d0,param_1,local_170,param_3,local_15c);
        goto LAB_00f270e8;
      }
      FUN_00f29404(&local_1d0,param_1,local_170,local_16c,local_15c);
      if (local_1c8 == (byte *)0x0) goto LAB_00f277e8;
      if ((*(ushort *)(local_1c8 + -(long)*(int *)local_1c8) < 7) ||
         (uVar17 = (ulong)*(ushort *)((long)(local_1c8 + -(long)*(int *)local_1c8) + 6), uVar17 == 0
         )) {
        puVar12 = (uint *)0x0;
      }
      else {
        puVar12 = (uint *)((long)(local_1c8 + uVar17) + (ulong)*(uint *)(local_1c8 + uVar17));
      }
      local_1e8 = (int *)&DAT_03c2bfb0;
      pvVar11 = bsearch(&local_1e8,puVar12 + 1,(ulong)*puVar12,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (pvVar11 == (void *)0x0) goto LAB_00f277e8;
      local_d0 = local_1d0;
      local_c8 = local_1c8;
      local_c0 = local_1c0;
      if (local_d8 == '\0') {
        local_d8 = '\x01';
      }
    }
    goto LAB_00f2726c;
  }
LAB_00f270c4:
  uVar7 = FUN_00f2826c();
  FUN_00f28ab0(&local_1d0,param_1,local_1b0,uVar7,param_5,param_3,local_15c);
LAB_00f270e8:
  if (local_1c8 == (byte *)0x0) goto LAB_00f277e8;
  if ((*(ushort *)(local_1c8 + -(long)*(int *)local_1c8) < 7) ||
     (uVar17 = (ulong)*(ushort *)((long)(local_1c8 + -(long)*(int *)local_1c8) + 6), uVar17 == 0)) {
    puVar12 = (uint *)0x0;
  }
  else {
    puVar12 = (uint *)((long)(local_1c8 + uVar17) + (ulong)*(uint *)(local_1c8 + uVar17));
  }
  local_1e8 = (int *)&DAT_03c2bfb0;
  pvVar11 = bsearch(&local_1e8,puVar12 + 1,(ulong)*puVar12,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar11 == (void *)0x0) goto LAB_00f277e8;
  local_d0 = local_1d0;
  local_c8 = local_1c8;
  local_c0 = local_1c0;
  if (local_d8 == '\0') {
    local_d8 = '\x01';
  }
  if ((local_1c8 == (byte *)0x0) || (*(ushort *)(local_1c8 + -(long)*(int *)local_1c8) < 7))
  goto LAB_00f27f2c;
  uVar17 = (ulong)*(ushort *)((long)(local_1c8 + -(long)*(int *)local_1c8) + 6);
  local_16c = 0;
  if (uVar17 != 0) {
    local_1e8 = (int *)&DAT_03c2bfb0;
    puVar12 = (uint *)((long)(local_1c8 + uVar17) + (ulong)*(uint *)(local_1c8 + uVar17));
    puVar12 = bsearch(&local_1e8,puVar12 + 1,(ulong)*puVar12,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar12 != (uint *)0x0) && (local_d0 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar4 = *puVar18;
      if (uVar4 < 7) {
        piVar21 = (int *)0x0;
      }
      else {
        piVar21 = (int *)0x0;
        if ((ulong)puVar18[3] != 0) {
          puVar12 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
          piVar21 = (int *)((long)puVar12 + (ulong)*puVar12);
        }
      }
      if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar17 == 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = (long)*(char *)((long)piVar21 + uVar17) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar17 * 8) == 4) {
        if (uVar4 < 0xb) {
          uVar20 = 0;
LAB_00f27950:
          local_16c = 0;
        }
        else {
          uVar20 = 0;
          if ((ulong)puVar18[5] != 0) {
            uVar20 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
          }
          if ((uVar4 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_00f27950;
          local_16c = *(int *)((long)piVar1 + (ulong)puVar18[6]);
        }
        if ((uVar20 < *(ushort *)((long)local_d0 - (long)*local_d0)) &&
           (uVar17 = (ulong)*(ushort *)(((long)local_d0 - (long)*local_d0) + (ulong)uVar20),
           uVar17 != 0)) {
          local_16c = *(int *)((long)local_d0 + uVar17);
        }
        goto LAB_00f2726c;
      }
      if ((0xc < uVar4) && ((ulong)puVar18[6] != 0)) {
        local_16c = *(int *)((long)piVar1 + (ulong)puVar18[6]);
        goto LAB_00f2726c;
      }
    }
LAB_00f27f2c:
    local_16c = 0;
  }
LAB_00f2726c:
  if (local_d8 != '\0') {
    local_1d0 = (int *)0xab66b82d60b68807;
    local_1c8 = (byte *)0x3c8bcc9;
    local_1c0 = 0xc;
    local_1b8 = (long *)0x0;
    FUN_00d996a8(&local_1e8,&local_d0,&local_1d0);
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x20))();
    }
    if (local_1e0 == (int *)0x0) {
LAB_00f27bec:
      *param_3 = param_4;
      param_3[1] = 0x82a2b175229d6a5b;
      param_3[2] = param_4;
      uVar14 = param_4 ^ 0x82a2b175229d6a5b;
      uVar17 = uVar14 ^ (param_4 >> 0x28 | param_4 << 0x18) ^ uVar14 << 0x10;
      uVar14 = uVar14 >> 0x1b | uVar14 << 0x25;
      local_180 = (int)param_4 + 0x1b;
      while (local_180 = local_180 & 0x1f, 0x11 < local_180) {
        uVar19 = uVar17 ^ uVar14;
        iVar8 = (int)uVar14;
        iVar9 = (int)uVar17;
        uVar14 = uVar19 >> 0x1b | uVar19 << 0x25;
        uVar17 = uVar19 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar19 << 0x10;
        local_180 = iVar9 + iVar8;
      }
    }
    else {
      if ((*(ushort *)((long)local_1e0 - (long)*local_1e0) < 7) ||
         (uVar17 = (ulong)((ushort *)((long)local_1e0 - (long)*local_1e0))[3], uVar17 == 0)) {
        puVar12 = (uint *)0x0;
      }
      else {
        puVar12 = (uint *)((long)local_1e0 + uVar17);
        puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
      }
      local_1d0 = (int *)0x3c50399;
      pvVar11 = bsearch(&local_1d0,puVar12 + 1,(ulong)*puVar12,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (pvVar11 == (void *)0x0) goto LAB_00f27bec;
      if (((local_1e0 != (int *)0x0) && (6 < *(ushort *)((long)local_1e0 - (long)*local_1e0))) &&
         (uVar17 = (ulong)((ushort *)((long)local_1e0 - (long)*local_1e0))[3], uVar17 != 0)) {
        puVar12 = (uint *)((long)local_1e0 + uVar17);
        local_1d0 = (int *)0x3c50399;
        puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
        puVar12 = bsearch(&local_1d0,puVar12 + 1,(ulong)*puVar12,4,(__compar_fn_t)PTR_LAB_047d5600);
        puVar6 = PTR_DAT_047d5608;
        if ((puVar12 != (uint *)0x0) && (local_1e8 != (int *)0x0)) {
          piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar4 = *puVar18;
          if (uVar4 < 7) {
            piVar21 = (int *)0x0;
          }
          else {
            piVar21 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar12 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar21 = (int *)((long)puVar12 + (ulong)*puVar12);
            }
          }
          if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
             (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar17 == 0)) {
            uVar17 = 0;
          }
          else {
            uVar17 = (long)*(char *)((long)piVar21 + uVar17) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar17 * 8) == 4) {
            if (uVar4 < 0xb) {
              uVar20 = 0;
LAB_00f2796c:
              iVar9 = 0;
            }
            else {
              uVar20 = 0;
              if ((ulong)puVar18[5] != 0) {
                uVar20 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
              }
              if ((uVar4 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_00f2796c;
              iVar9 = *(int *)((long)piVar1 + (ulong)puVar18[6]);
            }
            if ((uVar20 < *(ushort *)((long)local_1e8 - (long)*local_1e8)) &&
               (uVar17 = (ulong)*(ushort *)(((long)local_1e8 - (long)*local_1e8) + (ulong)uVar20),
               uVar17 != 0)) {
              iVar9 = *(int *)((long)local_1e8 + uVar17);
            }
          }
          else {
            if ((uVar4 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_00f2741c;
            iVar9 = *(int *)((long)piVar1 + (ulong)puVar18[6]);
          }
          if (1 < iVar9) {
            if ((local_1e0 == (int *)0x0) || (*(ushort *)((long)local_1e0 - (long)*local_1e0) < 7))
            goto LAB_00f28058;
            uVar17 = (ulong)((ushort *)((long)local_1e0 - (long)*local_1e0))[3];
            iVar9 = 0;
            if (uVar17 != 0) {
              puVar12 = (uint *)((long)local_1e0 + uVar17);
              local_1d0 = (int *)0x3c50399;
              puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
              puVar12 = bsearch(&local_1d0,puVar12 + 1,(ulong)*puVar12,4,
                                (__compar_fn_t)PTR_LAB_047d5600);
              if ((puVar12 != (uint *)0x0) && (local_1e8 != (int *)0x0)) {
                piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
                puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
                uVar4 = *puVar18;
                if (uVar4 < 7) {
                  piVar21 = (int *)0x0;
                }
                else {
                  piVar21 = (int *)0x0;
                  if ((ulong)puVar18[3] != 0) {
                    puVar12 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
                    piVar21 = (int *)((long)puVar12 + (ulong)*puVar12);
                  }
                }
                if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                   (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar17 == 0)) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = (long)*(char *)((long)piVar21 + uVar17) & 0xffffffff;
                }
                if (*(long *)(puVar6 + uVar17 * 8) == 4) {
                  if (uVar4 < 0xb) {
                    uVar20 = 0;
LAB_00f27ec0:
                    iVar9 = 0;
                  }
                  else {
                    uVar20 = 0;
                    if ((ulong)puVar18[5] != 0) {
                      uVar20 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
                    }
                    if ((uVar4 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_00f27ec0;
                    iVar9 = *(int *)((long)piVar1 + (ulong)puVar18[6]);
                  }
                  if ((uVar20 < *(ushort *)((long)local_1e8 - (long)*local_1e8)) &&
                     (uVar17 = (ulong)*(ushort *)
                                       (((long)local_1e8 - (long)*local_1e8) + (ulong)uVar20),
                     uVar17 != 0)) {
                    iVar9 = *(int *)((long)local_1e8 + uVar17);
                  }
                  goto LAB_00f27d48;
                }
                if ((0xc < uVar4) && ((ulong)puVar18[6] != 0)) {
                  iVar9 = *(int *)((long)piVar1 + (ulong)puVar18[6]);
                  goto LAB_00f27d48;
                }
              }
LAB_00f28058:
              iVar9 = 0;
            }
LAB_00f27d48:
            local_180 = iVar9 - 2;
            goto LAB_00f2745c;
          }
        }
      }
LAB_00f2741c:
      *param_3 = param_4;
      param_3[1] = 0x82a2b175229d6a5b;
      param_3[2] = param_4;
      uVar14 = param_4 ^ 0x82a2b175229d6a5b;
      uVar17 = uVar14 ^ (param_4 >> 0x28 | param_4 << 0x18) ^ uVar14 << 0x10;
      uVar14 = uVar14 >> 0x1b | uVar14 << 0x25;
      local_180 = (int)param_4 + 0x1b;
      while (local_180 = local_180 & 0x1f, 0x11 < local_180) {
        uVar19 = uVar17 ^ uVar14;
        iVar8 = (int)uVar14;
        iVar9 = (int)uVar17;
        uVar14 = uVar19 >> 0x1b | uVar19 << 0x25;
        uVar17 = uVar19 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar19 << 0x10;
        local_180 = iVar9 + iVar8;
      }
    }
    *param_3 = uVar17;
    param_3[1] = uVar14;
  }
LAB_00f2745c:
  if (0x11 < local_180) goto LAB_00f277e8;
  if ((param_6 & 1) != 0) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar26 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar26;
    plVar10 = *(long **)(lVar26 + 0x1c8);
    plVar28 = *(long **)(lVar26 + 0x1c0);
    do {
      if (plVar28 == plVar10) {
        lVar26 = 0;
        break;
      }
      lVar26 = *plVar28;
      uVar17 = FUN_00f280dc(lVar26 + 0x28);
      plVar28 = plVar28 + 1;
    } while ((uVar17 & 1) == 0);
    iVar9 = 3;
    if (local_15f == 0) {
      iVar9 = 1;
    }
    iVar8 = (uint)local_15f << 1;
    if (local_160 != '\0') {
      iVar8 = iVar9;
    }
    FUN_00f28ff4(lVar26,local_17c,uStack_178,local_174,local_168,iVar8,(int)(char)param_5,local_15c)
    ;
  }
  lVar26 = 3;
  if ((ulong)local_15f == 0) {
    lVar26 = 1;
  }
  lVar2 = (ulong)local_15f << 1;
  if (local_160 != '\0') {
    lVar2 = lVar26;
  }
  if (local_1b0[0] == 0) {
    std::to_string(*(int *)(param_1 + 0x7d8));
    if (((ulong)local_1e8 & 1) == 0) {
      __s = (byte *)((ulong)&local_1e8 | 1);
LAB_00f274b4:
      local_1c0 = strlen((char *)__s);
      bVar3 = *__s;
      local_1d0 = (int *)&DAT_cbf29ce484222645;
      pbVar15 = __s;
      while (bVar3 != 0) {
        pbVar15 = pbVar15 + 1;
        local_1d0 = (int *)(((ulong)local_1d0 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar15;
      }
      local_1b8 = (long *)0x0;
      local_1c8 = __s;
    }
    else {
      __s = local_1d8;
      if (local_1d8 != (byte *)0x0) goto LAB_00f274b4;
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_1d0 = *(int **)PTR_DAT_047d3e30;
      local_1c8 = *(byte **)(PTR_DAT_047d3e30 + 8);
      local_1c0 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      local_1b8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_1b8 != (long *)0x0) {
        (**(code **)(*local_1b8 + 0x18))();
      }
    }
    FUN_01159bb0(&local_1f0,(ulong)local_1b0 | 8,&local_1d0);
    uStack_87 = 0;
    lVar26 = (long)(int)local_180;
    uStack_88 = 0x37;
    local_89 = 0x37;
    local_8a = 0x32;
    local_8c = 0x3846;
    local_90 = 0x32363539;
    uStack_9f = 0;
    uStack_a0 = 0x34;
    local_98 = 0x3445323545453443;
    local_a1 = 0x42;
    local_a2 = 0x41;
    local_a4 = 0x3330;
    local_a8 = 0x31304330;
    local_b0 = 0x4442423141414253;
    if (((*PTR_DAT_047d6c20 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
    lVar16 = *(long *)PTR_DAT_047d6c28;
    *(long *)PTR_DAT_047d6c30 = lVar16;
    puVar6 = PTR_DAT_047d38f8;
    lVar25 = *(long *)(lVar16 + 0x460);
    lVar22 = *(long *)PTR_DAT_047d38f8;
    lVar16 = nn::os::GetCurrentThread();
    if (lVar16 != lVar22) {
      uVar23 = nn::os::GetCurrentThread();
LAB_00f27890:
      if (*(long *)puVar6 == 0) goto code_r0x00f27898;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
      do {
        if (*(long *)puVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
            while (*(long *)puVar6 == 0) {
              cVar5 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar27) {
                *(undefined8 *)puVar6 = uVar23;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00f278a0;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar27) {
          *(undefined8 *)puVar6 = uVar23;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00f278a0:
      bVar27 = false;
      goto LAB_00f27608;
    }
    bVar27 = true;
LAB_00f27608:
    lVar16 = *(long *)(lVar25 + 0x80);
    uVar23 = *(undefined8 *)(lVar25 + 0x70);
    if (-1 < *(int *)(lVar16 + 0x58)) {
      lVar25 = *(long *)puVar6;
      lVar22 = nn::os::GetCurrentThread();
      if (lVar22 != lVar25) {
        uVar13 = nn::os::GetCurrentThread();
LAB_00f278b0:
        if (*(long *)puVar6 == 0) goto code_r0x00f278b8;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
        do {
          if (*(long *)puVar6 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
              while (*(long *)puVar6 == 0) {
                cVar5 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar24) {
                  *(undefined8 *)puVar6 = uVar13;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00f278c0;
              }
            } while( true );
          }
          cVar5 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar24) {
            *(undefined8 *)puVar6 = uVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00f278c0:
        bVar24 = false;
        goto LAB_00f2762c;
      }
      bVar24 = true;
LAB_00f2762c:
      iVar8 = FUN_00c5fc50(uVar23,0xfff0b9d8,(long)*(int *)(lVar16 + 0x5c));
      iVar9 = *(int *)(lVar16 + 0x58);
      if (!bVar24) {
        *(undefined8 *)puVar6 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
      }
      if (((iVar8 == iVar9) && (iVar9 = FUN_00c5d9a0(uVar23,0xffffffff,&local_98), iVar9 == 5)) &&
         (iVar9 = FUN_00c5d9a0(uVar23,0xffffffff,&local_b0), iVar9 == 6)) {
        plVar10 = (long *)PTR_PTR_047d4508;
        if (local_1f0 != (long *)0x0) {
          plVar10 = local_1f0 + 7;
        }
        FUN_00c85bd0(uVar23,*plVar10);
        FUN_00c5d960(uVar23,(long)*(int *)(&DAT_03d5f07c + lVar26 * 4));
        FUN_00c5d960(uVar23,lVar2);
        FUN_00c46da0((double)(float)local_1a0,uVar23);
        FUN_00c46da0((double)(float)((ulong)local_1a0 >> 0x20),uVar23);
        FUN_00c46da0((double)(float)uStack_198,uVar23);
        FUN_00c5d960(uVar23,(long)local_15c);
        iVar9 = FUN_00c5d980(uVar23);
        FUN_00c5dbe0(uVar23,&LAB_01fab0d0,0);
        FUN_00c5dcd0(uVar23,iVar9 + -7,1);
        iVar9 = FUN_00c5ddd0(uVar23,7,0,iVar9 + -7,0,0);
        if (iVar9 != 0) {
          uVar23 = FUN_00c646d0(uVar23,0xffffffff,0);
          *(undefined8 *)PTR_DAT_047d4238 = uVar23;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("0","CallImpl",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                     ,0x89,"Lua panic: function(%s.%s) error: %s",&local_98,&local_b0,uVar23);
        }
      }
    }
    FUN_00c5db00(uVar23,0);
    if (!bVar27) {
      *(undefined8 *)puVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
    }
    if (local_1f0 != (long *)0x0) {
      (**(code **)(*local_1f0 + 0x20))();
    }
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x20))();
    }
    if ((((ulong)local_1e8 & 1) != 0) && (local_1d8 != (byte *)0x0)) {
      lVar26 = tpidr_el0;
      plVar10 = *(long **)(lVar26 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar26 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar17 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,local_1d8,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,local_1d8,0,8);
      }
    }
  }
  plVar10 = local_1a8;
  if (local_150[0] == '\0') {
    local_140 = local_1b0[0];
    local_138 = local_1a8;
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x18))();
    }
    memcpy(auStack_130,&local_1a0,0x48);
    local_150[0] = '\x01';
  }
  else {
    local_140 = local_1b0[0];
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x18))(local_1a8);
    }
    plVar28 = local_138;
    local_138 = plVar10;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))();
    }
    memcpy(auStack_130,&local_1a0,0x48);
  }
  FUN_00f2853c(param_1 + (long)local_17c * 0x38 + 0x7e8,local_150);
LAB_00f277e8:
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_d8 != '\0') {
    local_d8 = '\0';
  }
  if (local_e0 != (long *)0x0) {
    plVar10 = local_e0 + 5;
    do {
      lVar26 = *plVar10;
      iVar9 = (int)lVar26 + -1;
      cVar5 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar27) {
        *(int *)plVar10 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
    else if ((int)lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if ((local_150[0] != '\0') && (local_138 != (long *)0x0)) {
    (**(code **)(*local_138 + 0x20))();
  }
  return;
code_r0x00f27898:
  cVar5 = '\x01';
  bVar27 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar27) {
    *(undefined8 *)puVar6 = uVar23;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00f278a0;
  goto LAB_00f27890;
code_r0x00f278b8:
  cVar5 = '\x01';
  bVar24 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar24) {
    *(undefined8 *)puVar6 = uVar13;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00f278c0;
  goto LAB_00f278b0;
}


