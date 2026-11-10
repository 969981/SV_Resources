/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123a588; name: FUN_0123a588
 */


ulong FUN_0123a588(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  
  uVar11 = (ulong)param_3;
  uVar4 = FUN_00d9c750();
  uVar5 = FUN_0123aa70(param_1,param_2,uVar4);
  if (uVar5 == 0) {
    return uVar11;
  }
  param_4 = param_4 & 0xff;
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = param_4 / uVar5;
  }
  iVar1 = param_4 - uVar2 * uVar5;
  if (param_1 != 0) {
    uVar5 = param_2 - 1;
    iVar9 = 0;
    iVar10 = 0;
    do {
      uVar2 = ((param_3 & 0xff) + iVar10 & 0xffff) % 0xb;
      uVar6 = (ulong)uVar2;
      if (param_1 == 2) {
        if ((param_2 & 0xff) == 0) {
          puVar8 = (undefined4 *)&DAT_03d6a424;
          if (2 < (uVar2 - 1 & 0xff)) goto LAB_0123a658;
        }
        else {
          if ((param_2 & 0xff) == 1) {
            bVar3 = (uVar2 & 0xe) == 2;
          }
          else {
            puVar8 = (undefined4 *)&DAT_03d6a424;
            if ((param_2 & 0xff) != 2) goto LAB_0123a658;
            bVar3 = uVar2 == 3;
          }
          puVar8 = (undefined4 *)&DAT_03d6a424;
          if (!bVar3) {
LAB_0123a658:
            if (puVar8[uVar6] != 5) {
              if (param_1 == 2) {
                if ((param_2 & 0xff) == 0) {
                  uVar7 = 2;
                  if ((uVar2 == 10) || ((uVar2 - 1 & 0xff) < 3)) goto LAB_0123a6a0;
                }
                else if ((param_2 & 0xff) == 1) {
                  uVar7 = 2;
                  if ((uVar2 == 10) || ((uVar2 & 0xe) == 2)) goto LAB_0123a6a0;
                }
                else if ((param_2 & 0xff) == 2) {
                  uVar7 = 2;
                  if ((uVar2 == 10) || (uVar2 == 3)) goto LAB_0123a6a0;
                }
                else if (uVar2 == 10) goto LAB_0123aa0c;
                uVar7 = (uint)(byte)(&DAT_03d6a45a)[*(uint *)(&DAT_03d6a424 + uVar6 * 4)];
              }
              else {
                if (param_1 == 1) {
                  puVar8 = &DAT_03d6a374;
                  if ((uVar5 & 0xff) < 5) {
                    puVar8 = (undefined4 *)(&PTR_DAT_045fccb8)[(char)uVar5];
                  }
                  if ((int)puVar8[uVar6] < 5) {
                    uVar7 = (uint)(byte)(&DAT_03d6a455)[(uint)puVar8[uVar6]];
                    goto LAB_0123a6a0;
                  }
                }
LAB_0123aa0c:
                uVar7 = 2;
              }
LAB_0123a6a0:
              if (uVar7 == (uVar4 & 0xff)) {
                if (iVar9 == iVar1) {
                  return uVar6;
                }
                iVar9 = iVar9 + 1;
              }
            }
          }
        }
      }
      else if (param_1 == 1) {
        puVar8 = &DAT_03d6a374;
        if ((uVar5 & 0xff) < 5) {
          puVar8 = (undefined4 *)(&PTR_DAT_045fccb8)[(char)uVar5];
        }
        goto LAB_0123a658;
      }
      iVar10 = iVar10 + 1;
      if (iVar10 == 0xb) {
        return uVar11;
      }
    } while( true );
  }
  uVar7 = (param_3 & 0xff) % 0xb;
  if ((uVar7 < 2) &&
     ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + (ulong)uVar7 * 4)] == (uVar4 & 0xff))) {
    if (param_4 == uVar2 * uVar5) {
      return (ulong)uVar7;
    }
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  param_3 = param_3 & 0xff;
  uVar5 = (param_3 + 1) % 0xb;
  uVar6 = (ulong)uVar5;
  if ((uVar5 < 2) &&
     ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
    if (iVar9 != iVar1) {
      iVar9 = iVar9 + 1;
      goto LAB_0123a808;
    }
LAB_0123a7fc:
    uVar11 = uVar6;
  }
  else {
LAB_0123a808:
    uVar5 = (param_3 + 2) % 0xb;
    uVar6 = (ulong)uVar5;
    if ((uVar5 < 2) &&
       ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
      if (iVar9 == iVar1) goto LAB_0123a7fc;
      iVar9 = iVar9 + 1;
    }
    uVar5 = (param_3 + 3) % 0xb;
    uVar6 = (ulong)uVar5;
    if ((uVar5 < 2) &&
       ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
      if (iVar9 == iVar1) goto LAB_0123a7fc;
      iVar9 = iVar9 + 1;
    }
    uVar5 = (param_3 + 4) % 0xb;
    uVar6 = (ulong)uVar5;
    if ((uVar5 < 2) &&
       ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
      if (iVar9 == iVar1) goto LAB_0123a7fc;
      iVar9 = iVar9 + 1;
    }
    uVar5 = (param_3 + 5) % 0xb;
    uVar6 = (ulong)uVar5;
    if ((uVar5 < 2) &&
       ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
      if (iVar9 == iVar1) goto LAB_0123a7fc;
      iVar9 = iVar9 + 1;
    }
    uVar5 = (param_3 + 6) % 0xb;
    uVar6 = (ulong)uVar5;
    if ((uVar5 < 2) &&
       ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
      if (iVar9 == iVar1) goto LAB_0123a7fc;
      iVar9 = iVar9 + 1;
    }
    uVar5 = (param_3 + 7) % 0xb;
    uVar6 = (ulong)uVar5;
    if ((uVar5 < 2) &&
       ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
      if (iVar9 == iVar1) goto LAB_0123a7fc;
      iVar9 = iVar9 + 1;
    }
    uVar5 = (param_3 + 8) % 0xb;
    uVar6 = (ulong)uVar5;
    if ((uVar5 < 2) &&
       ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
      if (iVar9 == iVar1) goto LAB_0123a7fc;
      iVar9 = iVar9 + 1;
    }
    uVar5 = (param_3 + 9) % 0xb;
    uVar6 = (ulong)uVar5;
    if ((uVar5 < 2) &&
       ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + uVar6 * 4)] == (uVar4 & 0xff))) {
      if (iVar9 == iVar1) goto LAB_0123a7fc;
      iVar9 = iVar9 + 1;
    }
    uVar5 = (param_3 + 10) % 0xb;
    if (((uVar5 < 2) &&
        ((uint)(byte)(&DAT_03d6a450)[*(uint *)(&DAT_03d6a348 + (ulong)uVar5 * 4)] == (uVar4 & 0xff))
        ) && (iVar9 == iVar1)) {
      uVar11 = (ulong)uVar5;
    }
  }
  return uVar11;
}


