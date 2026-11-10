/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a00d0; name: FUN_030a00d0
 */


undefined8 FUN_030a00d0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined4 local_48 [2];
  
  iVar7 = 0;
  iVar9 = *(int *)(param_1 + 0x20);
  do {
    while( true ) {
      if (iVar7 == iVar9) goto LAB_030a0144;
      uVar8 = iVar7 + iVar9;
      uVar10 = uVar8;
      if ((int)uVar8 < 0) {
        uVar10 = uVar8 + 1;
      }
      iVar1 = (int)uVar10 >> 1;
      lVar11 = *(long *)(param_1 + 0x18);
      uVar2 = *(uint *)(lVar11 + (long)iVar1 * 0xc);
      if (uVar2 <= param_2) break;
      iVar9 = iVar1;
    }
    iVar7 = iVar1 + 1;
  } while (uVar2 < param_2);
  if (uVar8 + 3 < 2) {
LAB_030a0144:
    uVar4 = 0;
  }
  else {
    lVar3 = (long)((ulong)uVar10 << 0x20) >> 0x21;
    iVar7 = *(int *)(param_1 + 0x14);
    if (*(int *)(lVar11 + lVar3 * 0xc + 8) != iVar7) {
      local_48[0] = *(undefined4 *)(lVar11 + lVar3 * 0xc + 4);
      lVar5 = FUN_030a1248(param_1 + 0x28,local_48);
      if (lVar5 == 0) {
        uVar10 = 0;
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(uint *)(lVar5 + 4);
        uVar10 = ((int)lVar5 - (int)*(undefined8 *)(param_1 + 0x38)) * 0x20000000;
      }
      lVar5 = *(long *)(param_1 + 0x28) + (long)(int)(uVar8 | uVar10) * 0x30 + 8;
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 0x48) + lVar11 * 8) == lVar5) {
            *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar3 * 0xc + 8) =
                 *(undefined4 *)(param_1 + 0x14);
            goto LAB_030a0258;
          }
          uVar6 = FUN_030a16a0(lVar5);
          if ((uVar6 & 1) != 0) goto LAB_030a0144;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(param_1 + 0x50));
        iVar7 = *(int *)(param_1 + 0x14);
        lVar11 = *(long *)(param_1 + 0x18);
      }
      *(int *)(lVar11 + lVar3 * 0xc + 8) = iVar7;
      iVar7 = *(int *)(param_1 + 0x50);
      lVar11 = (long)iVar7;
      if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= iVar7) {
        FUN_030a12bc((long *)(param_1 + 0x48),lVar11 + 1);
        iVar7 = *(int *)(param_1 + 0x50);
      }
      *(long *)(*(long *)(param_1 + 0x48) + (long)iVar7 * 8) = lVar5;
      *(int *)(param_1 + 0x50) = (int)(lVar11 + 1);
    }
LAB_030a0258:
    uVar4 = 1;
  }
  return uVar4;
}


