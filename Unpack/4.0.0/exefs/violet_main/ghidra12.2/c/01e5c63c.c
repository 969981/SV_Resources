/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5c63c; name: FUN_01e5c63c
 */


void FUN_01e5c63c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined1 local_24 [4];
  
  lVar5 = (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 3) * 0x6db6db6db6db6db7;
  local_24[0] = (undefined1)lVar5;
  if ((((uint)*(byte *)(param_1 + 0x198) < ((uint)lVar5 & 0xff)) &&
      (lVar5 = FUN_01e5c418(param_1 + 0xf8,param_1 + 0x198), lVar5 != 0)) &&
     (lVar5 = FUN_01e5c520(lVar5 + 0x18,local_24), lVar5 != 0)) {
    plVar3 = *(long **)(lVar5 + 0x20);
    for (plVar2 = *(long **)(lVar5 + 0x18); plVar2 != plVar3; plVar2 = plVar2 + 8) {
      *(undefined4 *)(plVar2 + 7) = 0;
      lVar5 = *(long *)(param_1 + 0x40);
      lVar8 = *(long *)(param_1 + 0x48);
      if (lVar8 != lVar5) {
        fVar10 = 0.0;
        lVar9 = 0x34;
        uVar6 = 0;
        bVar7 = 0;
        iVar4 = 0;
        do {
          uVar1 = (long)iVar4 + 1;
          if (uVar1 < (ulong)(plVar2[1] - *plVar2 >> 1)) {
            bVar7 = *(byte *)(*plVar2 + uVar1 * 2);
            iVar4 = (int)uVar1;
          }
          if (bVar7 < 0xb) {
            fVar10 = fVar10 + *(float *)(lVar5 + lVar9) *
                              *(float *)(param_1 + (ulong)bVar7 * 4 + 0x160);
            *(float *)(plVar2 + 7) = fVar10;
            lVar5 = *(long *)(param_1 + 0x40);
            lVar8 = *(long *)(param_1 + 0x48);
          }
          uVar6 = uVar6 + 1;
          lVar9 = lVar9 + 0x38;
        } while (uVar6 < (ulong)((lVar8 - lVar5 >> 3) * 0x6db6db6db6db6db7));
      }
    }
  }
  return;
}


