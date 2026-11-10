/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00401130; name: FUN_00401130
 */


undefined8
FUN_00401130(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  
  local_18 = param_4;
  puVar2 = (undefined8 *)FUN_00402800(param_2,param_3,param_6);
  if (puVar2 == (undefined8 *)0x0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = FUN_003e3920(puVar2,&local_18,&DAT_044a36d0);
  *param_5 = uVar1;
  FUN_003eb490(*puVar2);
  FUN_003eb490(puVar2[1]);
  FUN_00452f80(puVar2,"external/openssl/crypto/dsa/dsa_asn1.c",0x26);
  return 1;
}


