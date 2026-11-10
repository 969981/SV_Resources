/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bdea74; name: FUN_00bdea74
 */


/* WARNING: Removing unreachable block (ram,0x00bdead0) */

undefined8 FUN_00bdea74(long param_1,ulong *param_2)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  
LAB_00bdeaa0:
  do {
    pbVar2 = (byte *)*param_2;
    if (pbVar2 < (byte *)param_2[1]) {
      uVar4 = (uint)*pbVar2;
      if ((char)*pbVar2 < '\x01') goto LAB_00bdead8;
      *(uint *)(param_2 + 4) = uVar4;
      *param_2 = (ulong)(pbVar2 + 1);
LAB_00bdeafc:
      if (uVar4 == 10) {
        uVar8 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar8 + -1;
        if ((int)uVar8 < 1) {
          return 0;
        }
        do {
          piVar7 = *(int **)(param_1 + 0x28);
          if (piVar7 == (int *)0x0) {
            iVar10 = *(int *)(param_1 + 0x20);
            iVar9 = *(int *)(param_1 + 0x24);
LAB_00bdeb58:
            if (iVar10 <= iVar9) {
              FUN_00c11f04(param_1 + 0x18,(iVar9 - iVar10) + 1);
              piVar7 = *(int **)(param_1 + 0x28);
            }
            iVar9 = *piVar7;
LAB_00bdeb74:
            *piVar7 = iVar9 + 1;
            uVar13 = FUN_00be23ec(*(undefined8 *)(param_1 + 0x18));
            iVar10 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar10 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar10 * 8 + 8) = uVar13;
          }
          else {
            iVar10 = *(int *)(param_1 + 0x20);
            iVar9 = *piVar7;
            if (iVar9 <= iVar10) {
              if (iVar9 == *(int *)(param_1 + 0x24)) goto LAB_00bdeb58;
              goto LAB_00bdeb74;
            }
            *(int *)(param_1 + 0x20) = iVar10 + 1;
            uVar13 = *(undefined8 *)(piVar7 + (long)iVar10 * 2 + 2);
          }
          pbVar2 = (byte *)*param_2;
          if (pbVar2 < (byte *)param_2[1]) {
            uVar8 = (ulong)*pbVar2;
            if ((char)*pbVar2 < '\0') goto LAB_00bdebc8;
            *param_2 = (ulong)(pbVar2 + 1);
          }
          else {
            uVar8 = 0;
LAB_00bdebc8:
            uVar8 = FUN_00c0944c(param_2,uVar8);
            if ((long)uVar8 < 0) {
              uVar8 = 0;
            }
          }
          iVar6 = (int)param_2[3];
          iVar1 = (int)param_2[5];
          iVar10 = (iVar6 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
          iVar5 = (int)uVar8;
          uVar8 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
          param_2[1] = uVar8;
          iVar9 = 0x7fffffff;
          if (iVar5 <= 0x7fffffff - iVar10 && -1 < iVar5) {
            iVar9 = iVar10 + iVar5;
          }
          iVar10 = iVar1;
          if (iVar9 <= iVar1) {
            iVar10 = iVar9;
          }
          *(int *)(param_2 + 5) = iVar10;
          iVar9 = (int)param_2[6];
          if (iVar10 <= (int)param_2[6]) {
            iVar9 = iVar10;
          }
          iVar10 = iVar6 - iVar9;
          if (iVar10 == 0 || iVar6 < iVar9) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar10;
            param_2[1] = uVar8 - (long)iVar10;
          }
          uVar8 = FUN_00bdcc68(uVar13,param_2);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          *(int *)(param_2 + 5) = iVar1;
          cVar3 = *(char *)((long)param_2 + 0x24);
          pcVar11 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar9 = (int)param_2[3];
          iVar10 = (int)param_2[6];
          if (iVar1 <= (int)param_2[6]) {
            iVar10 = iVar1;
          }
          iVar6 = iVar9 - iVar10;
          param_2[1] = (ulong)pcVar11;
          if (iVar6 == 0 || iVar9 < iVar10) {
            iVar6 = 0;
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar11 = pcVar11 + -(long)iVar6;
            *(int *)((long)param_2 + 0x2c) = iVar6;
            param_2[1] = (ulong)pcVar11;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          if (cVar3 == '\0') {
            return 0;
          }
          pcVar12 = (char *)*param_2;
          if ((pcVar11 <= pcVar12) || (*pcVar12 != '\n')) goto LAB_00bded04;
          *param_2 = (ulong)(pcVar12 + 1);
        } while( true );
      }
    }
    else {
      uVar4 = 0;
LAB_00bdead8:
      uVar4 = FUN_00c096d0(param_2,uVar4);
      *(uint *)(param_2 + 4) = uVar4;
      if (uVar4 - 1 < 0x7f) goto LAB_00bdeafc;
    }
    if (uVar4 == 0) {
      return 1;
    }
    if ((uVar4 & 7) == 4) {
      return 1;
    }
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_00b7714c((ulong *)(param_1 + 8));
    }
    else {
      uVar8 = uVar8 & 0xfffffffffffffffe;
    }
    uVar8 = FUN_00c01b50(param_2,uVar4,uVar8);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  } while( true );
LAB_00bded04:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar12 == pcVar11) && ((iVar9 == iVar1 || (iVar6 != 0)))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bdeaa0;
}


