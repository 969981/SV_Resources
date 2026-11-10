/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea8634; name: FUN_01ea8634
 */


void FUN_01ea8634(long param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  long local_50;
  char *pcStack_48;
  long local_40;
  long *local_38;
  
  plVar3 = *(long **)(param_1 + 0x3e0);
  if ((plVar3 != (long *)0x0) && (pcStack_48 = (char *)plVar3[7], *pcStack_48 != '\0')) {
    local_50 = plVar3[6];
    local_40 = plVar3[8];
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_38 = plVar3;
    memset(&local_d0,0,0x80);
    FUN_0131fc3c(param_1,&local_50,&local_d0,100);
    pcVar2 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar2)(auStack_b0);
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((*(char *)(param_1 + 0x58) != '\0') || (*(char *)(param_1 + 0x59) != '\0')) {
      uVar1 = *(undefined2 *)(param_1 + 0x58);
      plVar3 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar3);
      }
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar1);
    }
  }
  return;
}


