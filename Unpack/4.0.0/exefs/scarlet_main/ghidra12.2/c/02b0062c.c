/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b0062c; name: FUN_02b0062c
 */


undefined1  [16] FUN_02b0062c(uint param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar14 = *(long **)(lVar6 + 0x1c0);
  plVar2 = *(long **)(lVar6 + 0x1c8);
  if (plVar14 == plVar2) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar13 = 0x1000000;
  }
  else {
    uVar13 = 0x1000000;
    do {
      puVar12 = (undefined8 *)(*plVar14 + 0x28);
      plVar4 = (long *)(**(code **)*puVar12)(puVar12);
      lVar6 = FUN_02b0163c();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar6) {
          uVar1 = 0;
          if ((int)param_1 < 0x97) {
            uVar1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
          }
          uVar11 = *(ulong *)((long)puVar12 + (ulong)uVar1 * 0xc + 0x18);
          uVar5 = (ulong)*(uint *)((long)puVar12 + (ulong)uVar1 * 0xc + 0x20);
          uVar7 = uVar11 & 0xffffff0000000000;
          uVar8 = uVar11 & 0xff00000000;
          uVar13 = uVar11 & 0xff000000;
          uVar9 = uVar11 & 0xff0000;
          uVar10 = uVar11 & 0xff00;
          uVar11 = uVar11 & 0xff;
          goto LAB_02b00728;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar2);
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 0;
  }
LAB_02b00728:
  auVar15._0_8_ = uVar10 | uVar11 | uVar9 | uVar13 | uVar8 | uVar7;
  auVar15._8_8_ = uVar5;
  return auVar15;
}


