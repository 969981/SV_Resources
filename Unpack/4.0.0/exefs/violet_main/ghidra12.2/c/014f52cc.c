/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f52cc; name: FUN_014f52cc
 */


void FUN_014f52cc(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int *piVar11;
  ushort *puVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *local_18;
  
  lVar20 = *param_1;
  if (*(char *)(lVar20 + 0x44a) != '\0') {
    return;
  }
  FUN_014f5684(&local_18,lVar20);
  if (((local_18 != (long *)0x0) && (*(char *)(local_18[0xb] + 0x31) == '\0')) &&
     (uVar15 = FUN_014f5678(local_18), (uVar15 & 1) == 0)) goto LAB_014f5594;
  piVar11 = (int *)*param_2;
  puVar12 = (ushort *)((long)piVar11 - (long)*piVar11);
  if ((*puVar12 < 0xd) || ((ulong)puVar12[6] == 0)) {
    puVar17 = (uint *)0x0;
  }
  else {
    puVar17 = (uint *)((long)piVar11 + (ulong)puVar12[6]);
    puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17);
  }
  uVar15 = (ulong)*puVar17;
  puVar10 = &DAT_cbf29ce484222645;
  if (*puVar17 != 0) {
    uVar16 = 0;
    do {
      piVar2 = (int *)((long)(puVar17 + uVar16 + 1) + (ulong)puVar17[uVar16 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar14 = 0;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar14 = 0;
        if (uVar18 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar18);
          lVar14 = (long)puVar3 + (ulong)*puVar3;
        }
      }
      bVar5 = *(byte *)(lVar14 + 4);
      if (bVar5 != 0) {
        puVar8 = &DAT_cbf29ce484222645;
        pbVar13 = (byte *)(lVar14 + 5);
        do {
          puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar5 != 0);
        if (puVar8 == (undefined1 *)0xceea7c9198c06853) {
          uVar15 = uVar16 & 0xffffffff;
          break;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar15);
  }
  if ((*puVar12 < 0xd) || ((ulong)puVar12[6] == 0)) {
    puVar17 = (uint *)0x0;
  }
  else {
    puVar17 = (uint *)((long)piVar11 + (ulong)puVar12[6]);
    puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17);
  }
  uVar16 = (ulong)*puVar17;
  if (*puVar17 != 0) {
    uVar18 = 0;
    do {
      piVar2 = (int *)((long)(puVar17 + uVar18 + 1) + (ulong)puVar17[uVar18 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar14 = 0;
      }
      else {
        uVar19 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar14 = 0;
        if (uVar19 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar19);
          lVar14 = (long)puVar3 + (ulong)*puVar3;
        }
      }
      bVar5 = *(byte *)(lVar14 + 4);
      if (bVar5 != 0) {
        puVar8 = &DAT_cbf29ce484222645;
        pbVar13 = (byte *)(lVar14 + 5);
        do {
          puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar5 != 0);
        if (puVar8 == (undefined1 *)0xa0eae3f3afc912a) {
          uVar16 = uVar18 & 0xffffffff;
          break;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar16);
  }
  puVar3 = (uint *)((long)piVar11 + (ulong)puVar12[6]);
  puVar17 = (uint *)((long)puVar3 + uVar15 * 4 + (ulong)*puVar3 + 4);
  piVar11 = (int *)((long)puVar17 + (ulong)*puVar17);
  puVar17 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (8 - (long)*piVar11)));
  piVar11 = (int *)((long)puVar17 + (ulong)*puVar17);
  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
     (uVar15 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar15 == 0)) {
    lVar14 = 0;
  }
  else {
    puVar17 = (uint *)((long)piVar11 + uVar15);
    lVar14 = (long)puVar17 + (ulong)*puVar17;
  }
  bVar5 = *(byte *)(lVar14 + 4);
  if (bVar5 != 0) {
    pbVar13 = (byte *)(lVar14 + 5);
    do {
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar5 != 0);
  }
  puVar3 = (uint *)((long)puVar3 + uVar16 * 4 + (ulong)*puVar3 + 4);
  piVar11 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar17 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (8 - (long)*piVar11)));
  piVar11 = (int *)((long)puVar17 + (ulong)*puVar17);
  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
     (uVar15 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar15 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)((long)piVar11 + uVar15);
  }
  if (puVar10 == (undefined1 *)0x3cf22a9518ac7bc) {
    lVar20 = lVar20 + 0x408;
LAB_014f558c:
    FUN_00d9572c(lVar20,uVar9);
  }
  else {
    if (puVar10 == &DAT_b49a716fb65dbb9c) {
      lVar20 = lVar20 + 1000;
      goto LAB_014f558c;
    }
    if (puVar10 == (undefined1 *)0x6f5d089c1c3de9c9) {
      lVar20 = lVar20 + 0x428;
      goto LAB_014f558c;
    }
  }
  if (local_18 == (long *)0x0) {
    return;
  }
LAB_014f5594:
  lVar20 = local_18[6];
  psVar1 = (short *)(lVar20 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar4 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar20 + 0x10) = 0;
    (**(code **)(*local_18 + 0x50))(local_18);
  }
  else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


