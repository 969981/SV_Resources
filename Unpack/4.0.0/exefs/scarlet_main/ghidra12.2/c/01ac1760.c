/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ac1760; name: FUN_01ac1760
 */


void FUN_01ac1760(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  
  lVar3 = FUN_0220eb30(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar12 = *param_1;
  lVar7 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar3 << 5,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar16 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_01ac1a9c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar16;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  puVar1 = (undefined8 *)(lVar4 + (lVar7 - lVar12 >> 5) * 0x20);
  uVar8 = *param_2;
  *param_2 = 0;
  *puVar1 = uVar8;
  uVar8 = param_2[1];
  uVar10 = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar10;
  puVar1[1] = uVar8;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  plVar11 = (long *)*param_1;
  plVar14 = (long *)param_1[1];
  if (plVar14 == plVar11) {
    puVar9 = puVar1;
    plVar14 = plVar11;
  }
  else {
    puVar15 = puVar1;
    do {
      lVar12 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 != 0) {
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01ac1a9c;
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar12;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      }
      lVar12 = plVar14[-4];
      plVar14[-4] = 0;
      puVar15[-4] = lVar12;
      lVar12 = plVar14[-3];
      lVar16 = plVar14[-1];
      puVar15[-2] = plVar14[-2];
      puVar15[-1] = lVar16;
      puVar9 = puVar15 + -4;
      plVar14 = plVar14 + -4;
      puVar15[-3] = lVar12;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      puVar15 = puVar9;
    } while (plVar11 != plVar14);
    plVar14 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
  }
  lVar12 = param_1[2];
  *param_1 = (long)puVar9;
  param_1[1] = (long)(puVar1 + 4);
  param_1[2] = lVar4 + lVar3 * 0x20;
  if (plVar11 != plVar14) {
    plVar13 = plVar11 + -4;
    lVar7 = *plVar13;
    *plVar13 = 0;
    if (lVar7 != 0) {
      FUN_0186b638(plVar11 + -3);
    }
    if (plVar13 != plVar14) {
      do {
        plVar11 = plVar13 + -4;
        lVar7 = *plVar11;
        *plVar11 = 0;
        if (lVar7 != 0) {
          FUN_0186b638(plVar13 + -3);
        }
        plVar13 = plVar11;
      } while (plVar14 != plVar11);
    }
  }
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar11 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01ac1998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x18))(plVar11,plVar14,lVar12 - (long)plVar14,8);
    return;
  }
  FUN_00c48fe8(plVar11,plVar14,lVar12 - (long)plVar14,8);
  return;
}


