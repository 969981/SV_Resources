/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bcb28; name: FUN_027bcb28
 */


void FUN_027bcb28(void *param_1,void *param_2,undefined8 *param_3)

{
  undefined1 *__dest;
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long alStack_70 [4];
  long *local_50;
  
  memcpy(param_1,param_2,0x28);
  memcpy((void *)((long)param_1 + 0x30),(void *)((long)param_2 + 0x30),0x50);
  *(undefined8 *)((long)param_1 + 0xa0) = 0;
  if (param_1 != param_2) {
    plVar2 = *(long **)((long)param_2 + 0xa0);
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)((long)param_1 + 0xa0) = 0;
    }
    else if (plVar2 == (long *)((long)param_2 + 0x80)) {
      *(long *)((long)param_1 + 0xa0) = (long)param_1 + 0x80;
      (**(code **)(**(long **)((long)param_2 + 0xa0) + 0x28))();
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x38))();
      *(undefined8 *)((long)param_1 + 0xa0) = uVar3;
    }
  }
  memcpy((void *)((long)param_1 + 0xb0),(void *)((long)param_2 + 0xb0),0x50);
  *(undefined8 *)((long)param_1 + 0x120) = 0;
  if (param_1 != param_2) {
    plVar2 = *(long **)((long)param_2 + 0x120);
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)((long)param_1 + 0x120) = 0;
    }
    else if (plVar2 == (long *)((long)param_2 + 0x100)) {
      *(long *)((long)param_1 + 0x120) = (long)param_1 + 0x100;
      (**(code **)(**(long **)((long)param_2 + 0x120) + 0x28))();
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x38))();
      *(undefined8 *)((long)param_1 + 0x120) = uVar3;
    }
  }
  __dest = (undefined1 *)((long)param_1 + 0x130);
  memcpy(__dest,(void *)((long)param_2 + 0x130),0x50);
  plVar2 = (long *)((long)param_1 + 0x180);
  *(undefined8 *)((long)param_1 + 0x1a0) = 0;
  if (param_1 != param_2) {
    plVar4 = *(long **)((long)param_2 + 0x1a0);
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)((long)param_1 + 0x1a0) = 0;
    }
    else if (plVar4 == (long *)((long)param_2 + 0x180)) {
      *(long **)((long)param_1 + 0x1a0) = plVar2;
      (**(code **)(**(long **)((long)param_2 + 0x1a0) + 0x28))
                (*(long **)((long)param_2 + 0x1a0),plVar2);
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 0x38))();
      *(undefined8 *)((long)param_1 + 0x1a0) = uVar3;
    }
  }
  memcpy((void *)((long)param_1 + 0x1b0),(void *)((long)param_2 + 0x1b0),0x40);
  puVar1 = PTR_DAT_047e20e0;
  uVar3 = param_3[1];
  *(undefined8 *)((long)param_1 + 0x1f0) = *param_3;
  *(undefined8 *)((long)param_1 + 0x1f8) = uVar3;
  *(undefined *)((long)param_1 + 0x200) = *puVar1;
  *(undefined8 *)((long)param_1 + 0x208) = *(undefined8 *)PTR_DAT_047e20e8;
  if (*(int *)((long)param_1 + 0x1f0) != 1) {
    memcpy(auStack_c0,__dest,0x50);
    plVar4 = alStack_70;
    local_50 = (long *)0x0;
    if (auStack_c0 != __dest) {
      plVar5 = *(long **)((long)param_1 + 0x1a0);
      if (plVar5 == (long *)0x0) {
        local_50 = (long *)0x0;
      }
      else if (plVar5 == plVar2) {
        local_50 = plVar4;
        (**(code **)(*plVar2 + 0x28))(plVar2,plVar4);
      }
      else {
        local_50 = (long *)(**(code **)(*plVar5 + 0x38))();
      }
    }
    local_b8 = 0;
    FUN_027bd18c(param_1,auStack_c0);
    if (local_50 != (long *)0x0) {
      if (local_50 == plVar4) {
        pcVar6 = *(code **)(*local_50 + 0x10);
      }
      else {
        pcVar6 = *(code **)(*local_50 + 0x18);
        plVar4 = local_50;
      }
      (*pcVar6)(plVar4);
    }
  }
  return;
}


