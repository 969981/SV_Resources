/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0c6d4; name: FUN_00c0c6d4
 */


void FUN_00c0c6d4(int param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  int *piVar16;
  char *pcVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  char *local_70;
  undefined4 local_68;
  char local_60 [32];
  
  piVar16 = (int *)(param_3 + 2);
  uVar8 = param_1 << 3 | 2;
  if (*piVar16 < 5) {
    pbVar11 = (byte *)(local_60 + 0x18);
    if (0x7f < uVar8) {
      pbVar13 = pbVar11;
      uVar15 = uVar8;
      do {
        uVar8 = uVar15 >> 7;
        uVar3 = uVar15 >> 0xe;
        pbVar11 = pbVar13 + 1;
        *pbVar13 = (byte)uVar15 | 0x80;
        pbVar13 = pbVar11;
        uVar15 = uVar8;
      } while (uVar3 != 0);
    }
    pcVar17 = local_60 + 0x18;
    *pbVar11 = (byte)uVar8;
    iVar10 = ((int)pbVar11 - (int)pcVar17) + 1;
    iVar9 = *(int *)(param_3 + 2);
    pvVar6 = (void *)param_3[1];
    if (iVar9 < iVar10) {
      pcVar17 = local_60 + 0x18;
      do {
        memcpy(pvVar6,pcVar17,(long)iVar9);
        iVar2 = *(int *)(param_3 + 2);
        uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_78,piVar16);
        if ((uVar7 & 1) == 0) {
          iVar10 = 0;
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0c82c;
        }
        iVar9 = *(int *)(param_3 + 2);
        iVar10 = iVar10 - iVar2;
        pvVar6 = (void *)CONCAT44(uStack_74,local_78);
        pcVar17 = pcVar17 + iVar2;
        param_3[1] = pvVar6;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
      } while (iVar9 < iVar10);
    }
    memcpy(pvVar6,pcVar17,(long)iVar10);
    param_3[1] = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  else {
    pbVar11 = (byte *)param_3[1];
    if (uVar8 < 0x80) {
      pbVar13 = pbVar11;
    }
    else {
      pbVar12 = pbVar11;
      uVar15 = uVar8;
      do {
        uVar8 = uVar15 >> 7;
        uVar3 = uVar15 >> 0xe;
        pbVar13 = pbVar12 + 1;
        *pbVar12 = (byte)uVar15 | 0x80;
        pbVar12 = pbVar13;
        uVar15 = uVar8;
      } while (uVar3 != 0);
    }
    *pbVar13 = (byte)uVar8;
    iVar10 = ((int)pbVar13 - (int)pbVar11) + 1;
    param_3[1] = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  *(int *)(param_3 + 2) = iVar10;
LAB_00c0c82c:
  bVar1 = *param_2;
  if (((bVar1 & 1) != 0) && (*(ulong *)(param_2 + 8) >> 0x1f != 0)) {
    local_78 = 3;
    local_60[0x10] = '\0';
    local_60[0x11] = '\0';
    local_60[0x12] = '\0';
    local_60[0x13] = '\0';
    local_60[0x14] = '\0';
    local_60[0x15] = '\0';
    local_60[0x16] = '\0';
    local_60[0x17] = '\0';
    local_68 = 0x1b0;
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
    bVar1 = *param_2;
    iVar10 = *piVar16;
  }
  uVar7 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  uVar8 = (uint)uVar7;
  if (iVar10 < 5) {
    pbVar13 = (byte *)(local_60 + 0x18);
    pbVar11 = pbVar13;
    uVar14 = uVar7 & 0xffffffff;
    if (0x7f < uVar8) {
      do {
        bVar1 = (byte)uVar7;
        uVar7 = uVar14 >> 7;
        uVar8 = (uint)uVar7;
        uVar4 = uVar14 >> 0xe;
        pbVar13 = pbVar11 + 1;
        *pbVar11 = bVar1 | 0x80;
        pbVar11 = pbVar13;
        uVar14 = uVar7;
      } while (uVar4 != 0);
    }
    pcVar17 = local_60 + 0x18;
    *pbVar13 = (byte)uVar8;
    iVar10 = ((int)pbVar13 - (int)pcVar17) + 1;
    iVar9 = *(int *)(param_3 + 2);
    pvVar6 = (void *)param_3[1];
    if (iVar9 < iVar10) {
      pcVar17 = local_60 + 0x18;
      do {
        memcpy(pvVar6,pcVar17,(long)iVar9);
        iVar2 = *(int *)(param_3 + 2);
        uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_78,piVar16);
        if ((uVar7 & 1) == 0) {
          pvVar6 = (void *)0x0;
          param_3[1] = 0;
          iVar10 = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0c9c0;
        }
        iVar9 = *(int *)(param_3 + 2);
        iVar10 = iVar10 - iVar2;
        pvVar6 = (void *)CONCAT44(uStack_74,local_78);
        pcVar17 = pcVar17 + iVar2;
        param_3[1] = pvVar6;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
      } while (iVar9 < iVar10);
    }
    memcpy(pvVar6,pcVar17,(long)iVar10);
    pvVar6 = (void *)(param_3[1] + (long)iVar10);
    param_3[1] = pvVar6;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  else {
    pbVar12 = (byte *)param_3[1];
    uVar14 = uVar7 & 0xffffffff;
    pbVar11 = pbVar12;
    pbVar13 = pbVar12;
    if (0x7f < uVar8) {
      do {
        bVar1 = (byte)uVar7;
        uVar7 = uVar14 >> 7;
        uVar8 = (uint)uVar7;
        uVar4 = uVar14 >> 0xe;
        pbVar13 = pbVar11 + 1;
        *pbVar11 = bVar1 | 0x80;
        uVar14 = uVar7;
        pbVar11 = pbVar13;
      } while (uVar4 != 0);
    }
    *pbVar13 = (byte)uVar8;
    iVar10 = ((int)pbVar13 - (int)pbVar12) + 1;
    pvVar6 = (void *)(param_3[1] + (long)iVar10);
    param_3[1] = pvVar6;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  *(int *)(param_3 + 2) = iVar10;
LAB_00c0c9c0:
  pbVar11 = *(byte **)(param_2 + 0x10);
  bVar5 = (*param_2 & 1) == 0;
  if (bVar5) {
    pbVar11 = param_2 + 1;
  }
  uVar8 = (uint)(*param_2 >> 1);
  if (!bVar5) {
    uVar8 = *(uint *)(param_2 + 8);
  }
  while( true ) {
    if ((int)uVar8 <= iVar10) {
      memcpy(pvVar6,pbVar11,(long)(int)uVar8);
      param_3[1] = param_3[1] + (long)(int)uVar8;
      *(uint *)(param_3 + 2) = *(int *)(param_3 + 2) - uVar8;
      return;
    }
    memcpy(pvVar6,pbVar11,(long)iVar10);
    iVar9 = *(int *)(param_3 + 2);
    uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_78,piVar16);
    if ((uVar7 & 1) == 0) break;
    iVar10 = *(int *)(param_3 + 2);
    pvVar6 = (void *)CONCAT44(uStack_74,local_78);
    pbVar11 = pbVar11 + iVar9;
    uVar8 = uVar8 - iVar9;
    param_3[1] = pvVar6;
    *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar10;
  }
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined1 *)(param_3 + 3) = 1;
  return;
}


