/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c77408; name: FUN_00c77408
 */


undefined1  [16] FUN_00c77408(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    lVar14 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00c778d4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar14;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    uVar6 = *param_2;
    *param_2 = 0;
    *puVar1 = uVar6;
    uVar6 = param_2[1];
    uVar9 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar9;
    puVar1[1] = uVar6;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar1 + 4);
  }
  else {
    uVar10 = param_1[4];
    lVar14 = (long)puVar1 - *param_1 >> 5;
    uVar5 = lVar14 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar7 = lVar3 >> 4;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar10 >> 1 <= (ulong)(lVar3 >> 5)) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 5,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar16 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00c778d4;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar16;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    uVar6 = *param_2;
    puVar1 = (undefined8 *)(lVar3 + lVar14 * 0x20);
    *param_2 = 0;
    *puVar1 = uVar6;
    uVar6 = param_2[1];
    uVar9 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar9;
    puVar1[1] = uVar6;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    plVar11 = (long *)*param_1;
    plVar13 = (long *)param_1[1];
    if (plVar13 == plVar11) {
      puVar8 = puVar1;
      plVar13 = plVar11;
    }
    else {
      puVar15 = puVar1;
      do {
        lVar14 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar16 != 0) {
          if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_00c778d4;
          *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar14;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        }
        lVar14 = plVar13[-4];
        plVar13[-4] = 0;
        puVar15[-4] = lVar14;
        lVar14 = plVar13[-3];
        lVar4 = plVar13[-1];
        puVar15[-2] = plVar13[-2];
        puVar15[-1] = lVar4;
        puVar8 = puVar15 + -4;
        plVar13 = plVar13 + -4;
        puVar15[-3] = lVar14;
        if (lVar16 != 0) {
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        }
        puVar15 = puVar8;
      } while (plVar11 != plVar13);
      plVar11 = (long *)*param_1;
      plVar13 = (long *)param_1[1];
    }
    lVar14 = param_1[2];
    *param_1 = (long)puVar8;
    param_1[1] = (long)(puVar1 + 4);
    param_1[2] = lVar3 + uVar5 * 0x20;
    if (plVar13 != plVar11) {
      plVar12 = plVar13 + -4;
      lVar3 = *plVar12;
      *plVar12 = 0;
      if (lVar3 != 0) {
        FUN_00c78cb0(plVar13 + -3);
      }
      if (plVar12 != plVar11) {
        plVar12 = plVar13 + -8;
        lVar3 = *plVar12;
        *plVar12 = 0;
        if (lVar3 != 0) {
          FUN_00c78cb0(plVar13 + -7);
        }
        if (plVar12 != plVar11) {
          plVar12 = plVar13 + -0xc;
          lVar3 = *plVar12;
          *plVar12 = 0;
          if (lVar3 != 0) {
            FUN_00c78cb0(plVar13 + -0xb);
          }
          if (plVar12 != plVar11) {
            plVar12 = plVar13 + -0x10;
            lVar3 = *plVar12;
            *plVar12 = 0;
            if (lVar3 != 0) {
              FUN_00c78cb0(plVar13 + -0xf);
            }
            if (plVar12 != plVar11) {
              plVar12 = plVar13 + -0x14;
              lVar3 = *plVar12;
              *plVar12 = 0;
              if (lVar3 != 0) {
                FUN_00c78cb0(plVar13 + -0x13);
              }
              if (plVar12 != plVar11) {
                plVar12 = plVar13 + -0x18;
                lVar3 = *plVar12;
                *plVar12 = 0;
                if (lVar3 != 0) {
                  FUN_00c78cb0(plVar13 + -0x17);
                }
                if (plVar12 != plVar11) {
                  do {
                    lVar3 = plVar13[-0x1c];
                    plVar13[-0x1c] = 0;
                    if (lVar3 != 0) {
                      FUN_00c78cb0(plVar13 + -0x1b);
                    }
                    plVar13 = plVar13 + -4;
                  } while (plVar11 + 0x18 != plVar13);
                }
              }
            }
          }
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar13 = (long *)param_1[3];
      uVar5 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,lVar14 - (long)plVar11,8);
      }
      else {
        FUN_00c48fe8(plVar13,plVar11,lVar14 - (long)plVar11,8);
      }
    }
  }
  auVar17._8_8_ = (param_1[1] - *param_1 >> 5) + -1;
  auVar17._0_8_ = 1;
  return auVar17;
}


