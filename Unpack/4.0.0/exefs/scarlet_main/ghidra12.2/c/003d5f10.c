/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d5f10; name: FUN_003d5f10
 */


undefined ** FUN_003d5f10(long param_1,uint param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_2 == 0xffffffff) {
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar4 = FUN_003af6a0(0);
      if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) & *(uint *)(lVar4 + 4)) ==
          0) {
        uVar6 = 1;
        lVar4 = FUN_003af6a0(1);
        if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) & *(uint *)(lVar4 + 4))
            == 0) {
          uVar6 = 2;
          lVar4 = FUN_003af6a0(2);
          if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) & *(uint *)(lVar4 + 4)
              ) == 0) {
            uVar6 = 3;
            lVar4 = FUN_003af6a0(3);
            if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) &
                *(uint *)(lVar4 + 4)) == 0) {
              lVar4 = FUN_003af6a0(4);
              if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) &
                  *(uint *)(lVar4 + 4)) == 0) {
                uVar6 = 5;
                lVar4 = FUN_003af6a0(5);
                if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) &
                    *(uint *)(lVar4 + 4)) == 0) {
                  uVar6 = 6;
                  lVar4 = FUN_003af6a0(6);
                  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) &
                      *(uint *)(lVar4 + 4)) == 0) {
                    uVar6 = 7;
                    lVar4 = FUN_003af6a0(7);
                    if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) &
                        *(uint *)(lVar4 + 4)) == 0) {
                      uVar6 = 8;
                      lVar4 = FUN_003af6a0(8);
                      if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) &
                          *(uint *)(lVar4 + 4)) == 0) {
                        return (undefined **)0x0;
                      }
                    }
                  }
                }
              }
              else if (*(int *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) == 0x20) {
                uVar6 = 4;
              }
              else if (*(long *)(*(long *)(param_1 + 0x550) + 0x118) == 0) {
                uVar5 = 4;
                if (*(long *)(*(long *)(param_1 + 0x550) + 0xf0) != 0) {
                  uVar5 = 5;
                }
                uVar6 = (ulong)uVar5;
              }
              else {
                uVar6 = 6;
              }
            }
          }
        }
      }
      else {
        uVar6 = 0;
      }
      goto LAB_003d6008;
    }
    param_2 = (int)((**(long **)(param_1 + 0x550) - (long)*(long **)(param_1 + 0x550)) - 0x20U >> 3)
              * -0x33333333;
  }
  uVar6 = (ulong)param_2;
  if (8 < param_2) {
    return (undefined **)0x0;
  }
LAB_003d6008:
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0 && (int)uVar6 == 0) {
    ppuVar3 = &PTR_s_rsa_pkcs1_md5_sha1_044a1c20;
  }
  else {
    ppuVar3 = (undefined **)FUN_003d62c0((&DAT_03cdd1b6)[uVar6]);
    if ((ppuVar3 == (undefined **)0x0) ||
       ((*(int *)((long)ppuVar3 + 0xc) != 0 &&
        (lVar4 = FUN_003b00f0(*(undefined4 *)(ppuVar3 + 2)), lVar4 == 0)))) {
      return (undefined **)0x0;
    }
  }
  iVar2 = FUN_003d7b40(param_1,0x5000b,ppuVar3);
  ppuVar1 = (undefined **)0x0;
  if (iVar2 != 0) {
    ppuVar1 = ppuVar3;
  }
  return ppuVar1;
}


