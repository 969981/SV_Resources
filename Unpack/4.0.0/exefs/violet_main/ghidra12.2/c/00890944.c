/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00890944; name: FUN_00890944
 */


undefined8 FUN_00890944(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  char local_168 [256];
  undefined4 local_68;
  undefined1 local_64;
  
  FUN_008906f4(param_1,param_3);
  lVar9 = *(long *)(param_1 + 0xb0);
  if (lVar9 == 0) goto LAB_00890a9c;
  lVar10 = *(long *)(lVar9 + 0x38);
  if (param_4 == (char *)0x0) {
    sVar5 = 0;
  }
  else {
    sVar5 = strlen(param_4);
  }
  uVar7 = (ulong)*(ushort *)(lVar10 + 0xc);
  puVar11 = (uint *)((int *)(lVar10 + 8) + uVar7 * 4);
  iVar4 = *(int *)(lVar10 + 8);
  while (uVar2 = *puVar11, iVar4 < (int)uVar2) {
    uVar8 = (long)((ulong)uVar2 << 0x20) >> 0x23;
    if (uVar8 < sVar5) {
      uVar8 = (ulong)((byte)param_4[sVar5 + ~uVar8] >> ((ulong)uVar2 & 7)) & 1;
    }
    else {
      uVar8 = 0;
    }
    piVar1 = (int *)(lVar10 + 8 + uVar7 * 0x10);
    uVar7 = (ulong)*(ushort *)((long)piVar1 + uVar8 * 2 + 4);
    puVar11 = (uint *)(lVar10 + 8 + uVar7 * 0x10);
    iVar4 = *piVar1;
  }
  uVar7 = (ulong)**(ushort **)(puVar11 + 2);
  __n = sVar5;
  if (sVar5 >= uVar7) {
    __n = uVar7;
  }
  if (__n == 0) {
    if (sVar5 < uVar7) goto LAB_00890a9c;
LAB_00890a44:
    if (uVar7 < sVar5) goto LAB_00890a9c;
  }
  else {
    iVar3 = memcmp(*(ushort **)(puVar11 + 2) + 1,param_4,__n);
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = 1;
    }
    if (uVar7 <= sVar5 && iVar3 == 0) goto LAB_00890a44;
    if (iVar4 != 0) goto LAB_00890a9c;
  }
  uVar7 = (long)puVar11 + (-0x18 - lVar10);
  if (((~uVar7 & 0xffffffff0) != 0) &&
     (*(long *)(*(long *)(lVar9 + 0x28) + (long)(int)(uVar7 >> 4) * 8) != 0)) {
    uVar6 = FUN_008b4360(param_2,param_3);
    return uVar6;
  }
LAB_00890a9c:
  local_68 = 0x676d6974;
  local_64 = 0;
  if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
    nn::util::SNPrintf(local_168,0xff,"%s/%s",&local_68,param_4);
  }
  else {
    nn::util::SNPrintf(local_168,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_68,param_4);
  }
  iVar4 = FUN_00892230(param_1 + 8,local_168);
  if (iVar4 != -1) {
    local_168[0] = '\0';
    local_168[1] = '\0';
    local_168[2] = '\0';
    local_168[3] = '\0';
    local_168[4] = '\0';
    local_168[5] = '\0';
    local_168[6] = '\0';
    local_168[7] = '\0';
    FUN_008921c8(param_1 + 8,local_168,iVar4);
  }
  return 0;
}


