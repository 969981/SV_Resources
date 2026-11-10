/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c4820; name: FUN_003c4820
 */


undefined8 FUN_003c4820(long param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 2;
  if (*(long *)(param_1 + 0x860) == 0) {
    iVar1 = FUN_003e9560(*(undefined8 *)(param_1 + 0x18),0xb,0,0);
    if (iVar1 < 1) {
      return 0;
    }
  }
  else {
    iVar1 = (**(code **)(*(long *)(param_1 + 0x860) + 0x10))(param_1);
    if (iVar1 == 0) {
      FUN_004806c0(0x14,0xbbf,0x44,"external/openssl/ssl/statem/statem.c",0x398);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 1;
}


