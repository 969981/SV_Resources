/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00acb1a4; name: FUN_00acb1a4
 */


void FUN_00acb1a4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  char *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_50 = (char *)0x81316c1bb8af0852;
  pcStack_48 = "ActionID";
  local_40 = 8;
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
  puVar3 = PTR_DAT_047d5608;
  fVar12 = 0.0;
  piVar4 = (int *)param_2[1];
  fVar11 = 0.0;
  if (piVar4 != (int *)0x0) {
    fVar11 = 0.0;
    if (6 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
      uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
      fVar11 = 0.0;
      if (uVar7 != 0) {
        puVar5 = (uint *)((long)piVar4 + uVar7);
        puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
        local_50 = "Degree";
        puVar5 = bsearch(&local_50,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar5 == (uint *)0x0) {
          fVar11 = 0.0;
        }
        else {
          piVar4 = (int *)*param_2;
          fVar11 = 0.0;
          if (piVar4 != (int *)0x0) {
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
            if (*(long *)(puVar3 + uVar7 * 8) == 4) {
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
              if ((uVar9 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
                 (uVar7 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar9),
                 uVar7 != 0)) {
                fVar11 = *(float *)((long)piVar4 + uVar7);
              }
            }
            else {
              fVar11 = 0.0;
              if (0xe < uVar2) {
                fVar11 = 0.0;
                if ((ulong)puVar8[7] != 0) {
                  fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar8[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  *(float *)(param_1 + 0x48) = fVar11;
  piVar4 = (int *)param_2[1];
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar7 != 0)) {
    puVar5 = (uint *)((long)piVar4 + uVar7);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_50 = "TurnSpeedRate";
    puVar5 = bsearch(&local_50,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar5 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
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
      if (*(long *)(puVar3 + uVar7 * 8) == 4) {
        fVar12 = 0.0;
        if (uVar2 < 0xb) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if ((ulong)puVar8[5] != 0) {
            uVar9 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar8[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar8[7] != 0)) {
            fVar12 = (float)*(double *)((long)piVar1 + (ulong)puVar8[7]);
          }
        }
        if ((uVar9 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
           (uVar7 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar9), uVar7 != 0))
        {
          fVar12 = *(float *)((long)piVar4 + uVar7);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar8[7] != 0)) {
        fVar12 = (float)*(double *)((long)piVar1 + (ulong)puVar8[7]);
      }
    }
  }
  *(float *)(param_1 + 0x4c) = fVar12;
  return;
}


