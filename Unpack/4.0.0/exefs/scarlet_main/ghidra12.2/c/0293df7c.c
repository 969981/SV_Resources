/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293df7c; name: FUN_0293df7c
 */


void FUN_0293df7c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  plVar2 = (long *)FUN_014813f4(param_1,*param_3);
  uVar3 = (**(code **)(*plVar2 + 0x208))();
  if (((uVar3 & 1) != 0) || (*(char *)((long)param_3 + 7) != '\0')) {
    cVar1 = *(char *)((long)param_3 + 6);
    uVar3 = (**(code **)(*plVar2 + 0x6b8))(plVar2,*(undefined1 *)(param_3 + 1),cVar1 == '\0');
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_01243584(param_1);
      FUN_0298439c(uVar4,plVar2,*(undefined1 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 5),
                   cVar1 == '\0');
      uVar4 = FUN_01243584(param_1);
      FUN_0124b0ac(uVar4,*param_3,param_3 + 2);
      *param_2 = 1;
    }
  }
  return;
}


