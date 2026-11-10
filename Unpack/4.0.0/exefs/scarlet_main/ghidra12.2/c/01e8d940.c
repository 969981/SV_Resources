/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e8d940; name: FUN_01e8d940
 */


void FUN_01e8d940(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_6c;
  long *local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_0177dbc8(&local_68,param_2 + 1,"+inner");
  plVar2 = local_68;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_68 != (long *)0x0) {
    plVar4 = local_68 + 6;
  }
  local_60 = *plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_68 != (long *)0x0) {
    plVar4 = local_68 + 7;
  }
  lStack_58 = *plVar4;
  if (local_68 == (long *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = local_68[8];
  }
  local_48 = (long *)0x0;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))(local_68);
  }
  local_48 = plVar2;
  local_6c = 0;
  lVar6 = *(long *)(*param_2 + 0x40);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x48) == 0)) {
    if (*(char *)(lVar6 + 0xd0) == '\0') {
      *(undefined8 *)(lVar6 + 0xd8) = 0;
      *(undefined1 *)(lVar6 + 0xd0) = 1;
    }
    else {
      *(undefined8 *)(lVar6 + 0xd8) = 0;
    }
    uVar5 = *(undefined8 *)(lVar6 + 0xe0);
    lVar1 = tpidr_el0;
    if (*(long *)(lVar1 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar1 + 0x30) = DAT_04859430;
    }
    local_40 = *(undefined8 *)(lVar1 + 0x30);
    local_38 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined2 *)(lVar1 + 0x38) = 1;
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    plVar4 = *(long **)(lVar6 + 0xe8);
    *(undefined8 *)(lVar6 + 0xe8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    *(undefined8 *)(lVar1 + 0x30) = local_40;
    *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_38;
    *(undefined4 *)(lVar6 + 0x48) = 1;
    FUN_0174a3b8(lVar6);
  }
  local_40 = 0;
  FUN_01945a78(param_1,&local_60,&local_6c,&local_40);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


