/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019aaf00; name: FUN_019aaf00
 */


void FUN_019aaf00(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong local_68;
  undefined1 *local_60;
  char *pcStack_58;
  size_t local_50;
  long *local_48;
  
  piVar5 = (int *)*param_1;
  puVar8 = (ushort *)((long)piVar5 - (long)*piVar5);
  if ((*puVar8 < 0xd) || ((ulong)puVar8[6] == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar5 + (ulong)puVar8[6]);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  uVar9 = (ulong)*puVar6;
  puVar13 = &DAT_cbf29ce484222645;
  if (*puVar6 != 0) {
    uVar10 = 0;
    do {
      piVar1 = (int *)((long)(puVar6 + uVar10 + 1) + (ulong)puVar6[uVar10 + 1]);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
        lVar14 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        lVar14 = 0;
        if (uVar11 != 0) {
          puVar2 = (uint *)((long)piVar1 + uVar11);
          lVar14 = (long)puVar2 + (ulong)*puVar2;
        }
      }
      bVar3 = *(byte *)(lVar14 + 4);
      if (bVar3 != 0) {
        puVar12 = &DAT_cbf29ce484222645;
        pbVar7 = (byte *)(lVar14 + 5);
        do {
          puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar3 != 0);
        if (puVar12 == (undefined1 *)0xceea7c9198c06853) {
          uVar9 = uVar10 & 0xffffffff;
          break;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  puVar6 = (uint *)((long)((long)piVar5 + (ulong)puVar8[6]) +
                   uVar9 * 4 + (ulong)*(uint *)((long)piVar5 + (ulong)puVar8[6]) + 4);
  piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
  puVar6 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (8 - (long)*piVar5)));
  piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar9 == 0)) {
    lVar14 = 0;
  }
  else {
    puVar6 = (uint *)((long)piVar5 + uVar9);
    lVar14 = (long)puVar6 + (ulong)*puVar6;
  }
  local_50 = strlen((char *)(lVar14 + 4));
  bVar3 = *(byte *)(lVar14 + 4);
  if (bVar3 != 0) {
    pbVar7 = (byte *)(lVar14 + 5);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  local_48 = (long *)0x0;
  local_60 = puVar13;
  pcStack_58 = (char *)(lVar14 + 4);
  local_68 = (**(code **)(*param_2 + 0x50))(param_2,&local_60);
  if ((local_68 & 0xff) != 0) {
    uVar4 = FUN_019ab110(*param_3);
    (**(code **)(*param_2 + 0x60))(param_2,&local_68,uVar4);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


