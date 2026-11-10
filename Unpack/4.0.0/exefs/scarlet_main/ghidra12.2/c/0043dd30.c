/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043dd30; name: FUN_0043dd30
 */


undefined8 FUN_0043dd30(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_18;
  
  local_18 = 0;
  if (param_1 == (undefined4 *)0x0) {
    lVar2 = FUN_003de9a0(&local_18,param_2);
    if (lVar2 != 0) {
      return 1;
    }
  }
  else {
    if (((*(long *)(param_1 + 10) != 0) && (*(long *)(param_1 + 4) != 0)) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 4) + 0xa8), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1);
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if ((param_1[1] == param_2) && (*(long *)(param_1 + 4) != 0)) {
      return 1;
    }
    puVar1 = (undefined4 *)FUN_003de9a0(&local_18,param_2);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 4) = puVar1;
      *(undefined8 *)(param_1 + 6) = local_18;
      *param_1 = *puVar1;
      param_1[1] = param_2;
      return 1;
    }
  }
  FUN_004806c0(6,0x9e,0x9c,"external/openssl/crypto/evp/p_lib.c",0xd2);
  return 0;
}


