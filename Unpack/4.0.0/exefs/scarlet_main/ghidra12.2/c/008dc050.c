/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dc050; name: FUN_008dc050
 */


undefined8 FUN_008dc050(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  size_t __n;
  uint uVar3;
  long *plVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  
  if ((param_2 != -1) && (lVar10 = *(long *)(param_1 + 0xa8), lVar10 != 0)) {
    plVar4 = *(long **)(param_1 + 0xb0);
    while (plVar4 != (long *)0x0) {
      if (*plVar4 == param_2) {
        lVar11 = *(long *)(lVar10 + 0x38);
        sVar6 = strlen((char *)(plVar4 + 2));
        uVar7 = (ulong)*(ushort *)(lVar11 + 0xc);
        puVar12 = (uint *)((int *)(lVar11 + 8) + uVar7 * 4);
        iVar9 = *(int *)(lVar11 + 8);
        while (uVar3 = *puVar12, iVar9 < (int)uVar3) {
          uVar8 = (long)((ulong)uVar3 << 0x20) >> 0x23;
          if (uVar8 < sVar6) {
            uVar8 = (ulong)(*(byte *)((long)plVar4 + sVar6 + ~uVar8 + 0x10) >> ((ulong)uVar3 & 7)) &
                    1;
          }
          else {
            uVar8 = 0;
          }
          piVar2 = (int *)(lVar11 + 8 + uVar7 * 0x10);
          uVar7 = (ulong)*(ushort *)((long)piVar2 + uVar8 * 2 + 4);
          puVar12 = (uint *)(lVar11 + 8 + uVar7 * 0x10);
          iVar9 = *piVar2;
        }
        uVar7 = (ulong)**(ushort **)(puVar12 + 2);
        __n = sVar6;
        if (uVar7 <= sVar6) {
          __n = uVar7;
        }
        if (__n == 0) {
          if (sVar6 < uVar7) {
            return 0;
          }
        }
        else {
          iVar5 = memcmp(*(ushort **)(puVar12 + 2) + 1,plVar4 + 2,__n);
          iVar9 = iVar5;
          if (iVar5 == 0) {
            iVar9 = 1;
          }
          if (sVar6 < uVar7 || iVar5 != 0) {
            if (iVar9 != 0) {
              return 0;
            }
            goto LAB_008dc16c;
          }
        }
        if (uVar7 < sVar6) {
          return 0;
        }
LAB_008dc16c:
        uVar7 = (long)puVar12 + (-0x18 - lVar11);
        if ((~uVar7 & 0xffffffff0) == 0) {
          return 0;
        }
        return *(undefined8 *)(*(long *)(lVar10 + 0x28) + (long)(int)(uVar7 >> 4) * 8);
      }
      puVar12 = (uint *)(plVar4 + 1);
      plVar1 = (long *)((long)plVar4 + (ulong)*puVar12);
      plVar4 = (long *)0x0;
      if (*puVar12 != 0) {
        plVar4 = plVar1;
      }
    }
  }
  return 0;
}


