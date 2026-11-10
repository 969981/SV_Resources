/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104f920; name: FUN_0104f920
 */


void FUN_0104f920(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  char local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_047d8b70;
  puVar4 = PTR_PTR_047d4508;
  pcVar2 = *(char **)(*param_2 + 0x70);
  pcVar3 = *(char **)(*param_2 + 0x78);
  do {
    if (pcVar2 == pcVar3) {
      return;
    }
    FUN_0104fb74(&local_68,param_3,&DAT_03c9c9c5,pcVar2 + 8);
    plVar6 = local_68;
    plVar1 = (long *)puVar4;
    plVar7 = (long *)puVar5;
    if (local_68 != (long *)0x0) {
      plVar1 = local_68 + 7;
      plVar7 = local_68 + 6;
    }
    uVar9 = *param_4;
    local_b0 = *plVar7;
    lStack_a8 = *plVar1;
    if (local_68 == (long *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_68[8];
      local_98 = (long *)0x0;
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    local_98 = plVar6;
    FUN_00db5a24(local_90,uVar9,pcVar2,&local_b0,0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    lVar8 = *param_1;
    for (lVar10 = *(long *)(lVar8 + 0x70); lVar10 != lVar8 + 0x68; lVar10 = *(long *)(lVar10 + 8)) {
      FUN_0104fc08(*(undefined8 *)(lVar10 + 0x10),param_4,pcVar2,local_90);
    }
    FUN_00feee04(*param_4,pcVar2);
    plVar1 = local_70;
    if (*pcVar2 == '\0') {
      if (local_90[0] != '\0') {
        *(undefined8 *)(pcVar2 + 8) = local_88;
        *(undefined8 *)(pcVar2 + 0x10) = local_80;
        *(undefined8 *)(pcVar2 + 0x18) = local_78;
        *(long **)(pcVar2 + 0x20) = local_70;
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x18))();
        }
        *pcVar2 = '\x01';
        goto LAB_0104fa74;
      }
    }
    else {
      if (local_90[0] == '\0') {
        if (*(long **)(pcVar2 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(pcVar2 + 0x20) + 0x20))();
        }
        *pcVar2 = '\0';
      }
      else {
        *(undefined8 *)(pcVar2 + 8) = local_88;
        *(undefined8 *)(pcVar2 + 0x10) = local_80;
        *(undefined8 *)(pcVar2 + 0x18) = local_78;
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x18))(local_70);
        }
        plVar7 = *(long **)(pcVar2 + 0x20);
        *(long **)(pcVar2 + 0x20) = plVar1;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
      }
LAB_0104fa74:
      if (local_90[0] != '\0') {
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        local_90[0] = '\0';
      }
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    pcVar2 = pcVar2 + 0x28;
  } while( true );
}


