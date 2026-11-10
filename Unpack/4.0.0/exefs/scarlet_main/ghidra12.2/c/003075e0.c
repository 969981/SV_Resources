/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003075e0; name: FUN_003075e0
 */


void FUN_003075e0(char *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  
  if (*param_1 == '\x02') {
LAB_00307654:
    if (*(long *)(param_2 + 0x40) == 0) {
LAB_0030765c:
      uVar7 = FUN_003191f0(param_2,param_3);
      if ((uVar7 & 1) != 0) {
        plVar8 = *(long **)(param_3 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
  }
  else if (*param_1 == '\x01') {
    if (*(int *)(param_2 + 0x38) != 1) {
      if (*(int *)(param_2 + 0x38) == 0) {
        *(undefined4 *)(param_2 + 0x38) = 1;
        plVar8 = (long *)(param_2 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined8 *)(param_2 + 0xe0) = 0;
        *(undefined1 **)(param_2 + 0xd0) = &LAB_003080d0;
        *(long *)(param_2 + 0xd8) = param_2;
        thunk_FUN_00350da0(*(undefined8 *)(param_2 + 0x28),param_2 + 200,0);
      }
      goto LAB_00307654;
    }
    *(undefined4 *)(param_2 + 0x38) = 2;
    if (*(long *)(param_2 + 0x40) != 0) goto LAB_00307694;
    goto LAB_0030765c;
  }
LAB_00307694:
  if (param_1[1] == '\x01') {
    if (*(int *)(param_2 + 0x38) == 1) {
      *(undefined4 *)(param_2 + 0x38) = 2;
    }
    else if (*(int *)(param_2 + 0x38) == 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      plVar8 = (long *)(param_2 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(undefined1 **)(param_2 + 0xd0) = &LAB_003080d0;
      *(long *)(param_2 + 0xd8) = param_2;
      thunk_FUN_00350da0(*(undefined8 *)(param_2 + 0x28),param_2 + 200,0);
    }
  }
  puVar6 = PTR_PTR_047ccab0;
  if (param_1[2] != '\x02') {
    if (param_1[2] != '\x01') goto LAB_0030779c;
    if (*(int *)(param_2 + 0x38) == 1) {
      *(undefined4 *)(param_2 + 0x38) = 2;
    }
    else if (*(int *)(param_2 + 0x38) == 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      plVar8 = (long *)(param_2 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(undefined1 **)(param_2 + 0xd0) = &LAB_003080d0;
      *(long *)(param_2 + 0xd8) = param_2;
      thunk_FUN_00350da0(*(undefined8 *)(param_2 + 0x28),param_2 + 200,0);
    }
  }
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = *(uint *)(puVar6 + 0x70);
  if (uVar3 <= *(uint *)(puVar6 + 0x70)) {
    uVar1 = uVar3;
  }
  uVar2 = *(uint *)(puVar6 + 0x6c);
  if (*(uint *)(puVar6 + 0x6c) <= uVar3) {
    uVar2 = uVar1;
  }
  if (uVar2 != *(uint *)(param_2 + 0xdbc)) {
    *(uint *)(param_2 + 0xdbc) = uVar2;
    *(undefined1 *)(param_2 + 0xd8c) = 1;
  }
LAB_0030779c:
  if (param_1[3] != '\x02') {
    if (param_1[3] != '\x01') {
      return;
    }
    if (*(int *)(param_2 + 0x38) == 1) {
      *(undefined4 *)(param_2 + 0x38) = 2;
    }
    else if (*(int *)(param_2 + 0x38) == 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      plVar8 = (long *)(param_2 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(undefined1 **)(param_2 + 0xd0) = &LAB_003080d0;
      *(long *)(param_2 + 0xd8) = param_2;
      thunk_FUN_00350da0(*(undefined8 *)(param_2 + 0x28),param_2 + 200,0);
    }
  }
  uVar3 = *(uint *)(param_1 + 8);
  uVar1 = *(uint *)(puVar6 + 0x90);
  if (uVar3 <= *(uint *)(puVar6 + 0x90)) {
    uVar1 = uVar3;
  }
  uVar2 = *(uint *)(puVar6 + 0x8c);
  if (*(uint *)(puVar6 + 0x8c) <= uVar3) {
    uVar2 = uVar1;
  }
  if (uVar2 != *(uint *)(param_2 + 0xdc0)) {
    *(uint *)(param_2 + 0xdc0) = uVar2;
    *(undefined1 *)(param_2 + 0xd8c) = 1;
  }
  return;
}


