/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a2bd38; name: FUN_02a2bd38
 */


long * FUN_02a2bd38(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  __compar_fn_t __compar;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  undefined2 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long lVar17;
  ushort *puVar18;
  char *pcVar19;
  undefined8 uVar20;
  ulong uVar21;
  int *piVar22;
  uint uVar23;
  ulong uVar24;
  undefined1 *local_118;
  char *local_110;
  ulong local_108;
  long *local_100;
  undefined2 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  long local_b8;
  int *local_b0;
  long *local_a0;
  char local_94 [12];
  char *local_88;
  char *local_80;
  long local_78;
  long *local_70;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_1;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x3f0,8);
  puVar7 = PTR_DAT_047d66f8;
  if (plVar12 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  uVar20 = *param_2;
  plVar12[2] = 0;
  *(undefined4 *)(plVar12 + 3) = 0;
  *plVar12 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar13 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    if (*(long *)(lVar13 + 0x80) != 0) {
      lVar17 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar12 + 5) = 0;
  *plVar12 = (long)&DAT_04568240;
  plVar12[1] = lVar17;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[4] = (long)&PTR_LAB_04568278;
  plVar12[6] = 0;
  *(undefined2 *)(plVar12 + 7) = 0;
  *(undefined2 *)(plVar12 + 8) = 0;
  plVar12[9] = 0;
  *(undefined2 *)(plVar12 + 10) = 0;
  plVar12[0xb] = 0;
  *(undefined2 *)(plVar12 + 0xc) = 0;
  plVar12[0xd] = 0;
  *(undefined2 *)(plVar12 + 0xe) = 0;
  plVar12[0xf] = 0;
  *(undefined2 *)(plVar12 + 0x10) = 0;
  *(undefined2 *)(plVar12 + 0x14) = 0;
  plVar12[0x15] = 0;
  *(undefined2 *)(plVar12 + 0x16) = 0;
  plVar12[0x17] = 0;
  *(undefined2 *)(plVar12 + 0x18) = 0;
  plVar12[0x19] = 0;
  *(undefined2 *)(plVar12 + 0x1a) = 0;
  plVar12[0x1b] = 0;
  *(undefined2 *)(plVar12 + 0x1c) = 0;
  *(undefined2 *)(plVar12 + 0x20) = 0;
  plVar12[0x21] = 0;
  *(undefined2 *)(plVar12 + 0x22) = 0;
  plVar12[0x23] = 0;
  *(undefined2 *)(plVar12 + 0x24) = 0;
  plVar12[0x25] = 0;
  *(undefined2 *)(plVar12 + 0x26) = 0;
  plVar12[0x27] = 0;
  *(undefined2 *)(plVar12 + 0x28) = 0;
  *(undefined2 *)(plVar12 + 0x2c) = 0;
  plVar12[0x2d] = 0;
  *(undefined2 *)(plVar12 + 0x2e) = 0;
  plVar12[0x2f] = 0;
  *(undefined2 *)(plVar12 + 0x30) = 0;
  plVar12[0x31] = 0;
  *(undefined2 *)(plVar12 + 0x32) = 0;
  plVar12[0x33] = 0;
  *(undefined2 *)(plVar12 + 0x34) = 0;
  *(undefined2 *)(plVar12 + 0x38) = 0;
  plVar12[0x39] = 0;
  *(undefined2 *)(plVar12 + 0x3a) = 0;
  plVar12[0x3b] = 0;
  *(undefined2 *)(plVar12 + 0x3c) = 0;
  plVar12[0x3d] = 0;
  *(undefined2 *)(plVar12 + 0x3e) = 0;
  plVar12[0x3f] = 0;
  *(undefined2 *)(plVar12 + 0x40) = 0;
  *(undefined2 *)(plVar12 + 0x44) = 0;
  plVar12[0x45] = 0;
  *(undefined2 *)(plVar12 + 0x46) = 0;
  plVar12[0x47] = 0;
  *(undefined2 *)(plVar12 + 0x48) = 0;
  plVar12[0x49] = 0;
  *(undefined2 *)(plVar12 + 0x4a) = 0;
  plVar12[0x4b] = 0;
  *(undefined2 *)(plVar12 + 0x4c) = 0;
  *(undefined2 *)(plVar12 + 0x50) = 0;
  plVar12[0x51] = 0;
  *(undefined2 *)(plVar12 + 0x52) = 0;
  plVar12[0x53] = 0;
  *(undefined2 *)(plVar12 + 0x54) = 0;
  plVar12[0x55] = 0;
  *(undefined2 *)(plVar12 + 0x56) = 0;
  plVar12[0x57] = 0;
  *(undefined2 *)(plVar12 + 0x58) = 0;
  *(undefined2 *)(plVar12 + 0x5c) = 0;
  plVar12[0x5d] = 0;
  *(undefined2 *)(plVar12 + 0x5e) = 0;
  plVar12[0x5f] = 0;
  *(undefined2 *)(plVar12 + 0x60) = 0;
  plVar12[0x61] = 0;
  *(undefined2 *)(plVar12 + 0x62) = 0;
  plVar12[99] = 0;
  *(undefined2 *)(plVar12 + 100) = 0;
  *(undefined2 *)(plVar12 + 0x68) = 0;
  plVar12[0x69] = 0;
  *(undefined2 *)(plVar12 + 0x6a) = 0;
  plVar12[0x6b] = 0;
  *(undefined2 *)(plVar12 + 0x6c) = 0;
  plVar12[0x6d] = 0;
  *(undefined2 *)(plVar12 + 0x6e) = 0;
  plVar12[0x6f] = 0;
  *(undefined2 *)(plVar12 + 0x70) = 0;
  *(undefined2 *)(plVar12 + 0x74) = 0;
  plVar12[0x75] = 0;
  *(undefined2 *)(plVar12 + 0x76) = 0;
  plVar12[0x77] = 0;
  *(undefined2 *)(plVar12 + 0x78) = 0;
  plVar12[0x79] = 0;
  *(undefined2 *)(plVar12 + 0x7a) = 0;
  plVar12[0x7b] = 0;
  *(undefined2 *)(plVar12 + 0x7c) = 0;
  plVar12[0x7d] = 0;
  *(undefined2 *)(plVar12 + 0x13) = 0;
  *(undefined2 *)(plVar12 + 0x1f) = 0;
  *(undefined2 *)(plVar12 + 0x2b) = 0;
  *(undefined2 *)(plVar12 + 0x37) = 0;
  plVar12[0x41] = 0;
  plVar12[0x42] = 0;
  *(undefined2 *)(plVar12 + 0x43) = 0;
  plVar12[0x4d] = 0;
  plVar12[0x4e] = 0;
  *(undefined2 *)(plVar12 + 0x4f) = 0;
  *(undefined2 *)(plVar12 + 0x5b) = 0;
  plVar12[0x5a] = 0;
  plVar12[0x59] = 0;
  *(undefined2 *)(plVar12 + 0x67) = 0;
  plVar12[0x66] = 0;
  plVar12[0x65] = 0;
  *(undefined2 *)(plVar12 + 0x73) = 0;
  plVar12[0x72] = 0;
  plVar12[0x71] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x29] = 0;
  plVar12[0x2a] = 0;
  plVar12[0x35] = 0;
  plVar12[0x36] = 0;
  local_118 = &DAT_fbec41851566601b;
  local_110 = "values";
  local_108 = 6;
  local_100 = (long *)0x0;
  puVar14 = (uint *)FUN_00efa07c(uVar20,&local_118);
  if (puVar14 == (uint *)0x0) {
    uVar23 = 0;
  }
  else {
    uVar23 = *puVar14;
  }
  plVar5 = (long *)PTR_PTR_047d4508;
  __compar = (__compar_fn_t)PTR_LAB_047d5600;
  plVar6 = (long *)PTR_DAT_047d8b70;
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
    plVar5 = (long *)PTR_PTR_047d4508;
    __compar = (__compar_fn_t)PTR_LAB_047d5600;
    plVar6 = (long *)PTR_DAT_047d8b70;
  }
  PTR_PTR_047d4508 = (undefined *)plVar5;
  PTR_LAB_047d5600 = __compar;
  PTR_DAT_047d8b70 = (undefined *)plVar6;
  if (uVar23 != 0) {
    uVar24 = 0;
    do {
      local_118 = &DAT_fbec41851566601b;
      local_100 = (long *)0x0;
      local_110 = "values";
      local_108 = 6;
      FUN_00e90ee0(&local_b8,uVar20,&local_118,uVar24 & 0xffffffff);
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      local_118 = (undefined1 *)0x0;
      local_110 = (char *)((ulong)local_110 & 0xffffffffffff0000);
      local_108 = local_108 & 0xffffffffffff0000;
      local_100 = (long *)0x0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      if (((local_b0 == (int *)0x0) || (*(ushort *)((long)local_b0 - (long)*local_b0) < 7)) ||
         (uVar21 = (ulong)((ushort *)((long)local_b0 - (long)*local_b0))[3], uVar21 == 0)) {
LAB_02a2c1cc:
        puVar15 = (undefined1 *)0x0;
      }
      else {
        puVar14 = (uint *)((long)local_b0 + uVar21);
        puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
        local_88 = "zoneid";
        puVar14 = bsearch(&local_88,puVar14 + 1,(ulong)*puVar14,4,__compar);
        puVar15 = (undefined1 *)0x0;
        if ((puVar14 != (uint *)0x0) && (puVar15 = (undefined1 *)0x0, local_b8 != 0)) {
          piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          if (*puVar18 < 7) {
            piVar22 = (int *)0x0;
          }
          else {
            piVar22 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar14 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar22 = (int *)((long)puVar14 + (ulong)*puVar14);
            }
          }
          if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
             (uVar21 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar21 == 0)) {
            uVar21 = 0;
          }
          else {
            uVar21 = (long)*(char *)((long)piVar22 + uVar21) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar21 * 8) == 8) {
            puVar15 = (undefined1 *)FUN_015efc20();
          }
          else {
            if ((*puVar18 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02a2c1cc;
            puVar15 = *(undefined1 **)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      local_88 = (char *)0x8a57e713af38dd39;
      local_70 = (long *)0x0;
      local_80 = "lotvalue";
      local_78 = 8;
      local_118 = puVar15;
      uVar9 = FUN_00d928d0(&local_b8,&local_88);
      local_110 = (char *)CONCAT62(local_110._2_6_,uVar9);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      lVar13 = 0;
      do {
        lVar17 = lVar13 + 1;
        snprintf(local_94,10,"poke%d",(int)lVar17);
        FUN_02a27fc8(&local_a0,local_94);
        plVar8 = local_a0;
        plVar2 = plVar5;
        plVar4 = plVar6;
        if (local_a0 != (long *)0x0) {
          plVar2 = local_a0 + 7;
          plVar4 = local_a0 + 6;
        }
        local_88 = (char *)*plVar4;
        local_80 = (char *)*plVar2;
        if (local_a0 == (long *)0x0) {
          local_78 = 0;
        }
        else {
          local_78 = local_a0[8];
          local_70 = (long *)0x0;
          (**(code **)(*local_a0 + 0x18))(local_a0);
        }
        local_70 = plVar8;
        uVar9 = FUN_00d928d0(&local_b8,&local_88);
        *(undefined2 *)(local_94 + lVar13 * 0x10 + -0x74) = uVar9;
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_94[0] != '\0') {
          pcVar19 = (char *)((ulong)local_94 | 1);
          do {
            cVar3 = *pcVar19;
            pcVar19 = pcVar19 + 1;
          } while (cVar3 != '\0');
        }
        if (((local_b0 == (int *)0x0) || (*(ushort *)((long)local_b0 - (long)*local_b0) < 7)) ||
           (uVar21 = (ulong)((ushort *)((long)local_b0 - (long)*local_b0))[3], uVar21 == 0)) {
LAB_02a2c39c:
          uVar16 = 0;
        }
        else {
          puVar14 = (uint *)((long)local_b0 + uVar21);
          puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
          local_88 = local_94;
          puVar14 = bsearch(&local_88,puVar14 + 1,(ulong)*puVar14,4,__compar);
          uVar16 = 0;
          if ((puVar14 != (uint *)0x0) && (uVar16 = 0, local_b8 != 0)) {
            piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
            puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
            if (*puVar18 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar14 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar14 + (ulong)*puVar14);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar21 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar21 == 0)) {
              uVar21 = 0;
            }
            else {
              uVar21 = (long)*(char *)((long)piVar22 + uVar21) & 0xffffffff;
            }
            if (*(long *)(PTR_DAT_047d5608 + uVar21 * 8) == 8) {
              uVar16 = FUN_015efc20();
            }
            else {
              if ((*puVar18 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02a2c39c;
              uVar16 = *(undefined8 *)((long)piVar1 + (ulong)puVar18[6]);
            }
          }
        }
        *(undefined8 *)(local_94 + lVar13 * 0x10 + -0x6c) = uVar16;
        lVar13 = lVar17;
      } while (lVar17 != 5);
      memcpy(plVar12 + uVar24 * 0xc + 6,&local_118,0x60);
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar23);
  }
  plVar12[1] = (long)param_1;
  plVar12[2] = (long)plVar12;
  *(undefined4 *)(plVar12 + 3) = 0x803f0;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  return plVar12;
}


