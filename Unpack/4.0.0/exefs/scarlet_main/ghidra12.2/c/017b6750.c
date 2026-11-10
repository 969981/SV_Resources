/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b6750; name: FUN_017b6750
 */


void FUN_017b6750(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  int *piVar5;
  uint *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong local_68;
  undefined1 *local_60;
  char *pcStack_58;
  size_t local_50;
  long *local_48;
  
  piVar5 = (int *)*param_1;
  puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
  if ((*puVar7 < 0xd) || ((ulong)puVar7[6] == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar5 + (ulong)puVar7[6]);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  uVar9 = (ulong)*puVar6;
  if (*puVar6 != 0) {
    uVar10 = 0;
    do {
      piVar1 = (int *)((long)(puVar6 + uVar10 + 1) + (ulong)puVar6[uVar10 + 1]);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
        lVar12 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        lVar12 = 0;
        if (uVar11 != 0) {
          puVar2 = (uint *)((long)piVar1 + uVar11);
          lVar12 = (long)puVar2 + (ulong)*puVar2;
        }
      }
      bVar3 = *(byte *)(lVar12 + 4);
      if (bVar3 != 0) {
        puVar13 = &DAT_cbf29ce484222645;
        pbVar8 = (byte *)(lVar12 + 5);
        do {
          puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 != 0);
        if (puVar13 == (undefined1 *)0xceea7c9198c06853) {
          uVar9 = uVar10 & 0xffffffff;
          break;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  puVar6 = (uint *)((long)((long)piVar5 + (ulong)puVar7[6]) +
                   uVar9 * 4 + (ulong)*(uint *)((long)piVar5 + (ulong)puVar7[6]) + 4);
  piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
  puVar6 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (8 - (long)*piVar5)));
  piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar9 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar6 = (uint *)((long)piVar5 + uVar9);
    lVar12 = (long)puVar6 + (ulong)*puVar6;
  }
  local_50 = strlen((char *)(lVar12 + 4));
  bVar3 = *(byte *)(lVar12 + 4);
  local_60 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    local_60 = &DAT_cbf29ce484222645;
    pbVar8 = (byte *)(lVar12 + 5);
    do {
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar3 != 0);
  }
  local_48 = (long *)0x0;
  pcStack_58 = (char *)(lVar12 + 4);
  local_68 = (**(code **)(*param_2 + 0xa0))(param_2,&local_60);
  if ((local_68 & 0xff) != 0) {
    piVar5 = *(int **)*param_3;
    puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
    if ((*puVar7 < 0xd) || ((ulong)puVar7[6] == 0)) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = (uint *)((long)piVar5 + (ulong)puVar7[6]);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    }
    uVar9 = (ulong)*puVar6;
    if (*puVar6 != 0) {
      uVar10 = 0;
      do {
        piVar1 = (int *)((long)(puVar6 + uVar10 + 1) + (ulong)puVar6[uVar10 + 1]);
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
          lVar12 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
          lVar12 = 0;
          if (uVar11 != 0) {
            puVar2 = (uint *)((long)piVar1 + uVar11);
            lVar12 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        bVar3 = *(byte *)(lVar12 + 4);
        if (bVar3 != 0) {
          puVar13 = &DAT_cbf29ce484222645;
          pbVar8 = (byte *)(lVar12 + 5);
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar3 != 0);
          if (puVar13 == (undefined1 *)0xa0eae3f3afc912a) {
            uVar9 = uVar10 & 0xffffffff;
            break;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar9);
    }
    puVar6 = (uint *)((long)((long)piVar5 + (ulong)puVar7[6]) +
                     uVar9 * 4 + (ulong)*(uint *)((long)piVar5 + (ulong)puVar7[6]) + 4);
    piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
    puVar6 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (8 - (long)*piVar5)));
    piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
       (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar9 == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar5 + uVar9) != '\0';
    }
    (**(code **)(*param_2 + 0xb0))(param_2,&local_68,bVar4);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


