/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011db23c; name: FUN_011db23c
 */


void FUN_011db23c(long param_1)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *__dest;
  long *__src;
  long *plVar6;
  undefined1 local_240;
  undefined2 local_23f;
  
  if ((*(long *)(param_1 + 0x50) != 0) && (FUN_011db3e4(param_1), *(long *)(param_1 + 0x50) != 0)) {
    __dest = *(long **)(param_1 + 0x90);
    plVar6 = *(long **)(param_1 + 0x98);
    if (__dest != plVar6) {
      do {
        __src = __dest + 2;
        lVar5 = *__dest;
        while (lVar5 == 0) {
          sVar2 = (long)plVar6 - (long)__src;
          if (sVar2 == 0) {
            *(long **)(param_1 + 0x98) = __dest;
            goto LAB_011db27c;
          }
          memmove(__dest,__src,sVar2);
          plVar6 = (long *)((long)__dest + sVar2);
          *(long **)(param_1 + 0x98) = plVar6;
          lVar5 = *__dest;
        }
        uVar4 = FUN_0111b1ec(*(undefined8 *)(param_1 + 0x50));
        if (((uVar4 & 1) == 0) || (plVar6 = *(long **)(param_1 + 0x50), plVar6 == (long *)0x0)) {
LAB_011db374:
          __dest = __src;
        }
        else {
          memset(&local_240,0,0x200);
          local_240 = 3;
          local_23f = (undefined2)__dest[1];
          uVar4 = (**(code **)(*plVar6 + 0x68))(plVar6,&local_240,3,__dest);
          if ((uVar4 & 1) == 0) goto LAB_011db374;
          sVar2 = *(long *)(param_1 + 0x98) - (long)__src;
          if (sVar2 != 0) {
            memmove(__dest,__src,sVar2);
          }
          *(size_t *)(param_1 + 0x98) = (long)__dest + sVar2;
        }
        plVar6 = *(long **)(param_1 + 0x98);
      } while (__dest != plVar6);
    }
  }
LAB_011db27c:
  lVar5 = *(long *)(param_1 + 200);
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar5 != lVar1) {
    if (*(long *)(lVar5 + 0x18) != 0) {
      FUN_011db690();
    }
    while (lVar3 = lVar5 + 0x68, lVar3 != lVar1) {
      plVar6 = (long *)(lVar5 + 0x80);
      lVar5 = lVar3;
      if (*plVar6 != 0) {
        FUN_011db690();
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x100);
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar5 != lVar1) {
    if (*(long *)(lVar5 + 0x18) != 0) {
      FUN_011db690();
    }
    while (lVar3 = lVar5 + 0x48, lVar3 != lVar1) {
      plVar6 = (long *)(lVar5 + 0x60);
      lVar5 = lVar3;
      if (*plVar6 != 0) {
        FUN_011db690();
      }
    }
  }
  return;
}


