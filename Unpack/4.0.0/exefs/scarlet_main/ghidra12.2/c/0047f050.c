/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047f050; name: FUN_0047f050
 */


void FUN_0047f050(long param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  uVar13 = *(uint *)(param_1 + 0x80);
  uVar2 = -(int)param_3 & 7;
  uVar9 = *(ulong *)(param_1 + 0x88);
  uVar12 = uVar13 & 7;
  *(ulong *)(param_1 + 0x88) = uVar9 + param_3;
  if (((CARRY8(uVar9,param_3)) &&
      (lVar10 = *(long *)(param_1 + 0x90), *(long *)(param_1 + 0x90) = lVar10 + 1, lVar10 == -1)) &&
     (lVar10 = *(long *)(param_1 + 0x98), *(long *)(param_1 + 0x98) = lVar10 + 1, lVar10 == -1)) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  }
  if (uVar2 == 0 && uVar12 == 0) {
LAB_0047f264:
    if (param_3 != 0) {
      do {
        while ((uVar13 == 0 && (param_3 >> 9 != 0))) {
          FUN_0047f4c0(param_1,param_2);
          uVar9 = param_3 >> 3;
          param_3 = param_3 & 0x1ff;
          uVar13 = 0;
          param_2 = param_2 + (uVar9 & 0x1fffffffffffffc0);
          if (param_3 == 0) {
            return;
          }
        }
        uVar2 = 0x200 - uVar13;
        uVar9 = param_3 - uVar2;
        if (param_3 < uVar2) {
          memcpy((void *)(param_1 + (ulong)(uVar13 >> 3) + 0x40),param_2,param_3 >> 3);
          *(uint *)(param_1 + 0x80) = uVar13 + (int)param_3;
          return;
        }
        memcpy((void *)(param_1 + (ulong)(uVar13 >> 3) + 0x40),param_2,(ulong)(uVar2 >> 3));
        param_2 = param_2 + (uVar2 >> 3);
        FUN_0047f4c0(param_1,param_1 + 0x40,1);
        uVar13 = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        param_3 = uVar9;
      } while (uVar9 != 0);
    }
  }
  else if (param_3 != 0) {
    lVar10 = param_1 + 0x40;
    pbVar15 = param_2;
LAB_0047f0e8:
    uVar6 = 8 - uVar12;
    uVar9 = param_3;
    pbVar16 = pbVar15;
    uVar3 = uVar13;
    while( true ) {
      uVar8 = uVar3 >> 3;
      uVar7 = (ulong)uVar8;
      if (uVar12 == uVar2) break;
      uVar4 = (uint)*pbVar16 << (ulong)uVar2;
      if (uVar12 == 0) {
        if (uVar9 < 9) {
          uVar13 = (int)uVar9 + uVar3;
          *(char *)(param_1 + uVar7 + 0x40) = (char)uVar4;
          if (uVar13 == 0x200) {
            FUN_0047f4c0(param_1,lVar10,1);
            uVar13 = 0;
            param_3 = 0;
          }
          else {
            param_3 = 0;
          }
          goto LAB_0047f1c4;
        }
        uVar14 = pbVar16[1] >> (ulong)(8 - uVar2 & 0x1f) | uVar4;
        *(char *)(param_1 + uVar7 + 0x40) = (char)uVar14;
        if (0x1ff < uVar3 + 8) goto LAB_0047f144;
LAB_0047f190:
        uVar3 = uVar3 + 8;
        uVar8 = uVar8 + 1;
      }
      else {
        lVar1 = param_1 + uVar7;
        if (uVar9 < 9) {
          *(byte *)(lVar1 + 0x40) =
               *(byte *)(lVar1 + 0x40) | (byte)((uVar4 & 0xff) >> (ulong)uVar12);
          iVar11 = (int)uVar9 + uVar3;
          if (iVar11 == 0x200) {
            FUN_0047f4c0(param_1,lVar10,1);
            iVar11 = 0;
            uVar8 = 0;
          }
          else {
            uVar8 = uVar8 + 1;
          }
          *(char *)(param_1 + (ulong)uVar8 + 0x40) = (char)((uVar4 & 0xff) << (ulong)(uVar6 & 0x1f))
          ;
          *(int *)(param_1 + 0x80) = iVar11;
          return;
        }
        uVar5 = (uint)(pbVar16[1] >> (ulong)(8 - uVar2 & 0x1f));
        uVar14 = uVar5 | uVar4;
        *(byte *)(lVar1 + 0x40) =
             *(byte *)(lVar1 + 0x40) | (byte)((uVar5 | uVar4 & 0xff) >> (ulong)uVar12);
        if (uVar3 + 8 < 0x200) goto LAB_0047f190;
LAB_0047f144:
        FUN_0047f4c0(param_1,lVar10,1);
        uVar8 = 0;
        uVar3 = uVar3 + 8 & 0x1ff;
      }
      if (uVar12 == 0) goto LAB_0047f1c0;
      pbVar16 = pbVar16 + 1;
      uVar9 = uVar9 - 8;
      *(char *)(param_1 + (ulong)uVar8 + 0x40) = (char)((uVar14 & 0xff) << (ulong)(uVar6 & 0x1f));
      *(uint *)(param_1 + 0x80) = uVar3;
    }
    param_2 = pbVar15 + 1;
    uVar13 = uVar6 + uVar13;
    param_3 = param_3 - uVar6;
    *(byte *)(param_1 + uVar7 + 0x40) =
         *pbVar15 & (byte)(0xff >> (ulong)uVar12) | *(byte *)(param_1 + uVar7 + 0x40);
    if (uVar13 == 0x200) {
      FUN_0047f4c0(param_1,lVar10,1);
      uVar13 = 0;
    }
    *(uint *)(param_1 + 0x80) = uVar13;
    goto LAB_0047f264;
  }
  return;
LAB_0047f1c0:
  pbVar16 = pbVar16 + 1;
  param_3 = uVar9 - 8;
  uVar13 = uVar3;
LAB_0047f1c4:
  uVar12 = 0;
  *(uint *)(param_1 + 0x80) = uVar13;
  pbVar15 = pbVar16;
  if (param_3 == 0) {
    return;
  }
  goto LAB_0047f0e8;
}


