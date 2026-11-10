/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021136e4; name: FUN_021136e4
 */


bool FUN_021136e4(void)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  int *local_38;
  int *local_30;
  char *local_8;
  
  FUN_018dc090(&local_38);
  puVar3 = PTR_DAT_047d5608;
  if (local_30 != (int *)0x0) {
    if ((6 < *(ushort *)((long)local_30 - (long)*local_30)) &&
       (uVar6 = (ulong)((ushort *)((long)local_30 - (long)*local_30))[3], uVar6 != 0)) {
      puVar4 = (uint *)((long)local_30 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      local_8 = "WorkPpUp";
      puVar4 = bsearch(&local_8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar4 != (uint *)0x0) && (local_38 != (int *)0x0)) {
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
          if (uVar2 < 0xb) {
            uVar8 = 0;
LAB_0211383c:
            iVar5 = 0;
          }
          else {
            uVar8 = 0;
            if ((ulong)puVar7[5] != 0) {
              uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
            }
            if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_0211383c;
            iVar5 = *(int *)((long)piVar1 + (ulong)puVar7[6]);
          }
          if ((uVar8 < *(ushort *)((long)local_38 - (long)*local_38)) &&
             (uVar6 = (ulong)*(ushort *)(((long)local_38 - (long)*local_38) + (ulong)uVar8),
             uVar6 != 0)) {
            iVar5 = *(int *)((long)local_38 + uVar6);
          }
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_0211385c;
          iVar5 = *(int *)((long)piVar1 + (ulong)puVar7[6]);
        }
        if (0 < iVar5) {
          return true;
        }
      }
    }
LAB_0211385c:
    if (local_30 != (int *)0x0) {
      if ((6 < *(ushort *)((long)local_30 - (long)*local_30)) &&
         (uVar6 = (ulong)((ushort *)((long)local_30 - (long)*local_30))[3], uVar6 != 0)) {
        puVar4 = (uint *)((long)local_30 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        local_8 = "WorkPpSelTgt";
        puVar4 = bsearch(&local_8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar4 != (uint *)0x0) && (local_38 != (int *)0x0)) {
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
            if (uVar2 < 0xb) {
              uVar8 = 0;
LAB_02113a90:
              iVar5 = 0;
            }
            else {
              uVar8 = 0;
              if ((ulong)puVar7[5] != 0) {
                uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
              }
              if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_02113a90;
              iVar5 = *(int *)((long)piVar1 + (ulong)puVar7[6]);
            }
            if ((uVar8 < *(ushort *)((long)local_38 - (long)*local_38)) &&
               (uVar6 = (ulong)*(ushort *)(((long)local_38 - (long)*local_38) + (ulong)uVar8),
               uVar6 != 0)) {
              iVar5 = *(int *)((long)local_38 + uVar6);
            }
          }
          else {
            if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_02113968;
            iVar5 = *(int *)((long)piVar1 + (ulong)puVar7[6]);
          }
          if (iVar5 != 0) {
            return true;
          }
        }
      }
LAB_02113968:
      if ((local_30 != (int *)0x0) && (6 < *(ushort *)((long)local_30 - (long)*local_30))) {
        uVar6 = (ulong)((ushort *)((long)local_30 - (long)*local_30))[3];
        iVar5 = 0;
        if (uVar6 == 0) goto LAB_02113a70;
        puVar4 = (uint *)((long)local_30 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        local_8 = "WorkPpRcv";
        puVar4 = bsearch(&local_8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar4 != (uint *)0x0) && (local_38 != (int *)0x0)) {
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
            if (uVar2 < 0xb) {
              uVar8 = 0;
LAB_02113aac:
              iVar5 = 0;
            }
            else {
              uVar8 = 0;
              if ((ulong)puVar7[5] != 0) {
                uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
              }
              if ((uVar2 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_02113aac;
              iVar5 = *(int *)((long)piVar1 + (ulong)puVar7[6]);
            }
            if ((uVar8 < *(ushort *)((long)local_38 - (long)*local_38)) &&
               (uVar6 = (ulong)*(ushort *)(((long)local_38 - (long)*local_38) + (ulong)uVar8),
               uVar6 != 0)) {
              iVar5 = *(int *)((long)local_38 + uVar6);
            }
            goto LAB_02113a70;
          }
          if ((0xc < uVar2) && ((ulong)puVar7[6] != 0)) {
            iVar5 = *(int *)((long)piVar1 + (ulong)puVar7[6]);
            goto LAB_02113a70;
          }
        }
      }
    }
  }
  iVar5 = 0;
LAB_02113a70:
  return 0 < iVar5;
}


