/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a4660; name: FUN_003a4660
 */


ulong FUN_003a4660(long param_1,ulong param_2,ulong param_3,int param_4,int param_5,ulong *param_6)

{
  char *__src;
  void *__dest;
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *__src_00;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
LAB_003a477c:
    uVar6 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x968);
    if (lVar4 == 0) {
      iVar1 = FUN_003a69d0(param_1);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      lVar4 = *(long *)(param_1 + 0x968);
    }
    uVar6 = *(ulong *)(param_1 + 0x988);
    uVar2 = ~((int)lVar4 + 4U);
    uVar9 = (ulong)uVar2 & 7;
    if (param_4 == 0) {
      if (uVar6 == 0) {
LAB_003a4720:
        *(ulong *)(param_1 + 0x980) = uVar9;
        uVar5 = uVar9;
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0x980);
        if ((4 < uVar6) && ((uVar2 & 7) != 0)) {
          __src = (char *)(lVar4 + uVar5);
          if ((*__src == '\x17') &&
             (0x7f < ((*(ushort *)(__src + 3) & 0xff00) << 8 | (uint)*(ushort *)(__src + 3) << 0x18)
                     >> 0x10)) {
            memmove((void *)(lVar4 + uVar9),__src,uVar6);
            lVar4 = *(long *)(param_1 + 0x968);
            goto LAB_003a4720;
          }
        }
      }
      lVar8 = 0;
      __src_00 = (void *)(lVar4 + uVar5);
      *(void **)(param_1 + 0x1890) = __src_00;
      *(undefined8 *)(param_1 + 0x1898) = 0;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x1898);
      __src_00 = *(void **)(param_1 + 0x1890);
    }
    __dest = (void *)(lVar4 + uVar9);
    if ((param_5 == 1) && (__src_00 != __dest)) {
      memmove(__dest,__src_00,lVar8 + uVar6);
      *(void **)(param_1 + 0x1890) = __dest;
      *(ulong *)(param_1 + 0x980) = lVar8 + uVar9;
    }
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60);
    uVar9 = param_2;
    if ((uVar2 >> 3 & 1) != 0) {
      if ((param_4 != 0) && (uVar6 == 0)) goto LAB_003a477c;
      uVar9 = uVar6;
      if (param_2 <= uVar6 || uVar6 == 0) {
        uVar9 = param_2;
      }
    }
    if (uVar6 < uVar9) {
      uVar5 = *(long *)(param_1 + 0x978) - *(long *)(param_1 + 0x980);
      if (uVar5 < uVar9) {
        FUN_003c3950(param_1,0x50,0x95,0x44,"external/openssl/ssl/record/rec_layer_s3.c",0x10b);
        uVar6 = 0xffffffff;
      }
      else {
        uVar7 = uVar9;
        if (uVar9 <= param_3) {
          uVar7 = param_3;
        }
        if (uVar7 <= uVar5) {
          uVar5 = uVar7;
        }
        if (*(int *)(param_1 + 0x950) == 0 && (uVar2 & 8) == 0) {
          uVar5 = uVar9;
        }
        do {
          piVar3 = __errno_location();
          *piVar3 = 0;
          if (*(long *)(param_1 + 0x10) == 0) {
            FUN_003c3950(param_1,0x50,0x95,0xd3,"external/openssl/ssl/record/rec_layer_s3.c",0x12d);
            uVar7 = 0xffffffff;
LAB_003a48d8:
            *(ulong *)(param_1 + 0x988) = uVar6;
            if ((*(byte *)(param_1 + 0x698) >> 4 & 1) == 0) {
              return uVar7;
            }
            if (lVar8 + uVar6 != 0) {
              return uVar7;
            }
            if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
              FUN_003a6d20(param_1);
              return uVar7;
            }
            return uVar7;
          }
          *(undefined4 *)(param_1 + 0x28) = 3;
          uVar2 = FUN_003e8ce0(*(long *)(param_1 + 0x10),(long)__dest + uVar6 + lVar8,
                               (int)uVar5 - (int)uVar6);
          uVar7 = (ulong)uVar2;
          if ((int)uVar2 < 1) goto LAB_003a48d8;
          uVar6 = uVar6 + uVar7;
          uVar7 = uVar6;
          if (((uint)(uVar6 < uVar9) &
              (*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 8) >> 3) == 0) {
            uVar7 = uVar9;
          }
          uVar9 = uVar7;
        } while (uVar6 < uVar7);
        *(ulong *)(param_1 + 0x988) = uVar6 - uVar7;
        *(ulong *)(param_1 + 0x980) = *(long *)(param_1 + 0x980) + uVar7;
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(ulong *)(param_1 + 0x1898) = *(long *)(param_1 + 0x1898) + uVar7;
        *param_6 = uVar7;
      }
    }
    else {
      *(ulong *)(param_1 + 0x1898) = *(long *)(param_1 + 0x1898) + uVar9;
      *(ulong *)(param_1 + 0x988) = uVar6 - uVar9;
      *(ulong *)(param_1 + 0x980) = *(long *)(param_1 + 0x980) + uVar9;
      *param_6 = uVar9;
      uVar6 = 1;
    }
  }
  return uVar6;
}


