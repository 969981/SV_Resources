/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eabe50; name: FUN_01eabe50
 */


void FUN_01eabe50(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  
  puVar18 = (undefined8 *)param_1[1];
  if (puVar18 == (undefined8 *)param_1[2]) {
    uVar13 = param_1[4];
    lVar17 = (long)puVar18 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar1 = lVar17 * 0x7d6343eb1a1f58d1 + 1;
    if (uVar13 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar4 * -0x5397829cbc14e5e;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (uVar13 >> 1 <= (ulong)(lVar4 * 0x7d6343eb1a1f58d1)) {
      uVar1 = uVar13;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x188,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar15 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01eac3c0;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar15;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    puVar18 = (undefined8 *)(lVar4 + lVar17 * 8);
    uVar7 = *param_2;
    *(undefined8 *)((long)puVar18 + 6) = *(undefined8 *)((long)param_2 + 6);
    *puVar18 = uVar7;
    puVar8 = (undefined1 *)(lVar4 + lVar17 * 8 + 0x10);
    *puVar8 = 0;
    if (*(char *)(param_2 + 2) != '\0') {
      lVar15 = lVar4 + lVar17 * 8;
      uVar7 = *(undefined8 *)((long)param_2 + 0x14);
      uVar12 = *(undefined8 *)((long)param_2 + 0x1c);
      *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
      *(undefined8 *)(lVar15 + 0x1c) = uVar12;
      *(undefined8 *)(lVar15 + 0x14) = uVar7;
      *puVar8 = 1;
    }
    puVar8 = (undefined1 *)(lVar4 + lVar17 * 8 + 0x28);
    *puVar8 = 0;
    if (*(char *)(param_2 + 5) != '\0') {
      memcpy((void *)(lVar4 + lVar17 * 8 + 0x2a),(void *)((long)param_2 + 0x2a),0x15a);
      *puVar8 = 1;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar17 = *param_1;
    lVar15 = param_1[1];
    if (lVar15 == lVar17) {
      puVar11 = puVar18;
      lVar15 = lVar17;
    }
    else {
      lVar5 = 0;
      do {
        lVar16 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01eac3c0;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        lVar16 = lVar15 + lVar5;
        uVar7 = *(undefined8 *)(lVar16 + -0x188);
        *(undefined8 *)((long)puVar18 + lVar5 + -0x182) = *(undefined8 *)(lVar16 + -0x182);
        *(undefined8 *)((long)puVar18 + lVar5 + -0x188) = uVar7;
        puVar8 = (undefined1 *)((long)puVar18 + lVar5 + -0x178);
        *puVar8 = 0;
        if (*(char *)(lVar16 + -0x178) != '\0') {
          uVar7 = *(undefined8 *)(lVar16 + -0x174);
          uVar12 = *(undefined8 *)(lVar16 + -0x16c);
          *(undefined4 *)((long)puVar18 + lVar5 + -0x164) = *(undefined4 *)(lVar16 + -0x164);
          *(undefined8 *)((long)puVar18 + lVar5 + -0x174) = uVar7;
          *(undefined8 *)((long)puVar18 + lVar5 + -0x16c) = uVar12;
          *puVar8 = 1;
        }
        puVar8 = (undefined1 *)((long)puVar18 + lVar5 + -0x160);
        *puVar8 = 0;
        if (*(char *)(lVar16 + -0x160) != '\0') {
          memcpy((void *)((long)puVar18 + lVar5 + -0x15e),(void *)(lVar16 + -0x15e),0x15a);
          *puVar8 = 1;
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar5 = lVar5 + -0x188;
      } while (lVar17 - lVar15 != lVar5);
      lVar17 = param_1[1];
      puVar11 = (undefined8 *)((long)puVar18 + lVar5);
      lVar15 = *param_1;
    }
    *param_1 = (long)puVar11;
    param_1[1] = (long)(puVar18 + 0x31);
    lVar5 = param_1[2];
    param_1[2] = lVar4 + uVar1 * 0x188;
    while (lVar17 != lVar15) {
      if (*(char *)(lVar17 + -0x160) != '\0') {
        *(char *)(lVar17 + -0x160) = '\0';
      }
      lVar4 = lVar17 + -0x188;
      pcVar9 = (char *)(lVar17 + -0x178);
      lVar17 = lVar4;
      if (*pcVar9 != '\0') {
        *pcVar9 = '\0';
      }
    }
    if (lVar15 != 0) {
      plVar14 = (long *)param_1[3];
      uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar13 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01eac2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,lVar5 - lVar15,8);
        return;
      }
      FUN_00c48fe8(plVar14,lVar15,lVar5 - lVar15,8);
      return;
    }
  }
  else {
    lVar17 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01eac3c0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar17;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    uVar7 = *param_2;
    *(undefined8 *)((long)puVar18 + 6) = *(undefined8 *)((long)param_2 + 6);
    *puVar18 = uVar7;
    *(undefined1 *)(puVar18 + 2) = 0;
    if (*(char *)(param_2 + 2) != '\0') {
      uVar7 = *(undefined8 *)((long)param_2 + 0x1c);
      uVar2 = *(undefined4 *)((long)param_2 + 0x24);
      *(undefined8 *)((long)puVar18 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
      *(undefined4 *)((long)puVar18 + 0x24) = uVar2;
      *(undefined8 *)((long)puVar18 + 0x1c) = uVar7;
      *(undefined1 *)(puVar18 + 2) = 1;
    }
    *(undefined1 *)(puVar18 + 5) = 0;
    if (*(char *)(param_2 + 5) != '\0') {
      memcpy((void *)((long)puVar18 + 0x2a),(void *)((long)param_2 + 0x2a),0x15a);
      *(undefined1 *)(puVar18 + 5) = 1;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar18 + 0x31);
  }
  return;
}


