/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018cf77c; name: FUN_018cf77c
 */


void FUN_018cf77c(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  long local_50;
  char *pcStack_48;
  long local_40;
  long *local_38;
  
  plVar4 = *(long **)(param_1 + 0x3e0);
  if ((plVar4 == (long *)0x0) || (pcStack_48 = (char *)plVar4[7], *pcStack_48 == '\0')) {
    uVar3 = 1;
  }
  else {
    local_50 = plVar4[6];
    local_40 = plVar4[8];
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = plVar4;
    memset(&local_d0,0,0x80);
    iVar2 = FUN_0131fc3c(param_1,&local_50,&local_d0,100);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar1)(auStack_b0);
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar3 = 1;
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x3f0) = 1;
      uVar3 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x3f1) = uVar3;
  return;
}


