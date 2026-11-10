/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040f860; name: FUN_0040f860
 */


undefined8 FUN_0040f860(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  if ((*(code **)(pbVar2 + 0x98) == (code *)0x0) && ((*pbVar2 & 1) == 0)) {
    FUN_004806c0(0x10,0x127,0x42,"external/openssl/crypto/ec/ec_oct.c",0x18);
    return 0;
  }
  if ((pbVar2 != (byte *)*param_2) ||
     (((*(int *)(param_1 + 4) != 0 && (*(int *)(param_2 + 1) != 0)) &&
      (*(int *)(param_1 + 4) != *(int *)(param_2 + 1))))) {
    FUN_004806c0(0x10,0x127,0x65,"external/openssl/crypto/ec/ec_oct.c",0x1d);
    return 0;
  }
  if ((*pbVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0040f8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pbVar2 + 0x98))();
    return uVar1;
  }
  if (*(int *)(pbVar2 + 4) == 0x196) {
    uVar1 = FUN_004126b0();
    return uVar1;
  }
  uVar1 = FUN_0040fb50();
  return uVar1;
}


