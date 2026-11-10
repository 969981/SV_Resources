/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b6cb10; name: FUN_01b6cb10
 */


void FUN_01b6cb10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  puVar2 = PTR_DAT_047d4c00;
  puVar1 = PTR_DAT_047d4bf8;
  plVar8 = *(long **)(lVar6 + 0x1c0);
  do {
    lVar6 = *plVar8;
    puVar7 = (undefined8 *)(lVar6 + 0x28);
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
      uVar5 = FUN_01b3fb0c();
      *(undefined8 *)puVar2 = uVar5;
      __cxa_guard_release(puVar1);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)puVar2) {
        FUN_01e719d0(0xffff,*(undefined8 *)(lVar6 + 0xe378),0xd0d8);
        return;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


