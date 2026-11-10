/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003435b0; name: FUN_003435b0
 */


ulong * FUN_003435b0(ulong *param_1,undefined8 *param_2,ulong param_3,ulong param_4,long param_5)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *__s1;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  char *unaff_x26;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *local_80;
  ulong local_78;
  
  if ((param_1 == (ulong *)0x0) || (unaff_x26 = (char *)*param_1, unaff_x26 == (char *)0x0)) {
    pcVar8 = (char *)0x0;
  }
  else if (param_3 == 0) {
    pcVar8 = unaff_x26;
    if (unaff_x26 < (char *)0x2) {
      pcVar8 = (char *)0x1;
    }
  }
  else {
    uVar13 = param_1[1];
    pcVar11 = (char *)0x0;
    pcVar8 = (char *)0x0;
    do {
      __s1 = *(char **)(uVar13 + (long)pcVar11 * 0x20 + 8);
      puVar5 = param_2;
      uVar12 = param_3;
      do {
        iVar2 = strcmp(__s1,(char *)*puVar5);
        if (iVar2 == 0) goto LAB_00343604;
        uVar12 = uVar12 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar12 != 0);
      pcVar8 = pcVar8 + 1;
LAB_00343604:
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 < unaff_x26);
  }
  puVar3 = (ulong *)FUN_0038c780(0x10);
  pcVar8 = pcVar8 + param_5;
  *puVar3 = (ulong)pcVar8;
  if (pcVar8 == (char *)0x0) {
    puVar3[1] = 0;
  }
  else {
    uVar13 = FUN_0038c780((long)pcVar8 * 0x20);
    puVar3[1] = uVar13;
    if ((param_1 == (ulong *)0x0) || (uVar13 = *param_1, uVar13 == 0)) {
      uVar12 = 0;
    }
    else if (param_3 == 0) {
      lVar7 = 0;
      uVar12 = 0;
      uVar13 = param_4;
      do {
        piVar1 = (int *)(param_1[1] + lVar7);
        iVar2 = *piVar1;
        uVar4 = FUN_0038ccb0(*(undefined8 *)(piVar1 + 2));
        if (iVar2 == 0) {
          uVar13 = FUN_0038ccb0(*(undefined8 *)(piVar1 + 4));
        }
        else if (iVar2 == 1) {
          uVar13 = uVar13 & 0xffffffff00000000 | (ulong)(uint)piVar1[4];
        }
        else if (iVar2 == 2) {
          unaff_x26 = *(char **)(piVar1 + 6);
          uVar13 = (**(code **)unaff_x26)(*(undefined8 *)(piVar1 + 4));
        }
        piVar1 = (int *)(puVar3[1] + lVar7);
        lVar7 = lVar7 + 0x20;
        *(undefined8 *)(piVar1 + 2) = uVar4;
        *(ulong *)(piVar1 + 4) = uVar13;
        *piVar1 = iVar2;
        *(char **)(piVar1 + 6) = unaff_x26;
        uVar12 = uVar12 + 1;
      } while (uVar12 < *param_1);
    }
    else {
      uVar14 = 0;
      uVar12 = 0;
LAB_003436a0:
      do {
        uVar9 = param_1[1];
        lVar7 = uVar9 + uVar14 * 0x20;
        unaff_x26 = *(char **)(lVar7 + 8);
        uVar6 = param_3;
        puVar5 = param_2;
        do {
          iVar2 = strcmp(unaff_x26,(char *)*puVar5);
          if (iVar2 == 0) {
            uVar14 = uVar14 + 1;
            if (uVar14 < uVar13) goto LAB_003436a0;
            goto LAB_00343770;
          }
          uVar6 = uVar6 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
        iVar2 = *(int *)(uVar9 + uVar14 * 0x20);
        unaff_x26 = (char *)FUN_0038ccb0(unaff_x26);
        if (iVar2 == 2) {
          local_80 = *(undefined8 **)(lVar7 + 0x18);
          local_78 = (*(code *)*local_80)(*(undefined8 *)(lVar7 + 0x10));
        }
        else if (iVar2 == 1) {
          local_78 = local_78 & 0xffffffff00000000 | (ulong)*(uint *)(lVar7 + 0x10);
        }
        else if (iVar2 == 0) {
          local_78 = FUN_0038ccb0(*(undefined8 *)(lVar7 + 0x10));
        }
        piVar1 = (int *)(puVar3[1] + uVar12 * 0x20);
        uVar12 = uVar12 + 1;
        *(char **)(piVar1 + 2) = unaff_x26;
        *(ulong *)(piVar1 + 4) = local_78;
        *piVar1 = iVar2;
        *(undefined8 **)(piVar1 + 6) = local_80;
        uVar13 = *param_1;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar13);
    }
LAB_00343770:
    if (param_5 != 0) {
      lVar7 = 0;
      lVar10 = uVar12 * 0x20;
      do {
        piVar1 = (int *)(param_4 + lVar7);
        iVar2 = *piVar1;
        uVar4 = FUN_0038ccb0(*(undefined8 *)(piVar1 + 2));
        if (iVar2 == 2) {
          unaff_x26 = *(char **)(piVar1 + 6);
          param_3 = (**(code **)unaff_x26)(*(undefined8 *)(piVar1 + 4));
        }
        else if (iVar2 == 1) {
          param_3 = param_3 & 0xffffffff00000000 | (ulong)(uint)piVar1[4];
        }
        else if (iVar2 == 0) {
          param_3 = FUN_0038ccb0(*(undefined8 *)(piVar1 + 4));
        }
        piVar1 = (int *)(puVar3[1] + lVar10 + lVar7);
        uVar12 = uVar12 + 1;
        param_5 = param_5 + -1;
        lVar7 = lVar7 + 0x20;
        *piVar1 = iVar2;
        *(undefined8 *)(piVar1 + 2) = uVar4;
        *(ulong *)(piVar1 + 4) = param_3;
        *(char **)(piVar1 + 6) = unaff_x26;
      } while (param_5 != 0);
    }
    if (uVar12 != *puVar3) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return puVar3;
}


