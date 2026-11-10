/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353ace0; name: FUN_0353ace0
 */


ulong FUN_0353ace0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 local_68;
  
  if (param_3 < 0x11) {
    uVar6 = param_4;
LAB_0353ad18:
    uVar6 = FUN_0353a070(param_1,param_2,uVar6);
    return uVar6;
  }
  lVar14 = (long)(int)param_1;
  if ((param_3 < 0x81) && (param_4 < *(ulong *)(&DAT_048d2580 + lVar14 * 0x638))) {
    uVar6 = 0x80;
    if (param_4 != 0) {
      uVar6 = param_4 + 0x7f & 0xffffffffffffff80;
    }
    if (uVar6 <= param_4 + param_3) goto LAB_0353ad18;
  }
  uVar15 = param_3 - 1;
  uVar6 = *(ulong *)(&DAT_048d2150 + lVar14 * 0x638);
  if (uVar6 < param_3) {
    if ((param_3 & uVar15) == 0) {
      puVar16 = &DAT_048d2168 + lVar14 * 199;
      uVar9 = *puVar16;
      if (param_3 < uVar9) {
        uVar17 = 0;
        if (uVar6 != 0) {
          uVar17 = param_4 / uVar6;
        }
        lVar2 = 1;
        if ((uVar6 - 1 & param_4) != 0) {
          lVar2 = 2;
        }
        uVar17 = uVar17 + lVar2;
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = param_3 / uVar6;
        }
        if (uVar17 < uVar11) {
          uVar17 = uVar11 + 1;
        }
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar9 / uVar6;
        }
        uVar3 = uVar17 << 1;
        if (uVar17 << 1 <= uVar11 << 1) {
          uVar3 = uVar11 << 1;
        }
        lVar2 = lVar14 * 0x638;
LAB_0353ae2c:
        uVar6 = uVar17 * uVar6;
        local_68 = 0;
        uVar11 = 0;
        if (uVar9 <= uVar6) {
          if (uVar9 <= *(ulong *)(&DAT_048d2160 + lVar2)) {
            uVar9 = 0;
          }
          uVar11 = uVar9;
        }
        while( true ) {
          uVar10 = DAT_048d2d80;
          uVar9 = DAT_048d2d80 + uVar11 + uVar6;
          if (!(DAT_048d2d78 == 0 || uVar9 <= DAT_048d2d78)) break;
          while (DAT_048d2d80 == uVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x48d2d80,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              DAT_048d2d80 = uVar9;
            }
            if (cVar4 == '\0') {
              uVar9 = (**(code **)(&DAT_048d2108 + lVar2))(uVar11 + uVar6,&local_68);
              uVar10 = 0;
              if ((uVar11 != 0) && (uVar9 != 0)) {
                uVar11 = uVar11 - (uVar9 & (*(ulong *)(&DAT_048d2178 + lVar2) ^ 0xffffffffffffffff))
                ;
                uVar9 = uVar9 + uVar11;
                uVar10 = uVar11 >> 3;
              }
              if (uVar9 == 0) goto LAB_0353b01c;
              uVar11 = uVar9 + 0x80;
              if ((uVar15 & uVar11) != 0) {
                uVar11 = (uVar11 & -param_3) + param_3;
              }
              uVar13 = *puVar16;
              if (((uVar11 - uVar9 < uVar13) && (uVar11 + param_4 <= uVar9 + uVar6)) &&
                 ((*(ulong *)(&DAT_048d2178 + lVar2) & uVar11) == uVar9)) {
                *(undefined4 *)(uVar9 + 0xc) = 0xffffffff;
                *(int *)(uVar9 + 0x2c) = (int)uVar17;
                *(int *)(uVar9 + 0x3c) = (int)uVar10;
                *(long *)(uVar9 + 0x40) = param_2;
                *(undefined8 *)(uVar9 + 0x58) = local_68;
                uVar12 = 0;
                if (*(long *)(param_2 + 0x7e70) != 0) {
                  *(ulong *)(*(long *)(param_2 + 0x7e70) + 0x50) = uVar9;
                  uVar12 = *(undefined8 *)(param_2 + 0x7e70);
                }
                *(undefined8 *)(uVar9 + 0x48) = uVar12;
                *(ulong *)(param_2 + 0x7e70) = uVar9;
                *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + 1;
                return uVar11;
              }
              uVar11 = uVar9 + (long)((int)uVar10 * -8);
              if (uVar6 == 0 || uVar10 == 0) {
                uVar13 = 0;
                uVar11 = uVar9;
              }
              lVar1 = uVar13 + uVar6;
              (**(code **)(&DAT_048d2110 + lVar2))(uVar11,uVar6,local_68,lVar1);
              if (lVar1 == 0) goto LAB_0353af84;
              goto LAB_0353af5c;
            }
          }
          ClearExclusiveLocal();
        }
LAB_0353b01c:
        piVar7 = __errno_location();
        iVar8 = 0xc;
        goto LAB_0353afec;
      }
    }
LAB_0353afe0:
    piVar7 = __errno_location();
    iVar8 = 0x16;
LAB_0353afec:
    *piVar7 = iVar8;
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0353a070(param_1,param_2,param_4 + param_3);
    if ((uVar15 & uVar6) != 0) {
      uVar6 = (uVar6 & -param_3) + param_3;
      *(uint *)((*(ulong *)(&DAT_048d2178 + lVar14 * 0x638) & uVar6) + 0x28) =
           *(uint *)((*(ulong *)(&DAT_048d2178 + lVar14 * 0x638) & uVar6) + 0x28) | 4;
    }
  }
  return uVar6;
LAB_0353af5c:
  uVar6 = DAT_048d2d80;
  uVar9 = DAT_048d2d80 - lVar1;
  while (DAT_048d2d80 == uVar6) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x48d2d80,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      DAT_048d2d80 = uVar9;
    }
    if (cVar4 == '\0') goto LAB_0353af84;
  }
  ClearExclusiveLocal();
  goto LAB_0353af5c;
LAB_0353af84:
  uVar17 = uVar17 + 1;
  if (uVar3 < uVar17) goto LAB_0353afe0;
  uVar6 = *(ulong *)(&DAT_048d2150 + lVar14 * 0x638);
  uVar9 = *puVar16;
  goto LAB_0353ae2c;
}


