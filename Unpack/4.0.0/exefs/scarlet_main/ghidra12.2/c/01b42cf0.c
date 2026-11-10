/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b42cf0; name: FUN_01b42cf0
 */


bool FUN_01b42cf0(uint param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar4 = PTR_DAT_047d4890;
  puVar3 = PTR_DAT_047d4888;
  plVar10 = *(long **)(lVar8 + 0x1c0);
  do {
    puVar9 = (undefined8 *)(*plVar10 + 0x28);
    plVar6 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) {
        uVar1 = 0;
        if (param_1 < 6) {
          uVar1 = param_1;
        }
        uVar2 = *(ushort *)((long)puVar9 + (ulong)uVar1 * 0xc + 0x4fe);
        return (byte)(uVar2 >> 8) < 0x21 && (uVar2 & 0xfe) < 0x1e;
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}


