/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034eb100; name: FUN_034eb100
 */


/* WARNING: Removing unreachable block (ram,0x034eb24c) */
/* WARNING: Removing unreachable block (ram,0x034eb338) */
/* WARNING: Removing unreachable block (ram,0x034eb360) */
/* WARNING: Removing unreachable block (ram,0x034eb260) */
/* WARNING: Removing unreachable block (ram,0x034eb288) */

void FUN_034eb100(long *param_1,byte param_2)

{
  long *__src;
  byte bVar1;
  long *__dest;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  float *pfVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  
  lVar8 = *param_1;
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < *(uint *)(lVar8 + 0x28)) {
    __src = param_1 + 2;
    do {
      lVar15 = *(long *)(lVar8 + 0x20);
      uVar12 = (ulong)uVar3;
      bVar1 = *(byte *)(*(long *)(lVar8 + 0x30) + (ulong)uVar3);
      uVar14 = *(ulong *)(lVar15 + (ulong)uVar3 * 0x78 + 0x60);
      uVar3 = *(uint *)(param_1 + 7);
      plVar2 = (long *)param_1[6];
      if (uVar3 == 0) {
        if (plVar2 != (long *)0x0) {
          uVar11 = 0;
          goto LAB_034eb1b4;
        }
        iVar13 = *(int *)((long)param_1 + 0x3c);
        if (iVar13 == 0) {
          iVar13 = 1;
          param_1[6] = (long)__src;
          *(undefined4 *)((long)param_1 + 0x3c) = 1;
          plVar2 = __src;
        }
        else {
          plVar2 = (long *)0x0;
        }
        if (iVar13 == 0) goto LAB_034eb3a8;
        puVar5 = (ulong *)(plVar2 + *(uint *)(param_1 + 7));
        *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) + 1;
        if (puVar5 == (ulong *)0x0) goto LAB_034eb3a8;
LAB_034eb330:
        *puVar5 = uVar14;
      }
      else {
        uVar4 = 0;
        uVar7 = uVar3;
        do {
          iVar13 = uVar4 + (uVar7 >> 1);
          uVar11 = plVar2[iVar13];
          if (uVar11 == uVar14) goto LAB_034eb3a8;
          if (uVar11 < uVar14) {
            uVar4 = iVar13 + 1;
          }
          uVar7 = uVar7 - (uVar11 < uVar14) >> 1;
        } while (uVar7 != 0);
        uVar11 = (ulong)uVar4;
LAB_034eb1b4:
        uVar4 = *(uint *)((long)param_1 + 0x3c);
        if (uVar3 < uVar4) {
LAB_034eb2e4:
          if (uVar3 < uVar4) {
            uVar3 = *(uint *)(param_1 + 7);
            *(uint *)(param_1 + 7) = uVar3 + 1;
            if ((uint)uVar11 < uVar3) {
              puVar10 = (ulong *)(plVar2 + uVar3);
              do {
                puVar9 = puVar10 + -1;
                *puVar10 = *puVar9;
                puVar5 = (ulong *)(param_1[6] + uVar11 * 8);
                puVar10 = puVar9;
              } while (puVar5 < puVar9);
            }
            else {
              puVar5 = (ulong *)(plVar2 + uVar11);
            }
            if (puVar5 != (ulong *)0x0) goto LAB_034eb330;
          }
        }
        else {
          iVar13 = uVar4 + (uVar4 >> 1);
          if (uVar4 == 0) {
            iVar13 = 1;
          }
          uVar4 = iVar13 + uVar4;
          __dest = __src;
          if (uVar4 < 5) {
LAB_034eb2d8:
            plVar2 = __dest;
            param_1[6] = (long)plVar2;
            *(uint *)((long)param_1 + 0x3c) = uVar4;
            goto LAB_034eb2e4;
          }
          if (__src == plVar2) {
            __dest = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,(ulong)uVar4 << 3,0x10);
            if (__dest != (long *)0x0) {
              memcpy(__dest,__src,((ulong)uVar3 & 0x1fffffff) << 3);
              goto LAB_034eb2d8;
            }
          }
          else {
            __dest = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(4,plVar2,(ulong)uVar4 << 3,0x10)
            ;
            if (__dest != (long *)0x0) goto LAB_034eb2d8;
          }
        }
      }
LAB_034eb3a8:
      if (*(char *)((long)param_1 + 0x4c) != '\0') {
        pfVar6 = (float *)(lVar15 + uVar12 * 0x78 + 0x24);
        if (*pfVar6 < *(float *)((long)param_1 + 0xc)) {
          *(int *)(param_1 + 1) = (int)param_1[8];
          *(float *)((long)param_1 + 0xc) = *pfVar6;
        }
        if (((bVar1 & 5) != 0) &&
           (fVar16 = *(float *)(lVar15 + uVar12 * 0x78 + 0x44),
           fVar16 < *(float *)((long)param_1 + 0x44))) {
          *(float *)((long)param_1 + 0x44) = fVar16;
        }
        if ((bVar1 >> 1 & 1) != 0) {
          *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar15 + uVar12 * 0x78 + 0x48);
        }
      }
      if (DAT_047c5aac == '\0') {
        *(undefined4 *)(lVar15 + uVar12 * 0x78 + 0x44) = 0;
      }
      if (DAT_047c5ab0 == '\0') {
        *(undefined4 *)(lVar15 + uVar12 * 0x78 + 0x48) = 0;
      }
      uVar3 = (int)param_1[8] + 1;
      lVar8 = *param_1;
      *(uint *)(param_1 + 8) = uVar3;
    } while (uVar3 < *(uint *)(lVar8 + 0x28));
  }
  *(byte *)((long)param_1 + 0x4c) = param_2 & 1;
  return;
}


