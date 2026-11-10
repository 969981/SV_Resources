/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ea780; name: FUN_020ea780
 */


void FUN_020ea780(uint param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  puVar2 = PTR_DAT_047d4870;
  puVar1 = PTR_DAT_047d4868;
  plVar7 = *(long **)(lVar6 + 0x1c0);
  do {
    lVar6 = *plVar7;
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
      uVar5 = FUN_01b4260c();
      *(undefined8 *)puVar2 = uVar5;
      __cxa_guard_release(puVar1);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)puVar2) {
        if ((param_1 < *(uint *)(lVar6 + 0x54)) && (lVar6 = FUN_015a02dc(lVar6,param_1), lVar6 != 0)
           ) {
          *(undefined4 *)(lVar6 + 8) = param_2;
        }
        return;
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}


