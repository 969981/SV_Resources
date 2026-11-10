/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00491c40; name: FUN_00491c40
 */


undefined8 FUN_00491c40(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x28) == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004806c0(0x22,0x8e,0x94,"external/openssl/crypto/x509v3/v3_conf.c",0x181);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00491c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


