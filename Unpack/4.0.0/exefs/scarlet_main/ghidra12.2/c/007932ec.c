/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007932ec; name: FUN_007932ec
 */


uint FUN_007932ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar11 = *(long *)(param_1 + 8);
  if ((lVar11 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0xffffffff;
  }
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  uStack_28 = param_3[3];
  uVar2 = nn::util::VSNPrintf(lVar11,*(int *)(param_1 + 0x10),param_2,&local_40);
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar4 = *(uint *)(param_1 + 0x10);
  if (((int)uVar2 < 0) || ((int)uVar4 <= (int)uVar2)) {
    *(undefined1 *)(lVar11 + (ulong)(uVar4 - 1)) = 0;
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar2 = uVar4 - 1;
  }
  uVar9 = 0;
  *(uint *)(param_1 + 0x14) = uVar2;
  if ((uVar2 != 0) && (pbVar5 = *(byte **)(param_1 + 8), pbVar5 != (byte *)0x0)) {
    if (*(int *)(param_1 + 0x18) == 1) {
      bVar1 = *pbVar5;
      if (bVar1 != 0) {
        uVar9 = 0;
        pbVar8 = pbVar5;
        do {
          if ((long)(ulong)uVar2 <= (long)pbVar8 - (long)pbVar5) break;
          if ((char)bVar1 < '\0') {
            if ((byte)(bVar1 + 0x3e) < 0x1e) {
              lVar10 = 2;
            }
            else if ((bVar1 & 0xf0) == 0xe0) {
              lVar10 = 3;
            }
            else if ((bVar1 & 0xf8) == 0xf0) {
              lVar10 = 4;
            }
            else if ((bVar1 & 0xfc) == 0xf8) {
              lVar10 = 5;
            }
            else {
              if ((bVar1 & 0xfe) != 0xfc) break;
              lVar10 = 6;
            }
          }
          else {
            lVar10 = 1;
          }
          pbVar8 = pbVar8 + lVar10;
          bVar1 = *pbVar8;
          uVar9 = uVar9 + 1;
        } while (bVar1 != 0);
        goto LAB_00793474;
      }
    }
    else if (*(int *)(param_1 + 0x18) == 2) {
      uVar9 = uVar2 >> 1;
      goto LAB_00793474;
    }
    uVar9 = 0;
  }
LAB_00793474:
  uVar2 = uVar4 >> 2;
  if (uVar9 < uVar2) {
    return uVar9;
  }
  if (uVar4 < 8) {
    uVar4 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    uVar9 = 1;
    uVar4 = 0;
    do {
      while( true ) {
        uVar6 = uVar9;
        bVar1 = *(byte *)(lVar11 + iVar3);
        if (bVar1 == 0) goto LAB_00793540;
        if ((char)bVar1 < '\0') break;
        iVar7 = 1;
LAB_007934a0:
        iVar3 = iVar7 + iVar3;
        uVar4 = uVar6;
        uVar9 = uVar6 + 1;
        if (uVar2 <= uVar6 + 1) goto LAB_00793540;
      }
      uVar9 = (uint)(char)bVar1;
      if (uVar9 + 0x3e < 0x1e) {
        iVar7 = 2;
        goto LAB_007934a0;
      }
      if ((uVar9 & 0xfffffff0) == 0xffffffe0) {
        iVar7 = 3;
        goto LAB_007934a0;
      }
      if ((uVar9 & 0xfffffff8) == 0xfffffff0) {
        iVar7 = 4;
        goto LAB_007934a0;
      }
      iVar7 = 5;
      if ((uVar9 & 0xfffffffc) == 0xfffffff8) goto LAB_007934a0;
      if ((bVar1 & 0xfe) == 0xfc) {
        iVar7 = 6;
        goto LAB_007934a0;
      }
      iVar3 = iVar3 + 1;
      uVar9 = uVar4 + 1;
    } while (uVar4 + 1 < uVar2);
  }
LAB_00793540:
  *(undefined1 *)(lVar11 + iVar3) = 0;
  *(int *)(param_1 + 0x14) = iVar3;
  return uVar4;
}


