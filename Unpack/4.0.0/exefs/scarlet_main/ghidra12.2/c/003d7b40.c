/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d7b40; name: FUN_003d7b40
 */


undefined8 FUN_003d7b40(long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  ushort local_44 [2];
  
  if (param_3 != 0) {
    if ((*(int *)(param_3 + 0xc) != 0) &&
       (lVar4 = FUN_003b00f0(*(undefined4 *)(param_3 + 0x10)), lVar4 == 0)) {
      return 0;
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) ||
        ((((iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304 || (iVar1 == 0x10000)) ||
          (*(int *)(param_3 + 0x14) != 0x74)) &&
         (((*(int *)(param_1 + 0x38) != 0 || (*(int *)(*(long *)(param_1 + 0xa8) + 0x33c) < 0x304))
          || ((*(int *)(param_3 + 0x14) != 0x74 &&
              ((10 < *(uint *)(param_3 + 0x10) ||
               ((1 << (ulong)(*(uint *)(param_3 + 0x10) & 0x1f) & 0x403U) == 0)))))))))) &&
       (iVar1 = FUN_003b1f20((long)*(int *)(param_3 + 0x18)), iVar1 == 0)) {
      if ((*(int *)(param_3 + 0x14) - 0x3d3U < 2) || (*(int *)(param_3 + 0x14) == 0x32b)) {
        piVar7 = *(int **)(param_1 + 8);
        if (*(int *)(param_1 + 0x38) == 0) {
          if ((*piVar7 == 0x10000) && (0x303 < *(int *)(*(long *)(param_1 + 0xa8) + 0x340))) {
            if (0x303 < *(int *)(*(long *)(param_1 + 0xa8) + 0x33c)) {
              return 0;
            }
            lVar4 = FUN_003b4400(param_1);
            if (lVar4 == 0) {
              return 0;
            }
            iVar1 = FUN_0047e430();
            if (iVar1 < 1) {
              iVar3 = 0;
            }
            else {
              iVar3 = 0;
              while( true ) {
                lVar5 = FUN_0047e450(lVar4,iVar3);
                iVar2 = FUN_003d6cf0(param_1,lVar5,0x10001,0);
                if ((iVar2 == 0) && ((*(byte *)(lVar5 + 0x1c) >> 4 & 1) != 0)) break;
                iVar3 = iVar3 + 1;
                if (iVar1 == iVar3) {
                  return 0;
                }
              }
            }
            if (iVar3 == iVar1) {
              return 0;
            }
          }
        }
        else if ((((*(byte *)(*(long *)(piVar7 + 0x30) + 0x60) >> 3 & 1) == 0) && (0x303 < *piVar7))
                && (*piVar7 != 0x10000)) {
          return 0;
        }
      }
      if (*(int *)(param_3 + 0xc) == 0) {
        iVar1 = 0xe0;
        if (*(short *)(param_3 + 8) != 0x808) {
          iVar1 = 0;
        }
        iVar3 = 0x80;
        if (*(short *)(param_3 + 8) != 0x807) {
          iVar3 = iVar1;
        }
      }
      else {
        lVar4 = FUN_003b00f0(*(undefined4 *)(param_3 + 0x10));
        if (lVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_0043b720();
          iVar3 = iVar3 << 2;
        }
      }
      local_44[0] = *(ushort *)(param_3 + 8) >> 8 | *(ushort *)(param_3 + 8) << 8;
      uVar6 = FUN_003af490(param_1,param_2,iVar3,*(undefined4 *)(param_3 + 0xc),local_44);
      return uVar6;
    }
  }
  return 0;
}


