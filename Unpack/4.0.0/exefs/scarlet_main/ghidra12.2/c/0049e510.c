/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049e510; name: FUN_0049e510
 */


undefined8 FUN_0049e510(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  TlsSlot *pTVar2;
  
  pTVar2 = (TlsSlot *)FUN_00452ce0(0x10,"external/openssl/crypto/threads_nintendo.cpp",0x39);
  if (pTVar2 != (TlsSlot *)0x0) {
    iVar1 = nn::os::AllocateTlsSlot(pTVar2,(_func_void_ulong *)&LAB_0049e590);
    if (iVar1 == 0) {
      *(undefined8 *)(pTVar2 + 8) = param_2;
      *param_1 = pTVar2;
      return 1;
    }
    FUN_00452f80(pTVar2,"external/openssl/crypto/threads_nintendo.cpp",0x42);
  }
  return 0;
}


