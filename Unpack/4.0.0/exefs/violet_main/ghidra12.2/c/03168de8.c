/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03168de8; name: FUN_03168de8
 */


uint FUN_03168de8(long param_1,uint param_2)

{
  long lVar1;
  ushort *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar5 = *(uint *)(param_1 + 0x138);
  lVar11 = (long)(int)uVar5;
  plVar3 = (long *)(param_1 + 0x130);
  uVar10 = uVar5 + 1;
  lVar9 = lVar11;
  do {
    if (lVar9 < 1) {
      uVar10 = uVar5 & (int)uVar5 >> 0x1f;
      break;
    }
    lVar1 = lVar9 * 4;
    uVar10 = uVar10 - 1;
    lVar9 = lVar9 + -1;
  } while (param_2 <= *(uint *)(*plVar3 + lVar1 + -4));
  if (uVar10 == uVar5) {
    lVar9 = lVar11 + 1;
    if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) <= (int)uVar5) {
      FUN_03169288(plVar3,PTR_PTR_047d1a50,lVar9);
      lVar11 = (long)*(int *)(param_1 + 0x138);
    }
    *(uint *)(*(long *)(param_1 + 0x130) + lVar11 * 4) = param_2;
    *(int *)(param_1 + 0x138) = (int)lVar9;
  }
  else if (*(uint *)(*plVar3 + (long)(int)uVar10 * 4) != param_2) {
    uVar6 = *(uint *)(param_1 + 0x128);
    uVar8 = uVar5;
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        puVar2 = (ushort *)(*(long *)(param_1 + 0x120) + (ulong)(uVar8 & 0xffff) * 8);
        uVar7 = *puVar2;
        if ((uVar10 & 0xffff) <= (uint)uVar7) {
          *puVar2 = uVar7 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      uVar8 = *(uint *)(param_1 + 0x138);
    }
    uVar12 = (ulong)(int)uVar10;
    if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) <= (int)uVar8) {
      FUN_03168124(plVar3,PTR_PTR_047d1a50,(long)(int)(uVar8 + 1));
    }
    *(uint *)(param_1 + 0x138) = uVar8 + 1;
    if ((int)uVar10 < (int)uVar5) {
      lVar9 = lVar11;
      if ((uVar5 - uVar10 & 1) != 0) {
        lVar9 = lVar11 + -1;
        *(undefined4 *)(*plVar3 + lVar11 * 4) = *(undefined4 *)(*plVar3 + lVar9 * 4);
      }
      if (~uVar12 + lVar11 != 0) {
        do {
          puVar4 = (undefined4 *)(*plVar3 + lVar9 * 4);
          *puVar4 = puVar4[-1];
          lVar11 = *plVar3 + lVar9 * 4;
          lVar9 = lVar9 + -2;
          *(undefined4 *)(lVar11 + -4) = *(undefined4 *)(lVar11 + -8);
        } while ((long)uVar12 < lVar9);
      }
    }
    *(uint *)(*plVar3 + uVar12 * 4) = param_2;
  }
  return uVar10;
}


