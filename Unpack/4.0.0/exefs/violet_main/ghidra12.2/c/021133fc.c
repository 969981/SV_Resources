/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021133fc; name: FUN_021133fc
 */


bool FUN_021133fc(void)

{
  int *piVar1;
  ushort uVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  int *piVar8;
  int *local_30;
  int *local_28;
  char *local_18;
  
  FUN_018dc090(&local_30);
  if ((local_28 == (int *)0x0) || (*(ushort *)((long)local_28 - (long)*local_28) < 7))
  goto LAB_02113568;
  uVar5 = (ulong)((ushort *)((long)local_28 - (long)*local_28))[3];
  iVar4 = 0;
  if (uVar5 == 0) goto LAB_02113520;
  puVar3 = (uint *)((long)local_28 + uVar5);
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  local_18 = "ItemGroup";
  puVar3 = bsearch(&local_18,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
  if ((puVar3 != (uint *)0x0) && (local_30 != (int *)0x0)) {
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
      if (uVar2 < 0xb) {
        uVar7 = 0;
LAB_02113548:
        iVar4 = 0;
      }
      else {
        uVar7 = 0;
        if ((ulong)puVar6[5] != 0) {
          uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
        }
        if ((uVar2 < 0xd) || ((ulong)puVar6[6] == 0)) goto LAB_02113548;
        iVar4 = *(int *)((long)piVar1 + (ulong)puVar6[6]);
      }
      if ((uVar7 < *(ushort *)((long)local_30 - (long)*local_30)) &&
         (uVar5 = (ulong)*(ushort *)(((long)local_30 - (long)*local_30) + (ulong)uVar7), uVar5 != 0)
         ) {
        iVar4 = *(int *)((long)local_30 + uVar5);
      }
      goto LAB_02113520;
    }
    if ((0xc < uVar2) && ((ulong)puVar6[6] != 0)) {
      iVar4 = *(int *)((long)piVar1 + (ulong)puVar6[6]);
      goto LAB_02113520;
    }
  }
LAB_02113568:
  iVar4 = 0;
LAB_02113520:
  return iVar4 == 6;
}


