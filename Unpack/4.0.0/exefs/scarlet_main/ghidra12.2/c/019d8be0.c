/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d8be0; name: FUN_019d8be0
 */


undefined8 FUN_019d8be0(long param_1,long param_2,void *param_3,int param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((((param_3 != (void *)0x0) && (*(long *)(param_1 + 0x30) != 0)) &&
      (*(long *)(param_1 + 0x50) != 0)) && (*(long *)(param_1 + 0x70) != 0)) {
    plVar1 = (long *)(param_1 + 0x28);
    lVar2 = *plVar1;
    if ((lVar2 == 0) || (lVar2 != param_2)) {
      lVar3 = *(long *)(param_1 + 0x48);
      if ((lVar3 == 0) || (lVar3 != param_2)) {
        lVar4 = *(long *)(param_1 + 0x68);
        if ((lVar4 == 0) || (lVar4 != param_2)) {
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else if (lVar3 == 0) {
            lVar2 = 1;
            plVar1 = (long *)(param_1 + 0x48);
          }
          else {
            if (lVar4 != 0) {
              return 0;
            }
            lVar2 = 2;
            plVar1 = (long *)(param_1 + 0x68);
          }
          *plVar1 = param_2;
          param_1 = param_1 + lVar2 * 0x20;
          *(int *)(param_1 + 0x40) = param_4;
          *(int *)(param_1 + 0x44) = param_5;
          memcpy(*(void **)(param_1 + 0x30),param_3,(ulong)(uint)(param_4 * param_5 * 3) / 6);
          return 1;
        }
      }
    }
  }
  return 0;
}


