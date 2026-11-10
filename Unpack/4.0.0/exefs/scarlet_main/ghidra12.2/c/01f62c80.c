/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f62c80; name: FUN_01f62c80
 */


undefined8 FUN_01f62c80(long param_1,long param_2,void *param_3,int param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((((param_3 != (void *)0x0) && (*(long *)(param_1 + 0x90) != 0)) &&
      (*(long *)(param_1 + 0xb0) != 0)) && (*(long *)(param_1 + 0xd0) != 0)) {
    plVar1 = (long *)(param_1 + 0x88);
    lVar2 = *plVar1;
    if ((lVar2 == 0) || (lVar2 != param_2)) {
      lVar3 = *(long *)(param_1 + 0xa8);
      if ((lVar3 == 0) || (lVar3 != param_2)) {
        lVar4 = *(long *)(param_1 + 200);
        if ((lVar4 == 0) || (lVar4 != param_2)) {
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else if (lVar3 == 0) {
            lVar2 = 1;
            plVar1 = (long *)(param_1 + 0xa8);
          }
          else {
            if (lVar4 != 0) {
              return 0;
            }
            lVar2 = 2;
            plVar1 = (long *)(param_1 + 200);
          }
          *plVar1 = param_2;
          param_1 = param_1 + lVar2 * 0x20;
          *(int *)(param_1 + 0xa0) = param_4;
          *(int *)(param_1 + 0xa4) = param_5;
          memcpy(*(void **)(param_1 + 0x90),param_3,(ulong)(uint)(param_4 * param_5 * 3) / 6);
          return 1;
        }
      }
    }
  }
  return 0;
}


