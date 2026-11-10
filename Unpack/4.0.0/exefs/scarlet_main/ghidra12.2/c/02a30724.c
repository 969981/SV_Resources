/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a30724; name: FUN_02a30724
 */


void FUN_02a30724(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long local_f8;
  long *local_f0;
  code *local_e8;
  long *local_e0;
  long *local_d8;
  undefined8 *apuStack_d0 [13];
  long *local_68;
  
  plVar12 = *(long **)(param_1 + 0x30);
  plVar8 = *(long **)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x68) = 0;
  puVar4 = PTR_DAT_047db010;
  if (plVar12 != plVar8) {
    do {
      lVar18 = *(long *)*plVar12;
      local_e0 = (long *)0x0;
      local_d8 = (long *)0x0;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      pcVar11 = *(code **)(lVar18 + 0x478);
      if (pcVar11 != (code *)0x0) {
        *(undefined8 *)(lVar18 + 0x480) = 0;
        *(undefined8 *)(lVar18 + 0x488) = 0;
        *(undefined8 *)(lVar18 + 0x470) = 0;
        *(undefined8 *)(lVar18 + 0x478) = 0;
        (*pcVar11)(lVar18 + 0x490);
      }
      if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
        (**(code **)(puVar4 + 0x10))(puVar4 + 0x20,lVar18 + 0x490);
        uVar14 = *(undefined8 *)(puVar4 + 8);
        *(undefined8 *)(lVar18 + 0x488) = *(undefined8 *)(puVar4 + 0x18);
        uVar13 = *(undefined8 *)(puVar4 + 0x10);
        *(undefined8 *)(lVar18 + 0x470) = *(undefined8 *)puVar4;
        *(undefined8 *)(lVar18 + 0x478) = uVar14;
        *(undefined8 *)(lVar18 + 0x480) = uVar13;
      }
      pcVar11 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (long *)0x0;
        local_d8 = (long *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar11)(apuStack_d0);
      }
      plVar12 = plVar12 + 4;
    } while (plVar8 != plVar12);
    plVar12 = *(long **)(param_1 + 0x30);
    if (*(long **)(param_1 + 0x38) != plVar12) {
      plVar8 = *(long **)(param_1 + 0x38);
      do {
        plVar10 = plVar8 + -4;
        lVar18 = *plVar10;
        *plVar10 = 0;
        if (lVar18 != 0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar6 = FUN_00c4e600();
          iVar3 = *(int *)(lVar6 + 0x12c8);
          iVar5 = iVar3 + 1;
          *(int *)(lVar6 + 0x12c8) = iVar5;
          if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
            *(int *)(lVar6 + 0x12cc) = iVar5;
          }
          plVar2 = (long *)plVar8[-3];
          lVar6 = plVar8[-2];
          lVar15 = plVar8[-1];
          uVar7 = (**(code **)(*plVar2 + 0xf8))(plVar2);
          if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar2 + 0x18))(plVar2,lVar18,lVar6,lVar15);
          }
          else {
            FUN_00c48fe8(plVar2,lVar18,lVar6,lVar15);
          }
          lVar18 = FUN_00c4e600();
          iVar5 = *(int *)(lVar18 + 0x12c8) + -1;
          *(int *)(lVar18 + 0x12c8) = iVar5;
          if (iVar5 == 0) {
            plVar8 = (long *)FUN_00c4e600();
            if (plVar8[600] != 0) {
              local_68 = plVar8 + plVar8[600] * 3;
              local_f0 = plVar8;
              FUN_00c4ea30(&local_f0,&local_68);
              plVar16 = (long *)*plVar8;
              plVar2 = plVar8;
              if (plVar8[600] != 0) {
                plVar2 = plVar8 + plVar8[600] * 3;
              }
              if (plVar2 == plVar8) {
                lVar6 = 0;
                local_f8 = 0;
              }
              else {
                lVar6 = 0;
                local_f8 = 0;
                plVar17 = plVar8;
                do {
                  (**(code **)(*(long *)*plVar17 + 0xd0))();
                  if ((long *)*plVar17 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + local_f8 * 3,plVar17);
                    plVar16 = (long *)*plVar17;
                    local_f8 = lVar6;
                  }
                  plVar17 = plVar17 + 3;
                  lVar6 = lVar6 + 1;
                } while (plVar2 != plVar17);
              }
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + local_f8 * 3,plVar8 + lVar6 * 3);
              plVar8[600] = 0;
            }
            *(undefined4 *)(lVar18 + 0x12cc) = 0;
          }
        }
        plVar8 = plVar10;
      } while (plVar10 != plVar12);
      plVar8 = *(long **)(param_1 + 0x30);
      goto LAB_02a3099c;
    }
  }
  plVar8 = plVar12;
LAB_02a3099c:
  lVar18 = (long)plVar12 - (long)plVar8;
  *(long **)(param_1 + 0x38) = plVar12;
  if ((ulong)(lVar18 >> 5) < (ulong)(*(long *)(param_1 + 0x40) - (long)plVar8 >> 5)) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
    local_d8 = (long *)0x0;
    apuStack_d0[0] = puVar1;
    if (lVar18 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,lVar18,8);
      if (plVar10 == (long *)0x0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
      plVar8 = *(long **)(param_1 + 0x30);
      plVar12 = *(long **)(param_1 + 0x38);
    }
    puVar4 = PTR_LAB_047d3900;
    local_e8 = (code *)(plVar10 + (lVar18 >> 5) * 4);
    local_f0 = plVar10;
    local_e0 = (long *)local_e8;
    local_d8 = (long *)local_e8;
    if (plVar12 == plVar8) {
      plVar8 = (long *)local_e8;
      local_e0 = plVar12;
      plVar10 = (long *)local_e8;
    }
    else {
      do {
        pcVar11 = local_e8;
        uVar13 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar18 != 0) {
          if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar13;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        }
        lVar6 = plVar12[-4];
        plVar12[-4] = 0;
        *(long *)((long)pcVar11 + -0x20) = lVar6;
        lVar6 = plVar12[-3];
        plVar10 = plVar12 + -2;
        lVar15 = plVar12[-1];
        plVar12 = plVar12 + -4;
        *(long *)((long)pcVar11 + -0x10) = *plVar10;
        *(long *)((long)pcVar11 + -8) = lVar15;
        *(long *)((long)pcVar11 + -0x18) = lVar6;
        if (lVar18 != 0) {
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        }
        local_e8 = (code *)((long)local_e8 + -0x20);
      } while (plVar8 != plVar12);
      plVar12 = *(long **)(param_1 + 0x30);
      plVar8 = local_e0;
      local_e0 = *(long **)(param_1 + 0x38);
      plVar10 = local_d8;
    }
    *(code **)(param_1 + 0x30) = local_e8;
    *(long **)(param_1 + 0x38) = plVar8;
    local_d8 = *(long **)(param_1 + 0x40);
    *(long **)(param_1 + 0x40) = plVar10;
    local_f0 = plVar12;
    local_e8 = (code *)plVar12;
    FUN_02a311e4(&local_f0);
  }
  return;
}


