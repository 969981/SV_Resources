/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bb4a0; name: FUN_028bb4a0
 */


undefined8 FUN_028bb4a0(long *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ushort *puVar9;
  int *piVar10;
  int iVar11;
  undefined8 local_8;
  
  piVar7 = (int *)param_1[1];
  if (((piVar7 != (int *)0x0) && (6 < *(ushort *)((long)piVar7 - (long)*piVar7))) &&
     (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 != 0)) {
    puVar4 = (uint *)((long)piVar7 + uVar8);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_8 = *(undefined8 *)(param_2 + 8);
    puVar4 = bsearch(&local_8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    piVar7 = (int *)param_1[2];
    if (piVar7 != (int *)0x0) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar9 < 7) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
          piVar10 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (long)*(char *)((long)piVar10 + uVar8) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar8 * 8) == 8) {
        uVar3 = ((ushort *)((long)piVar7 - (long)*piVar7))[3];
        puVar4 = (uint *)((long)piVar7 + (ulong)uVar3);
        piVar10 = (int *)((long)puVar4 + (ulong)*puVar4);
        piVar1 = (int *)((long)((long)piVar1 + (ulong)puVar9[3]) +
                        (ulong)*(uint *)((long)piVar1 + (ulong)puVar9[3]));
        puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
        if ((*puVar9 < 9) || ((ulong)puVar9[4] == 0)) {
          iVar11 = -1;
        }
        else {
          iVar11 = *(int *)((long)piVar1 + (ulong)puVar9[4]);
        }
        if (iVar11 < *piVar10) {
          if (*param_1 == 0) {
            return 0;
          }
          piVar2 = (int *)0x0;
          if (uVar3 != 0 && 6 < *(ushort *)((long)piVar7 - (long)*piVar7)) {
            piVar2 = piVar10;
          }
          if ((*puVar9 < 9) || ((ulong)puVar9[4] == 0)) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar9[4]);
          }
          piVar7 = (int *)((long)(piVar2 + uVar8 + 1) + (ulong)(uint)piVar2[uVar8 + 1]);
          uVar5 = FUN_015efc20();
          if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
             (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
            lVar6 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar7 + uVar8);
            lVar6 = (long)puVar4 + (ulong)*puVar4;
          }
          uVar5 = FUN_028bb2e8(lVar6,uVar5);
          return uVar5;
        }
      }
    }
  }
  return 0;
}


