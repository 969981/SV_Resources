/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dc090; name: FUN_018dc090
 */


void FUN_018dc090(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined *__compar;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  ushort *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  __compar = PTR_LAB_047d5600;
  uVar12 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x1b18);
  do {
    local_80 = &DAT_fbec41851566601b;
    pcStack_78 = "values";
    local_70 = 6;
    local_68 = (long *)0x0;
    puVar5 = (uint *)FUN_00efa07c(puVar1,&local_80);
    if (puVar5 == (uint *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *puVar5;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (uVar13 <= uVar12) {
      uVar3 = *puVar1;
      uVar9 = *(undefined8 *)(param_2 + 0x1b28);
      param_1[1] = *(undefined8 *)(param_2 + 0x1b20);
      param_1[2] = uVar9;
      *param_1 = uVar3;
      return;
    }
    local_80 = &DAT_fbec41851566601b;
    pcStack_78 = "values";
    local_70 = 6;
    local_68 = (long *)0x0;
    FUN_00e90ee0(param_1,puVar1,&local_80,uVar12);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    piVar6 = (int *)param_1[1];
    if ((piVar6 == (int *)0x0) || (*(ushort *)((long)piVar6 - (long)*piVar6) < 7))
    goto LAB_018dc254;
    uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    uVar13 = 0;
    if (uVar7 != 0) {
      puVar5 = (uint *)((long)piVar6 + uVar7);
      local_80 = &DAT_03c19e97;
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      puVar5 = bsearch(&local_80,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)__compar);
      if ((puVar5 != (uint *)0x0) && (piVar6 = (int *)*param_1, piVar6 != (int *)0x0)) {
        piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar4 = *puVar8;
        if (uVar4 < 7) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar5 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar11 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
           (uVar7 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar7 == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = (long)*(char *)((long)piVar11 + uVar7) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar7 * 8) == 4) {
          if (uVar4 < 0xb) {
            uVar10 = 0;
LAB_018dc290:
            uVar13 = 0;
          }
          else {
            uVar10 = 0;
            if ((ulong)puVar8[5] != 0) {
              uVar10 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
            }
            if ((uVar4 < 0xd) || ((ulong)puVar8[6] == 0)) goto LAB_018dc290;
            uVar13 = *(uint *)((long)piVar2 + (ulong)puVar8[6]);
          }
          if ((uVar10 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
             (uVar7 = (ulong)*(ushort *)(((long)piVar6 - (long)*piVar6) + (ulong)uVar10), uVar7 != 0
             )) {
            uVar13 = *(uint *)((long)piVar6 + uVar7);
          }
          goto LAB_018dc244;
        }
        if ((0xc < uVar4) && ((ulong)puVar8[6] != 0)) {
          uVar13 = *(uint *)((long)piVar2 + (ulong)puVar8[6]);
          goto LAB_018dc244;
        }
      }
LAB_018dc254:
      uVar13 = 0;
    }
LAB_018dc244:
    uVar12 = uVar12 + 1;
    if (uVar13 == (param_3 & 0xffff)) {
      return;
    }
  } while( true );
}


