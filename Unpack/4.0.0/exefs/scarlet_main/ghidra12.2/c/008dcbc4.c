/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dcbc4; name: FUN_008dcbc4
 */


long FUN_008dcbc4(long param_1,char *param_2)

{
  int *piVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = strlen(param_2);
  }
  uVar5 = (ulong)*(ushort *)(lVar8 + 0xc);
  puVar9 = (uint *)((int *)(lVar8 + 8) + uVar5 * 4);
  iVar7 = *(int *)(lVar8 + 8);
  while (uVar2 = *puVar9, iVar7 < (int)uVar2) {
    uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
    if (uVar6 < sVar4) {
      uVar6 = (ulong)((byte)param_2[sVar4 + ~uVar6] >> ((ulong)uVar2 & 7)) & 1;
    }
    else {
      uVar6 = 0;
    }
    piVar1 = (int *)(lVar8 + 8 + uVar5 * 0x10);
    uVar5 = (ulong)*(ushort *)((long)piVar1 + uVar6 * 2 + 4);
    puVar9 = (uint *)(lVar8 + 8 + uVar5 * 0x10);
    iVar7 = *piVar1;
  }
  uVar5 = (ulong)**(ushort **)(puVar9 + 2);
  __n = sVar4;
  if (uVar5 <= sVar4) {
    __n = uVar5;
  }
  if (__n == 0) {
    if (sVar4 < uVar5) {
      return 0;
    }
  }
  else {
    iVar3 = memcmp(*(ushort **)(puVar9 + 2) + 1,param_2,__n);
    iVar7 = iVar3;
    if (iVar3 == 0) {
      iVar7 = 1;
    }
    if (sVar4 < uVar5 || iVar3 != 0) {
      if (iVar7 != 0) {
        return 0;
      }
      goto LAB_008dccb4;
    }
  }
  if (uVar5 < sVar4) {
    return 0;
  }
LAB_008dccb4:
  uVar5 = (long)puVar9 + (-0x18 - lVar8);
  if ((~uVar5 & 0xffffffff0) == 0) {
    return 0;
  }
  return *(long *)(param_1 + 8) + (long)(int)(uVar5 >> 4) * 0x10;
}


