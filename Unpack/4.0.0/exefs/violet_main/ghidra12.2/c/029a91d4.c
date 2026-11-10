/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a91d4; name: FUN_029a91d4
 */


void FUN_029a91d4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [24];
  long *local_68;
  
  puVar6 = PTR_DAT_047d8290;
  puVar5 = PTR_DAT_047d8288;
  puVar4 = PTR_DAT_047d8280;
  if (*(char *)(param_1 + 0x158) != '\0') {
    plVar1 = *(long **)(param_1 + 0x120);
    plVar2 = *(long **)(param_1 + 0x128);
    if (((plVar2 != plVar1) && (*plVar1 != 0)) && (**(char **)(*plVar1 + 0x38) != '\0')) {
      for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,puVar5,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar4);
        }
        uVar9 = *(undefined8 *)puVar5;
        *(undefined8 *)puVar6 = uVar9;
        FUN_0135d26c(auStack_80,plVar1);
        uVar3 = *(undefined1 *)(param_1 + 0x11e);
        memset(&local_100,0,0x80);
        FUN_022335a0(uVar9,auStack_80,uVar3,&local_100,0);
        pcVar7 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = 0;
          local_f8 = (code *)0x0;
          (*pcVar7)(auStack_e0);
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
      *(undefined2 *)(param_1 + 0x158) = 0;
    }
  }
  return;
}


