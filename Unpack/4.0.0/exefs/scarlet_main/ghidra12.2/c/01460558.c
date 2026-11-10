/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01460558; name: FUN_01460558
 */


undefined8 FUN_01460558(undefined8 param_1,long *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  short *psVar6;
  short local_24 [2];
  
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar2 == 0x7f) {
LAB_014605fc:
    uVar4 = 1;
  }
  else {
    uVar4 = FUN_01246e90(param_1);
    uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
    bVar1 = FUN_0124f6fc(uVar4,uVar3,local_24);
    if (bVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar5 = (ulong)bVar1;
      psVar6 = local_24;
      do {
        if (*psVar6 == 0x7f) goto LAB_014605fc;
        uVar4 = 0;
        uVar5 = uVar5 - 1;
        psVar6 = psVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  return uVar4;
}


