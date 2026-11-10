/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e58540; name: FUN_01e58540
 */


void FUN_01e58540(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ushort *puVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  char *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_50 = (char *)0x364e45d97333c1ce;
  pcStack_48 = "TriggerID";
  local_40 = 9;
  local_38 = (long *)0x0;
  piVar4 = (int *)FUN_00d27b5c(param_2,&local_50);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = *(undefined4 *)((long)piVar4 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  piVar4 = (int *)param_2[1];
  fVar13 = 0.0;
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar7 != 0)) {
    puVar5 = (uint *)((long)piVar4 + uVar7);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_50 = "Stamina";
    puVar5 = bsearch(&local_50,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar5 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
      puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar3 = *puVar10;
      if (uVar3 < 7) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = (int *)0x0;
        if ((ulong)puVar10[3] != 0) {
          puVar5 = (uint *)((long)piVar1 + (ulong)puVar10[3]);
          piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
        }
      }
      if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar7 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = (long)*(char *)((long)piVar12 + uVar7) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar7 * 8) == 4) {
        fVar13 = 0.0;
        if (uVar3 < 0xb) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((ulong)puVar10[5] != 0) {
            uVar11 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar10[5]);
          }
          if ((0xe < uVar3) && ((ulong)puVar10[7] != 0)) {
            fVar13 = (float)*(double *)((long)piVar1 + (ulong)puVar10[7]);
          }
        }
        if ((uVar11 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
           (uVar7 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar11), uVar7 != 0))
        {
          fVar13 = *(float *)((long)piVar4 + uVar7);
        }
      }
      else if ((0xe < uVar3) && ((ulong)puVar10[7] != 0)) {
        fVar13 = (float)*(double *)((long)piVar1 + (ulong)puVar10[7]);
      }
    }
  }
  *(float *)(param_1 + 0x50) = fVar13;
  local_50 = (char *)0x4d917ebecbc4a95c;
  pcStack_48 = "ComparisonOperatorType";
  local_40 = 0x16;
  local_38 = (long *)0x0;
  piVar4 = (int *)FUN_00d27b5c(param_2,&local_50);
  if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
     (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar7 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)((long)piVar4 + uVar7);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (uVar11 < 6) {
    pbVar9 = *(byte **)(PTR_PTR_047da5e8 + (ulong)uVar11 * 8);
  }
  else {
    pbVar9 = &DAT_03c886bc;
  }
  puVar8 = &DAT_cbf29ce484222645;
  bVar2 = *pbVar9;
  while (bVar2 != 0) {
    pbVar9 = pbVar9 + 1;
    puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar2) * 0x100000001b3);
    bVar2 = *pbVar9;
  }
  *(undefined1 **)(param_1 + 0x48) = puVar8;
  return;
}


