/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ef16c; name: FUN_026ef16c
 */


void FUN_026ef16c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long *local_110;
  undefined8 local_108;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [96];
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (param_2 != 0) {
    uVar8 = *param_1;
    puVar6 = (undefined8 *)FUN_026ee48c(param_2);
    plVar7 = (long *)*puVar6;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      uVar1 = *(undefined8 *)(param_2 + 0x1d0);
      uVar3 = *(undefined8 *)(param_2 + 0x1d8);
      uVar2 = *(undefined8 *)(param_2 + 0x1e0);
      plVar4 = *(long **)(param_2 + 0x1e8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      local_80 = 0x865a9dc04bbf40de;
      pcStack_78 = "SyncAnimComponent";
      local_70 = 0x11;
      local_68 = (long *)0x0;
      local_130 = uVar8;
      uStack_128 = uVar1;
      local_120 = uVar3;
      uStack_118 = uVar2;
      local_110 = plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      local_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      local_f0 = 0;
      local_108 = uVar1;
      FUN_026ef4d4(&local_100,&local_130);
      (**(code **)(*plVar7 + 0x110))(plVar7,&local_80,&local_100);
      pcVar5 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = 0;
        local_e8 = 0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        (*pcVar5)(auStack_e0);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_80 = 0x865a9dc04bbf40de;
      pcStack_78 = "SyncAnimComponent";
      local_70 = 0x11;
      local_68 = (long *)0x0;
      local_130 = uVar8;
      uStack_128 = uVar1;
      local_120 = uVar3;
      uStack_118 = uVar2;
      local_110 = plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      local_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      local_f0 = 0;
      local_108 = uVar1;
      FUN_026ef574(&local_100,&local_130);
      (**(code **)(*plVar7 + 0x118))(plVar7,&local_80,&local_100);
      pcVar5 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = 0;
        local_e8 = 0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        (*pcVar5)(auStack_e0);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_80 = 0x865a9dc04bbf40de;
      pcStack_78 = "SyncAnimComponent";
      local_70 = 0x11;
      local_68 = (long *)0x0;
      local_130 = uVar8;
      uStack_128 = uVar1;
      local_120 = uVar3;
      uStack_118 = uVar2;
      local_110 = plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      local_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      local_f0 = 0;
      local_108 = uVar1;
      FUN_026ef614(&local_100,&local_130);
      (**(code **)(*plVar7 + 0x120))(plVar7,&local_80,&local_100);
      pcVar5 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = 0;
        local_e8 = 0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        (*pcVar5)(auStack_e0);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_80 = 0x865a9dc04bbf40de;
      pcStack_78 = "SyncAnimComponent";
      local_70 = 0x11;
      local_68 = (long *)0x0;
      local_130 = uVar8;
      uStack_128 = uVar1;
      local_120 = uVar3;
      uStack_118 = uVar2;
      local_110 = plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      local_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      local_f0 = 0;
      local_108 = uVar1;
      FUN_026ef6b4(&local_100,&local_130);
      (**(code **)(*plVar7 + 0x128))(plVar7,&local_80,&local_100);
      pcVar5 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = 0;
        local_e8 = 0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        (*pcVar5)(auStack_e0);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  return;
}


