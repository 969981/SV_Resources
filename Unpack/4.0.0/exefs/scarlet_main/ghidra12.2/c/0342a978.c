/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342a978; name: FUN_0342a978
 */


undefined4 * FUN_0342a978(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    uVar11 = 0;
  }
  else {
    uVar6 = 0;
    do {
      iVar1 = uVar6 + (uVar8 >> 1);
      uVar2 = *(uint *)(*param_1 + (long)iVar1 * 0x28 + 0x10);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return (undefined4 *)(*param_1 + (long)iVar1 * 0x28);
      }
      if (uVar2 < param_2) {
        uVar6 = iVar1 + 1;
      }
      uVar8 = uVar8 - (uVar2 < param_2) >> 1;
    } while (uVar8 != 0);
    uVar11 = (ulong)uVar6;
  }
  *param_3 = 0;
  uVar8 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)((long)param_1 + 0xc);
  if (*param_1 == 0) {
    if (uVar6 <= uVar8) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar11 = FUN_0342ac64(param_1,iVar1);
      if ((uVar11 & 1) == 0) {
        return (undefined4 *)0x0;
      }
      uVar6 = *(uint *)((long)param_1 + 0xc);
    }
    if (uVar6 <= uVar8) {
      return (undefined4 *)0x0;
    }
    uVar8 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    *(uint *)(param_1 + 1) = uVar8 + 1;
    puVar12 = (undefined4 *)(lVar7 + (ulong)uVar8 * 0x28);
    if (lVar7 != 0) {
      lVar7 = lVar7 + (ulong)uVar8 * 0x28;
      *puVar12 = 0;
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined4 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      goto LAB_0342ac40;
    }
  }
  else {
    if (uVar6 <= uVar8) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar5 = FUN_0342ac64(param_1,iVar1);
      if ((uVar5 & 1) == 0) {
        return (undefined4 *)0x0;
      }
      uVar6 = *(uint *)((long)param_1 + 0xc);
    }
    if (uVar6 <= uVar8) {
      return (undefined4 *)0x0;
    }
    uVar8 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    *(uint *)(param_1 + 1) = uVar8 + 1;
    puVar12 = (undefined4 *)(lVar7 + (ulong)uVar8 * 0x28);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar7 + (ulong)uVar8 * 0x28;
      *puVar12 = 0;
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined4 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      lVar7 = *param_1;
    }
    puVar4 = PTR_DAT_047e2fd0;
    if ((undefined4 *)(lVar7 + uVar11 * 0x28) < puVar12) {
      do {
        puVar14 = puVar12 + -10;
        *puVar12 = *puVar14;
        uVar3 = puVar12[-6];
        puVar12[-6] = 0;
        puVar12[4] = uVar3;
        uVar9 = *(undefined8 *)(puVar12 + -8);
        *(undefined8 *)(puVar12 + -8) = 0;
        *(undefined8 *)(puVar12 + 2) = uVar9;
        *puVar14 = 0;
        lVar7 = *(long *)(puVar12 + 6);
        if (lVar7 != 0) {
          if (puVar12[8] != 0) {
            pcVar13 = (char *)(lVar7 + 0x48);
            lVar7 = (ulong)(uint)puVar12[8] * 0x50;
            do {
              if ((*(long *)(pcVar13 + -8) != 0) && (*pcVar13 != '\0')) {
                (**(code **)(puVar4 + 0x30))(9);
                *pcVar13 = '\0';
              }
              pcVar13[-8] = '\0';
              pcVar13[-7] = '\0';
              pcVar13[-6] = '\0';
              pcVar13[-5] = '\0';
              pcVar13[-4] = '\0';
              pcVar13[-3] = '\0';
              pcVar13[-2] = '\0';
              pcVar13[-1] = '\0';
              lVar7 = lVar7 + -0x50;
              pcVar13 = pcVar13 + 0x50;
            } while (lVar7 != 0);
            lVar7 = *(long *)(puVar12 + 6);
          }
          puVar12[8] = 0;
          (**(code **)(puVar4 + 0x30))(9,lVar7);
          *(undefined8 *)(puVar12 + 6) = 0;
          puVar12[9] = 0;
        }
        *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar12 + -4);
        puVar12[8] = puVar12[-2];
        puVar12[9] = puVar12[-1];
        *(undefined8 *)(puVar12 + -4) = 0;
        *(undefined8 *)(puVar12 + -2) = 0;
        lVar7 = *param_1;
        puVar12 = puVar14;
      } while ((undefined4 *)(lVar7 + uVar11 * 0x28) < puVar14);
    }
    plVar10 = (long *)(lVar7 + uVar11 * 0x28 + 8);
    if (*plVar10 != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    }
    *plVar10 = 0;
    *(undefined4 *)(lVar7 + uVar11 * 0x28) = 0;
    lVar7 = 0;
    if (*param_1 != 0) {
      puVar12 = (undefined4 *)(*param_1 + uVar11 * 0x28);
      *puVar12 = 0;
      *(undefined8 *)(puVar12 + 2) = 0;
      puVar12[4] = 0;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar12 + 8) = 0;
      lVar7 = *param_1;
    }
    puVar12 = (undefined4 *)(lVar7 + uVar11 * 0x28);
  }
  if (puVar12 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_0342ac40:
  puVar12[4] = param_2;
  return puVar12;
}


