/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f0244; name: FUN_021f0244
 */


void FUN_021f0244(long param_1,undefined8 *param_2,code *param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined1 uVar4;
  
  uVar3 = (*param_3)(100);
  sVar2 = FUN_00cf44ec(param_2[1]);
  if (sVar2 != 0x84) {
    param_2 = param_2 + 1;
  }
  cVar1 = FUN_021f0b58(*param_2);
  if (cVar1 == '\x02') {
    if (uVar3 < 0x14) goto LAB_021f02d8;
    if (0x27 < uVar3) {
      uVar4 = 2;
      goto LAB_021f02e4;
    }
  }
  else if (cVar1 == '\x01') {
    if (uVar3 < 0x14) goto LAB_021f02d8;
  }
  else if (cVar1 == '\0') {
    if (uVar3 < 0x50) {
LAB_021f02d8:
      *(undefined1 *)(param_1 + 0x36) = 0;
      return;
    }
  }
  else if (uVar3 < 0x32) goto LAB_021f02d8;
  uVar4 = 1;
LAB_021f02e4:
  *(undefined1 *)(param_1 + 0x36) = uVar4;
  return;
}


