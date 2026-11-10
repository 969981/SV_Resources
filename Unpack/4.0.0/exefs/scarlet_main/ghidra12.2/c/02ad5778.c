/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ad5778; name: FUN_02ad5778
 */


undefined8 FUN_02ad5778(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar7 = PTR_DAT_047d4890;
  puVar6 = PTR_DAT_047d4888;
  plVar3 = *(long **)(lVar11 + 0x1c0);
  plVar4 = *(long **)(lVar11 + 0x1c8);
  do {
    if (plVar3 == plVar4) {
      return 0;
    }
    puVar12 = (undefined8 *)(*plVar3 + 0x28);
    plVar9 = (long *)(**(code **)*puVar12)(puVar12);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar10 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar10;
      __cxa_guard_release(puVar6);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar7) {
        uVar1 = 0;
        if (param_1 < 6) {
          uVar1 = param_1;
        }
        uVar2 = 0;
        if (param_2 < 6) {
          uVar2 = param_2;
        }
        uVar5 = *(ushort *)((long)puVar12 + (ulong)uVar2 * 2 + (ulong)uVar1 * 0xc + 0x4fe);
        uVar10 = FUN_02ad554c(uVar5 >> 8,uVar5 & 0xff);
        return uVar10;
      }
    }
    plVar3 = plVar3 + 1;
  } while( true );
}


