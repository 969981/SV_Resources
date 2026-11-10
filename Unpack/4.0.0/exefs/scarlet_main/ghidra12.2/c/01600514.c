/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01600514; name: FUN_01600514
 */


void FUN_01600514(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  char *local_18;
  
  puVar3 = PTR_DAT_047d5608;
  piVar5 = (int *)param_2[1];
  if ((piVar5 == (int *)0x0) || (*(ushort *)((long)piVar5 - (long)*piVar5) < 7)) goto LAB_016008d8;
  uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
  iVar6 = 0;
  if (uVar8 != 0) {
    puVar4 = (uint *)((long)piVar5 + uVar8);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_18 = "affinityMask";
    puVar4 = bsearch(&local_18,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (piVar5 = (int *)*param_2, piVar5 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar9;
      if (uVar2 < 7) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
          piVar11 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
      }
      if (*(long *)(puVar3 + uVar8 * 8) == 4) {
        if (uVar2 < 0xb) {
          uVar10 = 0;
LAB_016008a0:
          iVar6 = 0;
        }
        else {
          uVar10 = 0;
          if ((ulong)puVar9[5] != 0) {
            uVar10 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar9[5]);
          }
          if ((uVar2 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_016008a0;
          iVar6 = *(int *)((long)piVar1 + (ulong)puVar9[6]);
        }
        if ((uVar10 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
           (uVar8 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar10), uVar8 != 0))
        {
          iVar6 = *(int *)((long)piVar5 + uVar8);
        }
        goto LAB_0160063c;
      }
      if ((0xc < uVar2) && ((ulong)puVar9[6] != 0)) {
        iVar6 = *(int *)((long)piVar1 + (ulong)puVar9[6]);
        goto LAB_0160063c;
      }
    }
LAB_016008d8:
    iVar6 = 0;
  }
LAB_0160063c:
  *param_1 = (long)iVar6;
  piVar5 = (int *)param_2[1];
  if ((piVar5 == (int *)0x0) || (*(ushort *)((long)piVar5 - (long)*piVar5) < 7)) goto LAB_016008f8;
  uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
  uVar7 = 0;
  if (uVar8 != 0) {
    puVar4 = (uint *)((long)piVar5 + uVar8);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_18 = "nxIdealCore";
    puVar4 = bsearch(&local_18,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (piVar5 = (int *)*param_2, piVar5 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar9;
      if (uVar2 < 7) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
          piVar11 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
      }
      if (*(long *)(puVar3 + uVar8 * 8) == 4) {
        if (uVar2 < 0xb) {
          uVar10 = 0;
LAB_016008ac:
          uVar7 = 0;
        }
        else {
          uVar10 = 0;
          if ((ulong)puVar9[5] != 0) {
            uVar10 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar9[5]);
          }
          if ((uVar2 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_016008ac;
          uVar7 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[6]);
        }
        if ((uVar10 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
           (uVar8 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar10), uVar8 != 0))
        {
          uVar7 = *(undefined4 *)((long)piVar5 + uVar8);
        }
        goto LAB_0160074c;
      }
      if ((0xc < uVar2) && ((ulong)puVar9[6] != 0)) {
        uVar7 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[6]);
        goto LAB_0160074c;
      }
    }
LAB_016008f8:
    uVar7 = 0;
  }
LAB_0160074c:
  *(undefined4 *)(param_1 + 1) = uVar7;
  piVar5 = (int *)param_2[1];
  if ((piVar5 == (int *)0x0) || (*(ushort *)((long)piVar5 - (long)*piVar5) < 7)) goto LAB_01600918;
  uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
  uVar7 = 0;
  if (uVar8 == 0) goto LAB_01600858;
  puVar4 = (uint *)((long)piVar5 + uVar8);
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  local_18 = "nxPriority";
  puVar4 = bsearch(&local_18,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
  if ((puVar4 != (uint *)0x0) && (piVar5 = (int *)*param_2, piVar5 != (int *)0x0)) {
    piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
    uVar2 = *puVar9;
    if (uVar2 < 7) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar4 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
        piVar11 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
    }
    if (*(long *)(puVar3 + uVar8 * 8) == 4) {
      if (uVar2 < 0xb) {
        uVar10 = 0;
LAB_016008b8:
        uVar7 = 0;
      }
      else {
        uVar10 = 0;
        if ((ulong)puVar9[5] != 0) {
          uVar10 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar9[5]);
        }
        if ((uVar2 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_016008b8;
        uVar7 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[6]);
      }
      if ((uVar10 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
         (uVar8 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar10), uVar8 != 0)) {
        uVar7 = *(undefined4 *)((long)piVar5 + uVar8);
      }
      goto LAB_01600858;
    }
    if ((0xc < uVar2) && ((ulong)puVar9[6] != 0)) {
      uVar7 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[6]);
      goto LAB_01600858;
    }
  }
LAB_01600918:
  uVar7 = 0;
LAB_01600858:
  *(undefined4 *)((long)param_1 + 0xc) = uVar7;
  return;
}


