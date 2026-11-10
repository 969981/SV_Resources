/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02251914; name: FUN_02251914
 */


void FUN_02251914(undefined8 *param_1,long param_2,int param_3)

{
  char *__s;
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  size_t sVar10;
  int *piVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  
  if (((*(long *)(param_2 + 0x2f0) != 0) &&
      ((*(byte *)(*(long *)(param_2 + 0x2f0) + 0x1e8) & 1) != 0)) &&
     (lVar8 = (**(code **)(**(long **)(param_2 + 0x2f0) + 0x70))(), lVar8 != 0)) {
    piVar11 = (int *)0x0;
    if (*(long *)(param_2 + 0x2f0) != 0) {
      if ((*(byte *)(*(long *)(param_2 + 0x2f0) + 0x1e8) & 1) == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        puVar9 = (uint *)(**(code **)(**(long **)(param_2 + 0x2f0) + 0x70))();
        piVar11 = (int *)((long)puVar9 + (ulong)*puVar9);
      }
    }
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0xb) ||
       (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[5], uVar12 == 0)) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar9 = (uint *)((long)piVar11 + uVar12);
      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
    }
    if (*puVar9 != 0) {
      lVar8 = 0;
      do {
        uVar12 = (ulong)*(uint *)((long)puVar9 + lVar8 + 4);
        lVar5 = lVar8 + (uVar12 - (long)*(int *)((long)puVar9 + lVar8 + uVar12 + 4));
        uVar4 = *(ushort *)((long)puVar9 + lVar5 + 4);
        if (uVar4 < 7) {
          iVar7 = 0;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar5 + 10);
          iVar7 = 0;
          if (uVar14 != 0) {
            iVar7 = *(int *)((long)puVar9 + lVar8 + uVar12 + uVar14 + 4);
          }
        }
        if ((4 < uVar4 && iVar7 == param_3) &&
           (uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar5 + 8), uVar14 != 0)) {
          uVar16 = (ulong)*(uint *)((long)puVar9 + lVar8 + uVar12 + uVar14 + 4);
          lVar5 = lVar8 + uVar16 + uVar12 + uVar14;
          __s = (char *)((long)puVar9 + lVar5 + 8);
          puVar15 = &DAT_cbf29ce484222645;
          sVar10 = strlen(__s);
          bVar3 = *(byte *)((long)puVar9 + lVar5 + 8);
          if (bVar3 != 0) {
            pbVar13 = (byte *)((long)puVar9 + lVar8 + uVar16 + uVar14 + uVar12 + 9);
            do {
              puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar3 != 0);
          }
          *param_1 = puVar15;
          param_1[1] = __s;
          param_1[2] = sVar10;
          param_1[3] = 0;
          return;
        }
        lVar8 = lVar8 + 4;
      } while ((ulong)*puVar9 * 4 != lVar8);
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar6 = PTR_DAT_047d3e30;
  uVar1 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar1;
  plVar2 = *(long **)(puVar6 + 0x18);
  param_1[2] = *(undefined8 *)(puVar6 + 0x10);
  param_1[3] = plVar2;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02251b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}


