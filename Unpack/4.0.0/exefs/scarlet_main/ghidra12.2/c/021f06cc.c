/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f06cc; name: FUN_021f06cc
 */


void FUN_021f06cc(long param_1,undefined8 *param_2,uint param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar2 = FUN_01e5e30c(*param_2);
  iVar3 = FUN_01e5e30c(param_2[1]);
  uVar6 = 0;
  if (iVar2 != iVar3) {
    uVar6 = 6;
  }
  uVar1 = uVar6 + 2;
  if ((param_3 & 1) == 0) {
    uVar1 = uVar6;
  }
  if (uVar1 != 0) {
    uVar6 = 1;
    do {
      uVar4 = (*param_4)(0xffffffff);
      *(ulong *)(param_1 + 0x18) = (ulong)uVar4;
      uVar5 = FUN_021f0c6c(*(undefined4 *)(param_1 + 0x20),uVar4);
      if (uVar1 <= uVar6) {
        return;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar5 & 1) == 0);
  }
  return;
}


