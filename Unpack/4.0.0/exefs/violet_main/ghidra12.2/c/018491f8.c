/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018491f8; name: FUN_018491f8
 */


undefined8 FUN_018491f8(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  int iVar23;
  int local_120;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined1 *local_b8;
  char *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  
  uVar13 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x28));
  if ((uVar13 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) {
      lVar17 = *(long *)(param_1 + 0x28);
      if (((*(long *)(lVar17 + 0x120) == 0) ||
          ((*(byte *)(*(long *)(lVar17 + 0x120) + 0x1e8) & 1) != 0)) &&
         ((*(long *)(lVar17 + 0xe0) == 0 || ((*(byte *)(*(long *)(lVar17 + 0xe0) + 0x1e8) & 1) != 0)
          ))) {
        local_98 = *(undefined8 *)(lVar17 + 0xc0);
        local_90 = *(undefined8 *)(lVar17 + 200);
        uStack_88 = *(undefined8 *)(lVar17 + 0xd0);
      }
      else {
        local_90 = 0;
        uStack_88 = 0;
        local_98 = 0;
      }
      local_b8 = &DAT_fbec41851566601b;
      local_b0 = "values";
      local_a8 = 6;
      local_a0 = (long *)0x0;
      piVar15 = (int *)FUN_00efa07c(&local_98,&local_b8);
      if (piVar15 == (int *)0x0) {
        local_120 = 0;
      }
      else {
        local_120 = *piVar15;
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      if (local_120 != 0) {
        iVar23 = 0;
        plVar1 = (long *)(param_1 + 0x38);
        do {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          plVar21 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x18))(plVar21);
          }
          local_a0 = (long *)0x0;
          local_b8 = &DAT_fbec41851566601b;
          local_b0 = "values";
          local_a8 = 6;
          FUN_00e90ee0(&local_d8,&local_98,&local_b8,iVar23);
          local_80 = local_d8;
          pcStack_78 = local_d0;
          local_70 = local_c8;
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_c0 = (long *)0x0;
          local_d8 = 0xbe9607955999d1d2;
          local_d0 = "eventId";
          local_c8 = 7;
          FUN_00cee868(&local_b8,&local_80,&local_d8);
          uVar14 = local_a8;
          pcVar3 = local_b0;
          puVar2 = local_b8;
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x20))(plVar21);
          }
          plVar21 = local_a0;
          local_a0 = (long *)0x0;
          if (local_c0 != (long *)0x0) {
            (**(code **)(*local_c0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0x45fff7343ea17b6e;
          local_b0 = "forceIdle";
          local_a8 = 9;
          bVar4 = FUN_00cf7518(&local_80,&local_b8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0xac4e886f82b44576;
          local_b0 = "resetLookAt";
          local_a8 = 0xb;
          bVar5 = FUN_00cf7518(&local_80,&local_b8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0xf603a2741ad3909c;
          local_b0 = "rideOff";
          local_a8 = 7;
          bVar6 = FUN_00cf7518(&local_80,&local_b8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0xd79d148b9d948ee9;
          local_b0 = "areaDynamicExclude";
          local_a8 = 0x12;
          piVar15 = (int *)FUN_00d27b5c(&local_80,&local_b8);
          if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
             (uVar13 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar13 == 0)) {
            local_f4 = 0;
          }
          else {
            local_f4 = *(undefined4 *)((long)piVar15 + uVar13);
          }
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0x867e8fd3f3515252;
          local_b0 = "partnerPokemon";
          local_a8 = 0xe;
          piVar15 = (int *)FUN_00d27b5c(&local_80,&local_b8);
          if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
             (uVar13 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar13 == 0)) {
            local_f8 = 0;
          }
          else {
            local_f8 = *(undefined4 *)((long)piVar15 + uVar13);
          }
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0xce13514ec39b34d7;
          local_b0 = "stateWsise";
          local_a8 = 10;
          bVar7 = FUN_00cf7518(&local_80,&local_b8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0x6245d3052118eea5;
          local_b0 = "effectEnvironmentalOff";
          local_a8 = 0x16;
          bVar8 = FUN_00cf7518(&local_80,&local_b8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0xbe5eb30f5d928035;
          local_b0 = "deleteNpc";
          local_a8 = 9;
          bVar9 = FUN_00cf7518(&local_80,&local_b8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0x6dce689ae81f0a7a;
          local_b0 = "deleteSymbol";
          local_a8 = 0xc;
          bVar10 = FUN_00cf7518(&local_80,&local_b8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_a0 = (long *)0x0;
          local_b8 = (undefined1 *)0x3941c4dfa87cf3fa;
          local_b0 = "deleteTraficNpc";
          local_a8 = 0xf;
          bVar11 = FUN_00cf7518(&local_80,&local_b8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          plVar22 = plVar1;
          if ((long *)*plVar1 != (long *)0x0) {
            plVar19 = (long *)*plVar1;
            do {
              if (puVar2 < (undefined1 *)plVar19[4]) {
                plVar18 = (long *)*plVar19;
                plVar22 = plVar19;
                if (plVar18 == (long *)0x0) {
                  goto LAB_018496cc;
                }
              }
              else {
                if (puVar2 <= (undefined1 *)plVar19[4]) goto LAB_018496cc;
                plVar22 = plVar19 + 1;
                plVar18 = (long *)*plVar22;
                if (plVar18 == (long *)0x0) goto LAB_018496cc;
              }
              plVar19 = plVar18;
            } while( true );
          }
          plVar19 = plVar1;
LAB_018496cc:
          if (*plVar22 == 0) {
            puVar16 = (undefined8 *)
                      (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                (*(long **)(param_1 + 0x40),0x78,8);
            if (puVar16 == (undefined8 *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x40) + 0xe8))();
            }
            uVar20 = *(undefined8 *)(param_1 + 0x40);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar17 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar17 != 0) {
              if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar20;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            }
            puVar16[4] = puVar2;
            puVar16[5] = pcVar3;
            puVar16[6] = uVar14;
            puVar16[7] = plVar21;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            puVar16[8] = puVar2;
            puVar16[9] = pcVar3;
            puVar16[10] = uVar14;
            puVar16[0xb] = plVar21;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))();
            }
            *(byte *)(puVar16 + 0xc) = bVar4 & 1;
            *(byte *)((long)puVar16 + 0x61) = bVar5 & 1;
            *(byte *)((long)puVar16 + 0x62) = bVar6 & 1;
            *(byte *)((long)puVar16 + 0x6c) = bVar7 & 1;
            *(byte *)((long)puVar16 + 0x6d) = bVar8 & 1;
            *(byte *)(puVar16 + 0xe) = bVar11 & 1;
            *(undefined4 *)((long)puVar16 + 100) = local_f4;
            *(undefined4 *)(puVar16 + 0xd) = local_f8;
            *(byte *)((long)puVar16 + 0x6e) = bVar9 & 1;
            *(byte *)((long)puVar16 + 0x6f) = bVar10 & 1;
            if (lVar17 != 0) {
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            }
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[2] = plVar19;
            *plVar22 = (long)puVar16;
            if (**(long **)(param_1 + 0x30) != 0) {
              *(long *)(param_1 + 0x30) = **(long **)(param_1 + 0x30);
              puVar16 = (undefined8 *)*plVar22;
            }
            FUN_010108e0(*(undefined8 *)(param_1 + 0x38),puVar16);
            *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
          }
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x20))();
          }
          iVar23 = iVar23 + 1;
        } while (iVar23 != local_120);
      }
    }
    uVar14 = 1;
  }
  return uVar14;
}


