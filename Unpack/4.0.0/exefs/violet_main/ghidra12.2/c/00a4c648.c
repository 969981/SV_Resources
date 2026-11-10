/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4c648; name: FUN_00a4c648
 */


undefined8 FUN_00a4c648(long param_1)

{
  char *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  long *plVar5;
  long *plVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *local_68;
  
  pcVar1 = (char *)(param_1 + 0x6505);
  cVar7 = *pcVar1;
  if (cVar7 != '\x02') {
    if (cVar7 != '\x01') {
      if (cVar7 != '\0') {
        return 1;
      }
      uVar17 = *(undefined8 *)(param_1 + 0x64c0);
      FUN_00a52290(&local_b0);
      FUN_00a521e4(&local_88,&local_b0);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      FUN_00a5237c(&local_90,&local_88);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      plVar6 = local_90;
      plVar10 = (long *)PTR_DAT_047d8b70;
      plVar2 = (long *)PTR_PTR_047d4508;
      local_88 = (long *)PTR_DAT_047d8b70;
      if (local_90 != (long *)0x0) {
        local_88 = local_90 + 6;
      }
      local_88 = (long *)*local_88;
      plVar5 = (long *)PTR_PTR_047d4508;
      if (local_90 != (long *)0x0) {
        plVar5 = local_90 + 7;
      }
      lStack_80 = *plVar5;
      if (local_90 == (long *)0x0) {
        local_78 = 0;
      }
      else {
        local_78 = local_90[8];
      }
      local_70 = (long *)0x0;
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x18))(local_90);
      }
      local_70 = plVar6;
      FUN_00a52290(&local_d8);
      FUN_00a521e4(&local_b0,&local_d8);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      FUN_00a5242c(&local_b8,&local_b0);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      plVar5 = local_b8;
      plVar6 = plVar2;
      local_b0 = plVar10;
      if (local_b8 != (long *)0x0) {
        plVar6 = local_b8 + 7;
        local_b0 = local_b8 + 6;
      }
      local_b0 = (long *)*local_b0;
      lStack_a8 = *plVar6;
      if (local_b8 == (long *)0x0) {
        local_a0 = 0;
      }
      else {
        local_a0 = local_b8[8];
      }
      local_98 = (long *)0x0;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x18))(local_b8);
      }
      local_98 = plVar5;
      FUN_00a52290(&local_68);
      FUN_00a521e4(&local_d8,&local_68);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      FUN_00a524d4(&local_68,&local_d8);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      plVar6 = local_68;
      if (local_68 != (long *)0x0) {
        plVar2 = local_68 + 7;
        plVar10 = local_68 + 6;
      }
      local_d8 = (long *)*plVar10;
      lStack_d0 = *plVar2;
      if (local_68 == (long *)0x0) {
        local_c8 = 0;
      }
      else {
        local_c8 = local_68[8];
      }
      local_c0 = (long *)0x0;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
      local_c0 = plVar6;
      FUN_0180d020(uVar17,&local_88,&local_b0,&local_d8);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      *pcVar1 = '\x01';
    }
    uVar12 = FUN_02b7a9c0(*(undefined8 *)(param_1 + 0x64c0));
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    *pcVar1 = '\x02';
  }
  plVar2 = (long *)(param_1 + 0x64c8);
  puVar3 = (undefined8 *)(param_1 + 0x64d0);
  FUN_00a531b0(plVar2,*(undefined8 *)(param_1 + 0x64d0));
  uVar12 = 0;
  *(undefined8 *)(param_1 + 0x64f8) = 0;
  *(undefined8 **)(param_1 + 0x64c8) = puVar3;
  *(undefined8 *)(param_1 + 0x64d0) = 0;
  do {
    lVar14 = *(long *)(param_1 + 0x64c0);
    if (uVar12 < *(uint *)(lVar14 + 0x120) >> 1) {
      puVar4 = (ushort *)(*(long *)(lVar14 + 0x128) + uVar12 * 4);
      uVar8 = *puVar4;
      uVar20 = (uint)uVar8;
      uVar9 = puVar4[1];
      uVar16 = *(uint *)(lVar14 + 0x110);
      uVar18 = (uint)uVar9;
      if ((((((uint)uVar8 <= uVar16 >> 1 && uVar18 <= uVar16 >> 1) && uVar8 <= uVar18) &&
           uVar18 != 0xffff) && uVar8 != 0xffff) && (uVar9 != 0 || uVar8 != 0)) {
        do {
          if (uVar20 < uVar16 >> 1) {
            uVar16 = (uint)*(ushort *)(*(long *)(lVar14 + 0x108) + (ulong)uVar20 * 2);
          }
          else {
            uVar16 = 0;
          }
          puVar13 = puVar3;
          if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
            puVar19 = (undefined8 *)*puVar3;
            do {
              if ((int)uVar16 < *(int *)((long)puVar19 + 0x1c)) {
                puVar15 = (undefined8 *)*puVar19;
                puVar13 = puVar19;
                if (puVar15 == (undefined8 *)0x0) {
                  goto LAB_00a4c9c0;
                }
              }
              else {
                if ((int)uVar16 <= *(int *)((long)puVar19 + 0x1c)) goto LAB_00a4c9c0;
                puVar13 = puVar19 + 1;
                puVar15 = (undefined8 *)*puVar13;
                if (puVar15 == (undefined8 *)0x0) goto LAB_00a4c9c0;
              }
              puVar19 = puVar15;
            } while( true );
          }
          puVar19 = puVar3;
LAB_00a4c9c0:
          puVar15 = (undefined8 *)*puVar13;
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = (undefined8 *)
                      (**(code **)(**(long **)(param_1 + 0x64d8) + 0x10))
                                (*(long **)(param_1 + 0x64d8),0x28,4);
            if (puVar15 == (undefined8 *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x64d8) + 0xe8))();
            }
            uVar17 = *(undefined8 *)(param_1 + 0x64d8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar14 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar14 == 0) {
              *(uint *)((long)puVar15 + 0x1c) = uVar16;
              *(undefined4 *)(puVar15 + 4) = 0;
            }
            else {
              if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar17;
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
              *(uint *)((long)puVar15 + 0x1c) = uVar16;
              *(undefined4 *)(puVar15 + 4) = 0;
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
            }
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15[2] = puVar19;
            *puVar13 = puVar15;
            if (*(long *)*plVar2 == 0) {
              puVar13 = puVar15;
            }
            else {
              *plVar2 = *(long *)*plVar2;
              puVar13 = (undefined8 *)*puVar13;
            }
            FUN_010108e0(*(undefined8 *)(param_1 + 0x64d0),puVar13);
            *(long *)(param_1 + 0x64f8) = *(long *)(param_1 + 0x64f8) + 1;
          }
          *(uint *)(puVar15 + 4) = uVar20;
          if (uVar20 == uVar18) break;
          lVar14 = *(long *)(param_1 + 0x64c0);
          uVar20 = uVar20 + 1;
          uVar16 = *(uint *)(lVar14 + 0x110);
        } while( true );
      }
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 0x30) {
      *pcVar1 = '\x03';
      return 1;
    }
  } while( true );
}


