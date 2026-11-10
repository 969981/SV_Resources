/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a5edc; name: FUN_001a5edc
 */


long FUN_001a5edc(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 uint param_6)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)(param_1 + 0x40);
  lVar5 = lVar7 + 1;
  lVar4 = param_3;
  if (param_3 < lVar5) {
    lVar4 = lVar7 + 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (param_4 <= *(long *)(param_1 + 0x48)) {
    lVar3 = param_4;
  }
  if (lVar4 < lVar3) {
    lVar7 = (long)(int)param_6;
    lVar5 = lVar4;
    if (((int)lVar3 - (int)lVar4 & 1U) != 0) {
      *(undefined4 *)(param_2 + (lVar4 - param_3) * lVar7 * 8) = 0;
      lVar5 = lVar4 + 1;
    }
    if (lVar3 != lVar4 + 1) {
      lVar10 = lVar5 - param_3;
      lVar11 = param_2;
      do {
        lVar5 = lVar5 + 2;
        *(undefined4 *)(lVar11 + lVar10 * lVar7 * 8) = 0;
        *(undefined4 *)(lVar11 + (lVar10 + 1) * lVar7 * 8) = 0;
        lVar11 = lVar11 + lVar7 * 0x10;
      } while (lVar5 < lVar3);
    }
    lVar7 = *(long *)(param_1 + 0x40);
    lVar5 = lVar7 + 1;
  }
  if (lVar4 <= lVar5 && lVar5 < lVar3) {
    piVar2 = (int *)(param_2 + (lVar5 - param_3) * (long)(int)param_6 * 8);
    *piVar2 = *(int *)(param_1 + 0x50) + -1;
    piVar2[1] = *(int *)(param_1 + 0x54);
    piVar2[2] = 0;
    lVar7 = *(long *)(param_1 + 0x40);
  }
  lVar5 = lVar7 + 2;
  if (lVar7 + 2 <= lVar4) {
    lVar5 = lVar4;
  }
  iVar6 = (int)lVar5;
  uVar9 = (ulong)(uint)((int)lVar7 - iVar6) & 3;
  lVar4 = uVar9 + lVar5;
  if (lVar4 < lVar3) {
    iVar6 = -(((int)lVar7 - iVar6 & 3U) + iVar6);
    puVar8 = (undefined4 *)(param_2 + ((lVar5 + uVar9) - param_3) * (long)(int)param_6 * 8 + 4);
    do {
      iVar1 = iVar6 + *(int *)(param_1 + 0x48);
      iVar6 = iVar6 + -4;
      puVar8[-1] = iVar1;
      lVar4 = lVar4 + 4;
      *puVar8 = *(undefined4 *)(param_1 + 0x54);
      puVar8[1] = 0;
      puVar8 = (undefined4 *)
               ((long)puVar8 +
               (-(ulong)(param_6 >> 0x1f) & 0xffffffe000000000 | (ulong)param_6 << 5));
    } while (lVar4 < lVar3);
  }
  if (lVar3 == *(long *)(param_1 + 0x48)) {
    if (lVar3 < *(long *)(param_1 + 0x30)) {
      FUN_001a608c(param_1 + 0x58,*(long *)(param_1 + 8) + *(long *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x50));
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00164100(param_1 + 0xa0,*(long *)(param_1 + 0x38),
                   *(long *)(param_1 + 8) + *(long *)(param_1 + 0x48),
                   *(undefined8 *)(param_1 + 0x18),0x40000000);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return lVar3;
}


