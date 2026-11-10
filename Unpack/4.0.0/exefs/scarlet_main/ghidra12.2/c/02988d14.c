/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02988d14; name: FUN_02988d14
 */


void FUN_02988d14(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_48 [32];
  long *local_28;
  
  local_28 = (long *)0x0;
  uVar3 = FUN_0124e480();
  uVar4 = FUN_01582534(param_1);
  FUN_01247754(auStack_48,uVar3,uVar4);
  while (uVar5 = FUN_01460dbc(auStack_48,&local_28), (uVar5 & 1) != 0) {
    uVar2 = (**(code **)(*local_28 + 0x98))();
    cVar1 = FUN_01689a40(param_1,uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_0297d8e8(param_1,local_28);
      if (cVar1 == -1) {
        uVar3 = FUN_01243584(param_1);
        uVar2 = (**(code **)(*local_28 + 0x98))();
        FUN_01932fa4(uVar3,uVar2,1);
      }
    }
  }
  return;
}


