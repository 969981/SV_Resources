/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c2be4; name: FUN_031c2be4
 */


void FUN_031c2be4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar8 = *(uint *)(param_1 + 3);
  if (uVar8 == 0) goto LAB_031c2cdc;
  if ((uVar8 == 1) && (*(int *)(param_1 + 1) == 0)) {
    if (*(char *)((long)param_1 + 0xc) == '\0') {
      return;
    }
    plVar1 = (long *)param_1[2];
LAB_031c2c38:
    plVar5 = plVar1;
    if (uVar8 != 1) {
      iVar7 = -(uVar8 & 0xfffffffe);
      do {
        plVar3 = plVar1;
        if (*plVar5 != 0) {
          plVar3 = plVar1 + 1;
          *plVar1 = *plVar5;
        }
        plVar1 = plVar3;
        if (plVar5[1] != 0) {
          plVar1 = plVar3 + 1;
          *plVar3 = plVar5[1];
        }
        plVar5 = plVar5 + 2;
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0);
    }
    plVar3 = plVar1;
    if (((uVar8 & 1) != 0) && (*plVar5 != 0)) {
      plVar3 = plVar1 + 1;
      *plVar1 = *plVar5;
    }
    plVar1 = (long *)param_1[2];
LAB_031c2c8c:
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    uVar8 = (uint)((ulong)((long)plVar3 - (long)plVar1) >> 3);
    if (uVar8 != 0) goto LAB_031c2c9c;
  }
  else {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      plVar3 = (long *)param_1[2];
      plVar1 = plVar3;
      if (0 < (int)uVar8) goto LAB_031c2c38;
      goto LAB_031c2c8c;
    }
LAB_031c2c9c:
    if (param_2 == (undefined8 *)0x0) {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      lVar10 = param_1[2];
    }
    else {
      lVar10 = param_1[2];
      if ((int)uVar8 < 6) {
        iVar7 = *(int *)(param_2 + 0xb);
        if (*(int *)((long)param_2 + 0x5c) <= (int)(iVar7 + uVar8)) {
          iVar2 = iVar7;
          if (5 < iVar7) {
            iVar2 = 6;
          }
          iVar7 = iVar7 - iVar2;
          (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_2[1] + (long)iVar7 * 8);
          *(int *)(param_2 + 0xb) = iVar7;
        }
        if (0 < (int)uVar8) {
          if (uVar8 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              puVar9 = (undefined8 *)(lVar10 + uVar6 * 8);
              iVar2 = (int)uVar6;
              *(undefined8 *)(param_2[1] + (long)(iVar2 + iVar7) * 8) = *puVar9;
              uVar6 = uVar6 + 2;
              *(undefined8 *)(param_2[1] + (long)(iVar2 + *(int *)(param_2 + 0xb) + 1) * 8) =
                   puVar9[1];
              iVar7 = *(int *)(param_2 + 0xb);
            } while (((ulong)uVar8 & 0xfffffffe) != uVar6);
          }
          if ((uVar8 & 1) != 0) {
            *(undefined8 *)(param_2[1] + (long)(iVar7 + (int)uVar6) * 8) =
                 *(undefined8 *)(lVar10 + uVar6 * 8);
            iVar7 = *(int *)(param_2 + 0xb);
          }
        }
        iVar2 = *(int *)((long)param_2 + 0x5c);
        iVar7 = iVar7 + uVar8;
        *(int *)(param_2 + 0xb) = iVar7;
        if (iVar2 < iVar7) {
          (**(code **)(*(long *)*param_2 + 0x28))
                    ((long *)*param_2,param_2[1] + (long)iVar2 * 8,iVar7 - iVar2);
          *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)((long)param_2 + 0x5c);
        }
        goto LAB_031c2cd4;
      }
      plVar1 = (long *)*param_2;
      lVar4 = *plVar1;
    }
    (**(code **)(lVar4 + 0x28))(plVar1,lVar10,uVar8);
  }
LAB_031c2cd4:
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_031c2cdc:
  uVar8 = *(int *)(param_2 + 0xb) - 1;
  if (*(int *)(param_2 + 0xb) < 1) {
    (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,param_2[1],6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar9 = (undefined8 *)(param_2[1] + 0x28);
  }
  else {
    *(uint *)(param_2 + 0xb) = uVar8;
    puVar9 = (undefined8 *)(param_2[1] + (ulong)uVar8 * 8);
  }
  puVar9 = (undefined8 *)*puVar9;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(param_1 + 3);
  iVar7 = *(int *)(param_1 + 3);
  lVar10 = (long)iVar7;
  if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) <= iVar7) {
    FUN_031c25b4(param_1 + 2,PTR_PTR_047d1a50,lVar10 + 1);
    iVar7 = *(int *)(param_1 + 3);
  }
  *(undefined8 **)(param_1[2] + (long)iVar7 * 8) = puVar9;
  *(int *)(param_1 + 3) = (int)(lVar10 + 1);
  return;
}


