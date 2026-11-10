/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002da0b8; name: FUN_002da0b8
 */


ulong FUN_002da0b8(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  uVar9 = param_3 >> 0x20;
  if ((int)param_2 == 0) {
    uVar5 = param_3 & 0xffffffff;
  }
  else {
    uVar7 = param_2 >> 0x20;
    if ((int)param_3 == 0) {
      uVar5 = param_2 & 0xffffffff;
      uVar9 = uVar7;
    }
    else if ((*(char *)(param_1 + 0x48) == '\0') &&
            (uVar6 = *(uint *)(param_1 + 0x68), (int)uVar6 < *(int *)(param_1 + 0x6c))) {
      uVar4 = *(uint *)(param_1 + 0x60);
      if ((int)uVar4 <= (int)uVar6) {
        uVar1 = 8;
        if (uVar4 != 0) {
          uVar1 = uVar4;
        }
        do {
          uVar4 = uVar1;
          uVar1 = uVar4 << 1;
        } while ((int)uVar4 <= (int)uVar6);
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                      -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar4 << 3);
        if (*(void **)(param_1 + 0x58) != (void *)0x0) {
          memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
        }
        uVar6 = uVar4 - *(int *)(param_1 + 0x68);
        memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
               -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
        lVar2 = *(long *)(param_1 + 0x58);
        *(void **)(param_1 + 0x58) = __dest;
        if (lVar2 != 0) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
        uVar6 = *(uint *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x60) = uVar4;
      }
      uVar5 = (ulong)uVar6;
      *(uint *)(param_1 + 0x68) = uVar6 + 1;
      if ((int)uVar6 < 0) {
        uVar5 = 0;
        uVar9 = 0;
      }
      else {
        FUN_002d0308(*(long *)(param_1 + 0x58) + uVar5 * 8,param_2 & 0xffffffff,param_3 & 0xffffffff
                    );
        uVar6 = (uint)(param_2 >> 0x20);
        if (uVar6 == 0) {
        }
        else {
          iVar8 = (int)(param_3 >> 0x20);
          uVar9 = uVar7;
          if (iVar8 != 0) {
            lVar2 = *(long *)(param_1 + 0x58);
            do {
              while (uVar4 = uVar6, (uVar4 & 1) == 0) {
                uVar6 = *(uint *)(lVar2 + (ulong)(uVar4 >> 1) * 8) >> 4;
                if (uVar6 == 0) goto LAB_002da204;
              }
              uVar6 = *(uint *)(lVar2 + (ulong)(uVar4 >> 1) * 8 + 4);
            } while (uVar6 != 0);
LAB_002da204:
            if ((uVar4 & 1) == 0) {
              lVar3 = (ulong)(uVar4 >> 1) * 8;
              uVar6 = *(uint *)(lVar2 + lVar3);
              *(uint *)(lVar2 + lVar3) = uVar6 & 8 | iVar8 << 4 | uVar6 & 7;
            }
            else {
              *(int *)(lVar2 + (ulong)(uVar4 >> 1) * 8 + 4) = iVar8;
            }
          }
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 1;
      uVar5 = 0;
      uVar9 = 0;
    }
  }
  return uVar5 | uVar9 << 0x20;
}


