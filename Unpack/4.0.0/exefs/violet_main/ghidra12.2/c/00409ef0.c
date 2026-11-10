/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00409ef0; name: FUN_00409ef0
 */


undefined8 FUN_00409ef0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_38 [6];
  
  iVar4 = FUN_003eb480(param_3);
  if (iVar4 != 0) goto LAB_00409f14;
  uVar2 = *(uint *)(param_3 + 1);
  if ((int)uVar2 < 1) {
    iVar4 = 0;
LAB_00409ff0:
    local_38[iVar4] = -1;
    iVar4 = iVar4 + 1;
  }
  else {
    lVar7 = *param_3;
    iVar4 = 0;
    iVar8 = uVar2 << 5;
    uVar6 = (ulong)uVar2;
    do {
      uVar2 = *(uint *)(lVar7 + (uVar6 - 1) * 4);
      if (uVar2 != 0) {
        uVar9 = 0x80000000;
        iVar10 = 0x1e;
        uVar3 = uVar2 & 0x80000000;
        while( true ) {
          if (uVar3 != 0) {
            if (iVar4 < 6) {
              local_38[iVar4] = iVar8 + iVar10 + -0x1f;
            }
            iVar4 = iVar4 + 1;
          }
          if ((uVar2 & uVar9 >> 1) != 0) {
            if (iVar4 < 6) {
              local_38[iVar4] = iVar8 + iVar10 + -0x20;
            }
            iVar4 = iVar4 + 1;
          }
          if (iVar10 == 0) break;
          uVar9 = uVar9 >> 2;
          iVar10 = iVar10 + -2;
          uVar3 = uVar9 & uVar2;
        }
      }
      iVar8 = iVar8 + -0x20;
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
    if (iVar4 < 6) goto LAB_00409ff0;
  }
  if ((iVar4 != 0) && (iVar4 < 7)) {
    uVar5 = FUN_00409c50(param_1,param_2,local_38);
    return uVar5;
  }
LAB_00409f14:
  FUN_004806c0(3,0x83,0x6a,"external/openssl/crypto/bn/bn_gf2m.c",0x18e);
  return 0;
}


