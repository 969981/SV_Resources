/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02adc6b0; name: FUN_02adc6b0
 */


void FUN_02adc6b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,uint param_6)

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
  puVar4 = PTR_DAT_047d48d8;
  puVar3 = PTR_DAT_047d48d0;
  plVar1 = *(long **)(lVar8 + 0x1c0);
  plVar2 = *(long **)(lVar8 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return;
    }
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
        FUN_02adc838(param_1,lVar8,param_2,param_3,param_4,param_5 & 1,param_6 & 1,0);
        return;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


