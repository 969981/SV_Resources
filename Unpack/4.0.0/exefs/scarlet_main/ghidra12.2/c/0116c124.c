/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116c124; name: FUN_0116c124
 */


void FUN_0116c124(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    lVar12 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0116c67c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    *puVar13 = *param_2;
    puVar13[1] = param_2[1];
    puVar13[2] = param_2[2];
    uVar6 = param_2[3];
    param_2[3] = 0;
    puVar13[3] = uVar6;
    memcpy(puVar13 + 4,param_2 + 4,0x48);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar13 + 0xd);
  }
  else {
    uVar9 = param_1[4];
    lVar12 = (long)puVar13 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar1 = lVar12 * 0x4ec4ec4ec4ec4ec5 + 1;
    if (uVar9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar3 * -0x6276276276276276;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (uVar9 >> 1 <= (ulong)(lVar3 * 0x4ec4ec4ec4ec4ec5)) {
      uVar1 = uVar9;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x68,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0116c67c;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    puVar13 = (undefined8 *)(lVar3 + lVar12 * 8);
    *puVar13 = *param_2;
    lVar12 = lVar3 + lVar12 * 8;
    *(undefined8 *)(lVar12 + 8) = param_2[1];
    *(undefined8 *)(lVar12 + 0x10) = param_2[2];
    uVar6 = param_2[3];
    param_2[3] = 0;
    *(undefined8 *)(lVar12 + 0x18) = uVar6;
    memcpy((void *)(lVar12 + 0x20),param_2 + 4,0x48);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar12 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 == lVar12) {
      puVar7 = puVar13;
      lVar11 = lVar12;
    }
    else {
      lVar4 = 0;
      do {
        lVar14 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0116c67c;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar14;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        lVar14 = lVar11 + lVar4;
        *(undefined8 *)((long)puVar13 + lVar4 + -0x68) = *(undefined8 *)(lVar14 + -0x68);
        *(undefined8 *)((long)puVar13 + lVar4 + -0x60) = *(undefined8 *)(lVar14 + -0x60);
        *(undefined8 *)((long)puVar13 + lVar4 + -0x58) = *(undefined8 *)(lVar14 + -0x58);
        uVar6 = *(undefined8 *)(lVar14 + -0x50);
        *(undefined8 *)(lVar14 + -0x50) = 0;
        *(undefined8 *)((long)puVar13 + lVar4 + -0x50) = uVar6;
        memcpy((void *)((long)puVar13 + lVar4 + -0x48),(void *)(lVar14 + -0x48),0x48);
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar4 = lVar4 + -0x68;
      } while (lVar12 - lVar11 != lVar4);
      lVar12 = *param_1;
      puVar7 = (undefined8 *)((long)puVar13 + lVar4);
      lVar11 = param_1[1];
    }
    lVar4 = param_1[2];
    *param_1 = (long)puVar7;
    param_1[1] = (long)(puVar13 + 0xd);
    param_1[2] = lVar3 + uVar1 * 0x68;
    if (lVar11 != lVar12) {
      if (*(long **)(lVar11 + -0x50) != (long *)0x0) {
        (**(code **)(**(long **)(lVar11 + -0x50) + 0x20))();
      }
      if (lVar11 + -0x68 != lVar12) {
        if (*(long **)(lVar11 + -0xb8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + -0xb8) + 0x20))();
        }
        if (lVar11 + -0xd0 != lVar12) {
          if (*(long **)(lVar11 + -0x120) != (long *)0x0) {
            (**(code **)(**(long **)(lVar11 + -0x120) + 0x20))();
          }
          if (lVar11 + -0x138 != lVar12) {
            if (*(long **)(lVar11 + -0x188) != (long *)0x0) {
              (**(code **)(**(long **)(lVar11 + -0x188) + 0x20))();
            }
            if (lVar11 + -0x1a0 != lVar12) {
              do {
                if (*(long **)(lVar11 + -0x1f0) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar11 + -0x1f0) + 0x20))();
                }
                lVar11 = lVar11 + -0x68;
              } while (lVar12 + 0x1a0 != lVar11);
            }
          }
        }
      }
    }
    if (lVar12 != 0) {
      plVar10 = (long *)param_1[3];
      uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar9 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0116c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar4 - lVar12,8);
        return;
      }
      FUN_00c48fe8(plVar10,lVar12,lVar4 - lVar12,8);
      return;
    }
  }
  return;
}


