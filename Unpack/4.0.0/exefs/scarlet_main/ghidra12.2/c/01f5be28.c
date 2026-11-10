/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f5be28; name: FUN_01f5be28
 */


void FUN_01f5be28(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar3 = FUN_01f5c17c(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar11 = *param_1;
  lVar5 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar3 << 3,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(lVar4 + (lVar5 - lVar11 >> 3) * 8);
  lVar11 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    uVar8 = *param_2;
    *param_2 = 0;
    *puVar1 = uVar8;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_01f5c168:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar8 = *param_2;
    *param_2 = 0;
    *puVar1 = uVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  plVar10 = (long *)*param_1;
  plVar9 = (long *)param_1[1];
  puVar12 = puVar1;
  if (plVar9 == plVar10) {
    plVar9 = plVar10;
  }
  else {
    do {
      lVar11 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        lVar11 = plVar9[-1];
        plVar9[-1] = 0;
        puVar12[-1] = lVar11;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01f5c168;
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar11 = plVar9[-1];
        plVar9[-1] = 0;
        puVar12[-1] = lVar11;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      plVar9 = plVar9 + -1;
      puVar12 = puVar12 + -1;
    } while (plVar10 != plVar9);
    plVar10 = (long *)*param_1;
    plVar9 = (long *)param_1[1];
  }
  lVar11 = param_1[2];
  *param_1 = (long)puVar12;
  param_1[1] = (long)(puVar1 + 1);
  param_1[2] = lVar4 + lVar3 * 8;
  if (plVar9 != plVar10) {
    plVar7 = (long *)plVar9[-1];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if (plVar9 + -1 != plVar10) {
      plVar7 = (long *)plVar9[-2];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      if (plVar9 + -2 != plVar10) {
        do {
          if ((long *)plVar9[-3] != (long *)0x0) {
            (**(code **)(*(long *)plVar9[-3] + 0x20))();
          }
          plVar9 = plVar9 + -1;
        } while (plVar10 + 2 != plVar9);
      }
    }
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01f5bf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,lVar11 - (long)plVar10,8);
    return;
  }
  FUN_00c48fe8(plVar9,plVar10,lVar11 - (long)plVar10,8);
  return;
}


