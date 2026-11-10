/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01259f70; name: FUN_01259f70
 */


void FUN_01259f70(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *local_90;
  long *local_88;
  long *local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  
  puVar7 = PTR_DAT_047d8b70;
  puVar6 = PTR_DAT_047d4e08;
  puVar5 = PTR_DAT_047d4e00;
  puVar4 = PTR_PTR_047d4508;
  puVar3 = (undefined8 *)param_2[1];
  for (puVar2 = (undefined8 *)*param_2; puVar2 != puVar3; puVar2 = puVar2 + 3) {
    if (*(int *)(puVar2 + 2) == 0) {
      puVar10 = (undefined8 *)*param_1;
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      uVar11 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar11;
      plVar12 = (long *)*puVar2;
      plVar1 = (long *)puVar4;
      local_80 = (long *)puVar7;
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 7;
        local_80 = plVar12 + 6;
      }
      local_80 = (long *)*local_80;
      lStack_78 = *plVar1;
      if (plVar12 == (long *)0x0) {
        local_70 = 0;
      }
      else {
        local_70 = plVar12[8];
        local_68 = (long *)0x0;
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      local_68 = plVar12;
      FUN_00f7176c(&local_88,uVar11,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      plVar1 = local_88;
      if (local_88 != (long *)0x0) {
        FUN_0125a1ac(&local_80,puVar2 + 1,0);
        FUN_00c5cf04(&local_90,plVar1,&local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        plVar1 = local_90;
        if (local_90 != (long *)0x0) {
          FUN_017e4ea0(&local_80,local_90);
          lVar9 = local_80[0x33];
          lVar13 = local_88[0x33];
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x60))();
          }
          if (lVar9 == lVar13) {
            FUN_0125a2b8(plVar1 + 8,puVar10[1]);
            FUN_0125aa8c(plVar1,*(undefined1 *)*puVar10);
          }
          (**(code **)(*plVar1 + 0x60))(plVar1);
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x60))();
        }
      }
    }
    else {
      FUN_0125a3c4(param_1[1],param_3,puVar2 + 1);
    }
  }
  return;
}


