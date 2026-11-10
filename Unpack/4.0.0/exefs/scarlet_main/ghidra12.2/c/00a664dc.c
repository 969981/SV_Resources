/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a664dc; name: FUN_00a664dc
 */


void FUN_00a664dc(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  uint uVar10;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 3) = 0;
  param_1[8] = 0xffff;
  param_1[9] = 0xffff;
  if ((char)param_2[1] == '\0') {
    return;
  }
  uVar10 = 0;
  while( true ) {
    uVar1 = 0;
    if ((*param_2 & 0xfffe) != 0x298 && *param_2 != 0x2e8) {
      uVar1 = uVar10;
    }
    uVar6 = FUN_00a65d24(param_2,0,uVar1);
    if ((uVar6 & 1) != 0) break;
    uVar10 = uVar10 + 1;
    if ((byte)param_2[1] <= uVar10) {
      return;
    }
  }
  uVar3 = *param_2;
  *param_1 = uVar3;
  param_1[1] = (ushort)uVar10;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  plVar2 = *(long **)(lVar9 + 0x1c8);
  plVar4 = *(long **)(lVar9 + 0x1c0);
  do {
    if (plVar4 == plVar2) goto LAB_00a665bc;
    lVar9 = *plVar4;
    uVar6 = FUN_00a669dc(lVar9 + 0x28);
    plVar4 = plVar4 + 1;
  } while ((uVar6 & 1) == 0);
  if (uVar3 < 0x402) {
    bVar7 = *(byte *)(lVar9 + 0x28 + (ulong)uVar3 * 0x20 + 0x2a);
  }
  else {
LAB_00a665bc:
    bVar7 = 0;
  }
  bVar8 = ~bVar7 & 1;
  *(undefined2 *)((long)param_1 + 5) = 0;
  if ((bVar7 & 4) != 0) {
    bVar8 = 2;
  }
  *(byte *)(param_1 + 2) = bVar8;
  return;
}


