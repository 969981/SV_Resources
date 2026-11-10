/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d7ed0; name: FUN_029d7ed0
 */


void FUN_029d7ed0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  byte *pbVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong local_68;
  undefined1 *local_60;
  char *pcStack_58;
  size_t local_50;
  long *local_48;
  
  piVar4 = (int *)*param_1;
  puVar7 = (ushort *)((long)piVar4 - (long)*piVar4);
  if ((*puVar7 < 0xd) || ((ulong)puVar7[6] == 0)) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)((long)piVar4 + (ulong)puVar7[6]);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
  }
  uVar8 = (ulong)*puVar5;
  puVar12 = &DAT_cbf29ce484222645;
  if (*puVar5 != 0) {
    uVar9 = 0;
    do {
      piVar1 = (int *)((long)(puVar5 + uVar9 + 1) + (ulong)puVar5[uVar9 + 1]);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
        lVar13 = 0;
      }
      else {
        uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        lVar13 = 0;
        if (uVar10 != 0) {
          puVar2 = (uint *)((long)piVar1 + uVar10);
          lVar13 = (long)puVar2 + (ulong)*puVar2;
        }
      }
      bVar3 = *(byte *)(lVar13 + 4);
      if (bVar3 != 0) {
        puVar11 = &DAT_cbf29ce484222645;
        pbVar6 = (byte *)(lVar13 + 5);
        do {
          puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar3 != 0);
        if (puVar11 == (undefined1 *)0xceea7c9198c06853) {
          uVar8 = uVar9 & 0xffffffff;
          break;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  puVar5 = (uint *)((long)((long)piVar4 + (ulong)puVar7[6]) +
                   uVar8 * 4 + (ulong)*(uint *)((long)piVar4 + (ulong)puVar7[6]) + 4);
  piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
  puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (8 - (long)*piVar4)));
  piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar8 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar5 = (uint *)((long)piVar4 + uVar8);
    lVar13 = (long)puVar5 + (ulong)*puVar5;
  }
  local_50 = strlen((char *)(lVar13 + 4));
  bVar3 = *(byte *)(lVar13 + 4);
  if (bVar3 != 0) {
    pbVar6 = (byte *)(lVar13 + 5);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar3 != 0);
  }
  local_48 = (long *)0x0;
  local_60 = puVar12;
  pcStack_58 = (char *)(lVar13 + 4);
  local_68 = (**(code **)(*param_2 + 0x78))(param_2,&local_60);
  if ((local_68 & 0xff) != 0) {
    FUN_029d80e0(*param_3);
    (**(code **)(*param_2 + 0x88))(param_2,&local_68);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


