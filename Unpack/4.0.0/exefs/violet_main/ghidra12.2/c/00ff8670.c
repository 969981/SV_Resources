/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff8670; name: FUN_00ff8670
 */


void FUN_00ff8670(float *param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort uVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  int *piVar8;
  float fVar9;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined1 auStack_48 [24];
  
  local_68 = (undefined *)0xb32fc2ac24aea97f;
  pcStack_60 = "Skills";
  local_58 = 6;
  local_50 = (long *)0x0;
  FUN_00fb4c10(auStack_48,param_2,&local_68);
  FUN_00ff885c(param_1 + 1,auStack_48);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  piVar4 = (int *)param_2[1];
  fVar9 = 0.0;
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 != 0)) {
    puVar3 = (uint *)((long)piVar4 + uVar5);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    local_68 = &DAT_03c1216f;
    puVar3 = bsearch(&local_68,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar3 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar6;
      if (uVar2 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
          piVar8 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar5 * 8) == 4) {
        fVar9 = 0.0;
        if (uVar2 < 0xb) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((ulong)puVar6[5] != 0) {
            uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
            fVar9 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
          }
        }
        if ((uVar7 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
           (uVar5 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar7), uVar5 != 0))
        {
          fVar9 = *(float *)((long)piVar4 + uVar5);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
        fVar9 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
      }
    }
  }
  *param_1 = fVar9;
  return;
}


