/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03476540; name: FUN_03476540
 */


undefined8 FUN_03476540(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  size_t sVar7;
  size_t sVar8;
  char *__dest;
  void *__dest_00;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  char *__s;
  ulong uVar12;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    return 2;
  }
  uVar5 = 0;
  if (*(ushort *)(param_1 + 0x20) != 0) {
    uVar5 = *(uint *)(param_1 + 0x5c) / (uint)*(ushort *)(param_1 + 0x20);
  }
  if ((*(uint *)(param_1 + 0x50) != 0) &&
     (lVar9 = *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 0x10,
     uVar5 == *(uint *)(lVar9 + -0xc))) {
    sVar7 = strlen(*(char **)(lVar9 + -8));
    sVar8 = strlen(param_2);
    puVar6 = PTR_DAT_047e2fd0;
    uVar12 = sVar7 + sVar8 + 1;
    uVar10 = uVar12 & 0xffffffff;
    __dest = (char *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar10);
    if (__dest == (char *)0x0) {
      return 0x34;
    }
    __s = *(char **)(lVar9 + -8);
    sVar7 = uVar10 - 1;
    sVar8 = strlen(__s);
    if (sVar8 + 1 <= sVar7) {
      sVar7 = sVar8 + 1;
    }
    strncpy(__dest,__s,sVar7);
    __dest[sVar7] = '\0';
    (**(code **)(puVar6 + 0x30))(0,*(undefined8 *)(lVar9 + -8));
    sVar7 = strlen(__dest);
    sVar7 = (size_t)(int)(~(uint)sVar7 + (int)uVar12);
    sVar8 = strlen(param_2);
    if ((ulong)(long)(int)sVar8 <= sVar7) {
      sVar7 = (long)(int)sVar8;
    }
    strncat(__dest,param_2,sVar7);
    *(char **)(lVar9 + -8) = __dest;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar1;
  sVar7 = strlen(param_2);
  puVar6 = PTR_DAT_047e2fd0;
  uVar12 = (ulong)((int)sVar7 + 1);
  __dest_00 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar12);
  if (__dest_00 == (void *)0x0) {
    return 0x34;
  }
  memcpy(__dest_00,param_2,uVar12);
  uVar4 = *(uint *)(param_1 + 0x50);
  uVar11 = *(uint *)(param_1 + 0x54);
  if (uVar11 <= uVar4) {
    iVar2 = uVar11 + (uVar11 >> 1);
    if (uVar11 == 0) {
      iVar2 = 1;
    }
    uVar11 = iVar2 + uVar11;
    lVar9 = (**(code **)(puVar6 + 0x20))(0,*(undefined8 *)(param_1 + 0x48),(ulong)uVar11 << 4);
    if (lVar9 == 0) goto LAB_03476704;
    *(long *)(param_1 + 0x48) = lVar9;
    *(uint *)(param_1 + 0x54) = uVar11;
  }
  if (uVar4 < uVar11) {
    uVar11 = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = uVar11 + 1;
    if (*(long *)(param_1 + 0x48) != 0) {
      piVar3 = (int *)(*(long *)(param_1 + 0x48) + (ulong)uVar11 * 0x10);
      *piVar3 = iVar1;
      piVar3[1] = uVar5;
      *(void **)(piVar3 + 2) = __dest_00;
      return 1;
    }
  }
LAB_03476704:
  (**(code **)(puVar6 + 0x30))(0,__dest_00);
  return 0x34;
}


