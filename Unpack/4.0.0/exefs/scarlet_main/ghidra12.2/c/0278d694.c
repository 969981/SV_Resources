/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278d694; name: FUN_0278d694
 */


uint FUN_0278d694(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte *local_40;
  undefined8 uStack_38;
  
  uStack_38 = 2;
  local_40 = param_1;
  uVar3 = FUN_0278d730(&local_40);
  if (param_1 == (byte *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *param_1 & 8;
  }
  uVar5 = FUN_0278d784(&local_40);
  uVar4 = FUN_0278d7dc(&local_40);
  uVar1 = 0;
  if ((uVar3 & 0xff) != 0) {
    uVar1 = uVar3 >> 8 & 7;
  }
  uVar3 = 0;
  if ((uVar5 & 0xff) != 0) {
    uVar3 = (uint)(uVar5 >> 4) & 0xf0;
  }
  uVar2 = 0;
  if ((uVar4 & 0xff) != 0) {
    uVar2 = uVar4 & 0xf00;
  }
  return uVar2 | uVar6 | uVar1 | uVar3;
}


