/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a36838; name: FUN_00a36838
 */


void FUN_00a36838(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 0x60) = param_2;
  uVar4 = FUN_00a36a04();
  if (((uVar4 & 1) == 0) && (*(long *)(param_1 + 0x68) = param_3, param_3 != 0)) {
    plVar5 = (long *)(param_1 + 0x70);
    if (*plVar5 != param_3) {
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar6 != param_3) {
        lVar7 = *(long *)(param_1 + 0x80);
        if (lVar7 != param_3) {
          lVar8 = *(long *)(param_1 + 0x88);
          if (lVar8 != param_3) {
            if ((*plVar5 != 0) && (plVar5 = (long *)(param_1 + 0x78), lVar6 != 0)) {
              if (lVar7 == 0) {
                plVar5 = (long *)(param_1 + 0x80);
              }
              else {
                if (lVar8 != 0) goto LAB_00a368cc;
                plVar5 = (long *)(param_1 + 0x88);
              }
            }
            *plVar5 = param_3;
          }
        }
      }
    }
  }
LAB_00a368cc:
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar5 = *(long **)(lVar6 + 0x1c8);
  plVar1 = *(long **)(lVar6 + 0x1c0);
  do {
    if (plVar1 == plVar5) {
      return;
    }
    uVar4 = FUN_00a371b8(*plVar1 + 0x28);
    plVar1 = plVar1 + 1;
  } while ((uVar4 & 1) == 0);
  uVar2 = FUN_00b0e9ac();
  if ((0xff < uVar2) && ((uVar2 & 0xff) != 0)) {
    FUN_00a36c00(param_1,0);
  }
  if (((*PTR_DAT_047d62a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d62a0), iVar3 != 0))
  {
    FUN_00100190(&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d62a0);
  }
  lVar6 = *(long *)PTR_DAT_047d62a8;
  *(long *)PTR_DAT_047d62b0 = lVar6;
  if (lVar6 == 0) {
    return;
  }
  FUN_00b0ddac();
  return;
}


