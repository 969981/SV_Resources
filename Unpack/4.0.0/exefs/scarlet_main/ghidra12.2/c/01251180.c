/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01251180; name: FUN_01251180
 */


void FUN_01251180(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  bVar2 = FUN_01251228(*(undefined8 *)(param_1 + 0x20));
  uVar1 = (uint)bVar2;
  if (bVar2 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
    uVar3 = FUN_01251234(*(undefined8 *)(param_1 + 0x20),0);
    FUN_012544f8(uVar4,uVar3);
    if (uVar1 != 1) {
      uVar3 = FUN_01251234(*(undefined8 *)(param_1 + 0x20),1);
      FUN_012544f8(uVar4,uVar3);
      if (uVar1 != 2) {
        uVar5 = 2;
        do {
          uVar3 = FUN_01251234(*(undefined8 *)(param_1 + 0x20),uVar5);
          FUN_012544f8(uVar4,uVar3);
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
    }
  }
  return;
}


