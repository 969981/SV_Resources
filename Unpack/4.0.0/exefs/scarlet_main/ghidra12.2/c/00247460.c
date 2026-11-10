/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00247460; name: FUN_00247460
 */


void FUN_00247460(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  plVar1 = (long *)(param_1 + 0x30);
  if (plVar1 != param_2) {
    plVar2 = *(long **)(param_1 + 0x50);
    if (plVar2 != (long *)0x0) {
      if (plVar2 == plVar1) {
        pcVar3 = *(code **)(*plVar2 + 0x10);
      }
      else {
        pcVar3 = *(code **)(*plVar2 + 0x18);
      }
      (*pcVar3)();
    }
    plVar2 = (long *)param_2[4];
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else if (plVar2 == param_2) {
      *(long **)(param_1 + 0x50) = plVar1;
      (**(code **)(*(long *)param_2[4] + 0x30))((long *)param_2[4],plVar1);
    }
    else {
      *(long **)(param_1 + 0x50) = plVar2;
      param_2[4] = 0;
    }
  }
  thunk_FUN_006c5174(param_1 + 0x18,param_1);
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}


