/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016a69e0; name: FUN_016a69e0
 */


void FUN_016a69e0(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  long *local_98 [4];
  long *local_78;
  long *local_68;
  
  *param_1 = 0;
  puVar7 = PTR_DAT_047d8b70;
  puVar6 = PTR_PTR_047d4508;
  puVar5 = PTR_DAT_047d4250;
  plVar12 = *(long **)(param_2 + 0x120);
  plVar4 = *(long **)(param_2 + 0x128);
  if (plVar4 != plVar12 && plVar12 != plVar4) {
    do {
      plVar9 = (long *)FUN_0133e008(*plVar12 + 0x50);
      puVar1 = (undefined8 *)puVar6;
      if (*plVar9 != 0) {
        puVar1 = (undefined8 *)(*plVar9 + 0x38);
      }
      local_68 = (long *)*puVar1;
      FUN_0110eb84(local_98,&local_68,&DAT_03c886bc,(int)plVar9[5]);
      plVar9 = (long *)puVar6;
      if (local_98[0] != (long *)0x0) {
        plVar9 = local_98[0] + 7;
      }
      pcVar10 = strrchr((char *)*plVar9,0x2f);
      pcVar3 = (char *)0x0;
      if (pcVar10 != (char *)0x0) {
        pcVar3 = pcVar10 + 1;
      }
      if (*pcVar3 == '\0') {
        plVar9 = (long *)FUN_00d44228();
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar11 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)puVar5 = uVar11;
        FUN_00cf9884(&local_68,uVar11,pcVar3);
        plVar9 = local_68;
      }
      plVar2 = (long *)puVar7;
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 6;
      }
      if (*plVar2 == *param_3) {
        FUN_016a6bd4(param_1,*(undefined8 *)(*plVar12 + 0x48));
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98[0] != (long *)0x0) {
        (**(code **)(*local_98[0] + 0x20))();
      }
      plVar12 = plVar12 + 1;
    } while (plVar4 != plVar12);
  }
  return;
}


