/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021efdb4; name: FUN_021efdb4
 */


void FUN_021efdb4(long param_1,undefined8 *param_2,code *param_3)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined2 uVar4;
  
  sVar1 = FUN_00cf44ec(param_2[1]);
  if (sVar1 != 0x84) {
    param_2 = param_2 + 1;
  }
  uVar3 = FUN_00cf44ec(*param_2);
  if (((uint)uVar3 & 0xffff) < 0x23 && (1L << (uVar3 & 0x3f) & 0x720000000U) != 0) {
    iVar2 = (*param_3)(2);
    uVar4 = 0x20;
    if (iVar2 != 0) {
      uVar4 = 0x1d;
    }
    *(undefined2 *)(param_1 + 0x28) = uVar4;
  }
  return;
}


