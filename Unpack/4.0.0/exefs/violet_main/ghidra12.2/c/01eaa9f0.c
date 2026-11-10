/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaa9f0; name: FUN_01eaa9f0
 */


void FUN_01eaa9f0(long param_1,int param_2,long param_3,undefined8 param_4)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *__src;
  long *__dest;
  uint local_34;
  
  if (param_2 == 1) {
    lVar2 = FUN_0156cb10(param_4);
    if (lVar2 == param_3) {
      FUN_01ea9c0c(param_1);
      return;
    }
    FUN_01eaad1c(param_1,param_3);
    FUN_01eaada0(param_1,param_3);
    FUN_01eaae24(param_1,param_3);
    return;
  }
  if (param_2 == 0) {
    lVar2 = FUN_0156cb10(param_4);
    if (lVar2 == param_3) {
      FUN_01a0aca4(param_1);
      return;
    }
    FUN_01eaab88(param_1,param_3);
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar4 = *(long **)(param_1 + 0x68);
      __dest = *(long **)(param_1 + 0x60);
      if (*(long **)(param_1 + 0x60) != plVar4) {
        do {
          __src = __dest + 2;
          lVar2 = *__dest;
          while (lVar2 == 0) {
            sVar1 = (long)plVar4 - (long)__src;
            if (sVar1 == 0) {
              *(long **)(param_1 + 0x68) = __dest;
              return;
            }
            memmove(__dest,__src,sVar1);
            plVar4 = (long *)((long)__dest + sVar1);
            *(long **)(param_1 + 0x68) = plVar4;
            lVar2 = *__dest;
          }
          uVar3 = FUN_0111b1ec(*(undefined8 *)(param_1 + 0x50));
          if ((uVar3 & 1) != 0) {
            local_34 = (uint)*(uint3 *)(__dest + 1);
            uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x68))
                              (*(long **)(param_1 + 0x50),&local_34,4,__dest);
            if ((uVar3 & 1) != 0) {
              sVar1 = *(long *)(param_1 + 0x68) - (long)__src;
              if (sVar1 != 0) {
                memmove(__dest,__src,sVar1);
              }
              *(size_t *)(param_1 + 0x68) = (long)__dest + sVar1;
              __src = __dest;
            }
          }
          plVar4 = *(long **)(param_1 + 0x68);
          __dest = __src;
        } while (__src != plVar4);
      }
    }
  }
  return;
}


