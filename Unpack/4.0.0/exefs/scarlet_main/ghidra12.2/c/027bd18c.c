/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bd18c; name: FUN_027bd18c
 */


void FUN_027bd18c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_b0 [80];
  long alStack_60 [4];
  long *local_40;
  
  FUN_027bde7c(auStack_b0);
  memcpy((undefined1 *)(param_1 + 0x130),auStack_b0,0x50);
  plVar3 = alStack_60;
  if ((undefined1 *)(param_1 + 0x130) != auStack_b0) {
    plVar2 = *(long **)(param_1 + 0x1a0);
    plVar1 = (long *)(param_1 + 0x180);
    if (plVar2 != (long *)0x0) {
      if (plVar2 == plVar1) {
        pcVar4 = *(code **)(*plVar2 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*plVar2 + 0x18);
      }
      (*pcVar4)();
    }
    if (local_40 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    else if (local_40 == plVar3) {
      *(long **)(param_1 + 0x1a0) = plVar1;
      (**(code **)(*local_40 + 0x30))(local_40,plVar1);
    }
    else {
      *(long **)(param_1 + 0x1a0) = local_40;
      local_40 = (long *)0x0;
    }
  }
  if (local_40 != (long *)0x0) {
    if (local_40 == plVar3) {
      pcVar4 = *(code **)(*local_40 + 0x10);
    }
    else {
      pcVar4 = *(code **)(*local_40 + 0x18);
      plVar3 = local_40;
    }
    (*pcVar4)(plVar3);
  }
  return;
}


