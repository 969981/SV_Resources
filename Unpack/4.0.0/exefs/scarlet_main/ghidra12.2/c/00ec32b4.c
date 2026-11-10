/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec32b4; name: FUN_00ec32b4
 */


int FUN_00ec32b4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 local_68;
  
  local_68 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(ulong *)(param_1 + 0x90);
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  if (uVar8 < *(ulong *)(param_1 + 0x98)) {
    FUN_00ec374c(puVar1,uVar8,&local_68);
    *(ulong *)(param_1 + 0x90) = uVar8 + 0x108;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0xa8);
    lVar11 = (long)(uVar8 - *(long *)(param_1 + 0x88)) >> 3;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    uVar8 = lVar11 * 0xf83e0f83e0f83e1 + 1;
    if (uVar12 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)(*(ulong *)(param_1 + 0x98) - *(long *)(param_1 + 0x88)) >> 3;
    uVar10 = lVar9 * 0x1f07c1f07c1f07c2;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar12 >> 1 <= (ulong)(lVar9 * 0xf83e0f83e0f83e1)) {
      uVar8 = uVar12;
    }
    if (uVar8 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 * 0x108,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    lVar16 = lVar9 + lVar11 * 8;
    FUN_00ec374c(puVar1,lVar16,&local_68);
    lVar11 = *(long *)(param_1 + 0x88);
    lVar18 = *(long *)(param_1 + 0x90);
    if (lVar18 == lVar11) {
      lVar17 = lVar16;
      lVar18 = lVar11;
    }
    else {
      lVar17 = 0;
      do {
        uVar14 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar14;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        lVar2 = lVar18 + lVar17;
        lVar3 = lVar16 + lVar17;
        *(undefined8 *)(lVar3 + -0x108) = *(undefined8 *)(lVar2 + -0x108);
        *(undefined8 *)(lVar3 + -0x100) = *(undefined8 *)(lVar2 + -0x100);
        *(undefined8 *)(lVar3 + -0xf8) = *(undefined8 *)(lVar2 + -0xf8);
        uVar14 = *(undefined8 *)(lVar2 + -0xf0);
        *(undefined8 *)(lVar2 + -0xf0) = 0;
        *(undefined8 *)(lVar3 + -0xf0) = uVar14;
        *(undefined8 *)(lVar3 + -0xe8) = *(undefined8 *)(lVar2 + -0xe8);
        *(undefined8 *)(lVar3 + -0xe0) = *(undefined8 *)(lVar2 + -0xe0);
        *(undefined8 *)(lVar3 + -0xd8) = *(undefined8 *)(lVar2 + -0xd8);
        uVar14 = *(undefined8 *)(lVar2 + -0xd0);
        *(undefined8 *)(lVar2 + -0xd0) = 0;
        *(undefined8 *)(lVar3 + -0xd0) = uVar14;
        uVar14 = *(undefined8 *)(lVar2 + -200);
        *(undefined8 *)(lVar3 + -0xb8) = 0;
        *(undefined8 *)(lVar3 + -0xb0) = 0;
        *(undefined8 *)(lVar3 + -200) = uVar14;
        *(undefined8 *)(lVar3 + -0xc0) = 0;
        uVar14 = *(undefined8 *)(lVar2 + -0xa8);
        uVar4 = *(undefined8 *)(lVar2 + -0xa0);
        uVar5 = *(undefined8 *)(lVar2 + -0x90);
        *(undefined8 *)(lVar3 + -0x98) = *(undefined8 *)(lVar2 + -0x98);
        *(undefined8 *)(lVar3 + -0x90) = uVar5;
        *(undefined8 *)(lVar3 + -0xa8) = uVar14;
        *(undefined8 *)(lVar3 + -0xa0) = uVar4;
        *(undefined8 *)(lVar3 + -0xc0) = *(undefined8 *)(lVar2 + -0xc0);
        *(undefined8 *)(lVar3 + -0xb8) = *(undefined8 *)(lVar2 + -0xb8);
        *(undefined8 *)(lVar3 + -0xb0) = *(undefined8 *)(lVar2 + -0xb0);
        *(undefined8 *)(lVar2 + -0xc0) = 0;
        *(undefined8 *)(lVar2 + -0xb8) = 0;
        *(undefined8 *)(lVar2 + -0xb0) = 0;
        *(undefined8 *)(lVar3 + -0x88) = 0;
        *(undefined8 *)(lVar3 + -0x80) = 0;
        *(undefined8 *)(lVar3 + -0x78) = 0;
        uVar14 = *(undefined8 *)(lVar2 + -0x70);
        uVar4 = *(undefined8 *)(lVar2 + -0x68);
        uVar5 = *(undefined8 *)(lVar2 + -0x58);
        *(undefined8 *)(lVar3 + -0x60) = *(undefined8 *)(lVar2 + -0x60);
        *(undefined8 *)(lVar3 + -0x58) = uVar5;
        *(undefined8 *)(lVar3 + -0x70) = uVar14;
        *(undefined8 *)(lVar3 + -0x68) = uVar4;
        *(undefined8 *)(lVar3 + -0x88) = *(undefined8 *)(lVar2 + -0x88);
        *(undefined8 *)(lVar3 + -0x80) = *(undefined8 *)(lVar2 + -0x80);
        *(undefined8 *)(lVar3 + -0x78) = *(undefined8 *)(lVar2 + -0x78);
        *(undefined8 *)(lVar2 + -0x88) = 0;
        *(undefined8 *)(lVar2 + -0x80) = 0;
        *(undefined8 *)(lVar2 + -0x78) = 0;
        memcpy((void *)(lVar3 + -0x50),(void *)(lVar2 + -0x50),0x50);
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        lVar17 = lVar17 + -0x108;
      } while (lVar11 - lVar18 != lVar17);
      lVar17 = lVar16 + lVar17;
      lVar11 = *(long *)(param_1 + 0x88);
      lVar18 = *(long *)(param_1 + 0x90);
    }
    lVar13 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 0x88) = lVar17;
    *(long *)(param_1 + 0x90) = lVar16 + 0x108;
    *(ulong *)(param_1 + 0x98) = lVar9 + uVar8 * 0x108;
    if (((lVar18 != lVar11) && (FUN_00ec38e0(lVar18 + -0x108), lVar18 + -0x108 != lVar11)) &&
       (FUN_00ec38e0(lVar18 + -0x210), lVar18 + -0x210 != lVar11)) {
      do {
        FUN_00ec38e0(lVar18 + -0x318);
        lVar18 = lVar18 + -0x108;
      } while (lVar11 + 0x210 != lVar18);
    }
    if (lVar11 != 0) {
      plVar15 = (long *)*puVar1;
      lVar13 = lVar13 - lVar11;
      uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar11,lVar13,8);
      }
      else {
        FUN_00c48fe8(plVar15,lVar11,lVar13,8);
      }
    }
  }
  lVar11 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(lVar11 + -0x108) = *param_2;
  *(undefined8 *)(lVar11 + -0x100) = param_2[1];
  *(undefined8 *)(lVar11 + -0xf8) = param_2[2];
  plVar15 = (long *)param_2[3];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  plVar7 = *(long **)(lVar11 + -0xf0);
  *(long **)(lVar11 + -0xf0) = plVar15;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(lVar11 + -0xe8) = *param_3;
  *(undefined8 *)(lVar11 + -0xe0) = param_3[1];
  *(undefined8 *)(lVar11 + -0xd8) = param_3[2];
  plVar15 = (long *)param_3[3];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  plVar7 = *(long **)(lVar11 + -0xd0);
  *(long **)(lVar11 + -0xd0) = plVar15;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  return (int)((ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88)) >> 3) * 0x3e0f83e1 +
         -1;
}


