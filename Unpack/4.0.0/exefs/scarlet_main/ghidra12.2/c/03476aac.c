/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03476aac; name: FUN_03476aac
 */


undefined8 FUN_03476aac(undefined4 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  uVar5 = (ulong)*(uint *)(param_2 + 0x28);
  if (*(uint *)(param_2 + 0x28) != 0) {
    iVar6 = 0;
    do {
      iVar1 = iVar6 + ((uint)uVar5 >> 1);
      puVar7 = (ulong *)(*(long *)(param_2 + 0x20) + (long)iVar1 * 0x18);
      uVar8 = *puVar7;
      uVar2 = (uint)puVar7[1];
      if (uVar8 == param_3 && uVar2 == (uint)param_4) {
        uVar4 = 0;
        lVar3 = *(long *)(param_2 + 0x20) + (long)iVar1 * 0x18;
        goto LAB_03476bc0;
      }
      if ((uVar8 < param_3) || ((uVar8 == param_3 && (uVar2 < (uint)param_4)))) {
        iVar6 = iVar1 + 1;
        uVar5 = (ulong)((uint)uVar5 - 1);
      }
      uVar5 = uVar5 >> 1;
    } while ((int)uVar5 != 0);
  }
  lVar3 = FUN_03478100(param_2,param_3,param_4,auStack_38);
  if ((param_3 == 0xffffffffffffffff) || (lVar3 == 0)) {
    uVar4 = 1;
    if (lVar3 == 0) {
      return 1;
    }
  }
  else {
    if ((((ulong *)(lVar3 + -0x18) < *(ulong **)(param_2 + 0x20)) ||
        (*(ulong *)(lVar3 + -0x18) != param_3)) &&
       ((*(ulong **)(param_2 + 0x20) + (ulong)*(uint *)(param_2 + 0x28) * 3 + -3 <
         (ulong *)(lVar3 + 0x18U) || (*(ulong *)(lVar3 + 0x18U) != param_3)))) {
      FUN_03411c9c(param_2 + 0x30,param_3,auStack_34);
    }
    uVar4 = 1;
  }
LAB_03476bc0:
  *(undefined4 *)(lVar3 + 0x10) = param_1;
  return uVar4;
}


