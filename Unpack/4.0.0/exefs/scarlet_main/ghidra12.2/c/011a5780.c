/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011a5780; name: FUN_011a5780
 */


undefined1  [16] FUN_011a5780(undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    puVar5 = (uint *)*param_3;
    uVar1 = *puVar5;
    uVar2 = FUN_010c9c24(lVar4 + 0x28);
    if ((uVar2 & 1) != 0) {
      FUN_011a57dc(lVar4,(long)puVar5 + (ulong)uVar1);
    }
    uVar3 = 2;
  }
  auVar6._8_8_ = lVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}


