/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a51610; name: FUN_00a51610
 */


bool FUN_00a51610(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar4 = PTR_DAT_047d4b10;
  puVar3 = PTR_DAT_047d4b08;
  if (lVar8 != 0) {
    plVar2 = *(long **)(lVar8 + 0x1c8);
    for (plVar1 = *(long **)(lVar8 + 0x1c0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar8 = *plVar1;
      puVar9 = (undefined8 *)(lVar8 + 0x28);
      plVar6 = (long *)(**(code **)*puVar9)(puVar9);
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar7 = FUN_01b3fb0c();
        *(undefined8 *)puVar4 = uVar7;
        __cxa_guard_release(puVar3);
      }
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)puVar4) {
          return *(char *)(lVar8 + 0x8170) != '\0';
        }
      }
    }
  }
  return false;
}


