/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011dfcb4; name: FUN_011dfcb4
 */


void FUN_011dfcb4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  long *plVar4;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_70 = 0x91fc4aa14b691c6;
  puStack_68 = &DAT_03c41801;
  local_60 = 4;
  local_58 = (long *)0x0;
  FUN_00cee868(&local_50,param_2,&local_70);
  plVar4 = (long *)param_1[3];
  *param_1 = local_50;
  param_1[1] = local_48;
  param_1[2] = local_40;
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  uVar3 = local_38;
  local_38 = 0;
  param_1[3] = uVar3;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  piVar6 = (int *)param_2[1];
  fVar11 = 0.0;
  if (((piVar6 != (int *)0x0) && (6 < *(ushort *)((long)piVar6 - (long)*piVar6))) &&
     (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar7 != 0)) {
    puVar5 = (uint *)((long)piVar6 + uVar7);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_50 = "CollisionRad";
    puVar5 = bsearch(&local_50,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar5 != (uint *)0x0) && (piVar6 = (int *)*param_2, piVar6 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
      puVar8 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar8;
      if (uVar2 < 7) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)0x0;
        if ((ulong)puVar8[3] != 0) {
          puVar5 = (uint *)((long)piVar1 + (ulong)puVar8[3]);
          piVar10 = (int *)((long)puVar5 + (ulong)*puVar5);
        }
      }
      if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar7 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = (long)*(char *)((long)piVar10 + uVar7) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar7 * 8) == 4) {
        fVar11 = 0.0;
        if (uVar2 < 0xb) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if ((ulong)puVar8[5] != 0) {
            uVar9 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar8[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar8[7] != 0)) {
            fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar8[7]);
          }
        }
        if ((uVar9 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
           (uVar7 = (ulong)*(ushort *)(((long)piVar6 - (long)*piVar6) + (ulong)uVar9), uVar7 != 0))
        {
          fVar11 = *(float *)((long)piVar6 + uVar7);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar8[7] != 0)) {
        fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar8[7]);
      }
    }
  }
  *(float *)(param_1 + 4) = fVar11;
  return;
}


