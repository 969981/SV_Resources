/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cee868; name: FUN_00cee868
 */


void FUN_00cee868(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char *__s;
  int *piVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  size_t sVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  ushort *puVar12;
  byte *pbVar13;
  int *piVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 local_38;
  
  piVar10 = (int *)param_2[1];
  if (((piVar10 != (int *)0x0) && (6 < *(ushort *)((long)piVar10 - (long)*piVar10))) &&
     (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar11 != 0)) {
    puVar7 = (uint *)((long)piVar10 + uVar11);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
    local_38 = *(undefined8 *)(param_3 + 8);
    puVar7 = bsearch(&local_38,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar7 != (uint *)0x0) && (piVar10 = (int *)*param_2, piVar10 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
      puVar12 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar12 < 7) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = (int *)0x0;
        if ((ulong)puVar12[3] != 0) {
          puVar7 = (uint *)((long)piVar1 + (ulong)puVar12[3]);
          piVar14 = (int *)((long)puVar7 + (ulong)*puVar7);
        }
      }
      if (((4 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
          (uVar11 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar11 != 0)) &&
         (*(char *)((long)piVar14 + uVar11) == '\r')) {
        if ((*puVar12 < 0xb) || ((ulong)puVar12[5] == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar12[5]);
        }
        if ((uVar9 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
           (uVar11 = (ulong)*(ushort *)(((long)piVar10 - (long)*piVar10) + (ulong)uVar9),
           uVar11 != 0)) {
          puVar7 = (uint *)((long)piVar10 + uVar11);
          uVar16 = (ulong)*puVar7;
          __s = (char *)((long)puVar7 + uVar16 + 4);
          puVar15 = &DAT_cbf29ce484222645;
          sVar8 = strlen(__s);
          bVar4 = *(byte *)((long)puVar7 + uVar16 + 4);
          if (bVar4 != 0) {
            pbVar13 = (byte *)((long)piVar10 + uVar16 + uVar11 + 5);
            do {
              puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar4 != 0);
          }
          *param_1 = puVar15;
          param_1[1] = __s;
          param_1[2] = sVar8;
          param_1[3] = 0;
          return;
        }
      }
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar5 = PTR_DAT_047d3e30;
  uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar2;
  plVar3 = *(long **)(puVar5 + 0x18);
  param_1[2] = *(undefined8 *)(puVar5 + 0x10);
  param_1[3] = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ceea38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


