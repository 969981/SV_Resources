/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a9018; name: FUN_029a9018
 */


void FUN_029a9018(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [24];
  long *local_68;
  
  *param_1 = &PTR_FUN_04601e20;
  param_1[4] = &PTR_LAB_04601f68;
  param_1[5] = &DAT_04602090;
  param_1[6] = &PTR_LAB_046020e8;
  param_1[7] = &PTR_LAB_04602110;
  FUN_029a91d4();
  puVar7 = PTR_LAB_047d89a8;
  puVar6 = PTR_DAT_047d8290;
  puVar5 = PTR_DAT_047d8288;
  puVar4 = PTR_DAT_047d8280;
  if (*(char *)((long)param_1 + 0x11e) != '\0') {
    lVar2 = param_1[0x25];
    for (lVar1 = param_1[0x24]; lVar1 != lVar2; lVar1 = lVar1 + 8) {
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        FUN_00100190(puVar7,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar4);
      }
      uVar12 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar12;
      FUN_0135d26c(auStack_80,lVar1);
      FUN_0299e670(uVar12,auStack_80,param_1);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  plVar11 = (long *)param_1[0x24];
  if (plVar11 != (long *)0x0) {
    plVar10 = (long *)param_1[0x25];
    if (plVar10 == plVar11) {
      plVar10 = plVar11;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x20))();
        }
      } while (plVar11 != plVar10);
      plVar10 = (long *)param_1[0x24];
    }
    lVar1 = param_1[0x26];
    plVar3 = (long *)param_1[0x27];
    param_1[0x25] = plVar11;
    uVar9 = FUN_00c4e564(plVar3);
    if ((uVar9 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar10,lVar1 - (long)plVar10,8);
    }
    else {
      FUN_00c48fe8(plVar3,plVar10,lVar1 - (long)plVar10,8);
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


