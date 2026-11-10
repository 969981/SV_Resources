/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a6dd0; name: FUN_003a6dd0
 */


void FUN_003a6dd0(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      FUN_00452f80(*puVar1,"external/openssl/ssl/record/ssl3_record.c",0x37);
      param_2 = param_2 + -1;
      *puVar1 = 0;
      puVar1 = puVar1 + 10;
    } while (param_2 != 0);
  }
  return;
}


