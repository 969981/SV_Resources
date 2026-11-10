/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008dd9d4; name: FUN_008dd9d4
 */


void FUN_008dd9d4(undefined1 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  *(long *)(param_1 + 8) = param_4;
  iVar4 = *(int *)(param_4 + 0x1c);
  *(int *)(param_1 + 0x28) = iVar4;
  puVar5 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,(long)iVar4 << 6 | 0x20,0x80);
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  if (iVar4 == 0) {
    *(undefined8 **)(param_1 + 0x18) = puVar5;
  }
  else {
    uVar9 = (long)iVar4 * 0x40 - 0x40;
    uVar1 = ((uint)(uVar9 >> 6) & 0x3ffffff) + 1;
    puVar8 = puVar5;
    if ((uVar1 & 7) != 0) {
      lVar10 = -((ulong)uVar1 & 7);
      puVar7 = puVar5;
      do {
        bVar3 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        puVar8 = puVar7 + 8;
        *puVar7 = 0;
        puVar7 = puVar8;
      } while (bVar3);
    }
    if (0x1bf < uVar9) {
      do {
        *puVar8 = 0;
        puVar8[8] = 0;
        puVar8[0x10] = 0;
        puVar8[0x18] = 0;
        puVar8[0x20] = 0;
        puVar8[0x28] = 0;
        puVar8[0x30] = 0;
        puVar8[0x38] = 0;
        puVar8 = puVar8 + 0x40;
      } while (puVar8 != puVar5 + (long)iVar4 * 8);
    }
    *(undefined8 **)(param_1 + 0x18) = puVar5;
    puVar2 = PTR_DAT_047d1f00;
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar13 = 0;
      lVar10 = 0;
      do {
        lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x20);
        lVar6 = *(long *)(lVar14 + *(long *)puVar2 + lVar13);
        lVar12 = *(long *)(lVar14 + *(long *)(puVar2 + 8) + lVar13);
        lVar11 = *(long *)(lVar14 + *(long *)(puVar2 + 0x10) + lVar13);
        if (lVar6 == 0) {
          iVar4 = 3;
          if (lVar12 != 0) goto LAB_008ddb64;
LAB_008ddb40:
          lVar6 = 0;
          if (lVar11 != 0 && iVar4 != 0) {
LAB_008ddb84:
            FUN_00ea1db8(*(undefined8 *)(lVar11 + 0x68),param_2,lVar11);
            lVar6 = 2;
          }
        }
        else {
          iVar4 = FUN_00ea1db8(*(undefined8 *)(lVar6 + 0x68),param_2);
          if (lVar12 == 0 || iVar4 == 0) goto LAB_008ddb40;
LAB_008ddb64:
          iVar4 = FUN_00ea1db8(*(undefined8 *)(lVar12 + 0x68),param_2,lVar12);
          lVar6 = 1;
          if (lVar11 != 0 && iVar4 != 0) goto LAB_008ddb84;
        }
        FUN_008dccf0(*(long *)(param_1 + 0x18) + lVar13,
                     *(undefined8 *)
                      (*(long *)(lVar14 + *(long *)(puVar2 + lVar6 * 8) + lVar13) + 0x68));
        lVar10 = lVar10 + 1;
        lVar13 = lVar13 + 0x40;
        *(int *)(param_1 + 0x10) = (int)lVar6;
      } while (lVar10 < *(int *)(param_1 + 0x28));
    }
  }
  *param_1 = 1;
  return;
}


