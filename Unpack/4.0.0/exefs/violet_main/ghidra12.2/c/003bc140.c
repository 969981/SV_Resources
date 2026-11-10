/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003bc140; name: FUN_003bc140
 */


undefined8 FUN_003bc140(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x890) == 0) {
    return 2;
  }
  iVar1 = FUN_003a26e0(param_2,0xff01,2);
  if ((iVar1 != 0) && (iVar1 = FUN_003a1e80(param_2,2), iVar1 != 0)) {
    iVar1 = FUN_003a29e0(param_2,*(long *)(param_1 + 0xa8) + 0x348,
                         *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x388),1);
    if ((iVar1 != 0) && (iVar1 = FUN_003a1fe0(param_2), iVar1 != 0)) {
      return 1;
    }
  }
  FUN_003c3950(param_1,0x50,0x1d9,0x44,"external/openssl/ssl/statem/extensions_clnt.c",0x1d);
  return 0;
}


