/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0cab4; name: FUN_00c0cab4
 */


void FUN_00c0cab4(int param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  undefined4 local_78;
  undefined4 uStack_74;
  char *local_70;
  undefined4 local_68;
  char local_60 [32];
  
  piVar14 = (int *)(param_3 + 2);
  uVar7 = param_1 << 3 | 2;
  if (*piVar14 < 5) {
    pbVar9 = (byte *)(local_60 + 0x18);
    if (0x7f < uVar7) {
      pbVar11 = pbVar9;
      uVar13 = uVar7;
      do {
        uVar7 = uVar13 >> 7;
        uVar2 = uVar13 >> 0xe;
        pbVar9 = pbVar11 + 1;
        *pbVar11 = (byte)uVar13 | 0x80;
        pbVar11 = pbVar9;
        uVar13 = uVar7;
      } while (uVar2 != 0);
    }
    pcVar16 = local_60 + 0x18;
    *pbVar9 = (byte)uVar7;
    iVar8 = ((int)pbVar9 - (int)pcVar16) + 1;
    iVar15 = *(int *)(param_3 + 2);
    pvVar5 = (void *)param_3[1];
    if (iVar15 < iVar8) {
      pcVar16 = local_60 + 0x18;
      do {
        memcpy(pvVar5,pcVar16,(long)iVar15);
        iVar1 = *(int *)(param_3 + 2);
        uVar6 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_78,piVar14);
        if ((uVar6 & 1) == 0) {
          iVar8 = 0;
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0cc0c;
        }
        iVar15 = *(int *)(param_3 + 2);
        iVar8 = iVar8 - iVar1;
        pvVar5 = (void *)CONCAT44(uStack_74,local_78);
        pcVar16 = pcVar16 + iVar1;
        param_3[1] = pvVar5;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar15;
      } while (iVar15 < iVar8);
    }
    memcpy(pvVar5,pcVar16,(long)iVar8);
    param_3[1] = param_3[1] + (long)iVar8;
    iVar8 = *(int *)(param_3 + 2) - iVar8;
  }
  else {
    pbVar9 = (byte *)param_3[1];
    if (uVar7 < 0x80) {
      pbVar11 = pbVar9;
    }
    else {
      pbVar10 = pbVar9;
      uVar13 = uVar7;
      do {
        uVar7 = uVar13 >> 7;
        uVar2 = uVar13 >> 0xe;
        pbVar11 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        pbVar10 = pbVar11;
        uVar13 = uVar7;
      } while (uVar2 != 0);
    }
    *pbVar11 = (byte)uVar7;
    iVar8 = ((int)pbVar11 - (int)pbVar9) + 1;
    param_3[1] = param_3[1] + (long)iVar8;
    iVar8 = *(int *)(param_3 + 2) - iVar8;
  }
  *(int *)(param_3 + 2) = iVar8;
