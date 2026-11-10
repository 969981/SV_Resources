/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00130d70; name: FUN_00130d70
 */


void FUN_00130d70(long *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  byte bVar12;
  int iVar13;
  
  lVar7 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar8 = (uint)*(byte *)(plVar1 + 2);
  do {
    if ((int)uVar8 < 1) {
      iVar13 = 0;
      if (*(char *)((long)plVar1 + 0x12) == '\0') goto LAB_00130e18;
      goto LAB_00130dec;
    }
    iVar13 = uVar8 + (int)param_1[7] + -1;
    uVar8 = uVar8 - 1;
  } while (*(char *)(**(long **)(lVar7 + 0x58) + (long)iVar13 * 0x18 + 9) == '\x03');
  iVar13 = *(byte *)(**(long **)(lVar7 + 0x58) + (long)iVar13 * 0x18 + 10) + 1;
  if (*(char *)((long)plVar1 + 0x12) != '\0') {
LAB_00130dec:
    uVar5 = FUN_0013be00(*(undefined8 *)(lVar7 + 0x38),"break",5);
    iVar4 = FUN_00132670(lVar7,uVar5,0,0);
    if (iVar4 != 0) goto LAB_00130e44;
  }
LAB_00130e18:
  if ((*plVar1 != 0) && (*(char *)((long)plVar1 + 0x11) != '\0')) {
    FUN_00133250(param_1,0x36,iVar13,0,0,0);
  }
LAB_00130e44:
  param_1[3] = *plVar1;
  bVar12 = *(byte *)(plVar1 + 2);
  *(uint *)(*(long *)(param_1[2] + 0x58) + 8) =
       ((uint)bVar12 - (uint)*(byte *)((long)param_1 + 0x42)) +
       *(int *)(*(long *)(param_1[2] + 0x58) + 8);
  bVar2 = *(byte *)((long)param_1 + 0x42);
  uVar8 = (uint)bVar2;
  if ((uint)bVar12 <= (uint)bVar2 && (uint)bVar2 != (uint)bVar12) {
    do {
      uVar8 = uVar8 - 1;
      *(char *)((long)param_1 + 0x42) = (char)uVar8;
      uVar9 = uVar8 & 0xff;
      iVar4 = (int)param_1[7] + uVar9;
      if ((*(char *)(**(long **)(param_1[2] + 0x58) + (long)iVar4 * 0x18 + 9) != '\x03') &&
         (*(long *)(*param_1 + 0x68) != 0)) {
        *(int *)(*(long *)(*param_1 + 0x68) +
                 (long)*(short *)(**(long **)(param_1[2] + 0x58) + (long)iVar4 * 0x18 + 0xc) * 0x10
                + 0xc) = (int)param_1[4];
        uVar9 = (uint)*(byte *)((long)param_1 + 0x42);
        uVar8 = uVar9;
      }
    } while (bVar12 < uVar9);
  }
  *(char *)((long)param_1 + 0x44) = (char)iVar13;
  *(int *)(*(long *)(lVar7 + 0x58) + 0x28) = (int)plVar1[1];
  if (*plVar1 == 0) {
    if (*(int *)((long)plVar1 + 0xc) < *(int *)(*(long *)(lVar7 + 0x58) + 0x18)) {
      FUN_00132910(lVar7,*(long *)(*(long *)(lVar7 + 0x58) + 0x10) +
                         (long)*(int *)((long)plVar1 + 0xc) * 0x18);
                    /* WARNING: Does not return */
      pcVar3 = (code *)UndefinedInstructionException(0,0x131044);
      (*pcVar3)();
    }
  }
  else {
    lVar6 = *(long *)(param_1[2] + 0x58);
    lVar7 = (long)*(int *)((long)plVar1 + 0xc);
    if (*(int *)((long)plVar1 + 0xc) < *(int *)(lVar6 + 0x18)) {
      do {
        pbVar10 = (byte *)(*(long *)(lVar6 + 0x10) + lVar7 * 0x18 + 0x10);
        uVar8 = (uint)*pbVar10;
        do {
          if ((int)uVar8 < 1) {
            uVar8 = 0;
            goto LAB_00130f8c;
          }
          iVar13 = uVar8 + (int)param_1[7] + -1;
          uVar8 = uVar8 - 1;
        } while (*(char *)(**(long **)(param_1[2] + 0x58) + (long)iVar13 * 0x18 + 9) == '\x03');
        uVar8 = *(byte *)(**(long **)(param_1[2] + 0x58) + (long)iVar13 * 0x18 + 10) + 1;
LAB_00130f8c:
        bVar12 = *(byte *)(plVar1 + 2);
        uVar9 = (uint)bVar12;
        do {
          if ((int)uVar9 < 1) {
            if (uVar8 == 0) goto LAB_00130f20;
            goto LAB_00130ff0;
          }
          iVar13 = uVar9 + (int)param_1[7] + -1;
          uVar9 = uVar9 - 1;
        } while (*(char *)(**(long **)(param_1[2] + 0x58) + (long)iVar13 * 0x18 + 9) == '\x03');
        if (*(byte *)(**(long **)(param_1[2] + 0x58) + (long)iVar13 * 0x18 + 10) + 1 < uVar8) {
LAB_00130ff0:
          lVar11 = *(long *)(lVar6 + 0x10) + lVar7 * 0x18;
          *(byte *)(lVar11 + 0x11) = *(byte *)(lVar11 + 0x11) | *(byte *)((long)plVar1 + 0x11);
          bVar12 = *(byte *)(plVar1 + 2);
        }
LAB_00130f20:
        *pbVar10 = bVar12;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar6 + 0x18));
    }
  }
  return;
}


