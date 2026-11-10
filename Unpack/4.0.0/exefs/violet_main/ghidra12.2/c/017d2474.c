/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d2474; name: FUN_017d2474
 */


uint FUN_017d2474(byte param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  long *plVar22;
  int iVar23;
  undefined8 *puVar24;
  uint uVar25;
  long *plVar26;
  ulong uVar27;
  undefined1 *local_e8;
  undefined1 *local_e0;
  byte *local_d8;
  size_t local_d0;
  long *local_c8;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  if (((param_2 & 1) != 0) || ((uVar25 = 0, param_1 != 0x28 && (param_1 != 0x30)))) {
    lVar13 = FUN_01fb1f0c();
    puVar3 = PTR_DAT_047d3e30;
    puVar2 = PTR_DAT_047d3e28;
    if (lVar13 != 0) {
      local_90 = DAT_0485dd28;
      lStack_88 = DAT_0485dd30;
      if ((DAT_0485dd30 != 0 || DAT_0485dd28 != 0) && (*(char *)(lVar13 + 0x88) != '\0')) {
        if ((param_1 < 0x3b) &&
           (pbVar20 = (&PTR_s_position_0456a130)[param_1], pbVar20 != (byte *)0x0)) {
          bVar8 = *pbVar20;
          local_e8 = &DAT_cbf29ce484222645;
          if (bVar8 == 0) {
            plVar22 = (long *)0x0;
          }
          else {
            plVar22 = (long *)0x0;
            do {
              pbVar20 = pbVar20 + 1;
              local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar20;
            } while (bVar8 != 0);
          }
        }
        else {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          local_e8 = *(undefined1 **)puVar3;
          plVar22 = *(long **)(puVar3 + 0x18);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x18))(plVar22);
          }
        }
        if (DAT_0483b0b0 != (code *)0x0) {
          local_80 = (undefined1 *)((ulong)local_80._4_4_ << 0x20);
          (*DAT_0483b0b0)(&DAT_0483b0d0,&local_80);
        }
        local_80 = (undefined1 *)0x0;
        nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_80);
        FUN_01b3c408(0,local_80);
        FUN_02a3ec30(&local_80);
        FUN_01b3c818(1,&local_78);
        FUN_01b3c408(2,0x12d);
        FUN_01b3c408(3,DAT_048420a8);
        if (((*PTR_DAT_047d89f8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d89f8);
        }
        lVar18 = *(long *)PTR_DAT_047d8a00;
        *(long *)PTR_DAT_047d8a08 = lVar18;
        FUN_01b3c408(4,*(undefined1 *)(lVar18 + 0x2c));
        if (((*PTR_DAT_047d4c98 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4c98);
        }
        puVar7 = PTR_DAT_047d4ca8;
        puVar6 = PTR_DAT_047d4ca0;
        lVar18 = *(long *)PTR_DAT_047d4ca0;
        *(long *)PTR_DAT_047d4ca8 = lVar18;
        puVar5 = PTR_DAT_047d4c68;
        puVar4 = PTR_DAT_047d4c60;
        plVar26 = *(long **)(lVar18 + 0x1c0);
        do {
          lVar18 = *plVar26;
          puVar24 = (undefined8 *)(lVar18 + 0x28);
          plVar14 = (long *)(**(code **)*puVar24)(puVar24);
          if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
            uVar17 = FUN_01b3fb0c();
            *(undefined8 *)puVar5 = uVar17;
            __cxa_guard_release(puVar4);
          }
          for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            if (plVar14 == (long *)puVar5) {
              uVar25 = *(uint *)(lVar18 + 0x48);
              if (((*PTR_DAT_047d4c98 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d4c98);
              }
              lVar18 = *(long *)puVar6;
              *(long *)puVar7 = lVar18;
              plVar26 = *(long **)(lVar18 + 0x1c0);
              goto LAB_017d26a4;
            }
          }
          plVar26 = plVar26 + 1;
        } while( true );
      }
    }
    uVar25 = 0;
  }
  goto LAB_017d2bc0;
