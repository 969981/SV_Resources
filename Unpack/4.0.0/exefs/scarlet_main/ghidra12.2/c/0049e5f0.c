/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049e5f0; name: FUN_0049e5f0
 */


undefined8 FUN_0049e5f0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  plVar2 = (long *)nn::os::GetTlsValue(*puVar3);
  if (plVar2 == (long *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
    plVar2 = (long *)FUN_00452ce0(0x10,"external/openssl/crypto/threads_nintendo.cpp",0x71);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    *plVar2 = param_2;
    plVar2[1] = (long)puVar3;
    uVar1 = *puVar3;
  }
  else {
    if (param_2 != 0) {
      *plVar2 = param_2;
      return 1;
    }
    FUN_00452f80(plVar2,"external/openssl/crypto/threads_nintendo.cpp",0x68);
    uVar1 = *puVar3;
    plVar2 = (long *)0x0;
  }
  nn::os::SetTlsValue(uVar1,plVar2);
  return 1;
}


