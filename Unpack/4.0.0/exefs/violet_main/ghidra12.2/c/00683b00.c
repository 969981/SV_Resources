/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00683b00; name: FUN_00683b00
 */


undefined8 FUN_00683b00(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong local_80 [3];
  long *plStack_68;
  ulong local_60 [3];
  long *plStack_48;
  
  plStack_68 = (long *)FUN_01cf7e20();
  local_80[2] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  plStack_48 = (long *)FUN_01cf7e20();
  local_60[2] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  if ((param_2 != (char *)0x0) && (sVar4 = strlen(param_2), sVar4 != 0)) {
    pcVar10 = param_2 + sVar4;
    if ((long)sVar4 < 1) {
LAB_00683b88:
      pcVar12 = pcVar10;
    }
    else {
      pcVar12 = param_2;
      if (*param_2 != '/') {
        pcVar8 = param_2;
        sVar6 = sVar4;
        do {
          sVar6 = sVar6 - 1;
          if (sVar6 == 0) goto LAB_00683b88;
          pcVar12 = pcVar8 + 1;
          pcVar7 = pcVar8 + 1;
          pcVar8 = pcVar12;
        } while (*pcVar7 != '/');
      }
    }
    uVar14 = 0;
    if ((pcVar10 == pcVar12) ||
       (uVar13 = (long)pcVar12 - (long)param_2, uVar13 == 0xffffffffffffffff)) goto LAB_00683bfc;
    uVar15 = sVar4;
    if (uVar13 <= sVar4) {
      uVar15 = uVar13;
    }
    sVar6 = 7;
    if (uVar15 < 8) {
      sVar6 = uVar15;
    }
    if (sVar6 == 0) {
      if (7 < uVar15) goto LAB_00683bf8;
LAB_00683bec:
      iVar5 = -(uint)(uVar15 < 7);
    }
    else {
      iVar3 = memcmp(param_2,"tenants",sVar6);
      iVar5 = iVar3;
      if (iVar3 == 0) {
        iVar5 = 1;
      }
      if ((uVar15 < 8) && (iVar3 == 0)) goto LAB_00683bec;
    }
    if (iVar5 == 0) {
      uVar15 = sVar4 - (uVar13 + 1);
      pcVar8 = param_2 + uVar13 + 1;
      if (uVar15 == 0) {
LAB_00683cc0:
        pcVar7 = pcVar10;
      }
      else {
        pcVar7 = pcVar10;
        if ((0 < (long)pcVar10 - (long)pcVar8) && (pcVar7 = pcVar8, *pcVar8 != '/')) {
          pcVar9 = param_2 + (sVar4 - (long)pcVar12) + -2;
          pcVar11 = pcVar8;
          do {
            if (pcVar9 == (char *)0x0) goto LAB_00683cc0;
            pcVar7 = pcVar11 + 1;
            pcVar1 = pcVar11 + 1;
            pcVar9 = pcVar9 + -1;
            pcVar11 = pcVar7;
          } while (*pcVar1 != '/');
        }
      }
      uVar13 = (long)pcVar7 - (long)pcVar8;
      if (pcVar10 == pcVar7) {
        uVar13 = 0xffffffffffffffff;
      }
      uVar2 = uVar15;
      if (uVar13 <= uVar15) {
        uVar2 = uVar13;
      }
      FUN_00683df0(local_80,pcVar8,uVar2);
      uVar2 = uVar15;
      if (uVar13 != 0xffffffffffffffff) {
        uVar2 = uVar13 + 1;
      }
      uVar15 = uVar15 - uVar2;
      if (uVar15 != 0) {
        pcVar8 = pcVar8 + uVar2;
        if ((long)uVar15 < 1) {
LAB_00683d48:
          pcVar10 = pcVar8 + uVar15;
        }
        else {
          pcVar10 = pcVar8;
          if (*pcVar8 != '/') {
            param_2 = param_2 + (sVar4 - (long)(pcVar12 + uVar2)) + -2;
            pcVar12 = pcVar8;
            do {
              if (param_2 == (char *)0x0) goto LAB_00683d48;
              pcVar10 = pcVar12 + 1;
              pcVar7 = pcVar12 + 1;
              param_2 = param_2 + -1;
              pcVar12 = pcVar10;
            } while (*pcVar7 != '/');
          }
        }
        uVar14 = 0;
        if ((pcVar8 + uVar15 == pcVar10) ||
           (uVar13 = (long)pcVar10 - (long)pcVar8, uVar13 == 0xffffffffffffffff)) goto LAB_00683bfc;
        uVar2 = uVar15;
        if (uVar13 <= uVar15) {
          uVar2 = uVar13;
        }
        sVar4 = 9;
        if (uVar2 < 10) {
          sVar4 = uVar2;
        }
        if (sVar4 == 0) {
          if (9 < uVar2) goto LAB_00683bf8;
LAB_00683dac:
          iVar5 = -(uint)(uVar2 < 9);
        }
        else {
          iVar3 = memcmp(pcVar8,"documents",sVar4);
          iVar5 = iVar3;
          if (iVar3 == 0) {
            iVar5 = 1;
          }
          if ((uVar2 < 10) && (iVar3 == 0)) goto LAB_00683dac;
        }
        if (iVar5 == 0) {
          FUN_00683df0(local_60,pcVar8 + uVar13 + 1,uVar15 - (uVar13 + 1));
          FUN_00683f28(param_1,local_80);
          uVar14 = 1;
          goto LAB_00683bfc;
        }
      }
    }
  }
LAB_00683bf8:
  uVar14 = 0;
LAB_00683bfc:
  if ((local_60[0] & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))(plStack_48,local_60[2],local_60[0] & 0xfffffffffffffffe,1);
  }
  if ((local_80[0] & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))(plStack_68,local_80[2],local_80[0] & 0xfffffffffffffffe,1);
  }
  return uVar14;
}


