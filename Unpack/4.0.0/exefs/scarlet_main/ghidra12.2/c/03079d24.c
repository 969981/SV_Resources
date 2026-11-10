/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03079d24; name: FUN_03079d24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03079d24(uint *param_1,long param_2,int param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  
  *param_1 = 0xffffffff;
  uVar10 = *(uint *)(param_2 + 0x40);
  plVar1 = (long *)(param_2 + 0x38);
  if (0 < (int)uVar10) {
    uVar11 = 0;
    piVar13 = (int *)(*plVar1 + 0x1c);
    do {
      if (*piVar13 == param_3) {
        uVar10 = (uint)uVar11;
        *param_1 = uVar10;
        goto LAB_03079e78;
      }
      uVar11 = uVar11 + 1;
      piVar13 = piVar13 + 0x40;
    } while (uVar10 != uVar11);
    uVar11 = 0;
    piVar13 = (int *)(*plVar1 + 0x1c);
    do {
      if (*piVar13 == -1) {
        *piVar13 = param_3;
        uVar10 = (uint)uVar11;
        *param_1 = uVar10;
        goto LAB_03079e78;
      }
      uVar11 = uVar11 + 1;
      piVar13 = piVar13 + 0x40;
    } while (uVar10 != uVar11);
  }
  *param_1 = uVar10;
  uVar8 = uVar10;
  if ((int)(*(uint *)(param_2 + 0x44) & 0x7fffffff) <= (int)uVar10) {
    FUN_0307f25c(plVar1,(long)(int)uVar10 + 1);
    uVar8 = *(uint *)(param_2 + 0x40);
  }
  uVar7 = _UNK_03cabe68;
  uVar6 = _DAT_03cabe60;
  uVar5 = DAT_03cab628;
  uVar4 = DAT_03cab620;
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)(int)uVar8 * 0x100);
  *(int *)(param_2 + 0x40) = (int)((long)(int)uVar10 + 1);
  *puVar2 = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[4] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x18] = &DAT_03d7702c;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  puVar2[0x1c] = &DAT_03d7702c;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  *(undefined1 *)(puVar2 + 0x1e) = 0;
  *(undefined1 *)(puVar2 + 0x12) = 0;
  *(undefined4 *)(puVar2 + 3) = 0xffffffff;
  *(int *)((long)puVar2 + 0x1c) = param_3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[7] = uVar5;
  puVar2[6] = uVar4;
  puVar2[9] = uVar7;
  puVar2[8] = uVar6;
  uVar7 = _UNK_03cabe58;
  uVar6 = _DAT_03cabe50;
  uVar5 = _UNK_03caa5b8;
  uVar4 = _DAT_03caa5b0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0x8000000000000000;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0x8000000000000000;
  puVar2[0xb] = uVar5;
  puVar2[10] = uVar4;
  puVar2[0xd] = uVar7;
  puVar2[0xc] = uVar6;
LAB_03079e78:
  lVar9 = *plVar1;
  lVar12 = (long)(int)uVar10;
  if ((param_4 & 1) != 0) {
    lVar3 = lVar9 + lVar12 * 0x100;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  if ((param_4 >> 1 & 1) != 0) {
    lVar3 = lVar9 + lVar12 * 0x100;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  if ((param_4 >> 2 & 1) != 0) {
    lVar9 = lVar9 + lVar12 * 0x100;
    *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + 1;
  }
  return;
}


