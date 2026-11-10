/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294d4a0; name: FUN_0294d4a0
 */


undefined8 FUN_0294d4a0(long *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar4 = (**(code **)(*param_1 + 0x1f8))();
  if (((uVar4 & 1) == 0) || (sVar3 = (**(code **)(*param_1 + 0x230))(param_1), sVar3 != 0)) {
LAB_0294d4dc:
    uVar5 = 1;
  }
  else {
    bVar1 = (**(code **)(*param_1 + 0x708))(param_1);
    if (bVar1 != 0) {
      uVar6 = 0;
      do {
        cVar2 = (**(code **)(*param_1 + 0x670))(param_1,uVar6);
        if (cVar2 != '\0') goto LAB_0294d4dc;
        uVar6 = uVar6 + 1;
      } while (bVar1 != uVar6);
    }
    uVar5 = 0;
  }
  return uVar5;
}