LAB_00c0cc0c:
  bVar4 = *param_2;
  if (((bVar4 & 1) != 0) && (*(ulong *)(param_2 + 8) >> 0x1f != 0)) {
    local_78 = 3;
    local_60[0x10] = '\0';
    local_60[0x11] = '\0';
    local_60[0x12] = '\0';
    local_60[0x13] = '\0';
    local_60[0x14] = '\0';
    local_60[0x15] = '\0';
    local_60[0x16] = '\0';
    local_60[0x17] = '\0';
    local_68 = 0x1b8;
    local_70 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/wire_format_lite.cc"
    ;
    local_60[0] = '\0';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_60[4] = '\0';
    local_60[5] = '\0';
    local_60[6] = '\0';
    local_60[7] = '\0';
    local_60[8] = '\0';
    local_60[9] = '\0';
    local_60[10] = '\0';
    local_60[0xb] = '\0';
    local_60[0xc] = '\0';
    local_60[0xd] = '\0';
    local_60[0xe] = '\0';
    local_60[0xf] = '\0';
    std::string::append(local_60);
    FUN_00bb0e90(&local_78);
    FUN_00bb0d74(&local_78);
    bVar4 = *param_2;
    iVar8 = *piVar14;
  }
  uVar6 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  uVar7 = (uint)uVar6;
  if (iVar8 < 5) {
    pbVar11 = (byte *)(local_60 + 0x18);
    pbVar9 = pbVar11;
    uVar12 = uVar6 & 0xffffffff;
    if (0x7f < uVar7) {
      do {
        bVar4 = (byte)uVar6;
        uVar6 = uVar12 >> 7;
        uVar7 = (uint)uVar6;
        uVar3 = uVar12 >> 0xe;
        pbVar11 = pbVar9 + 1;
        *pbVar9 = bVar4 | 0x80;
        pbVar9 = pbVar11;
        uVar12 = uVar6;
      } while (uVar3 != 0);
    }
    pcVar16 = local_60 + 0x18;
    *pbVar11 = (byte)uVar7;
    iVar8 = ((int)pbVar11 - (int)pcVar16) + 1;
    iVar15 = *(int *)(param_3 + 2);
    pvVar5 = (void *)param_3[1];
    if (iVar15 < iVar8) {
      pcVar16 = local_60 + 0x18;
      do {
        memcpy(pvVar5,pcVar16,(long)iVar15);
        iVar1 = *(int *)(param_3 + 2);
        uVar6 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_78,piVar14);
        if ((uVar6 & 1) == 0) {
          pvVar5 = (void *)0x0;
          param_3[1] = 0;
          iVar8 = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0cda0;
        }
        iVar15 = *(int *)(param_3 + 2);
        iVar8 = iVar8 - iVar1;
        pvVar5 = (void *)CONCAT44(uStack_74,local_78);
        pcVar16 = pcVar16 + iVar1;
        param_3[1] = pvVar5;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar15;
      } while (iVar15 < iVar8);
    }
    memcpy(pvVar5,pcVar16,(long)iVar8);
    pvVar5 = (void *)(param_3[1] + (long)iVar8);
    param_3[1] = pvVar5;
    iVar8 = *(int *)(param_3 + 2) - iVar8;
  }
  else {
    pbVar10 = (byte *)param_3[1];
    uVar12 = uVar6 & 0xffffffff;
    pbVar9 = pbVar10;
    pbVar11 = pbVar10;
    if (0x7f < uVar7) {
      do {
        bVar4 = (byte)uVar6;
        uVar6 = uVar12 >> 7;
        uVar7 = (uint)uVar6;
        uVar3 = uVar12 >> 0xe;
        pbVar11 = pbVar9 + 1;
        *pbVar9 = bVar4 | 0x80;
        uVar12 = uVar6;
        pbVar9 = pbVar11;
      } while (uVar3 != 0);
    }
    *pbVar11 = (byte)uVar7;
    iVar8 = ((int)pbVar11 - (int)pbVar10) + 1;
    pvVar5 = (void *)(param_3[1] + (long)iVar8);
    param_3[1] = pvVar5;
    iVar8 = *(int *)(param_3 + 2) - iVar8;
  }
  *(int *)(param_3 + 2) = iVar8;
LAB_00c0cda0:
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
  iVar15 = (int)uVar6;
  if (*(char *)((long)param_3 + 0x19) == '\0') {
    while (iVar15 = (int)uVar6, iVar8 < iVar15) {
      memcpy(pvVar5,pbVar9,(long)iVar8);
      iVar1 = *(int *)(param_3 + 2);
      uVar6 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_78,piVar14);
      if ((uVar6 & 1) == 0) {
        bVar4 = 1;
        param_3[1] = 0;
        *(undefined4 *)(param_3 + 2) = 0;
        goto LAB_00c0cee4;
      }
      iVar8 = *(int *)(param_3 + 2);
      pbVar9 = pbVar9 + iVar1;
      pvVar5 = (void *)CONCAT44(uStack_74,local_78);
      param_3[1] = pvVar5;
      *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar8;
      uVar6 = (ulong)(uint)(iVar15 - iVar1);
    }
  }
  else if (iVar8 <= iVar15) {
    if (iVar8 < 1) {
      iVar8 = *(int *)((long)param_3 + 0x14);
    }
    else {
      (**(code **)(*(long *)*param_3 + 0x18))();
      iVar8 = *(int *)((long)param_3 + 0x14) - *(int *)(param_3 + 2);
      *(undefined4 *)(param_3 + 2) = 0;
      *(int *)((long)param_3 + 0x14) = iVar8;
      param_3[1] = 0;
    }
    *(int *)((long)param_3 + 0x14) = iVar8 + iVar15;
    bVar4 = (**(code **)(*(long *)*param_3 + 0x28))((long *)*param_3,pbVar9,uVar6 & 0xffffffff);
    bVar4 = *(byte *)(param_3 + 3) | ~bVar4 & 1;
LAB_00c0cee4:
    *(byte *)(param_3 + 3) = bVar4;
    return;
  }
  memcpy(pvVar5,pbVar9,(long)iVar15);
  param_3[1] = param_3[1] + (long)iVar15;
  *(int *)(param_3 + 2) = *(int *)(param_3 + 2) - iVar15;
  return;
}


