/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002da408; name: FUN_002da408
 */


ulong FUN_002da408(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  if ((int)param_2 == 0) {
    uVar6 = FUN_002da5c8(param_1);
    uVar8 = uVar6 >> 0x20;
  }
  else if ((*(char *)(param_1 + 0x48) == '\0') &&
          (uVar3 = *(uint *)(param_1 + 0x68), (int)uVar3 < *(int *)(param_1 + 0x6c))) {
    uVar4 = *(uint *)(param_1 + 0x60);
    if ((int)uVar4 <= (int)uVar3) {
      uVar1 = 8;
      if (uVar4 != 0) {
        uVar1 = uVar4;
      }
      do {
        uVar4 = uVar1;
        uVar1 = uVar4 << 1;
      } while ((int)uVar4 <= (int)uVar3);
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                    -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3
                                   );
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
      }
      uVar3 = uVar4 - *(int *)(param_1 + 0x68);
      memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
             -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
      lVar2 = *(long *)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __dest;
      if (lVar2 != 0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
      uVar3 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x60) = uVar4;
    }
    uVar6 = (ulong)uVar3;
    *(uint *)(param_1 + 0x68) = uVar3 + 1;
    if ((int)uVar3 < 0) {
      uVar8 = 0;
      uVar6 = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x58) + uVar6 * 8;
      uVar8 = param_2 >> 0x20;
      if ((param_3 & 1) == 0) {
        FUN_002d0308(lVar2,param_2 & 0xffffffff,0);
        uVar3 = uVar3 << 1 | 1;
      }
      else {
        FUN_002d0308(lVar2,0,param_2 & 0xffffffff);
        if (uVar3 == 0) goto LAB_002da51c;
        uVar3 = uVar3 << 1;
      }
      uVar8 = (ulong)uVar3;
      iVar7 = (int)(param_2 >> 0x20);
      if (iVar7 != 0) {
        lVar2 = *(long *)(param_1 + 0x58);
        do {
          while( true ) {
            uVar4 = uVar3;
            if ((uVar4 & 1) == 0) break;
            uVar3 = *(uint *)(lVar2 + (ulong)(uVar4 >> 1) * 8 + 4);
            if (uVar3 == 0) goto LAB_002da590;
          }
          uVar3 = *(uint *)(lVar2 + (ulong)(uVar4 >> 1) * 8) >> 4;
        } while (uVar3 != 0);
LAB_002da590:
        if ((uVar4 & 1) == 0) {
          lVar5 = (ulong)(uVar4 >> 1) * 8;
          uVar3 = *(uint *)(lVar2 + lVar5);
          *(uint *)(lVar2 + lVar5) = uVar3 & 8 | iVar7 << 4 | uVar3 & 7;
        }
        else {
          *(int *)(lVar2 + (ulong)(uVar4 >> 1) * 8 + 4) = iVar7;
        }
      }
    }
  }
  else {
    uVar8 = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    uVar6 = 0;
  }
LAB_002da51c:
  return uVar6 & 0xffffffff | uVar8 << 0x20;
}


