/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308fff8; name: FUN_0308fff8
 */


void FUN_0308fff8(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < (int)uVar2) {
    FUN_03090d20(param_2,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar2);
  }
  iVar3 = (int)param_2[1];
  if (iVar3 < (int)uVar2) {
    lVar8 = *param_2;
    *(uint *)(param_2 + 1) = uVar2;
    puVar5 = (undefined8 *)(lVar8 + (long)iVar3 * 8);
    do {
      puVar6 = puVar5 + 1;
      *puVar5 = 0x7fffffff00000000;
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)(lVar8 + (long)(int)uVar2 * 8));
  }
  else if ((int)uVar2 < iVar3) {
    *(uint *)(param_2 + 1) = uVar2;
  }
  if (0 < (int)uVar2) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + lVar9);
      lVar4 = *plVar1;
      if (lVar4 != 0) {
        if ((char)plVar1[2] != '\x01') {
          lVar4 = FUN_03065a74(plVar1);
        }
        lVar7 = *param_2;
        *(undefined4 *)(lVar7 + lVar8) = 0;
        ((undefined4 *)(lVar7 + lVar8))[1] = *(undefined4 *)(lVar4 + 0x70);
      }
      lVar8 = lVar8 + 8;
      lVar9 = lVar9 + 0x18;
    } while ((ulong)uVar2 * 8 != lVar8);
  }
  return;
}


