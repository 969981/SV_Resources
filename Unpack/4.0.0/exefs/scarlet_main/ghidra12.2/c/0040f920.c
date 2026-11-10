/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040f920; name: FUN_0040f920
 */


undefined8 FUN_0040f920(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_1;
  if ((*(code **)(pbVar3 + 0xa0) == (code *)0x0) && ((*pbVar3 & 1) == 0)) {
    uVar1 = 0x42;
    uVar2 = 0x4c;
  }
  else {
    if ((pbVar3 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0040f9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(pbVar3 + 0xa0))();
        return uVar1;
      }
      if (*(int *)(pbVar3 + 4) == 0x196) {
        uVar1 = FUN_00412a70();
        return uVar1;
      }
      uVar1 = FUN_0040fdb0();
      return uVar1;
    }
    uVar1 = 0x65;
    uVar2 = 0x50;
  }
  FUN_004806c0(0x10,0x7b,uVar1,"external/openssl/crypto/ec/ec_oct.c",uVar2);
  return 0;
}


