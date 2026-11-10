/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014539d4; name: FUN_014539d4
 */


long FUN_014539d4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined2 local_64;
  undefined1 local_62;
  
  plVar16 = (long *)*param_1;
  uVar11 = param_2[2];
  plVar2 = (long *)param_2[3];
  puVar14 = (undefined8 *)plVar16[1];
  uVar10 = (long)puVar14 - *plVar16;
  uVar1 = *param_2;
  uVar3 = param_2[1];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar16 = (long *)*param_1;
    puVar14 = (undefined8 *)plVar16[1];
  }
  iVar4 = (int)(uVar10 >> 4) * -0x55555555;
  if (puVar14 == (undefined8 *)plVar16[2]) {
    lVar17 = (long)puVar14 - *plVar16 >> 4;
    uVar13 = plVar16[4];
    uVar10 = lVar17 * -0x5555555555555555 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar10 <= (ulong)(lVar17 * 0x5555555555555556)) {
      uVar10 = lVar17 * 0x5555555555555556;
    }
    if (uVar13 >> 1 <= (ulong)(lVar17 * -0x5555555555555555)) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)plVar16[3] + 0x10))((long *)plVar16[3],uVar10 * 0x30,8);
      if (lVar6 == 0) {
        (**(code **)(*(long *)plVar16[3] + 0xe8))();
      }
    }
    lVar15 = plVar16[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01453f6c;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar15;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    puVar14 = (undefined8 *)(lVar6 + lVar17 * 0x10);
    lVar15 = lVar6 + lVar17 * 0x10;
    *puVar14 = uVar1;
    *(long **)(lVar15 + 0x18) = plVar2;
    *(undefined8 *)(lVar15 + 8) = uVar3;
    *(undefined8 *)(lVar15 + 0x10) = uVar11;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    lVar17 = lVar6 + lVar17 * 0x10;
    *(undefined1 *)(lVar17 + 0x20) = 1;
    *(undefined2 *)(lVar17 + 0x21) = local_64;
    *(undefined1 *)(lVar17 + 0x23) = local_62;
    *(undefined4 *)(lVar17 + 0x24) = 0xffffffff;
    *(int *)(lVar17 + 0x28) = iVar4;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    lVar17 = *plVar16;
    lVar15 = plVar16[1];
    if (lVar15 == lVar17) {
      puVar12 = puVar14;
      lVar15 = lVar17;
    }
    else {
      lVar7 = 0;
      do {
        lVar18 = plVar16[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01453f6c;
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar18;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        lVar18 = lVar15 + lVar7;
        *(undefined8 *)((long)puVar14 + lVar7 + -0x30) = *(undefined8 *)(lVar18 + -0x30);
        *(undefined8 *)((long)puVar14 + lVar7 + -0x28) = *(undefined8 *)(lVar18 + -0x28);
        *(undefined8 *)((long)puVar14 + lVar7 + -0x20) = *(undefined8 *)(lVar18 + -0x20);
        plVar9 = *(long **)(lVar18 + -0x18);
        *(long **)((long)puVar14 + lVar7 + -0x18) = plVar9;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))();
        }
        uVar11 = *(undefined8 *)(lVar18 + -0x10);
        *(undefined4 *)((long)puVar14 + lVar7 + -8) = *(undefined4 *)(lVar18 + -8);
        *(undefined8 *)((long)puVar14 + lVar7 + -0x10) = uVar11;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar7 = lVar7 + -0x30;
      } while (lVar17 - lVar15 != lVar7);
      lVar17 = *plVar16;
      puVar12 = (undefined8 *)((long)puVar14 + lVar7);
      lVar15 = plVar16[1];
    }
    lVar7 = plVar16[2];
    *plVar16 = (long)puVar12;
    plVar16[1] = (long)(puVar14 + 6);
    plVar16[2] = lVar6 + uVar10 * 0x30;
    if (lVar15 != lVar17) {
      if (*(long **)(lVar15 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar15 + -0x18) + 0x20))();
      }
      if (lVar15 + -0x30 != lVar17) {
        if (*(long **)(lVar15 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar15 + -0x48) + 0x20))();
        }
        if (lVar15 + -0x60 != lVar17) {
          if (*(long **)(lVar15 + -0x78) != (long *)0x0) {
            (**(code **)(**(long **)(lVar15 + -0x78) + 0x20))();
          }
          if (lVar15 + -0x90 != lVar17) {
            if (*(long **)(lVar15 + -0xa8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar15 + -0xa8) + 0x20))();
            }
            if (lVar15 + -0xc0 != lVar17) {
              do {
                if (*(long **)(lVar15 + -0xd8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar15 + -0xd8) + 0x20))();
                }
                lVar15 = lVar15 + -0x30;
              } while (lVar17 + 0xc0 != lVar15);
            }
          }
        }
      }
    }
    if (lVar17 != 0) {
      plVar16 = (long *)plVar16[3];
      uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar10 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar17,lVar7 - lVar17,8);
      }
      else {
        FUN_00c48fe8(plVar16,lVar17,lVar7 - lVar17,8);
      }
    }
  }
  else {
    lVar17 = plVar16[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_01453f6c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar17;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    *puVar14 = uVar1;
    puVar14[1] = uVar3;
    puVar14[2] = uVar11;
    puVar14[3] = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    *(undefined1 *)(puVar14 + 4) = 1;
    *(undefined2 *)((long)puVar14 + 0x21) = local_64;
    *(undefined1 *)((long)puVar14 + 0x23) = local_62;
    *(undefined4 *)((long)puVar14 + 0x24) = 0xffffffff;
    *(int *)(puVar14 + 5) = iVar4;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    plVar16[1] = (long)(puVar14 + 6);
  }
  lVar17 = *(long *)(*param_1 + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  return lVar17 + -0x30;
}


