/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f09a0; name: FUN_021f09a0
 */


void FUN_021f09a0(long param_1,undefined8 *param_2,code *param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  sVar1 = FUN_00cf44ec(param_2[1]);
  sVar2 = FUN_00cf44ec(*param_2);
  uVar3 = FUN_01400b7c(param_2[1]);
  uVar4 = FUN_01400b7c(*param_2);
  uVar6 = uVar4;
  if ((sVar1 != 0x84) && (uVar6 = uVar3, sVar1 == sVar2)) {
    iVar5 = (*param_3)(100);
    uVar6 = uVar4;
    if (iVar5 + 1U < 0x33) {
      uVar6 = uVar3;
    }
  }
  *(char *)(param_1 + 0x6c) = (char)uVar6;
  if (((uVar6 & 0xff) < 0x1c) && ((1 << (ulong)(uVar6 & 0x1f) & 0x8010002U) != 0)) {
    *(undefined1 *)(param_1 + 0x6c) = 4;
  }
  return;
}


