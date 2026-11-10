/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0108e22c; name: FUN_0108e22c
 */


void FUN_0108e22c(long param_1,undefined8 *param_2,float *param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  char *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_047d5608;
  fVar11 = 0.0;
  piVar5 = (int *)param_2[1];
  fVar10 = 0.0;
  if (piVar5 != (int *)0x0) {
    fVar10 = 0.0;
    if (6 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
      fVar10 = 0.0;
      if (uVar6 != 0) {
        puVar4 = (uint *)((long)piVar5 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        local_60 = "AddSpeed";
        puVar4 = bsearch(&local_60,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 == (uint *)0x0) {
          fVar10 = 0.0;
        }
        else {
          piVar5 = (int *)*param_2;
          fVar10 = 0.0;
          if (piVar5 != (int *)0x0) {
            piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar2 = *puVar7;
            if (uVar2 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
                piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar6 * 8) == 4) {
              fVar10 = 0.0;
              if (uVar2 < 0xb) {
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                if ((ulong)puVar7[5] != 0) {
                  uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
                }
                if ((0xe < uVar2) && ((ulong)puVar7[7] != 0)) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
                }
              }
              if ((uVar8 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
                 (uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar8),
                 uVar6 != 0)) {
                fVar10 = *(float *)((long)piVar5 + uVar6);
              }
            }
            else {
              fVar10 = 0.0;
              if (0xe < uVar2) {
                fVar10 = 0.0;
                if ((ulong)puVar7[7] != 0) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  *param_3 = fVar10;
  piVar5 = (int *)param_2[1];
  if (((piVar5 != (int *)0x0) && (6 < *(ushort *)((long)piVar5 - (long)*piVar5))) &&
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 != 0)) {
    puVar4 = (uint *)((long)piVar5 + uVar6);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_60 = "SubSpeed";
    puVar4 = bsearch(&local_60,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (piVar5 = (int *)*param_2, piVar5 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar7;
      if (uVar2 < 7) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
          piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar3 + uVar6 * 8) == 4) {
        fVar11 = 0.0;
        if (uVar2 < 0xb) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((ulong)puVar7[5] != 0) {
            uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar7[7] != 0)) {
            fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
          }
        }
        if ((uVar8 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
           (uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar8), uVar6 != 0))
        {
          fVar11 = *(float *)((long)piVar5 + uVar6);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar7[7] != 0)) {
        fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
      }
    }
  }
  param_3[1] = fVar11;
  local_60 = (char *)0x81316c1bb8af0852;
  pcStack_58 = "ActionID";
  local_50 = 8;
  local_48 = (long *)0x0;
  piVar5 = (int *)FUN_00d27b5c(param_2,&local_60);
  if ((piVar5 == (int *)0x0) || (*(ushort *)((long)piVar5 - (long)*piVar5) < 7)) {
    local_34 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
    local_34 = 0;
    if (uVar6 != 0) {
      local_34 = *(undefined4 *)((long)piVar5 + uVar6);
    }
  }
  FUN_0108dd40(param_1 + 0x40,&local_34);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


