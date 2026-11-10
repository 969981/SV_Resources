/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e90ee0; name: FUN_00e90ee0
 */


void FUN_00e90ee0(long *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  long lVar11;
  undefined8 local_18;
  
  piVar4 = (int *)param_2[1];
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar7 != 0)) {
    puVar3 = (uint *)((long)piVar4 + uVar7);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    local_18 = *(undefined8 *)(param_3 + 8);
    puVar3 = bsearch(&local_18,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar3 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar10 < 7) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)0x0;
        if ((ulong)puVar10[3] != 0) {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar10[3]);
          piVar6 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if (((4 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
          (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar7 != 0)) &&
         (*(char *)((long)piVar6 + uVar7) == '\x0e')) {
        piVar6 = (int *)((long)((long)piVar1 + (ulong)puVar10[3]) +
                        (ulong)*(uint *)((long)piVar1 + (ulong)puVar10[3]));
        puVar8 = (ushort *)((long)piVar6 - (long)*piVar6);
        if (*puVar8 < 7) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((ulong)puVar8[3] != 0) {
            uVar7 = (long)*(char *)((long)piVar6 + (ulong)puVar8[3]) & 0xffffffff;
          }
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar7 * 8) == 4) {
          if ((*puVar10 < 0xb) || ((ulong)puVar10[5] == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar10[5]);
          }
          if ((uVar9 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
             (uVar7 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar9), uVar7 != 0)
             ) {
            puVar3 = (uint *)((long)piVar4 + uVar7);
            puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
          }
          else {
            puVar3 = (uint *)0x0;
          }
          if (param_4 < *puVar3) {
            uVar9 = puVar3[(ulong)param_4 + 1];
            piVar4 = (int *)param_2[2];
            if (piVar4 != (int *)0x0) {
              if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
                lVar11 = 0;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
                lVar11 = 0;
                if (uVar7 != 0) {
                  puVar5 = (uint *)((long)piVar4 + uVar7);
                  lVar11 = (long)puVar5 + (ulong)*puVar5;
                }
              }
              if ((*puVar8 < 9) || ((ulong)puVar8[4] == 0)) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (ulong)*(uint *)((long)piVar6 + (ulong)puVar8[4]);
              }
              puVar5 = (uint *)(lVar11 + uVar7 * 4 + 4);
              uVar2 = *puVar5;
              param_1[2] = (long)piVar4;
              *param_1 = (long)(puVar3 + (ulong)param_4 + 1) + (ulong)uVar9;
              param_1[1] = (long)puVar5 + (ulong)uVar2;
              return;
            }
          }
        }
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


