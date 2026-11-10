/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a9648; name: FUN_029a9648
 */


uint FUN_029a9648(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_80 [24];
  long *local_68;
  
  puVar5 = PTR_LAB_047d89a8;
  puVar4 = PTR_DAT_047d8290;
  puVar3 = PTR_DAT_047d8288;
  puVar2 = PTR_DAT_047d8280;
  plVar8 = *(long **)(param_1 + 0x120);
  plVar1 = *(long **)(param_1 + 0x128);
  if (((plVar1 == plVar8) || (*plVar8 == 0)) || (**(char **)(*plVar8 + 0x38) == '\0')) {
    uVar10 = 0;
  }
  else if (plVar8 == plVar1) {
    uVar10 = 1;
  }
  else {
    uVar10 = 1;
    do {
      if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar2), iVar7 != 0)) {
        FUN_00100190(puVar5,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar2);
      }
      uVar9 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar9;
      FUN_0135d26c(auStack_80,plVar8);
      uVar6 = FUN_0299e3d4(uVar9,auStack_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      plVar8 = plVar8 + 1;
      uVar10 = uVar10 & uVar6;
    } while (plVar1 != plVar8);
  }
  return uVar10;
}


