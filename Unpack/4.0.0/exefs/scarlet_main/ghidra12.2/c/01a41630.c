/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a41630; name: FUN_01a41630
 */


void FUN_01a41630(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_6c;
  long *local_68;
  undefined1 auStack_60 [24];
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_0177dbc8(&local_68,param_2 + 1,"+inner");
  FUN_0135d26c(auStack_60,&local_68);
  local_6c = 0;
  lVar5 = *(long *)(*param_2 + 0x40);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x48) == 0)) {
    if (*(char *)(lVar5 + 0xd0) == '\0') {
      *(undefined8 *)(lVar5 + 0xd8) = 0;
      *(undefined1 *)(lVar5 + 0xd0) = 1;
    }
    else {
      *(undefined8 *)(lVar5 + 0xd8) = 0;
    }
    uVar4 = *(undefined8 *)(lVar5 + 0xe0);
    lVar1 = tpidr_el0;
    if (*(long *)(lVar1 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar1 + 0x30) = DAT_04859430;
    }
    local_40 = *(undefined8 *)(lVar1 + 0x30);
    local_38 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined2 *)(lVar1 + 0x38) = 1;
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
    plVar3 = *(long **)(lVar5 + 0xe8);
    *(undefined8 *)(lVar5 + 0xe8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    *(undefined8 *)(lVar1 + 0x30) = local_40;
    *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_38;
    *(undefined4 *)(lVar5 + 0x48) = 1;
    FUN_0174a3b8(lVar5);
  }
  local_40 = 0;
  FUN_01945a78(param_1,auStack_60,&local_6c,&local_40);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


