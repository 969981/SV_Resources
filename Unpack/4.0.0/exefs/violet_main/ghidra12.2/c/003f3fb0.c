/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f3fb0; name: FUN_003f3fb0
 */


long * FUN_003f3fb0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00452ce0(0x30,"external/openssl/crypto/comp/comp_lib.c",0x16);
  if (plVar2 == (long *)0x0) {
    FUN_004806c0(0x29,0x67,0x41,"external/openssl/crypto/comp/comp_lib.c",0x17);
    return (long *)0x0;
  }
  *plVar2 = param_1;
  if ((*(code **)(param_1 + 0x10) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x10))(plVar2), iVar1 != 0)) {
    return plVar2;
  }
  FUN_00452f80(plVar2,"external/openssl/crypto/comp/comp_lib.c",0x1c);
  return (long *)0x0;
}


