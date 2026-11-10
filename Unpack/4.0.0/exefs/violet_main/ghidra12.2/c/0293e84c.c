/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293e84c; name: FUN_0293e84c
 */


void FUN_0293e84c(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long local_50;
  undefined2 local_48;
  
  *param_2 = 0;
  FUN_01582534();
  uVar2 = FUN_014813e4();
  uVar3 = FUN_01481400(uVar2,param_3[1]);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_014813f4(param_1,param_3[1]);
    uVar3 = (**(code **)(*plVar4 + 0x200))();
    if (((uVar3 & 1) == 0) || ((char)param_3[2] != '\0')) {
      if ((*param_3 == 0) || (*(short *)((long)param_3 + 10) == 0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_014813f4(param_1);
      }
      local_48 = *(undefined2 *)((long)param_3 + 10);
      local_50 = lVar5;
      uVar2 = FUN_01243584(param_1);
      FUN_0124b0ac(uVar2,*param_3,param_3 + 4);
      plVar1 = (long *)(undefined1 *)0x0;
      if (lVar5 != 0) {
        plVar1 = &local_50;
      }
      FUN_029838fc(param_1,plVar4,*param_3,(char)param_3[3],plVar1,
                   *(char *)((long)param_3 + 9) == '\0');
      *param_2 = 1;
    }
  }
  return;
}


