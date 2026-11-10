/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014fcc7c; name: FUN_014fcc7c
 */


bool FUN_014fcc7c(undefined8 param_1,ushort param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar4 = PTR_DAT_047d8f00;
  puVar3 = PTR_DAT_047d8ef8;
  plVar1 = *(long **)(lVar8 + 0x1c0);
  plVar2 = *(long **)(lVar8 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar8 = *plVar1;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) goto LAB_014fcd24;
    }
  }
  lVar8 = 0;
LAB_014fcd24:
  if (0x401 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("(devno <= pml::DevNo::MAX)","GetDevNoCount",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/cmn/game_data/savedata_accessor/box_pokemon_savedata_accessor.cpp"
               ,0x26c,"Error: devno(%d) >= DEVNO_MAX\n");
  }
  return *(short *)(lVar8 + (ulong)param_2 * 2 + 0x140) != 0;
}


