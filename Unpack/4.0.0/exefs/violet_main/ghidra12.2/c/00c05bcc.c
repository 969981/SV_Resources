/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c05bcc; name: FUN_00c05bcc
 */


ulong FUN_00c05bcc(undefined4 param_1,long param_2,long *param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  plVar8 = (long *)(**(code **)(*param_3 + 0xb0))(param_3);
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x40) == 3) || (*(int *)(param_2 + 0x3c) != 0xb)) {
      local_60[0] = 2;
      local_48[0x10] = '\0';
      local_48[0x11] = '\0';
      local_48[0x12] = '\0';
      local_48[0x13] = '\0';
      local_48[0x14] = '\0';
      local_48[0x15] = '\0';
      local_48[0x16] = '\0';
      local_48[0x17] = '\0';
      local_50 = 0x1c8;
      local_58 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/wire_format.cc"
      ;
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[8] = '\0';
      local_48[9] = '\0';
      local_48[10] = '\0';
      local_48[0xb] = '\0';
      local_48[0xc] = '\0';
      local_48[0xd] = '\0';
      local_48[0xe] = '\0';
      local_48[0xf] = '\0';
      std::string::append(local_48);
      FUN_00bb0e90(local_60);
      FUN_00bb0d74(local_60);
      return 0;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x138))(plVar8,param_3,param_2,param_4[9]);
    pbVar10 = (byte *)*param_4;
    pbVar13 = (byte *)param_4[1];
    if ((pbVar10 < pbVar13) && (-1 < (char)*pbVar10)) {
      pbVar14 = pbVar10 + 1;
      uVar7 = (uint)*pbVar10;
      *param_4 = (ulong)pbVar14;
    }
    else {
      uVar7 = FUN_00c0954c(param_4);
      if ((int)uVar7 < 0) {
        return 0;
      }
      pbVar14 = (byte *)*param_4;
      pbVar13 = (byte *)param_4[1];
    }
    iVar4 = (int)param_4[3];
    iVar2 = (int)param_4[5];
    iVar3 = *(int *)((long)param_4 + 0x2c);
    param_4[1] = (ulong)(pbVar13 + iVar3);
    iVar1 = (iVar4 - iVar3) + ((int)pbVar14 - (int)pbVar13);
    iVar6 = 0x7fffffff;
    if ((int)uVar7 <= 0x7fffffff - iVar1) {
      iVar6 = iVar1 + uVar7;
    }
    iVar1 = iVar2;
    if (iVar6 <= iVar2) {
      iVar1 = iVar6;
    }
    *(int *)(param_4 + 5) = iVar1;
    iVar6 = (int)param_4[6];
    if (iVar1 <= (int)param_4[6]) {
      iVar6 = iVar1;
    }
    iVar1 = iVar4 - iVar6;
    if (iVar1 == 0 || iVar4 < iVar6) {
      *(undefined4 *)((long)param_4 + 0x2c) = 0;
    }
    else {
      *(int *)((long)param_4 + 0x2c) = iVar1;
      param_4[1] = (long)(pbVar13 + iVar3) - (long)iVar1;
    }
    uVar11 = param_4[7];
    *(int *)(param_4 + 7) = (int)uVar11 + -1;
    if ((int)uVar11 < 1) {
      return 0;
    }
    uVar11 = (**(code **)(*plVar8 + 0x58))(plVar8,param_4);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    uVar11 = param_4[1] + (long)*(int *)((long)param_4 + 0x2c);
    iVar1 = (int)param_4[6];
    if (iVar2 <= (int)param_4[6]) {
      iVar1 = iVar2;
    }
    cVar5 = *(char *)((long)param_4 + 0x24);
    *(int *)(param_4 + 5) = iVar2;
    param_4[1] = uVar11;
    iVar6 = (int)param_4[3] - iVar1;
    if (iVar6 == 0 || (int)param_4[3] < iVar1) {
      *(undefined4 *)((long)param_4 + 0x2c) = 0;
    }
    else {
      *(int *)((long)param_4 + 0x2c) = iVar6;
      param_4[1] = uVar11 - (long)iVar6;
    }
    *(undefined1 *)((long)param_4 + 0x24) = 0;
    *(int *)(param_4 + 7) = (int)param_4[7] + 1;
    return (ulong)(cVar5 != '\0');
  }
  uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,param_3);
  pbVar10 = (byte *)*param_4;
  if (pbVar10 < (byte *)param_4[1]) {
    bVar15 = *pbVar10;
    uVar7 = (uint)bVar15;
    if (-1 < (char)bVar15) {
      *param_4 = (ulong)(pbVar10 + 1);
      pbVar10 = (byte *)FUN_00c00b88(uVar9,param_1);
      goto LAB_00c05cfc;
    }
  }
  else {
    bVar15 = 0;
  }
  lVar12 = FUN_00c0944c(param_4,bVar15);
  if (lVar12 < 0) {
    return 0;
  }
  pbVar10 = (byte *)FUN_00c00b88(uVar9,param_1);
  uVar7 = (uint)lVar12;
  if ((int)uVar7 < 0) {
    return 0;
  }
LAB_00c05cfc:
  if ((int)param_4[1] - (int)*param_4 < (int)uVar7) {
    uVar11 = FUN_00c09150(param_4,pbVar10,uVar7);
    return uVar11;
  }
  std::string::resize((ulong)pbVar10,(char)uVar7);
  if ((*pbVar10 & 1) == 0) {
    if (*pbVar10 < 2) {
      return 1;
    }
    pbVar10 = pbVar10 + 1;
  }
  else {
    if (*(long *)(pbVar10 + 8) == 0) {
      return 1;
    }
    pbVar10 = *(byte **)(pbVar10 + 0x10);
    if (pbVar10 == (byte *)0x0) {
      return 1;
    }
  }
  memcpy(pbVar10,(void *)*param_4,(ulong)uVar7);
  *param_4 = *param_4 + (ulong)uVar7;
  return 1;
}


