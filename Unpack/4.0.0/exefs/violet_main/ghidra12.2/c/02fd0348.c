/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fd0348; name: FUN_02fd0348
 */


void FUN_02fd0348(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  FUN_02f60060(param_1,*(undefined8 *)(param_2 + 0x4e0));
  FUN_02f60060(param_1 + 0x200,*(undefined8 *)(param_2 + 0x4e0));
  lVar1 = *(long *)(param_2 + 0x4e0);
  uVar2 = *(uint *)(param_1 + 0x418);
  if (*(char *)(param_1 + 0x40c) != '\0') {
    plVar3 = *(long **)(param_1 + 0x410);
    if ((int)uVar2 < 1) {
      plVar5 = plVar3;
    }
    else {
      plVar5 = plVar3;
      if (uVar2 != 1) {
        iVar6 = -(uVar2 & 0xfffffffe);
        do {
          plVar4 = plVar3;
          if (*plVar5 != 0) {
            plVar4 = plVar3 + 1;
            *plVar3 = *plVar5;
          }
          plVar3 = plVar4;
          if (plVar5[1] != 0) {
            plVar3 = plVar4 + 1;
            *plVar4 = plVar5[1];
          }
          plVar5 = plVar5 + 2;
          iVar6 = iVar6 + 2;
        } while (iVar6 != 0);
      }
      plVar4 = plVar3;
      if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
        plVar4 = plVar3 + 1;
        *plVar3 = *plVar5;
      }
      plVar3 = plVar4;
      plVar5 = *(long **)(param_1 + 0x410);
    }
    uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    *(undefined1 *)(param_1 + 0x40c) = 0;
  }
  if (uVar2 != 0) {
    if (lVar1 == 0) {
      (**(code **)(**(long **)(param_1 + 0x400) + 0x28))
                (*(long **)(param_1 + 0x400),*(undefined8 *)(param_1 + 0x410));
    }
    else {
      FUN_031c2998(lVar1,*(undefined8 *)(param_1 + 0x410));
    }
  }
  *(undefined4 *)(param_1 + 0x418) = 0;
  uVar2 = *(uint *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x408) = 0;
  lVar1 = *(long *)(param_2 + 0x4e0);
  if (*(char *)(param_1 + 0x50c) != '\0') {
    plVar3 = *(long **)(param_1 + 0x510);
    if ((int)uVar2 < 1) {
      plVar5 = plVar3;
    }
    else {
      plVar5 = plVar3;
      if (uVar2 != 1) {
        iVar6 = -(uVar2 & 0xfffffffe);
        do {
          plVar4 = plVar3;
          if (*plVar5 != 0) {
            plVar4 = plVar3 + 1;
            *plVar3 = *plVar5;
          }
          plVar3 = plVar4;
          if (plVar5[1] != 0) {
            plVar3 = plVar4 + 1;
            *plVar4 = plVar5[1];
          }
          plVar5 = plVar5 + 2;
          iVar6 = iVar6 + 2;
        } while (iVar6 != 0);
      }
      plVar4 = plVar3;
      if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
        plVar4 = plVar3 + 1;
        *plVar3 = *plVar5;
      }
      plVar3 = plVar4;
      plVar5 = *(long **)(param_1 + 0x510);
    }
    uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    *(undefined1 *)(param_1 + 0x50c) = 0;
  }
  if (uVar2 != 0) {
    if (lVar1 == 0) {
      (**(code **)(**(long **)(param_1 + 0x500) + 0x28))
                (*(long **)(param_1 + 0x500),*(undefined8 *)(param_1 + 0x510));
    }
    else {
      FUN_031c2998(lVar1,*(undefined8 *)(param_1 + 0x510));
    }
  }
  *(undefined4 *)(param_1 + 0x518) = 0;
  uVar2 = *(uint *)(param_1 + 0x618);
  *(undefined4 *)(param_1 + 0x508) = 0;
  lVar1 = *(long *)(param_2 + 0x4e0);
  if (*(char *)(param_1 + 0x60c) != '\0') {
    plVar3 = *(long **)(param_1 + 0x610);
    if ((int)uVar2 < 1) {
      plVar5 = plVar3;
    }
    else {
      plVar5 = plVar3;
      if (uVar2 != 1) {
        iVar6 = -(uVar2 & 0xfffffffe);
        do {
          plVar4 = plVar3;
          if (*plVar5 != 0) {
            plVar4 = plVar3 + 1;
            *plVar3 = *plVar5;
          }
          plVar3 = plVar4;
          if (plVar5[1] != 0) {
            plVar3 = plVar4 + 1;
            *plVar4 = plVar5[1];
          }
          plVar5 = plVar5 + 2;
          iVar6 = iVar6 + 2;
        } while (iVar6 != 0);
      }
      plVar4 = plVar3;
      if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
        plVar4 = plVar3 + 1;
        *plVar3 = *plVar5;
      }
      plVar3 = plVar4;
      plVar5 = *(long **)(param_1 + 0x610);
    }
    uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    *(undefined1 *)(param_1 + 0x60c) = 0;
  }
  if (uVar2 != 0) {
    if (lVar1 == 0) {
      (**(code **)(**(long **)(param_1 + 0x600) + 0x28))
                (*(long **)(param_1 + 0x600),*(undefined8 *)(param_1 + 0x610));
    }
    else {
      FUN_031c2998(lVar1,*(undefined8 *)(param_1 + 0x610));
    }
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x608) = 0;
  return;
}


