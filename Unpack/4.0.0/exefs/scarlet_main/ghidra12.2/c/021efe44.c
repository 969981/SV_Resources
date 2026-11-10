/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021efe44; name: FUN_021efe44
 */


void FUN_021efe44(long param_1,undefined8 *param_2,code *param_3)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  
  sVar1 = FUN_00cf44ec(param_2[1]);
  if (sVar1 != 0x84) {
    param_2 = param_2 + 1;
  }
  sVar1 = FUN_00cf44ec(*param_2);
  if ((ushort)(sVar1 - 0x139U) < 2) {
    iVar2 = (*param_3)(2);
    uVar3 = 0x139;
    if (iVar2 != 0) {
      uVar3 = 0x13a;
    }
    *(undefined2 *)(param_1 + 0x28) = uVar3;
  }
  return;
}


