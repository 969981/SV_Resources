/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a50ba8; name: FUN_00a50ba8
 */


void FUN_00a50ba8(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  byte bVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined1 uVar20;
  char cVar21;
  ushort uVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  undefined *puVar26;
  undefined *puVar27;
  bool bVar28;
  int iVar29;
  long *plVar30;
  undefined8 uVar31;
  int *piVar32;
  ulong uVar33;
  ushort *puVar34;
  ulong uVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  byte *pbVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  long local_c8;
  uint local_94;
  uint local_90;
  uint local_88;
  uint local_84;
  uint local_7c;
  uint local_78;
  ulong local_70 [2];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar29 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar29 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar39 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar39;
  puVar27 = PTR_DAT_047d4bd0;
  puVar26 = PTR_DAT_047d4bc8;
  plVar5 = *(long **)(lVar39 + 0x1c8);
  for (plVar4 = *(long **)(lVar39 + 0x1c0); plVar4 != plVar5; plVar4 = plVar4 + 1) {
    local_c8 = *plVar4;
    plVar30 = (long *)(*(code *)**(undefined8 **)(local_c8 + 0x28))((undefined8 *)(local_c8 + 0x28))
    ;
    if (((*puVar26 & 1) == 0) && (iVar29 = __cxa_guard_acquire(puVar26), iVar29 != 0)) {
      uVar31 = FUN_01b3fb0c();
      *(undefined8 *)puVar27 = uVar31;
      __cxa_guard_release(puVar26);
    }
    for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
      if (plVar30 == (long *)puVar27) goto LAB_00a50c7c;
    }
  }
  local_c8 = 0;
LAB_00a50c7c:
  puVar27 = PTR_DAT_047d4b10;
  puVar26 = PTR_DAT_047d4b08;
  plVar4 = *(long **)(lVar39 + 0x1c0);
  plVar5 = *(long **)(lVar39 + 0x1c8);
  do {
    if (plVar4 == plVar5) {
      return;
    }
    lVar39 = *plVar4;
    plVar30 = (long *)(*(code *)**(undefined8 **)(lVar39 + 0x28))((undefined8 *)(lVar39 + 0x28));
    if (((*puVar26 & 1) == 0) && (iVar29 = __cxa_guard_acquire(puVar26), iVar29 != 0)) {
      uVar31 = FUN_01b3fb0c();
      *(undefined8 *)puVar27 = uVar31;
      __cxa_guard_release(puVar26);
    }
    for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
      if (plVar30 == (long *)puVar27) {
        if (local_c8 == 0) {
          return;
        }
        uVar44 = 0;
        goto LAB_00a50d1c;
      }
    }
    plVar4 = plVar4 + 1;
  } while( true );
