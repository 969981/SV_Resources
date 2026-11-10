/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d99870; name: FUN_00d99870
 */


void FUN_00d99870(undefined4 *param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  char *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  piVar4 = (int *)param_2[1];
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) goto LAB_00d99a58;
  uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
  uVar5 = 0;
  if (uVar6 == 0) goto LAB_00d99998;
  puVar3 = (uint *)((long)piVar4 + uVar6);
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  local_40 = "Probability";
  puVar3 = bsearch(&local_40,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
  if ((puVar3 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
    uVar2 = *puVar7;
    if (uVar2 < 7) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)0x0;
      if ((ulong)puVar7[3] != 0) {
        puVar3 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
        piVar9 = (int *)((long)puVar3 + (ulong)*puVar3);
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
      if (uVar2 < 0xb) {
        uVar8 = 0;
LAB_00d99a38:
        uVar5 = 0;
      }
      else {
        uVar8 = 0;
        if ((ulong)puVar7[5] != 0) {
          uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
        }
        if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00d99a38;
        uVar5 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[6]);
      }
      if ((uVar8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
         (uVar6 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar8), uVar6 != 0)) {
        uVar5 = *(undefined4 *)((long)piVar4 + uVar6);
      }
      goto LAB_00d99998;
    }
    if ((0xc < uVar2) && ((ulong)puVar7[6] != 0)) {
      uVar5 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[6]);
      goto LAB_00d99998;
    }
  }
LAB_00d99a58:
  uVar5 = 0;
LAB_00d99998:
  *param_1 = uVar5;
  local_40 = (char *)0x81316c1bb8af0852;
  pcStack_38 = "ActionID";
  local_30 = 8;
  local_28 = (long *)0x0;
  piVar4 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)piVar4 + uVar6);
    }
  }
  param_1[1] = uVar5;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


