/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0108e5b4; name: FUN_0108e5b4
 */


void FUN_0108e5b4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int *piVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char *local_68;
  
  puVar4 = PTR_DAT_047d5608;
  piVar9 = (int *)param_2[1];
  if (piVar9 == (int *)0x0) {
    uVar23 = 0;
    uVar21 = 0;
LAB_0108ed44:
    uVar22 = 0;
  }
  else {
    if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
LAB_0108eca4:
      uVar21 = 0;
    }
    else {
      puVar6 = (uint *)((long)piVar9 + uVar11);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      local_68 = "EatingProbability";
      puVar6 = bsearch(&local_68,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 == (uint *)0x0) || (piVar9 = (int *)*param_2, piVar9 == (int *)0x0))
      goto LAB_0108eca4;
      piVar2 = (int *)((long)puVar6 + (ulong)*puVar6);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar3 = *puVar13;
      if (uVar3 < 7) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar13[3] != 0) {
          puVar6 = (uint *)((long)piVar2 + (ulong)puVar13[3]);
          piVar16 = (int *)((long)puVar6 + (ulong)*puVar6);
        }
      }
      if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar11 == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = (long)*(char *)((long)piVar16 + uVar11) & 0xffffffff;
      }
      if (*(long *)(puVar4 + uVar11 * 8) == 4) {
        if (uVar3 < 0xb) {
          uVar15 = 0;
LAB_0108e6e4:
          uVar21 = 0;
        }
        else {
          uVar15 = 0;
          if ((ulong)puVar13[5] != 0) {
            uVar15 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar13[5]);
          }
          if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_0108e6e4;
          uVar21 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
        }
        if ((uVar15 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
           (uVar11 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar15), uVar11 != 0
           )) {
          uVar21 = *(undefined4 *)((long)piVar9 + uVar11);
        }
      }
      else {
        if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_0108eca4;
        uVar21 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
      }
    }
    piVar9 = (int *)param_2[1];
    if (piVar9 == (int *)0x0) {
      uVar23 = 0;
      goto LAB_0108ed44;
    }
    if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0)) {
LAB_0108ecc4:
      uVar23 = 0;
    }
    else {
      puVar6 = (uint *)((long)piVar9 + uVar11);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      local_68 = "RestingProbability";
      puVar6 = bsearch(&local_68,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar6 == (uint *)0x0) || (piVar9 = (int *)*param_2, piVar9 == (int *)0x0))
      goto LAB_0108ecc4;
      piVar2 = (int *)((long)puVar6 + (ulong)*puVar6);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar3 = *puVar13;
      if (uVar3 < 7) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar13[3] != 0) {
          puVar6 = (uint *)((long)piVar2 + (ulong)puVar13[3]);
          piVar16 = (int *)((long)puVar6 + (ulong)*puVar6);
        }
      }
      if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar11 == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = (long)*(char *)((long)piVar16 + uVar11) & 0xffffffff;
      }
      if (*(long *)(puVar4 + uVar11 * 8) == 4) {
        if (uVar3 < 0xb) {
          uVar15 = 0;
LAB_0108e808:
          uVar23 = 0;
        }
        else {
          uVar15 = 0;
          if ((ulong)puVar13[5] != 0) {
            uVar15 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar13[5]);
          }
          if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_0108e808;
          uVar23 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
        }
        if ((uVar15 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
           (uVar11 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar15), uVar11 != 0
           )) {
          uVar23 = *(undefined4 *)((long)piVar9 + uVar11);
        }
      }
      else {
        if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_0108ecc4;
        uVar23 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
      }
    }
    piVar9 = (int *)param_2[1];
    if (((piVar9 == (int *)0x0) || (*(ushort *)((long)piVar9 - (long)*piVar9) < 7)) ||
       (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar11 == 0))
    goto LAB_0108ed44;
    puVar6 = (uint *)((long)piVar9 + uVar11);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    local_68 = "SleepingProbability";
    puVar6 = bsearch(&local_68,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar6 == (uint *)0x0) || (piVar9 = (int *)*param_2, piVar9 == (int *)0x0))
    goto LAB_0108ed44;
    piVar2 = (int *)((long)puVar6 + (ulong)*puVar6);
    puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
    uVar3 = *puVar13;
    if (uVar3 < 7) {
      piVar16 = (int *)0x0;
    }
    else {
      piVar16 = (int *)0x0;
      if ((ulong)puVar13[3] != 0) {
        puVar6 = (uint *)((long)piVar2 + (ulong)puVar13[3]);
        piVar16 = (int *)((long)puVar6 + (ulong)*puVar6);
      }
    }
    if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
       (uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar11 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = (long)*(char *)((long)piVar16 + uVar11) & 0xffffffff;
    }
    if (*(long *)(puVar4 + uVar11 * 8) == 4) {
      if (uVar3 < 0xb) {
        uVar15 = 0;
LAB_0108e92c:
        uVar22 = 0;
      }
      else {
        uVar15 = 0;
        if ((ulong)puVar13[5] != 0) {
          uVar15 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar13[5]);
        }
        if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_0108e92c;
        uVar22 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
      }
      if ((uVar15 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
         (uVar11 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar15), uVar11 != 0))
      {
        uVar22 = *(undefined4 *)((long)piVar9 + uVar11);
      }
    }
    else {
      if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_0108ed44;
      uVar22 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
    }
  }
  puVar18 = *(undefined4 **)(param_1 + 0x130);
  if (puVar18 == *(undefined4 **)(param_1 + 0x138)) {
    uVar11 = *(ulong *)(param_1 + 0x148);
    lVar14 = (long)puVar18 - *(long *)(param_1 + 0x128) >> 2;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar1 = lVar14 * -0x5555555555555555 + 1;
    if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)*(undefined4 **)(param_1 + 0x138) - *(long *)(param_1 + 0x128) >> 2;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar1 <= uVar12) {
      uVar1 = uVar12;
    }
    if (uVar11 >> 1 <= (ulong)(lVar10 * -0x5555555555555555)) {
      uVar1 = uVar11;
    }
    if (uVar1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(**(long **)(param_1 + 0x140) + 0x10))
                         (*(long **)(param_1 + 0x140),uVar1 * 0xc,4);
      if (lVar10 == 0) {
        (**(code **)(**(long **)(param_1 + 0x140) + 0xe8))();
      }
    }
    puVar18 = (undefined4 *)(lVar10 + lVar14 * 4);
    uVar19 = *(undefined8 *)(param_1 + 0x140);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      lVar14 = lVar10 + lVar14 * 4;
      *puVar18 = uVar21;
      *(undefined4 *)(lVar14 + 4) = uVar23;
      *(undefined4 *)(lVar14 + 8) = uVar22;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_0108ed4c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar19;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar14 = lVar10 + lVar14 * 4;
      *puVar18 = uVar21;
      *(undefined4 *)(lVar14 + 4) = uVar23;
      *(undefined4 *)(lVar14 + 8) = uVar22;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    lVar14 = *(long *)(param_1 + 0x128);
    lVar7 = *(long *)(param_1 + 0x130);
    puVar20 = puVar18;
    if (lVar7 != lVar14) {
      do {
        uVar19 = *(undefined8 *)(param_1 + 0x140);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          uVar19 = *(undefined8 *)(lVar7 + -0xc);
          puVar20[-1] = *(undefined4 *)(lVar7 + -4);
          *(undefined8 *)(puVar20 + -3) = uVar19;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0108ed4c;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar19;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          uVar19 = *(undefined8 *)(lVar7 + -0xc);
          puVar20[-1] = *(undefined4 *)(lVar7 + -4);
          *(undefined8 *)(puVar20 + -3) = uVar19;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar7 = lVar7 + -0xc;
        puVar20 = puVar20 + -3;
      } while (lVar14 != lVar7);
      lVar14 = *(long *)(param_1 + 0x128);
    }
    *(undefined4 **)(param_1 + 0x128) = puVar20;
    *(undefined4 **)(param_1 + 0x130) = puVar18 + 3;
    lVar7 = *(long *)(param_1 + 0x138);
    *(ulong *)(param_1 + 0x138) = lVar10 + uVar1 * 0xc;
    if (lVar14 != 0) {
      plVar17 = *(long **)(param_1 + 0x140);
      lVar7 = lVar7 - lVar14;
      uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar11 & 1) != 0) && (lVar10 = FUN_00c4e600(), 0 < *(int *)(lVar10 + 0x12c8))) {
        FUN_00c48fe8(plVar17,lVar14,lVar7,4);
        return;
      }
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,lVar7,4);
    }
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + 0x140);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 == 0) {
      *puVar18 = uVar21;
      puVar18[1] = uVar23;
      puVar18[2] = uVar22;
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_0108ed4c;
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar19;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *puVar18 = uVar21;
      puVar18[1] = uVar23;
      puVar18[2] = uVar22;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    *(undefined4 **)(param_1 + 0x130) = puVar18 + 3;
  }
  return;
}


