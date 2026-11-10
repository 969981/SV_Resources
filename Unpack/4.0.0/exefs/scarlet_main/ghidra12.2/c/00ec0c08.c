/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec0c08; name: FUN_00ec0c08
 */


undefined8 FUN_00ec0c08(long param_1,char *param_2)

{
  int *piVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x1f8) + 0x58);
  if (lVar8 == 0) {
    return 0;
  }
  lVar9 = *(long *)(lVar8 + 0x38);
  if (param_2 == (char *)0x0) {
    sVar7 = 0;
  }
  else {
    sVar7 = strlen(param_2);
  }
  iVar6 = *(int *)(lVar9 + 8);
  uVar4 = (ulong)*(ushort *)(lVar9 + 0xc);
  puVar10 = (uint *)((int *)(lVar9 + 8) + uVar4 * 4);
  while( true ) {
    uVar2 = *puVar10;
    if ((int)uVar2 <= iVar6) break;
    if ((ulong)(long)((int)uVar2 >> 3) < sVar7) {
      uVar5 = (ulong)((byte)param_2[sVar7 + ~((long)((ulong)uVar2 << 0x20) >> 0x23)] >>
                     ((ulong)uVar2 & 7)) & 1;
    }
    else {
      uVar5 = 0;
    }
    piVar1 = (int *)(lVar9 + 8 + uVar4 * 0x10);
    uVar4 = (ulong)*(ushort *)((long)piVar1 + uVar5 * 2 + 4);
    puVar10 = (uint *)(lVar9 + 8 + uVar4 * 0x10);
    iVar6 = *piVar1;
  }
  uVar4 = (ulong)**(ushort **)(puVar10 + 2);
  __n = sVar7;
  if (uVar4 <= sVar7) {
    __n = uVar4;
  }
  if (__n == 0) {
    if (uVar4 <= sVar7) goto LAB_00ec0cc4;
  }
  else {
    iVar3 = memcmp(*(ushort **)(puVar10 + 2) + 1,param_2,__n);
    iVar6 = iVar3;
    if (iVar3 == 0) {
      iVar6 = 1;
    }
    if (uVar4 <= sVar7 && iVar3 == 0) {
LAB_00ec0cc4:
      iVar6 = -(uint)(uVar4 < sVar7);
    }
    if (iVar6 == 0) {
      lVar9 = ((long)puVar10 + (-0x18 - lVar9)) * 0x10000000 >> 0x20;
      goto LAB_00ec0cdc;
    }
  }
  lVar9 = -1;
LAB_00ec0cdc:
  return *(undefined8 *)(*(long *)(lVar8 + 0x28) + lVar9 * 8);
}


