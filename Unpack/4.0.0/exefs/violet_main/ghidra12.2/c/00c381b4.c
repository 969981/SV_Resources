/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c381b4; name: FUN_00c381b4
 */


void FUN_00c381b4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long local_60 [2];
  
  local_60[0] = 0;
  local_60[1] = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  lVar4 = tpidr_el0;
  plVar2 = *(long **)(lVar4 + 0x30);
  local_68 = local_60;
  if (plVar2 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar2 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  local_70 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,8,8);
  *local_70 = (long)&PTR_LAB_0455c848;
  FUN_00c36bb4(&local_88,param_1,param_2,param_3,param_4);
  plVar2 = local_68;
  while (plVar2 != local_60) {
    if ((long *)plVar2[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[5] + 8))();
    }
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      if (*(long **)*plVar3 == plVar2) {
        plVar2 = (long *)*plVar3;
      }
      else {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*plVar2 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  FUN_02a008d0(&local_68,local_60[0]);
  local_60[0] = 0;
  local_60[1] = 0;
  if (local_70 != (long *)0x0) {
    local_68 = local_60;
    (**(code **)(*local_70 + 8))();
  }
  return;
}


