/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd2d8c; name: FUN_00bd2d8c
 */


void FUN_00bd2d8c(undefined8 *param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_0455b050;
  puVar2 = (uint *)param_1[10];
  if ((puVar2 != (uint *)0x0) && (param_1[8] == 0)) {
    uVar4 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar2 = (uint *)param_1[10];
      if (puVar2 == (uint *)0x0) goto LAB_00bd2df8;
    }
    operator_delete__(puVar2);
  }
LAB_00bd2df8:
  param_1[10] = 0;
  if ((((param_1[5] & 1) != 0) &&
      (plVar6 = (long *)(param_1[5] & 0xfffffffffffffffe), plVar6 != (long *)0x0)) &&
     (plVar6[1] == 0)) {
    if (*plVar6 != 0) {
      FUN_00bfee44(plVar6);
    }
    lVar3 = tpidr_el0;
    plVar5 = *(long **)(lVar3 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar5,plVar6,0,8);
    }
  }
  param_1[5] = 0;
  if (param_1[4] == 0) {
    plVar6 = (long *)param_1[1];
    while (plVar6 != param_1 + 2) {
      FUN_00c1f9ac(plVar6 + 5);
      plVar5 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar5 = plVar6 + 2;
        if (*(long **)*plVar5 == plVar6) {
          plVar6 = (long *)*plVar5;
        }
        else {
          do {
            lVar3 = *plVar5;
            plVar5 = (long *)(lVar3 + 0x10);
            plVar6 = (long *)*plVar5;
          } while (*plVar6 != lVar3);
        }
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
  }
  FUN_00c2c9d8(param_1 + 1,param_1[2]);
  return;
}