LAB_017d26a4:
  lVar18 = *plVar26;
  puVar24 = (undefined8 *)(lVar18 + 0x28);
  plVar14 = (long *)(**(code **)*puVar24)(puVar24);
  if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
    uVar17 = FUN_01b3fb0c();
    *(undefined8 *)puVar5 = uVar17;
    __cxa_guard_release(puVar4);
  }
  for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    if (plVar14 == (long *)puVar5) {
      FUN_01b3c408(5,*(int *)(lVar18 + 0x4c) + uVar25 * 0x3c);
      uVar9 = nn::oe::GetOperationMode();
      FUN_01b3c408(6,uVar9);
      uVar10 = nn::hid::GetNpadStyleSet((uint *)PTR_No1_047db080);
      if ((uVar10 & 1) == 0) {
        if ((uVar10 >> 2 & 1) == 0) {
          if ((uVar10 >> 1 & 1) == 0) {
            if ((uVar10 >> 3 & 1) == 0) {
              uVar17 = 0;
              if ((uVar10 & 0x10) != 0) {
                uVar17 = 5;
              }
            }
            else {
              uVar17 = 4;
            }
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          uVar17 = 3;
        }
      }
      else {
        uVar17 = 1;
      }
      FUN_01b3c408(7,uVar17);
      lVar18 = FUN_01727bf0();
      FUN_01b3c408(8,*(undefined1 *)(lVar18 + 0x38));
      lVar18 = FUN_01727bf0();
      FUN_01b3c408(9,*(undefined1 *)(lVar18 + 0x39));
      lVar18 = FUN_01727bf0();
      FUN_01b3c408(10,*(undefined1 *)(lVar18 + 0x3a));
      lVar18 = FUN_01727bf0();
      FUN_01b3c408(0xb,*(undefined1 *)(lVar18 + 0x3b));
      lVar18 = FUN_01727bf0();
      FUN_01b3c408(0xc,*(undefined1 *)(lVar18 + 0x3c));
      if (((*PTR_DAT_047d6288 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6288), iVar11 != 0)) {
        FUN_00100190(&LAB_00b1b6d8,PTR_DAT_047d6290,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6288);
      }
      lVar18 = *(long *)PTR_DAT_047d6290;
      *(long *)PTR_DAT_047d6298 = lVar18;
      if (lVar18 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined1 *)(lVar18 + 0x39);
      }
      FUN_01b3c408(0x11,uVar16);
      if ((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) {
        bVar8 = 0;
      }
      else {
        bVar8 = nn::nifm::IsNetworkAvailable();
        bVar8 = bVar8 & DAT_04839fc0 == 4;
      }
      FUN_01b3c408(0x12,bVar8);
      iVar11 = (**(code **)PTR_PTR_04569e28)(&PTR_PTR_04569e28,1);
      FUN_01b3c408(0x44,iVar11 == 3);
      FUN_01b61a00(&local_80);
      FUN_01b3c818(0x45,&local_80);
      if ((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) {
        bVar8 = 0;
      }
      else {
        bVar8 = nn::nifm::IsNetworkAvailable();
        bVar8 = bVar8 & DAT_04839fc0 == 4;
      }
      FUN_01b3c408(0x46,bVar8);
      nn::prepo::PlayReport::Clear();
      nn::prepo::PlayReport::SetEventId((char *)(lVar13 + 0x30));
      if (((*(long *)(lVar13 + 0xf0) == 0) ||
          ((*(byte *)(*(long *)(lVar13 + 0xf0) + 0x1e8) & 1) != 0)) &&
         ((*(long *)(lVar13 + 0xb0) == 0 || ((*(byte *)(*(long *)(lVar13 + 0xb0) + 0x1e8) & 1) != 0)
          ))) {
        local_a8 = *(undefined8 *)(lVar13 + 0x90);
        local_a0 = *(undefined8 *)(lVar13 + 0x98);
        uStack_98 = *(undefined8 *)(lVar13 + 0xa0);
      }
      else {
        local_a0 = 0;
        uStack_98 = 0;
        local_a8 = 0;
      }
      local_80 = &DAT_fbec41851566601b;
      local_78 = "values";
      local_70 = 6;
      local_68 = (long *)0x0;
      piVar15 = (int *)FUN_00efa07c(&local_a8,&local_80);
      if (piVar15 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar15;
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (iVar11 == 0) goto LAB_017d2bb4;
      iVar23 = 0;
      goto LAB_017d292c;
    }
  }
  plVar26 = plVar26 + 1;
  goto LAB_017d26a4;
  while (iVar23 = iVar23 + 1, iVar23 != iVar11) {
LAB_017d292c:
    local_68 = (long *)0x0;
    local_80 = &DAT_fbec41851566601b;
    local_78 = "values";
    local_70 = 6;
    FUN_00e90ee0(auStack_c0,&local_a8,&local_80,iVar23);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x24312a27509e058c;
    local_d8 = &DAT_03bfad96;
    local_d0 = 3;
    FUN_00cee868(&local_80,auStack_c0,&local_e0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_80 == local_e8) {
      uVar27 = 0;
      do {
        if ((((uint)uVar27 & 0xffff) < 0x12a) &&
           (pbVar20 = (&PTR_s_timestamp_0456a308)[uVar27], pbVar20 != (byte *)0x0)) {
          local_d0 = strlen((char *)pbVar20);
          bVar8 = *pbVar20;
          if (bVar8 == 0) {
            local_e0 = &DAT_cbf29ce484222645;
          }
          else {
            local_e0 = &DAT_cbf29ce484222645;
            pbVar21 = pbVar20;
            do {
              pbVar21 = pbVar21 + 1;
              local_e0 = (undefined1 *)(((ulong)local_e0 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar21;
            } while (bVar8 != 0);
          }
          local_c8 = (long *)0x0;
          local_d8 = pbVar20;
        }
        else {
          if (((*puVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar2), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,puVar3,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar2);
          }
          local_e0 = *(undefined1 **)puVar3;
          local_d8 = *(byte **)(puVar3 + 8);
          local_d0 = *(size_t *)(puVar3 + 0x10);
          local_c8 = *(long **)(puVar3 + 0x18);
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x18))();
          }
        }
        piVar15 = (int *)FUN_00d27b5c(auStack_c0,&local_e0);
        if (((piVar15 != (int *)0x0) && (6 < *(ushort *)((long)piVar15 - (long)*piVar15))) &&
           (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 != 0)) {
          iVar12 = *(int *)((long)piVar15 + uVar19);
          if (iVar12 == 2) {
            uVar17 = 1;
          }
          else {
            if (iVar12 != 1) goto LAB_017d2a5c;
            uVar17 = 0;
          }
          FUN_01fb34c8(lVar13,uVar27 & 0xffffffff,uVar17);
        }
LAB_017d2a5c:
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 0x20))();
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != 0x129);
      iVar12 = nn::prepo::PlayReport::GetCount();
      if (iVar12 < 1) {
        bVar1 = false;
        uVar25 = 0;
      }
      else {
        iVar12 = nn::prepo::PlayReport::Save((Uid *)(lVar13 + 0x30));
        bVar1 = false;
        uVar25 = (uint)(iVar12 == 0);
      }
    }
    else {
      bVar1 = true;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (!bVar1) goto LAB_017d2bb8;
  }
LAB_017d2bb4:
  uVar25 = 0;
LAB_017d2bb8:
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))();
  }
LAB_017d2bc0:
  return uVar25 & 1;
}


