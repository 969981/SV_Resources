/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb50b4; name: FUN_00fb50b4
 */


void FUN_00fb50b4(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong unaff_x28;
  float fVar18;
  long *local_188;
  int *local_180;
  undefined *local_178;
  undefined *local_170;
  long *local_168;
  ulong local_160;
  long local_158;
  long local_150;
  long *local_148;
  byte local_98 [16];
  long local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  uVar16 = *(undefined8 *)(param_1 + 8);
  lVar6 = tpidr_el0;
  if (*(long *)(lVar6 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  local_78 = *(undefined8 *)(lVar6 + 0x30);
  local_70 = *(undefined8 *)(lVar6 + 0x38);
  *(undefined8 *)(lVar6 + 0x30) = uVar16;
  *(undefined2 *)(lVar6 + 0x38) = 1;
  plVar2 = (long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_01689388(plVar2,*(undefined8 *)(param_1 + 0x70));
    uVar11 = *(ulong *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (uVar11 != 0) {
      uVar17 = uVar11 & 3;
      if (uVar11 - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          *(undefined8 *)(*plVar2 + uVar13 * 8) = 0;
          *(undefined8 *)(*plVar2 + uVar13 * 8 + 8) = 0;
          *(undefined8 *)(*plVar2 + uVar13 * 8 + 0x10) = 0;
          lVar10 = uVar13 * 8;
          uVar13 = uVar13 + 4;
          *(undefined8 *)(*plVar2 + lVar10 + 0x18) = 0;
        } while ((uVar11 & 0xfffffffffffffffc) != uVar13);
      }
      if (uVar17 != 0) {
        lVar10 = uVar13 << 3;
        do {
          *(undefined8 *)(*plVar2 + lVar10) = 0;
          uVar17 = uVar17 - 1;
          lVar10 = lVar10 + 8;
        } while (uVar17 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  puVar7 = PTR_DAT_047d8b70;
  plVar3 = (long *)(param_1 + 0x70);
  local_7c = 0;
  do {
    FUN_00fb59d0(&local_160,"Path%d");
    local_180 = &local_7c;
    local_178 = PTR_LAB_047d9c70;
    local_170 = PTR_LAB_047d9c78;
    FUN_00fb57e0(&local_160,&local_180);
    FUN_00fb5c44(local_98);
    FUN_00fb5f3c(&local_160);
    FUN_00d44104(&local_188,local_98);
    plVar15 = local_188;
    plVar14 = (long *)puVar7;
    if (local_188 != (long *)0x0) {
      plVar14 = local_188 + 6;
    }
    local_180 = (int *)*plVar14;
    plVar14 = (long *)PTR_PTR_047d4508;
    if (local_188 != (long *)0x0) {
      plVar14 = local_188 + 7;
    }
    local_178 = (undefined *)*plVar14;
    if (local_188 == (long *)0x0) {
      local_170 = (undefined *)0x0;
    }
    else {
      local_170 = (undefined *)local_188[8];
      local_168 = (long *)0x0;
      (**(code **)(*local_188 + 0x18))(local_188);
    }
    local_168 = plVar15;
    FUN_00cee868(&local_160,param_2,&local_180);
    if (local_168 != (long *)0x0) {
      (**(code **)(*local_168 + 0x20))();
    }
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x20))();
    }
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar9 != 0)) {
      local_180 = (int *)FUN_00d44228();
      puVar8 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_180);
      FUN_00100190(PTR_LAB_047d9240,puVar8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    uVar11 = local_160;
    puVar4 = (ulong *)puVar7;
    if (*(long *)PTR_DAT_047d8c30 != 0) {
      puVar4 = (ulong *)(*(long *)PTR_DAT_047d8c30 + 0x30);
    }
    if (local_160 == *puVar4) goto LAB_00fb5454;
    uVar17 = *(ulong *)(param_1 + 0x48);
    if (uVar17 == 0) {
LAB_00fb531c:
      plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                                  (*(long **)(param_1 + 0x78),0x38,8);
      if (plVar14 == (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x78) + 0xe8))();
      }
      uVar16 = *(undefined8 *)(param_1 + 0x78);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 != 0) {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      }
      plVar14[2] = local_160;
      plVar14[3] = local_160;
      plVar14[4] = local_158;
      plVar14[5] = local_150;
      plVar14[6] = (long)local_148;
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x18))();
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      *plVar14 = 0;
      plVar14[1] = uVar11;
      fVar18 = (float)(*(long *)(param_1 + 0x98) + 1);
      if ((uVar17 == 0) || (*(float *)(param_1 + 0xa0) * (float)uVar17 < fVar18)) {
        uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
        uVar13 = (ulong)(fVar18 / *(float *)(param_1 + 0xa0));
        if (uVar13 <= uVar17) {
          uVar13 = uVar17;
        }
        FUN_00fb9604(plVar2,uVar13);
        uVar17 = *(ulong *)(param_1 + 0x48);
        if ((uVar17 & uVar17 - 1) == 0) {
          unaff_x28 = uVar17 - 1 & uVar11;
        }
        else if (uVar11 < uVar17) {
          unaff_x28 = uVar11;
        }
        else {
          uVar13 = 0;
          if (uVar17 != 0) {
            uVar13 = uVar11 / uVar17;
          }
          unaff_x28 = uVar11 - uVar13 * uVar17;
        }
      }
      plVar15 = *(long **)(*plVar2 + unaff_x28 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar14 = *plVar3;
        *plVar3 = (long)plVar14;
        *(long **)(*plVar2 + unaff_x28 * 8) = plVar3;
        if (*plVar14 != 0) {
          uVar11 = *(ulong *)(*plVar14 + 8);
          if ((uVar17 & uVar17 - 1) == 0) {
            uVar11 = uVar11 & uVar17 - 1;
          }
          else if (uVar17 <= uVar11) {
            uVar13 = 0;
            if (uVar17 != 0) {
              uVar13 = uVar11 / uVar17;
            }
            uVar11 = uVar11 - uVar13 * uVar17;
          }
          plVar15 = (long *)(*plVar2 + uVar11 * 8);
          goto LAB_00fb5444;
        }
      }
      else {
        *plVar14 = *plVar15;
LAB_00fb5444:
        *plVar15 = (long)plVar14;
      }
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
    }
    else {
      uVar13 = uVar17 - 1;
      if ((uVar17 & uVar13) == 0) {
        unaff_x28 = uVar13 & local_160;
        plVar14 = *(long **)(*plVar2 + unaff_x28 * 8);
        if (plVar14 == (long *)0x0) goto LAB_00fb531c;
        do {
          plVar14 = (long *)*plVar14;
          if ((plVar14 == (long *)0x0) ||
             (plVar14[1] != local_160 && (plVar14[1] & uVar13) != unaff_x28)) goto LAB_00fb531c;
        } while (plVar14[2] != local_160);
      }
      else {
        unaff_x28 = local_160;
        if (uVar17 <= local_160) {
          uVar13 = 0;
          if (uVar17 != 0) {
            uVar13 = local_160 / uVar17;
          }
          unaff_x28 = local_160 - uVar13 * uVar17;
        }
        plVar14 = *(long **)(*plVar2 + unaff_x28 * 8);
        if (plVar14 == (long *)0x0) goto LAB_00fb531c;
        do {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_00fb531c;
          uVar13 = plVar14[1];
          if (uVar13 != local_160) {
            if (uVar17 <= uVar13) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar13 / uVar17;
              }
              uVar13 = uVar13 - uVar5 * uVar17;
            }
            if (uVar13 != unaff_x28) goto LAB_00fb531c;
          }
        } while (plVar14[2] != local_160);
      }
    }
LAB_00fb5454:
    if (local_148 != (long *)0x0) {
      (**(code **)(*local_148 + 0x20))();
    }
    lVar10 = local_88;
    if (((local_98[0] & 1) != 0) && (local_88 != 0)) {
      plVar14 = *(long **)(lVar6 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar10,0,8);
      }
    }
    bVar1 = 0x44a < local_7c;
    local_7c = local_7c + 1;
    if (bVar1) {
      *(undefined8 *)(lVar6 + 0x30) = local_78;
      *(undefined2 *)(lVar6 + 0x38) = (undefined2)local_70;
      return;
    }
  } while( true );
}


