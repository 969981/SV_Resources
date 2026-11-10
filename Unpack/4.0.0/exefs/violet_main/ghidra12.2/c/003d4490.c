/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d4490; name: FUN_003d4490
 */


undefined8 FUN_003d4490(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_003a26e0(param_2,*(undefined4 *)(param_1 + 0x708),1);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_003a29e0(param_2,*(undefined8 *)(param_1 + 0x730),*(undefined8 *)(param_1 + 0x738)
                           ,3), iVar1 == 0)) {
    FUN_003c3950(param_1,0x50,0x1ee,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x1086);
    return 0;
  }
  return 1;
}


