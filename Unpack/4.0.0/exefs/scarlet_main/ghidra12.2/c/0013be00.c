/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013be00; name: FUN_0013be00
 */


long FUN_0013be00(long param_1,void *param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  int iVar9;
  
  if (param_3 < 0x29) {
    lVar6 = *(long *)(param_1 + 0x18);
    uVar7 = *(uint *)(lVar6 + 0x60) ^ (uint)param_3;
    if (param_3 != 0) {
      uVar4 = param_3;
      if ((param_3 & 1) != 0) {
        uVar7 = uVar7 * 0x20 + (uVar7 >> 2) + (uint)*(byte *)((long)param_2 + (param_3 - 1)) ^ uVar7
        ;
        uVar4 = param_3 - 1;
      }
      if (param_3 != 1) {
        do {
          uVar2 = uVar4 - 2;
          uVar7 = uVar7 * 0x20 + (uVar7 >> 2) + (uint)*(byte *)((long)param_2 + (uVar4 - 1)) ^ uVar7
          ;
          uVar7 = uVar7 * 0x20 + (uVar7 >> 2) + (uint)*(byte *)((long)param_2 + (uVar4 - 2)) ^ uVar7
          ;
          uVar4 = uVar2;
        } while (uVar2 != 0);
      }
    }
    iVar9 = *(int *)(lVar6 + 0x3c);
    plVar8 = (long *)(*(long *)(lVar6 + 0x30) + (long)(int)(iVar9 - 1U & uVar7) * 8);
    for (lVar5 = *plVar8; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
      if ((*(byte *)(lVar5 + 0xb) == param_3) &&
         (iVar3 = memcmp(param_2,(void *)(lVar5 + 0x18),param_3), iVar3 == 0)) {
        if (((*(byte *)(lVar6 + 100) ^ 0x18) & *(byte *)(lVar5 + 9)) == 0) {
          return lVar5;
        }
        *(byte *)(lVar5 + 9) = *(byte *)(lVar5 + 9) ^ 0x18;
        return lVar5;
      }
    }
    if (iVar9 <= *(int *)(lVar6 + 0x38)) {
      if (*(int *)(lVar6 + 0x38) == 0x7fffffff) {
        FUN_0012b690(param_1,1);
        if (*(int *)(lVar6 + 0x38) == 0x7fffffff) goto LAB_0013c038;
        iVar9 = *(int *)(lVar6 + 0x3c);
      }
      if (iVar9 < 0x40000000) {
        FUN_0013b9b0(param_1,iVar9 << 1);
        iVar9 = *(int *)(lVar6 + 0x3c);
      }
      plVar8 = (long *)(*(long *)(lVar6 + 0x30) + (long)(int)(iVar9 - 1U & uVar7) * 8);
    }
    lVar5 = FUN_00129fd0(param_1,4,param_3 + 0x19);
    *(uint *)(lVar5 + 0xc) = uVar7;
    *(undefined1 *)(lVar5 + 10) = 0;
    *(undefined1 *)(lVar5 + 0x18 + param_3) = 0;
    memcpy((void *)(lVar5 + 0x18),param_2,param_3);
    *(char *)(lVar5 + 0xb) = (char)param_3;
    *(long *)(lVar5 + 0x10) = *plVar8;
    *plVar8 = lVar5;
    *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + 1;
  }
  else {
    if (0x7fffffffffffffde < param_3) {
      FUN_0012d6a0(param_1);
LAB_0013c038:
                    /* WARNING: Subroutine does not return */
      FUN_00126bd0(param_1,4);
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x60);
    lVar5 = FUN_00129fd0(param_1,0x14,param_3 + 0x19);
    *(undefined4 *)(lVar5 + 0xc) = uVar1;
    *(undefined1 *)(lVar5 + 10) = 0;
    *(undefined1 *)(lVar5 + 0x18 + param_3) = 0;
    *(ulong *)(lVar5 + 0x10) = param_3;
    memcpy((void *)(lVar5 + 0x18),param_2,param_3);
  }
  return lVar5;
}


