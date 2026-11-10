/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324f794; name: FUN_0324f794
 */


void FUN_0324f794(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x30);
    lVar11 = *(long *)(param_2 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < (int)uVar2) {
      FUN_032557dc((long *)(param_1 + 0x28),PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    uVar3 = *(uint *)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x28);
    uVar1 = uVar3;
    if ((int)uVar2 <= (int)uVar3) {
      uVar1 = uVar2;
    }
    if ((lVar5 != lVar11) && (0 < (int)uVar1)) {
      if (uVar1 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        puVar9 = (undefined8 *)(lVar11 + 0x10);
        puVar7 = (undefined8 *)(lVar5 + 0x10);
        do {
          puVar7[-1] = puVar9[-1];
          puVar7[-2] = puVar9[-2];
          puVar7[1] = puVar9[1];
          uVar10 = uVar10 + 2;
          *puVar7 = *puVar9;
          puVar9 = puVar9 + 4;
          puVar7 = puVar7 + 4;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar10);
      }
      if ((uVar1 & 1) != 0) {
        puVar9 = (undefined8 *)(lVar11 + uVar10 * 0x10);
        puVar7 = (undefined8 *)(lVar5 + uVar10 * 0x10);
        puVar7[1] = puVar9[1];
        *puVar7 = *puVar9;
      }
      lVar5 = *(long *)(param_1 + 0x28);
    }
    if ((int)uVar3 < (int)uVar2) {
      puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 0x10);
      puVar7 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 0x10);
      if (uVar2 != uVar1 + 1) {
        iVar4 = -(uVar2 - uVar1 & 0xfffffffe);
        puVar6 = puVar7;
        puVar8 = puVar9;
        do {
          puVar6[1] = puVar8[1];
          *puVar6 = *puVar8;
          puVar6[3] = puVar8[3];
          puVar9 = puVar8 + 4;
          puVar7 = puVar6 + 4;
          iVar4 = iVar4 + 2;
          puVar6[2] = puVar8[2];
          puVar6 = puVar7;
          puVar8 = puVar9;
        } while (iVar4 != 0);
      }
      if ((uVar2 - uVar1 & 1) != 0) {
        puVar7[1] = puVar9[1];
        *puVar7 = *puVar9;
      }
    }
    *(uint *)(param_1 + 0x30) = uVar2;
  }
  return;
}


