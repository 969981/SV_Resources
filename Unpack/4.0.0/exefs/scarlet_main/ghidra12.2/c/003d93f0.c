/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d93f0; name: FUN_003d93f0
 */


long FUN_003d93f0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int local_48 [2];
  
  if (*(long *)(param_1 + 0x1988) == 0) {
    uVar8 = 0;
    lVar7 = 0;
  }
  else if (param_3 == 0) {
    uVar8 = 0;
    iVar3 = -1;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x1980) + uVar8 * 8);
      iVar2 = *(int *)(lVar7 + 0xc);
      if ((((((iVar2 != 0x40) && (iVar2 != 0x2a3)) && (*(int *)(lVar7 + 0x14) != 6)) &&
           ((*(int *)(lVar7 + 0x14) != 0x74 &&
            ((iVar2 == 0 || (lVar5 = FUN_003b00f0(*(undefined4 *)(lVar7 + 0x10)), lVar5 != 0))))))
          && (uVar1 = *(uint *)(lVar7 + 0x18), uVar1 < 9)) &&
         (((*(long *)(*(long *)(param_1 + 0x550) + (ulong)uVar1 * 0x28 + 0x20) != 0 &&
           (*(long *)(*(long *)(param_1 + 0x550) + (ulong)uVar1 * 0x28 + 0x28) != 0)) &&
          (iVar2 = FUN_003da580(param_1,lVar7), iVar2 != 0)))) {
        if (*(int *)(lVar7 + 0x14) == 0x198) {
          if (iVar3 == -1) {
            FUN_0043e6b0(*(undefined8 *)
                          (*(long *)(param_1 + 0x550) + (long)*(int *)(lVar7 + 0x18) * 0x28 + 0x28))
            ;
            FUN_0040c210();
            iVar3 = FUN_0040d580();
          }
          if ((*(int *)(lVar7 + 0x20) == 0) || (iVar3 == *(int *)(lVar7 + 0x20))) break;
        }
        else {
          if (*(int *)(lVar7 + 0x14) != 0x390) break;
          lVar5 = FUN_0043e390();
          if (((lVar5 != 0) && (*(int *)(lVar7 + 0xc) != 0)) &&
             (lVar6 = FUN_003b00f0(*(undefined4 *)(lVar7 + 0x10)), lVar6 != 0)) {
            iVar2 = FUN_00469640(lVar5);
            iVar4 = FUN_0043b720(lVar6);
            if (iVar4 * 2 + 2 <= iVar2) break;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(param_1 + 0x1988));
  }
  else {
    uVar8 = 0;
    iVar3 = -1;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x1980) + uVar8 * 8);
      iVar2 = *(int *)(lVar7 + 0xc);
      if ((((iVar2 != 0x40) && (iVar2 != 0x2a3)) &&
          (((*(int *)(lVar7 + 0x14) != 6 && (*(int *)(lVar7 + 0x14) != 0x74)) &&
           (((iVar2 == 0 || (lVar5 = FUN_003b00f0(*(undefined4 *)(lVar7 + 0x10)), lVar5 != 0)) &&
            (lVar5 = FUN_003af5b0(param_3,local_48), lVar5 != 0)))))) &&
         ((*(int *)(lVar7 + 0x18) == local_48[0] &&
          (iVar2 = FUN_003da580(param_1,lVar7,param_2,param_3), iVar2 != 0)))) {
        if (*(int *)(lVar7 + 0x14) == 0x390) {
          lVar5 = FUN_0043e390(param_3);
          if (((lVar5 != 0) && (*(int *)(lVar7 + 0xc) != 0)) &&
             (lVar6 = FUN_003b00f0(*(undefined4 *)(lVar7 + 0x10)), lVar6 != 0)) {
            iVar2 = FUN_00469640(lVar5);
            iVar4 = FUN_0043b720(lVar6);
            if (iVar4 * 2 + 2 <= iVar2) break;
          }
        }
        else {
          if (*(int *)(lVar7 + 0x14) != 0x198) break;
          if (iVar3 == -1) {
            FUN_0043e6b0(param_3);
            FUN_0040c210();
            iVar3 = FUN_0040d580();
          }
          if ((*(int *)(lVar7 + 0x20) == 0) || (iVar3 == *(int *)(lVar7 + 0x20))) break;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(param_1 + 0x1988));
  }
  lVar5 = 0;
  if (uVar8 != *(ulong *)(param_1 + 0x1988)) {
    lVar5 = lVar7;
  }
  return lVar5;
}


