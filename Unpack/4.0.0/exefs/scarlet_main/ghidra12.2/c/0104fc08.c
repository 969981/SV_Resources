/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104fc08; name: FUN_0104fc08
 */


void FUN_0104fc08(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_68;
  
  puVar3 = PTR_DAT_047d8b70;
  plVar1 = *(long **)(param_1 + 0x50);
  plVar2 = *(long **)(param_1 + 0x58);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar6 = *plVar1;
    if (**(char **)(lVar6 + 0x110) == '\0') {
      lVar9 = *(long *)(lVar6 + 0xe8);
      plVar4 = *(long **)(lVar6 + 0x100);
      if (plVar4 != (long *)0x0) {
        pcVar7 = *(code **)(*plVar4 + 0x18);
        plVar5 = plVar4;
        goto LAB_0104fd38;
      }
    }
    else {
      FUN_00d1e980(&local_68,lVar6 + 0x108,&DAT_03c9c9c5,lVar6 + 0xe8);
      plVar5 = local_68;
      plVar4 = (long *)puVar3;
      if (local_68 != (long *)0x0) {
        plVar4 = local_68 + 6;
      }
      lVar9 = *plVar4;
      plVar4 = plVar5;
      if ((local_68 != (long *)0x0) &&
         ((**(code **)(*local_68 + 0x18))(local_68), local_68 != (long *)0x0)) {
        pcVar7 = *(code **)(*local_68 + 0x20);
        plVar4 = local_68;
LAB_0104fd38:
        (*pcVar7)(plVar4);
        plVar4 = plVar5;
      }
    }
    lVar6 = *(long *)(param_3 + 8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (lVar9 == lVar6) {
      lVar6 = *plVar1;
      plVar4 = *(long **)(lVar6 + 0x120);
      uVar8 = *(undefined8 *)PTR_PTR_047d4508;
      *(undefined1 **)(lVar6 + 0x108) = &DAT_cbf29ce484222645;
      *(undefined8 *)(lVar6 + 0x110) = uVar8;
      *(undefined8 *)(lVar6 + 0x118) = 0;
      *(undefined8 *)(lVar6 + 0x120) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      lVar6 = *plVar1;
      *(undefined8 *)(lVar6 + 0xe8) = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(param_4 + 0x18);
      plVar4 = *(long **)(param_4 + 0x20);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      plVar5 = *(long **)(lVar6 + 0x100);
      *(long **)(lVar6 + 0x100) = plVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      FUN_00eb0770(*plVar1,param_2);
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


