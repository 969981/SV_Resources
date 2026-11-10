/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d5710; name: FUN_003d5710
 */


uint FUN_003d5710(long param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  long lVar7;
  ushort *puVar8;
  long lVar9;
  long lVar10;
  ushort local_64 [2];
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = 0;
  }
  else {
    if (param_2 == 0xfffffffe) {
      if ((*(byte *)(*(long *)(param_1 + 0x550) + 0x1e) & 3) != 0) {
        iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x18);
        uVar4 = 0x18;
        if (iVar1 != 0x300c02c) {
          uVar4 = 0;
        }
        uVar5 = 0x17;
        if (iVar1 != 0x300c02b) {
          uVar5 = uVar4;
        }
        return uVar5;
      }
      param_2 = 0;
    }
    if ((*(byte *)(param_1 + 0x696) >> 6 & 1) == 0) {
      puVar6 = *(undefined2 **)(param_1 + 0x780);
      lVar7 = *(long *)(param_1 + 0x778);
      uVar4 = *(uint *)(*(long *)(param_1 + 0x550) + 0x1c) & 0x30000;
      if (uVar4 == 0x30000) {
        lVar9 = 2;
        puVar8 = &DAT_03cdd16c;
      }
      else if (uVar4 == 0x20000) {
        lVar9 = 1;
        puVar8 = &DAT_03cdd16e;
      }
      else if (uVar4 == 0x10000) {
        lVar9 = 1;
        puVar8 = &DAT_03cdd16c;
      }
      else {
        puVar8 = *(ushort **)(param_1 + 0x770);
        if (puVar8 == (ushort *)0x0) {
          lVar9 = 5;
          puVar8 = &DAT_03cdd170;
        }
        else {
          lVar9 = *(long *)(param_1 + 0x768);
        }
      }
    }
    else {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x550) + 0x1c) & 0x30000;
      if (uVar4 == 0x30000) {
        lVar7 = 2;
        puVar6 = &DAT_03cdd16c;
      }
      else if (uVar4 == 0x20000) {
        lVar7 = 1;
        puVar6 = &DAT_03cdd16e;
      }
      else if (uVar4 == 0x10000) {
        lVar7 = 1;
        puVar6 = &DAT_03cdd16c;
      }
      else {
        puVar6 = *(undefined2 **)(param_1 + 0x770);
        if (puVar6 == (undefined2 *)0x0) {
          lVar7 = 5;
          puVar6 = &DAT_03cdd170;
        }
        else {
          lVar7 = *(long *)(param_1 + 0x768);
        }
      }
      puVar8 = *(ushort **)(param_1 + 0x780);
      lVar9 = *(long *)(param_1 + 0x778);
    }
    uVar4 = 0;
    if ((lVar7 != 0) && (lVar9 != 0)) {
      lVar10 = 0;
      do {
        uVar5 = (uint)(ushort)puVar6[lVar10];
        puVar2 = puVar8;
        lVar3 = lVar9;
        do {
          if (*puVar2 == uVar5) {
            if (uVar5 - 1 < 0x1e) {
              local_64[0] = (ushort)puVar6[lVar10] >> 8 | (ushort)((uVar5 & 0xff00ff) << 8);
              iVar1 = FUN_003af490(param_1,0x20005,
                                   *(undefined4 *)(&DAT_03cdd008 + (ulong)(uVar5 - 1) * 0xc),
                                   (&DAT_03cdd004)[(ulong)(uVar5 - 1) * 3],local_64);
              if (iVar1 != 0) {
                if (param_2 == uVar4) {
                  return uVar5;
                }
                uVar4 = uVar4 + 1;
              }
            }
            break;
          }
          lVar3 = lVar3 + -1;
          puVar2 = puVar2 + 1;
        } while (lVar3 != 0);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar7);
    }
    if (param_2 != 0xffffffff) {
      uVar4 = 0;
    }
  }
  return uVar4;
}


