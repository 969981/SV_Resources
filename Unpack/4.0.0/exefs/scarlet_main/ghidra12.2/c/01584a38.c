/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01584a38; name: FUN_01584a38
 */


undefined1  [16] FUN_01584a38(uint param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar4 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar4;
  plVar6 = *(long **)(lVar4 + 0x1c0);
  do {
    puVar5 = (undefined8 *)(*plVar6 + 0x28);
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00d0b86c();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        uVar1 = 0;
        if ((int)param_1 < 0x97) {
          uVar1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
        }
        auVar7._12_4_ = 0;
        auVar7._0_12_ = *(undefined1 (*) [12])((long)puVar5 + (ulong)uVar1 * 0xc + 0x18);
        return auVar7;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


