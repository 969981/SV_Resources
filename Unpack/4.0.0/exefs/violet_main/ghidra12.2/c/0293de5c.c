/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293de5c; name: FUN_0293de5c
 */


void FUN_0293de5c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  *param_2 = 0;
  if (*(char *)((long)param_3 + 6) != '\0') {
    uVar4 = 0;
    do {
      FUN_01582534(param_1);
      uVar1 = FUN_014813e4();
      uVar2 = FUN_01481400(uVar1,param_3[uVar4 + 2]);
      if ((uVar2 & 1) != 0) {
        plVar3 = (long *)FUN_014813f4(param_1,param_3[uVar4 + 2]);
        uVar2 = (**(code **)(*plVar3 + 0x200))();
        if ((uVar2 & 1) == 0) {
          uVar1 = FUN_01243584(param_1);
          FUN_0124fcd8(uVar1,plVar3,param_3[uVar4 + 0xd],*(undefined1 *)(param_3 + 0x18),*param_3,
                       *(char *)(param_3 + 1) == '\0');
          if (*(char *)((long)param_3 + 5) == '\0') {
            FUN_02984638(param_1,plVar3);
          }
          *param_2 = 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)((long)param_3 + 6));
  }
  return;
}


