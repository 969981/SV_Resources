/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006fbe30; name: FUN_006fbe30
 */


undefined8 FUN_006fbe30(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  ulong local_a0 [3];
  long *plStack_88;
  ulong local_80 [3];
  long *plStack_68;
  
  plStack_88 = (long *)FUN_01cf7e20();
  local_a0[2] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  plStack_68 = (long *)FUN_01cf7e20();
  local_80[2] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  if ((param_2 != (char *)0x0) && (sVar5 = strlen(param_2), sVar5 != 0)) {
    pcVar16 = param_2 + sVar5;
    if ((long)sVar5 < 1) {
LAB_006fbec0:
      pcVar15 = pcVar16;
    }
    else {
      pcVar15 = param_2;
      if (*param_2 != '/') {
        pcVar9 = param_2;
        sVar7 = sVar5;
        do {
          sVar7 = sVar7 - 1;
          if (sVar7 == 0) goto LAB_006fbec0;
          pcVar15 = pcVar9 + 1;
          pcVar8 = pcVar9 + 1;
          pcVar9 = pcVar15;
        } while (*pcVar8 != '/');
      }
    }
    uVar13 = 0;
    if ((pcVar16 == pcVar15) ||
       (uVar12 = (long)pcVar15 - (long)param_2, uVar12 == 0xffffffffffffffff)) goto LAB_006fbf34;
    uVar14 = sVar5;
    if (uVar12 <= sVar5) {
      uVar14 = uVar12;
    }
    sVar7 = 7;
    if (uVar14 < 8) {
      sVar7 = uVar14;
    }
    if (sVar7 == 0) {
      if (7 < uVar14) goto LAB_006fbf30;
LAB_006fbf24:
      iVar6 = -(uint)(uVar14 < 7);
    }
    else {
      iVar4 = memcmp(param_2,"tenants",sVar7);
      iVar6 = iVar4;
      if (iVar4 == 0) {
        iVar6 = 1;
      }
      if ((uVar14 < 8) && (iVar4 == 0)) goto LAB_006fbf24;
    }
    if (iVar6 == 0) {
      uVar14 = sVar5 - (uVar12 + 1);
      pcVar9 = param_2 + uVar12 + 1;
      if (uVar14 == 0) {
LAB_006fc000:
        pcVar8 = pcVar16;
      }
      else {
        pcVar8 = pcVar16;
        if ((0 < (long)pcVar16 - (long)pcVar9) && (pcVar8 = pcVar9, *pcVar9 != '/')) {
          pcVar10 = param_2 + (sVar5 - (long)pcVar15) + -2;
          pcVar11 = pcVar9;
          do {
            if (pcVar10 == (char *)0x0) goto LAB_006fc000;
            pcVar8 = pcVar11 + 1;
            pcVar1 = pcVar11 + 1;
            pcVar10 = pcVar10 + -1;
            pcVar11 = pcVar8;
          } while (*pcVar1 != '/');
        }
      }
      uVar12 = (long)pcVar8 - (long)pcVar9;
      if (pcVar16 == pcVar8) {
        uVar12 = 0xffffffffffffffff;
      }
      uVar2 = uVar14;
      if (uVar12 <= uVar14) {
        uVar2 = uVar12;
      }
      FUN_006fbcf0(local_a0,pcVar9,uVar2);
      uVar2 = uVar14;
      if (uVar12 != 0xffffffffffffffff) {
        uVar2 = uVar12 + 1;
      }
      uVar14 = uVar14 - uVar2;
      if (uVar14 != 0) {
        pcVar9 = pcVar9 + uVar2;
        if ((long)uVar14 < 1) {
LAB_006fc088:
          pcVar16 = pcVar9 + uVar14;
        }
        else {
          pcVar16 = pcVar9;
          if (*pcVar9 != '/') {
            pcVar11 = param_2 + (sVar5 - (long)(pcVar15 + uVar2)) + -2;
            pcVar8 = pcVar9;
            do {
              if (pcVar11 == (char *)0x0) goto LAB_006fc088;
              pcVar16 = pcVar8 + 1;
              pcVar10 = pcVar8 + 1;
              pcVar11 = pcVar11 + -1;
              pcVar8 = pcVar16;
            } while (*pcVar10 != '/');
          }
        }
        uVar13 = 0;
        if ((pcVar9 + uVar14 == pcVar16) ||
           (uVar12 = (long)pcVar16 - (long)pcVar9, uVar12 == 0xffffffffffffffff)) goto LAB_006fbf34;
        uVar3 = uVar14;
        if (uVar12 <= uVar14) {
          uVar3 = uVar12;
        }
        sVar7 = 0xc;
        if (uVar3 < 0xd) {
          sVar7 = uVar3;
        }
        if (sVar7 == 0) {
          if (0xc < uVar3) goto LAB_006fbf30;
LAB_006fc0ec:
          iVar6 = -(uint)(uVar3 < 0xc);
        }
        else {
          iVar4 = memcmp(pcVar9,"competitions",sVar7);
          iVar6 = iVar4;
          if (iVar4 == 0) {
            iVar6 = 1;
          }
          if ((uVar3 < 0xd) && (iVar4 == 0)) goto LAB_006fc0ec;
        }
        if (iVar6 == 0) {
          uVar14 = uVar14 - (uVar12 + 1);
          pcVar8 = pcVar9 + uVar12 + 1;
          if ((long)uVar14 < 1) {
LAB_006fc174:
            pcVar11 = pcVar8 + uVar14;
          }
          else {
            pcVar11 = pcVar8;
            if (*pcVar8 != '/') {
              param_2 = param_2 + (sVar5 - 3);
              pcVar11 = pcVar16 + uVar2 + (long)pcVar15;
              do {
                if (pcVar15 + uVar2 + (long)pcVar16 + -(long)pcVar9 == param_2) goto LAB_006fc174;
                pcVar1 = pcVar11 + 1;
                pcVar10 = pcVar11 + (3 - (long)pcVar9);
                param_2 = param_2 + -1;
                pcVar11 = pcVar1;
              } while (*pcVar10 != '/');
              pcVar11 = pcVar1 + (2 - (long)pcVar9);
            }
          }
          uVar12 = (long)pcVar11 - (long)pcVar8;
          if (pcVar8 + uVar14 == pcVar11) {
            uVar12 = 0xffffffffffffffff;
          }
          if (uVar12 <= uVar14) {
            uVar14 = uVar12;
          }
          FUN_006fbcf0(local_80,pcVar8,uVar14);
          FUN_006fc214(param_1,local_a0);
          uVar13 = 1;
          goto LAB_006fbf34;
        }
      }
    }
  }
LAB_006fbf30:
  uVar13 = 0;
LAB_006fbf34:
  if ((local_80[0] & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))(plStack_68,local_80[2],local_80[0] & 0xfffffffffffffffe,1);
  }
  if ((local_a0[0] & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_a0[2],local_a0[0] & 0xfffffffffffffffe,1);
  }
  return uVar13;
}


