/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029aa18c; name: FUN_029aa18c
 */


void FUN_029aa18c(undefined8 *param_1,long param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  long *local_58;
  
  FUN_00d1a22c(param_1,0xc);
  *param_1 = &PTR_FUN_04602148;
  param_1[4] = &PTR_LAB_04602288;
  param_1[5] = &DAT_046023b0;
  param_1[6] = &PTR_LAB_04602408;
  puVar1 = param_1 + 0x34;
  param_1[7] = &PTR_LAB_04602430;
  *(undefined1 *)((long)param_1 + 0x11e) = 0;
  param_1[0x24] = &LAB_029aa6cc;
  param_1[0x25] = &LAB_02e41e54;
  param_1[0x26] = &LAB_02e41e58;
  param_1[0x27] = &LAB_02e41e64;
  param_1[0x28] = param_1;
  FUN_00daf940(puVar1,param_2);
  param_1[0x35] = 0xffffffffffffffff;
  *(byte *)(param_1 + 0x36) = param_3 & 1;
  puVar4 = PTR_DAT_047d8290;
  puVar3 = PTR_DAT_047d8288;
  puVar2 = PTR_DAT_047d8280;
  if (**(char **)(param_2 + 8) != '\0') {
    if ((param_3 & 1) != 0) {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      uVar6 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar6;
      FUN_0135d26c(auStack_70,puVar1);
      FUN_0299dda8(uVar6,auStack_70);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    uVar6 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar6;
    FUN_0135d26c(auStack_70,puVar1);
    uVar6 = FUN_02327f1c(uVar6,auStack_70);
    param_1[0x35] = uVar6;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  FUN_00c6a514(param_1 + 7,0);
  return;
}


