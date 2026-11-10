/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b3de0; name: FUN_003b3de0
 */


undefined8 FUN_003b3de0(long param_1)

{
  undefined8 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if ((((*(byte *)(*(long *)(piVar2 + 0x30) + 0x60) >> 3 & 1) == 0) && (0x303 < *piVar2)) &&
     (*piVar2 != 0x10000)) {
    FUN_004806c0(0x14,0x204,0x10a,"external/openssl/ssl/ssl_lib.c",0x8b1);
    return 0;
  }
  if ((*(byte *)(param_1 + 0x697) >> 6 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x890) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x003b3e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(piVar2 + 0x16))();
    return uVar1;
  }
  FUN_004806c0(0x14,0x204,0x153,"external/openssl/ssl/ssl_lib.c",0x8b6);
  return 0;
}


