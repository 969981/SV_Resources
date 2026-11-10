/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fb700; name: FUN_003fb700
 */


ulong FUN_003fb700(long *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    bVar1 = *param_2 == '-';
    lVar8 = 0;
    if (bVar1) {
      param_2 = param_2 + 1;
    }
    uVar10 = 0x1f;
    do {
      iVar2 = FUN_003f6e20(param_2[lVar8],0x10);
      if (iVar2 == 0) {
        if ((uint)(lVar8 - 1U) < 0x1fffffff) {
          uVar5 = (ulong)bVar1 + lVar8;
          if (param_1 == (long *)0x0) goto LAB_003fb794;
          plVar6 = (long *)*param_1;
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)FUN_003eb5b0();
            if (plVar6 == (long *)0x0) goto LAB_003fb790;
          }
          else {
            FUN_003eb9f0(plVar6,0);
          }
          if (((uint)lVar8 < 0x1ffffff9) &&
             (((int)(uVar10 >> 5) <= *(int *)((long)plVar6 + 0xc) ||
              (lVar4 = FUN_003eb670(plVar6), lVar4 != 0)))) {
            uVar11 = 0;
            param_2 = param_2 + lVar8;
            uVar10 = ((uint)(lVar8 - 1U >> 3) & 0x1fffffff) + 1;
            do {
              lVar4 = lVar8 + -8;
              if (7 < lVar8) {
                lVar8 = 8;
              }
              uVar12 = 0;
              lVar9 = (long)(int)lVar8 + 1;
              pcVar7 = param_2 + -(long)(int)lVar8;
              do {
                uVar3 = FUN_0045ae90(*pcVar7);
                lVar9 = lVar9 + -1;
                uVar12 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU) | uVar12 << 4;
                pcVar7 = pcVar7 + 1;
              } while (1 < lVar9);
              *(uint *)(*plVar6 + uVar11 * 4) = uVar12;
              uVar11 = uVar11 + 1;
              param_2 = param_2 + -8;
              lVar8 = lVar4;
            } while (uVar11 != uVar10);
            *(uint *)(plVar6 + 1) = uVar10;
            FUN_003ebc30(plVar6);
            *param_1 = (long)plVar6;
            if ((int)plVar6[1] != 0) {
              *(uint *)(plVar6 + 2) = (uint)bVar1;
            }
            goto LAB_003fb794;
          }
          goto LAB_003fb780;
        }
        break;
      }
      lVar8 = lVar8 + 1;
      uVar10 = uVar10 + 4;
    } while (lVar8 != 0x20000000);
    plVar6 = (long *)0x0;
LAB_003fb780:
    if (*param_1 == 0) {
      FUN_003eb520(plVar6);
    }
  }
LAB_003fb790:
  uVar5 = 0;
LAB_003fb794:
  return uVar5 & 0xffffffff;
}


