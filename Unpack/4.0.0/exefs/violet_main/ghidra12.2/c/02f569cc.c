/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f569cc; name: FUN_02f569cc
 */


void FUN_02f569cc(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar7 = *(long *)(*param_1 + 0x488);
  lVar11 = *(long *)(lVar7 + 8);
  uVar3 = *(uint *)(lVar7 + 0x2c);
  if (*(int *)(lVar7 + 0x28) == 0) {
    return;
  }
  uVar1 = uVar3 + 1;
  if (*(int *)(lVar11 + 0x30) == 0x7fffffff) {
    uVar12 = 0;
    if (uVar1 < 2) {
      uVar3 = 0;
    }
    do {
      if (uVar3 == uVar12) {
        return;
      }
      uVar12 = uVar12 + 1;
    } while (*(int *)(lVar11 + (uVar12 & 0xffffffff) * 0x68 + 0x30) == 0x7fffffff);
    if ((int)uVar12 == -1) {
      return;
    }
  }
  else {
    uVar12 = 0;
  }
  do {
    if ((*(byte *)(lVar11 + (uVar12 & 0xffffffff) * 0x68 + 0x42) >> 2 & 1) != 0) {
      lVar7 = lVar11 + (uVar12 & 0xffffffff) * 0x68;
      uVar8 = *(ulong *)(lVar7 + 8);
      uVar6 = (uint)uVar8;
      uVar3 = uVar6 & 0xffffff;
      if (uVar3 != 0xffffff) {
        uVar4 = *(uint *)(*param_1 + 0x40);
        if ((uVar3 < uVar4) &&
           (lVar5 = *(long *)(*param_1 + 0x38),
           (*(byte *)(lVar5 + (ulong)uVar3 * 0xc0 + 0x54) & 3) != 0)) {
          uVar10 = *(ulong *)(lVar7 + 0x18);
          uVar9 = (uint)uVar10;
          uVar2 = uVar9 & 0xffffff;
          if ((((*(uint *)(lVar5 + (ulong)uVar3 * 0xc0 + 0x50) == uVar6 && uVar2 != 0xffffff) &&
                uVar2 < uVar4) &&
              ((((*(byte *)(lVar5 + (ulong)uVar2 * 0xc0 + 0x54) & 3) != 0 &&
                (*(uint *)(lVar5 + (ulong)uVar2 * 0xc0 + 0x50) == uVar9)) &&
               (uVar8 = uVar8 & 0xffffff, (*(byte *)(lVar5 + uVar8 * 0xc0 + 0x88) & 1) != 0)))) &&
             (((uVar10 = uVar10 & 0xffffff, (*(byte *)(lVar5 + uVar10 * 0xc0 + 0x88) & 1) != 0 &&
               ((*(byte *)(lVar5 + uVar8 * 0xc0 + 0x54) >> 3 & 1) == 0)) &&
              ((*(byte *)(lVar5 + uVar10 * 0xc0 + 0x54) >> 3 & 1) == 0)))) {
            FUN_02f56b6c(param_1);
          }
        }
      }
    }
    do {
      uVar3 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar3;
      if (uVar1 <= uVar3) {
        return;
      }
    } while (*(int *)(lVar11 + (ulong)uVar3 * 0x68 + 0x30) == 0x7fffffff);
  } while( true );
}


