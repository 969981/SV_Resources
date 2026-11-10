/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c310e8; name: FUN_00c310e8
 */


void FUN_00c310e8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(lVar6 + 0x28);
  if (0 < *(int *)(lVar11 + 0x38)) {
    iVar7 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
      *(undefined4 *)(param_1 + (iVar7 + *(int *)(lVar6 + 8))) = 0;
      lVar6 = *(long *)(param_1 + 8);
      iVar7 = iVar7 + 4;
    } while (iVar9 < *(int *)(lVar11 + 0x38));
  }
  if (*(int *)(lVar6 + 0x14) != -1) {
    *(undefined1 *)(param_1 + *(int *)(lVar6 + 0x14)) = 0;
    lVar6 = *(long *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0xc)) = 0;
  iVar9 = *(int *)(*(long *)(param_1 + 8) + 0x10);
  if (iVar9 != -1) {
    puVar1 = (undefined8 *)(param_1 + iVar9);
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = puVar1 + 1;
  }
  puVar3 = PTR_DAT_047dad58;
  if (0 < *(int *)(lVar11 + 0x2c)) {
    lVar12 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(long *)(lVar11 + 0x30) + lVar12;
      if (*(long *)(lVar2 + 0x58) == 0) {
        if (9 < *(int *)(puVar3 + (ulong)*(uint *)(lVar2 + 0x3c) * 4) - 1U) goto LAB_00c312c4;
        lVar8 = *(long *)(param_1 + 8);
        lVar10 = (long)*(int *)(*(long *)(lVar8 + 0x30) + lVar6 * 4);
        puVar1 = (undefined8 *)(param_1 + lVar10);
        switch(*(int *)(puVar3 + (ulong)*(uint *)(lVar2 + 0x3c) * 4)) {
        default:
          if (*(int *)(lVar2 + 0x40) != 3) {
            uVar5 = *(undefined4 *)(lVar2 + 0x88);
LAB_00c31244:
            *(undefined4 *)puVar1 = uVar5;
            goto LAB_00c312c4;
          }
          break;
        case 2:
        case 4:
        case 5:
          if (*(int *)(lVar2 + 0x40) != 3) {
            *puVar1 = *(undefined8 *)(lVar2 + 0x88);
            goto LAB_00c312c4;
          }
          break;
        case 7:
          if (*(int *)(lVar2 + 0x40) != 3) {
            *(undefined1 *)puVar1 = *(undefined1 *)(lVar2 + 0x88);
            goto LAB_00c312c4;
          }
          break;
        case 8:
          if (*(int *)(lVar2 + 0x40) != 3) {
            uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0x88) + 0x10);
            goto LAB_00c31244;
          }
          break;
        case 9:
          if (*(int *)(lVar2 + 0x40) != 3) {
            lVar8 = *(long *)(lVar8 + 0x40);
            puVar1 = (undefined8 *)(lVar2 + 0x88);
            if (lVar8 != 0 && lVar8 != param_1) {
              puVar1 = (undefined8 *)(lVar8 + lVar10);
            }
            *(undefined8 *)(param_1 + lVar10) = *puVar1;
            goto LAB_00c312c4;
          }
LAB_00c312b8:
          puVar1[2] = 0;
          break;
        case 10:
          if (*(int *)(lVar2 + 0x40) == 3) {
            if ((*(uint *)(lVar2 + 0x3c) != 0xb) ||
               (*(char *)(*(long *)(*(long *)(lVar2 + 0x68) + 0x20) + 0x53) == '\0'))
            goto LAB_00c312b8;
            uVar4 = FUN_00c312f0(*(undefined8 *)(lVar8 + 0x18));
            FUN_00c1216c(puVar1,uVar4);
            goto LAB_00c312c4;
          }
          goto LAB_00c312c0;
        }
        puVar1[1] = 0;
LAB_00c312c0:
        *puVar1 = 0;
      }
LAB_00c312c4:
      lVar6 = lVar6 + 1;
      lVar12 = lVar12 + 0x90;
    } while (lVar6 < *(int *)(lVar11 + 0x2c));
  }
  return;
}


