/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4b87c; name: FUN_00d4b87c
 */


long FUN_00d4b87c(long param_1,long *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  size_t sVar4;
  long *plVar5;
  char *pcVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  
  *(int **)(param_1 + 8) = param_3;
  puVar7 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar7 < 7) {
switchD_00d4b8ec_default:
    uVar10 = 0;
  }
  else if ((ulong)puVar7[3] == 0) {
switchD_00d4b8ec_caseD_0:
    if ((*puVar7 < 0xf) || ((ulong)puVar7[7] == 0)) goto switchD_00d4b8ec_default;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar7[7]);
    uVar10 = (uint)(*(int *)((long)puVar1 + (ulong)*puVar1) != 0);
  }
  else {
    uVar10 = 2;
    switch(*(undefined4 *)((long)param_3 + (ulong)puVar7[3])) {
    case 0:
      goto switchD_00d4b8ec_caseD_0;
    case 1:
      break;
    case 2:
      uVar10 = 3;
      break;
    case 3:
      uVar10 = 4;
      break;
    default:
      goto switchD_00d4b8ec_default;
    }
  }
  *(uint *)(param_1 + 0x10) = uVar10;
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar8 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_3 + uVar8);
    lVar9 = (long)puVar1 + (ulong)*puVar1;
  }
  sVar4 = strlen((char *)(lVar9 + 4));
  bVar3 = *(byte *)(lVar9 + 4);
  puVar13 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar13 = &DAT_cbf29ce484222645;
    pbVar11 = (byte *)(lVar9 + 5);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar3 != 0);
  }
  *(size_t *)(param_1 + 0x28) = sVar4;
  plVar5 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 **)(param_1 + 0x18) = puVar13;
  *(char **)(param_1 + 0x20) = (char *)(lVar9 + 4);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    lVar9 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    lVar9 = 0;
    if (uVar8 != 0) {
      puVar1 = (uint *)((long)param_3 + uVar8);
      lVar9 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  pbVar11 = (byte *)(lVar9 + 4);
  pcVar6 = strrchr((char *)pbVar11,0x2f);
  if (pcVar6 != (char *)0x0) {
    pbVar11 = (byte *)(pcVar6 + 1);
  }
  sVar4 = strlen((char *)pbVar11);
  bVar3 = *pbVar11;
  puVar13 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar13 = &DAT_cbf29ce484222645;
    pbVar12 = pbVar11;
    do {
      pbVar12 = pbVar12 + 1;
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar12;
    } while (bVar3 != 0);
  }
  *(size_t *)(param_1 + 0x48) = sVar4;
  plVar5 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 **)(param_1 + 0x38) = puVar13;
  *(byte **)(param_1 + 0x40) = pbVar11;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((0x10 < *(ushort *)((long)param_3 - (long)*param_3)) &&
     (uVar8 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[8], uVar8 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_3 + uVar8);
    puVar1 = (uint *)((long)((long)param_3 + uVar8) + uVar14);
    if (*puVar1 != 0) {
      (**(code **)(*param_2 + 0x58))(&local_78,param_2);
      if (*puVar1 != 0) {
        uVar16 = 0;
        lVar9 = (long)param_3 + uVar14 + uVar8 + 9;
        do {
          puVar2 = puVar1 + uVar16 + 1;
          uVar8 = (ulong)*puVar2;
          pcVar6 = (char *)((long)puVar2 + uVar8 + 4);
          sVar4 = strlen(pcVar6);
          bVar3 = *(byte *)((long)puVar2 + uVar8 + 4);
          puVar13 = &DAT_cbf29ce484222645;
          if (bVar3 != 0) {
            puVar13 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar9 + uVar8);
            do {
              puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar3 != 0);
          }
          puVar15 = (undefined8 *)(local_78 + uVar16 * local_68);
          puVar15[2] = sVar4;
          plVar5 = (long *)puVar15[3];
          *puVar15 = puVar13;
          puVar15[1] = pcVar6;
          puVar15[3] = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          puVar15[3] = 0;
          uVar16 = uVar16 + 1;
          lVar9 = lVar9 + 4;
        } while (uVar16 < *puVar1);
      }
      goto LAB_00d4ba68;
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
LAB_00d4ba68:
  *(long *)(param_1 + 0x58) = local_78;
  *(undefined8 *)(param_1 + 0x60) = uStack_70;
  *(long *)(param_1 + 0x68) = local_68;
  return param_1;
}


