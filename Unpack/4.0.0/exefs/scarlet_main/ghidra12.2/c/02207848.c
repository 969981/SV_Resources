/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02207848; name: FUN_02207848
 */


void FUN_02207848(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
  plVar9 = param_1 + 3;
  lVar3 = FUN_0199dd14(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar5 = *param_1;
  lVar7 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar3 << 7,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
  }
  lVar13 = *plVar9;
  puVar10 = (undefined8 *)(lVar4 + (lVar7 - lVar5 >> 7) * 0x80);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_02207660(puVar10,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_02207660(puVar10,param_2);
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar11 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  puVar1 = puVar10 + 0x10;
  if (puVar12 == puVar11) {
    puVar12 = puVar11;
  }
  else {
    puVar10 = puVar10 + -0x10;
    FUN_015a9dec(plVar9,puVar10,puVar12 + -0x10);
    if (puVar12 + -0x10 != puVar11) {
      do {
        puVar10 = puVar10 + -0x10;
        FUN_015a9dec(plVar9,puVar10,puVar12 + -0x20);
        puVar12 = puVar12 + -0x10;
      } while (puVar11 + 0x10 != puVar12);
    }
    puVar11 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar1;
  lVar5 = param_1[2];
  param_1[2] = lVar4 + lVar3 * 0x80;
  if (puVar12 != puVar11) {
    pcVar8 = (code *)puVar12[-0xf];
    puVar10 = puVar12 + -0x10;
    if (pcVar8 != (code *)0x0) {
      puVar12[-0xe] = 0;
      puVar12[-0xd] = 0;
      *puVar10 = 0;
      puVar12[-0xf] = 0;
      (*pcVar8)(puVar12 + -0xc);
    }
    while (puVar1 = puVar10, puVar1 != puVar11) {
      pcVar8 = (code *)puVar1[-0xf];
      puVar10 = puVar1 + -0x10;
      if (pcVar8 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar8)(puVar1 + -0xc);
      }
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  plVar9 = (long *)*plVar9;
  uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x022079ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar11,lVar5 - (long)puVar11,0x10);
    return;
  }
  FUN_00c48fe8(plVar9,puVar11,lVar5 - (long)puVar11,0x10);
  return;
}


