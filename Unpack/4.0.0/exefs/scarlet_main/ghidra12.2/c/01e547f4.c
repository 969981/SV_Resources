/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e547f4; name: FUN_01e547f4
 */


void FUN_01e547f4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  char *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_50 = (char *)0x81316c1bb8af0852;
  pcStack_48 = "ActionID";
  local_40 = 8;
  local_38 = (long *)0x0;
  piVar3 = (int *)FUN_00d27b5c(param_2,&local_50);
  if ((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)piVar3 + uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  piVar3 = (int *)param_2[1];
  fVar10 = 0.0;
  if (((piVar3 != (int *)0x0) && (6 < *(ushort *)((long)piVar3 - (long)*piVar3))) &&
     (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar6 != 0)) {
    puVar4 = (uint *)((long)piVar3 + uVar6);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_50 = "MotionTime";
    puVar4 = bsearch(&local_50,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (piVar3 = (int *)*param_2, piVar3 != (int *)0x0)) {
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
      if (*(long *)(PTR_DAT_047d5608 + uVar6 * 8) == 4) {
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
        if ((uVar8 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar6 = (ulong)*(ushort *)(((long)piVar3 - (long)*piVar3) + (ulong)uVar8), uVar6 != 0))
        {
          fVar10 = *(float *)((long)piVar3 + uVar6);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar7[7] != 0)) {
        fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
      }
    }
  }
  *(float *)(param_1 + 0x48) = fVar10;
  return;
}