LAB_00a50d1c:
  lVar40 = lVar39 + uVar44 * 0x20;
  uVar22 = *(ushort *)(lVar40 + 0x50);
  uVar38 = *(uint *)(lVar40 + 0x40);
  uVar48 = *(uint *)(lVar40 + 0x44);
  bVar6 = *(byte *)(lVar40 + 0x52);
  uVar41 = *(uint *)(lVar40 + 0x48);
  uVar46 = *(uint *)(lVar40 + 0x4c);
  bVar7 = *(byte *)(lVar40 + 0x53);
  bVar8 = *(byte *)(lVar40 + 0x54);
  bVar9 = *(byte *)(lVar40 + 0x55);
  local_94 = (uint)bVar8;
  local_90 = (uint)bVar9;
  uVar10 = *(undefined1 *)(lVar40 + 0x56);
  bVar11 = *(byte *)(lVar40 + 0x58);
  uVar12 = *(undefined1 *)(lVar40 + 0x57);
  local_88 = (uint)bVar11;
  bVar13 = *(byte *)(lVar40 + 0x59);
  uVar14 = *(undefined1 *)(lVar40 + 0x5a);
  local_84 = (uint)bVar13;
  uVar15 = *(undefined1 *)(lVar40 + 0x5b);
  bVar16 = *(byte *)(lVar40 + 0x5c);
  bVar17 = *(byte *)(lVar40 + 0x5d);
  local_7c = (uint)bVar16;
  local_78 = (uint)bVar17;
  uVar18 = *(undefined1 *)(lVar40 + 0x5e);
  lVar37 = local_c8 + uVar44 * 0x18;
  iVar29 = *(int *)(lVar37 + 0x40);
  uVar45 = *(uint *)(lVar37 + 0x44);
  bVar19 = *(byte *)(lVar37 + 0x48);
  uVar20 = *(undefined1 *)(lVar40 + 0x5f);
  uVar23 = *(ushort *)(lVar37 + 0x4a);
  cVar21 = *(char *)(lVar37 + 0x4c);
  uVar43 = (uint)uVar44;
  uVar47 = uVar43 - 0x38a;
  if (iVar29 == 3) {
    if (uVar47 < 9) {
      uVar36 = 0;
      do {
        uVar24 = 1 << (ulong)(uVar36 & 0x1f);
        uVar1 = uVar36 + 1;
        uVar36 = uVar36 + 2;
        uVar25 = 1 << (ulong)(uVar1 & 0x1f);
        uVar1 = 0;
        if ((uVar24 & uVar45) != 0) {
          uVar1 = uVar24;
        }
        uVar24 = 0;
        if ((uVar25 & uVar45) != 0) {
          uVar24 = uVar25;
        }
        uVar46 = uVar24 | uVar1 | uVar46;
        uVar48 = uVar24 | uVar1 | uVar48;
        uVar38 = uVar24 | uVar1 | uVar38;
      } while (uVar36 != 0x20);
    }
    else {
      uVar36 = 0;
      do {
        uVar1 = 1 << (ulong)(uVar36 & 0x1f);
        if ((uVar1 & uVar45) != 0) {
          uVar38 = uVar1 | uVar38;
          uVar48 = uVar1 | uVar48;
          uVar41 = uVar1 | uVar41;
          uVar46 = uVar1 | uVar46;
        }
        uVar1 = 1 << (ulong)(uVar36 + 1 & 0x1f);
        uVar36 = uVar36 + 2;
        if ((uVar1 & uVar45) != 0) {
          uVar38 = uVar1 | uVar38;
          uVar48 = uVar1 | uVar48;
          uVar41 = uVar1 | uVar41;
          uVar46 = uVar1 | uVar46;
        }
      } while (uVar36 != 0x20);
    }
LAB_00a50f24:
    bVar28 = false;
    if ((8 < uVar47) && (iVar29 == 1)) {
      uVar45 = 0;
      do {
        if (((*PTR_DAT_047d7430 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar29 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d7430);
        }
        uVar31 = *(undefined8 *)PTR_DAT_047d7438;
        *(undefined8 *)PTR_DAT_047d7440 = uVar31;
        piVar32 = (int *)FUN_00e9d320(uVar31,uVar44 & 0xffffffff,uVar45);
        if (((8 < *(ushort *)((long)piVar32 - (long)*piVar32)) &&
            (uVar33 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[4], uVar33 != 0)) &&
           (*(short *)((long)piVar32 + uVar33) != 0)) {
          uVar41 = 1 << (ulong)(uVar45 & 0x1f) | uVar41;
        }
        uVar45 = uVar45 + 1;
      } while (uVar45 != 0x20);
      bVar28 = false;
    }
  }
  else {
    if (iVar29 == 2) {
      uVar36 = 0;
      do {
        uVar24 = 1 << (ulong)(uVar36 & 0x1f);
        uVar1 = uVar36 + 1;
        uVar36 = uVar36 + 2;
        uVar25 = 1 << (ulong)(uVar1 & 0x1f);
        uVar1 = 0;
        if ((uVar24 & uVar45) != 0) {
          uVar1 = uVar24;
        }
        uVar24 = 0;
        if ((uVar25 & uVar45) != 0) {
          uVar24 = uVar25;
        }
        uVar25 = 0;
        if (8 < uVar47) {
          uVar25 = uVar1;
        }
        uVar46 = uVar24 | uVar1 | uVar46;
        uVar2 = 0;
        if (8 < uVar47) {
          uVar2 = uVar24;
        }
        uVar48 = uVar24 | uVar1 | uVar48;
        uVar41 = uVar2 | uVar25 | uVar41;
      } while (uVar36 != 0x20);
      goto LAB_00a50f24;
    }
    if (iVar29 == 1) {
      uVar36 = 0;
      do {
        uVar24 = 1 << (ulong)(uVar36 & 0x1f);
        uVar1 = uVar36 + 1;
        uVar36 = uVar36 + 2;
        uVar25 = 1 << (ulong)(uVar1 & 0x1f);
        uVar1 = 0;
        if ((uVar24 & uVar45) != 0) {
          uVar1 = uVar24;
        }
        uVar24 = 0;
        if ((uVar25 & uVar45) != 0) {
          uVar24 = uVar25;
        }
        uVar25 = 0;
        if (8 < uVar47) {
          uVar25 = uVar1;
        }
        uVar46 = uVar24 | uVar1 | uVar46;
        uVar1 = 0;
        if (8 < uVar47) {
          uVar1 = uVar24;
        }
        uVar41 = uVar1 | uVar25 | uVar41;
      } while (uVar36 != 0x20);
      goto LAB_00a50f24;
    }
    bVar28 = uVar45 != 0;
  }
  if (!bVar28) {
    bVar7 = bVar7 | (cVar21 != '\0') << 1 | 1;
    if (((*PTR_DAT_047d7430 & 1) == 0) &&
       (iVar29 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar29 != 0)) {
      FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7430);
    }
    *(undefined8 *)PTR_DAT_047d7440 = *(undefined8 *)PTR_DAT_047d7438;
    uVar33 = 0xb6;
    puVar34 = &DAT_03d62a08;
    do {
      uVar35 = uVar33 >> 1;
      puVar3 = puVar34 + uVar35 + 1;
      uVar33 = uVar33 + (uVar33 >> 1 ^ 0xffffffffffffffff);
      if ((uVar43 & 0xffff) <= (uint)puVar34[uVar35]) {
        puVar3 = puVar34;
        uVar33 = uVar35;
      }
      puVar34 = puVar3;
    } while (uVar33 != 0);
    if ((uint)*puVar3 == (uVar43 & 0xffff)) {
      uVar45 = (uint)(byte)(&DAT_03d62b74)[(long)(puVar3 + -0x1eb1504) >> 1];
    }
    else {
      uVar45 = 1;
    }
    uVar43 = (bVar6 & 4 | bVar19 & 4) >> 1;
    uVar47 = 0;
    if ((bVar6 & 2) != 0 || (bVar19 & 2) != 0) {
      uVar43 = 1;
    }
    do {
      if (((uVar38 | uVar48) >> (ulong)(uVar47 & 0x1f) & 1) != 0) {
        if (((*PTR_DAT_047d7430 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar29 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d7430);
        }
        uVar31 = *(undefined8 *)PTR_DAT_047d7438;
        *(undefined8 *)PTR_DAT_047d7440 = uVar31;
        piVar32 = (int *)FUN_00e9d320(uVar31,uVar44 & 0xffffffff,uVar47);
        if ((8 < *(ushort *)((long)piVar32 - (long)*piVar32)) &&
           (uVar33 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[4], uVar33 != 0)) {
          if (*(short *)((long)piVar32 + uVar33) != 0) {
            uVar10 = 0;
            local_94 = uVar47;
            local_90 = uVar43;
          }
        }
        if (((*PTR_DAT_047d7430 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar29 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d7430);
        }
        uVar31 = *(undefined8 *)PTR_DAT_047d7438;
        *(undefined8 *)PTR_DAT_047d7440 = uVar31;
        piVar32 = (int *)FUN_00e9d320(uVar31,uVar44 & 0xffffffff,uVar47);
        if ((10 < *(ushort *)((long)piVar32 - (long)*piVar32)) &&
           (uVar33 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[5], uVar33 != 0)) {
          if (*(short *)((long)piVar32 + uVar33) != 0) {
            uVar14 = 0;
            local_88 = uVar47;
            local_84 = uVar43;
          }
        }
        if (((*PTR_DAT_047d7430 & 1) == 0) &&
           (iVar29 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar29 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d7430);
        }
        uVar31 = *(undefined8 *)PTR_DAT_047d7438;
        *(undefined8 *)PTR_DAT_047d7440 = uVar31;
        piVar32 = (int *)FUN_00e9d320(uVar31,uVar44 & 0xffffffff,uVar47);
        if ((0xc < *(ushort *)((long)piVar32 - (long)*piVar32)) &&
           (uVar33 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[6], uVar33 != 0)) {
          if (*(short *)((long)piVar32 + uVar33) != 0) {
            uVar18 = 0;
            local_7c = uVar47;
            local_78 = uVar43;
          }
        }
      }
      uVar47 = uVar47 + 1;
      bVar8 = (byte)local_94;
      bVar9 = (byte)local_90;
      bVar11 = (byte)local_88;
      bVar13 = (byte)local_84;
      bVar16 = (byte)local_7c;
      bVar17 = (byte)local_78;
    } while (uVar45 != uVar47);
  }
  local_78._0_1_ = bVar17;
  local_7c._0_1_ = bVar16;
  local_84._0_1_ = bVar13;
  local_88._0_1_ = bVar11;
  local_90._0_1_ = bVar9;
  local_94._0_1_ = bVar8;
  *(uint *)(lVar40 + 0x40) = uVar38;
  *(uint *)(lVar40 + 0x44) = uVar48;
  uVar44 = uVar44 + 1;
  *(uint *)(lVar40 + 0x48) = uVar41;
  *(uint *)(lVar40 + 0x4c) = uVar46;
  *(ushort *)(lVar40 + 0x50) =
       uVar23 & 1 | uVar22 | uVar23 & 2 | uVar23 & 4 | uVar23 & 8 | uVar23 & 0x10 | uVar23 & 0x20 |
       uVar23 & 0x40 | uVar23 & 0x80 | uVar23 & 0x100;
  *(byte *)(lVar40 + 0x52) = bVar19 & 1 | bVar6 | bVar19 & 2 | (byte)(bVar19 & 4);
  *(byte *)(lVar40 + 0x53) = bVar7;
  *(byte *)(lVar40 + 0x54) = (byte)local_94;
  *(byte *)(lVar40 + 0x55) = (byte)local_90;
  *(undefined1 *)(lVar40 + 0x56) = uVar10;
  *(undefined1 *)(lVar40 + 0x57) = uVar12;
  *(byte *)(lVar40 + 0x58) = (byte)local_88;
  *(byte *)(lVar40 + 0x59) = (byte)local_84;
  *(undefined1 *)(lVar40 + 0x5a) = uVar14;
  *(undefined1 *)(lVar40 + 0x5b) = uVar15;
  *(byte *)(lVar40 + 0x5c) = (byte)local_7c;
  *(byte *)(lVar40 + 0x5d) = (byte)local_78;
  *(undefined1 *)(lVar40 + 0x5e) = uVar18;
  *(undefined1 *)(lVar40 + 0x5f) = uVar20;
  if (uVar44 == 0x402) {
    pbVar42 = (byte *)(local_c8 + 0xbc84);
    lVar40 = 0;
    do {
      uVar38 = *(uint *)(local_c8 + 0xbbc0 + lVar40);
      local_70[0] = (ulong)pbVar42[-0x74] << 0x30 |
                    (ulong)*(ushort *)(pbVar42 + -0x7e) << 0x10 | (ulong)pbVar42[-0x78] << 0x28 |
                    (ulong)pbVar42[-0x73] << 0x38 | (ulong)uVar38 & 0xffff;
      local_70[1] = 0;
      if (((uVar38 - 1 & 0xffff) < 0x401) &&
         (uVar44 = FUN_00a664ac(param_1 + ((ulong)uVar38 & 0xffff) * 0x18 + 0x2c,0),
         (uVar44 & 1) != 0)) {
        FUN_02b034e8(lVar39,0,local_70);
      }
      lVar37 = local_c8 + 0xbbc0 + lVar40;
      uVar38 = *(uint *)(lVar37 + 0x14);
      local_70[0] = (ulong)pbVar42[4] << 0x30 |
                    (ulong)*(ushort *)(pbVar42 + -6) << 0x10 | (ulong)*pbVar42 << 0x28 |
                    (ulong)pbVar42[5] << 0x38 | (ulong)uVar38 & 0xffff;
      local_70[1] = 0;
      if (((uVar38 - 1 & 0xffff) < 0x401) &&
         (uVar44 = FUN_00a664ac(param_1 + ((ulong)uVar38 & 0xffff) * 0x18 + 0x2c,0),
         (uVar44 & 1) != 0)) {
        FUN_02b034e8(lVar39,1,local_70);
      }
      uVar38 = *(uint *)(lVar37 + 0x28);
      local_70[0] = (ulong)pbVar42[0x7c] << 0x30 |
                    (ulong)*(ushort *)(pbVar42 + 0x72) << 0x10 | (ulong)pbVar42[0x78] << 0x28 |
                    (ulong)pbVar42[0x7d] << 0x38 | (ulong)uVar38 & 0xffff;
      local_70[1] = 0;
      if ((((uVar38 - 1 & 0xffff) < 0x401) &&
          (uVar44 = FUN_00a664ac(param_1 + ((ulong)uVar38 & 0xffff) * 0x18 + 0x2c,0),
          (uVar44 & 1) != 0)) && (8 < (ushort)local_70[0] - 0x38a)) {
        FUN_02b034e8(lVar39,2,local_70);
      }
      lVar40 = lVar40 + 4;
      pbVar42 = pbVar42 + 0x18;
    } while (lVar40 != 0x14);
    return;
  }
  goto LAB_00a50d1c;
}


