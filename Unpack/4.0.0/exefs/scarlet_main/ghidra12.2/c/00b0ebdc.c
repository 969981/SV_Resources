/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0ebdc; name: FUN_00b0ebdc
 */


uint FUN_00b0ebdc(long param_1)

{
  short sVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long local_58 [3];
  
  FUN_01e999f4(local_58,0xc);
  if (local_58[0] == 0) {
    FUN_00d8e444(local_58);
  }
  else {
    sVar1 = *(short *)(local_58[0] + 0x1a);
    FUN_00d8e444(local_58);
    if (sVar1 != 0) {
      if (((*PTR_DAT_047d6288 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6288), iVar5 != 0)) {
        FUN_00100190(&LAB_00b1b6d8,PTR_DAT_047d6290,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6288);
      }
      lVar7 = *(long *)PTR_DAT_047d6290;
      *(long *)PTR_DAT_047d6298 = lVar7;
      if ((lVar7 == 0) || (*(char *)(lVar7 + 0x39) == '\0')) {
        uVar9 = 1;
      }
      else if ((*(long *)(param_1 + 0x48) == 0) ||
              (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar7 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar8 = FUN_01419488(lVar7 + -0x28);
        uVar9 = (ulong)(uVar8 & 0xffff);
      }
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar7 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar7;
      plVar2 = *(long **)(lVar7 + 0x1c8);
      plVar3 = *(long **)(lVar7 + 0x1c0);
      do {
        if (plVar3 == plVar2) {
          uVar8 = 0;
          goto LAB_00b0ecf0;
        }
        lVar7 = *plVar3;
        uVar6 = FUN_00a371b8(lVar7 + 0x28);
        plVar3 = plVar3 + 1;
      } while ((uVar6 & 1) == 0);
      uVar8 = (uint)*(byte *)(lVar7 + 0x40);
LAB_00b0ecf0:
      if ((uint)uVar9 < 2) {
        return uVar8;
      }
      lVar7 = 0;
      do {
        uVar4 = FUN_00b0ea70(param_1,*(undefined8 *)(param_1 + lVar7 * 8 + 0xa0));
        lVar7 = lVar7 + 1;
        uVar8 = uVar8 + (uVar4 & 1);
      } while (uVar9 - 1 != lVar7);
      return uVar8;
    }
  }
  return 1;
}


