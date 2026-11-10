/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f25c60; name: FUN_02f25c60
 */


void FUN_02f25c60(long *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  if ((int)param_1[6] == 0) {
    if (*(char *)(param_1[4] + 0xe) == '\0') {
      puVar8 = (uint *)(param_1[1] + 0x100);
    }
    else {
      puVar8 = (uint *)(param_1[1] + 0x10);
    }
    iVar3 = *(int *)((long)param_1 + 0x14);
    uVar7 = iVar3 - 1;
    param_1[1] = (long)puVar8;
    *(uint *)((long)param_1 + 0x14) = uVar7;
    if (uVar7 == 0 || iVar3 < 1) {
      uVar4 = *(uint *)(param_1 + 2);
      if (uVar4 == 0) {
        puVar8 = (uint *)0x0;
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        puVar8 = *(uint **)(*param_1 + 8);
        *param_1 = (long)puVar8;
        if (puVar8 != (uint *)0x0) {
          uVar5 = *puVar8 & 0xffff;
          if ((int)uVar4 <= (int)(*puVar8 & 0xffff)) {
            uVar5 = uVar4;
          }
          if (0 < (int)uVar5) {
            *(uint *)(param_1 + 2) = uVar4 - uVar5;
            *(uint *)((long)param_1 + 0x14) = uVar5;
            param_1[1] = (long)(puVar8 + 8);
            puVar8 = puVar8 + 8;
            uVar7 = uVar5;
            goto LAB_02f25d8c;
          }
        }
        puVar8 = (uint *)0x0;
        param_1[1] = 0;
      }
    }
LAB_02f25d8c:
    do {
      param_1[4] = (long)puVar8;
      if (puVar8 == (uint *)0x0) {
        *(undefined4 *)(param_1 + 6) = 0;
        param_1[5] = 0;
        return;
      }
      puVar9 = puVar8 + 4;
      uVar4 = uVar7 - 1;
      param_1[1] = (long)puVar9;
      *(uint *)((long)param_1 + 0x14) = uVar4;
      bVar1 = (int)uVar7 < 1;
      uVar7 = uVar4;
      if (uVar4 == 0 || bVar1) {
        uVar5 = *(uint *)(param_1 + 2);
        if (uVar5 == 0) {
          puVar9 = (uint *)0x0;
          *param_1 = 0;
          param_1[1] = 0;
        }
        else {
          puVar9 = *(uint **)(*param_1 + 8);
          *param_1 = (long)puVar9;
          if (puVar9 != (uint *)0x0) {
            uVar7 = *puVar9 & 0xffff;
            if ((int)uVar5 <= (int)(*puVar9 & 0xffff)) {
              uVar7 = uVar5;
            }
            if (0 < (int)uVar7) {
              puVar9 = puVar9 + 8;
              *(uint *)(param_1 + 2) = uVar5 - uVar7;
              *(uint *)((long)param_1 + 0x14) = uVar7;
              param_1[1] = (long)puVar9;
              goto LAB_02f25e04;
            }
          }
          puVar9 = (uint *)0x0;
          param_1[1] = 0;
          uVar7 = uVar4;
        }
      }
LAB_02f25e04:
      puVar2 = puVar8 + 2;
      puVar8 = puVar9;
      if (*puVar2 != 0) {
        *(uint *)(param_1 + 6) = *puVar2 - 1;
        param_1[5] = (long)puVar9;
        return;
      }
    } while( true );
  }
  *(int *)(param_1 + 6) = (int)param_1[6] + -1;
  if (*(char *)(param_1[4] + 0xe) == '\0') {
    puVar8 = (uint *)(param_1[1] + 0x100);
  }
  else {
    puVar8 = (uint *)(param_1[1] + 0x10);
  }
  iVar3 = *(int *)((long)param_1 + 0x14);
  iVar6 = iVar3 + -1;
  param_1[1] = (long)puVar8;
  *(int *)((long)param_1 + 0x14) = iVar6;
  if (iVar6 == 0 || iVar3 < 1) {
    uVar7 = *(uint *)(param_1 + 2);
    if (uVar7 == 0) {
      puVar8 = (uint *)0x0;
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar8 = *(uint **)(*param_1 + 8);
      *param_1 = (long)puVar8;
      if (puVar8 != (uint *)0x0) {
        uVar4 = *puVar8 & 0xffff;
        if ((int)uVar7 <= (int)(*puVar8 & 0xffff)) {
          uVar4 = uVar7;
        }
        if (0 < (int)uVar4) {
          *(uint *)(param_1 + 2) = uVar7 - uVar4;
          *(uint *)((long)param_1 + 0x14) = uVar4;
          puVar8 = puVar8 + 8;
          param_1[1] = (long)puVar8;
          goto LAB_02f25d70;
        }
      }
      puVar8 = (uint *)0x0;
      param_1[1] = 0;
    }
  }
LAB_02f25d70:
  param_1[5] = (long)puVar8;
  return;
}


