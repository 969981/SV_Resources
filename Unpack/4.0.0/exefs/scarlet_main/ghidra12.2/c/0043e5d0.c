/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043e5d0; name: FUN_0043e5d0
 */


undefined8 FUN_0043e5d0(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_28;
  
  uVar2 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_28 = 0;
    if (((*(long *)(param_1 + 10) != 0) && (*(long *)(param_1 + 4) != 0)) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 4) + 0xa8), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1);
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if ((param_1[1] == 0x198) && (*(long *)(param_1 + 4) != 0)) {
      *(long *)(param_1 + 10) = param_2;
    }
    else {
      puVar1 = (undefined4 *)FUN_003de9a0(&local_28,0x198);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004806c0(6,0x9e,0x9c,"external/openssl/crypto/evp/p_lib.c",0xd2);
        return 0;
      }
      *(undefined4 **)(param_1 + 4) = puVar1;
      *(undefined8 *)(param_1 + 6) = local_28;
      *param_1 = *puVar1;
      param_1[1] = 0x198;
      *(long *)(param_1 + 10) = param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
    FUN_0040bda0(param_2);
    uVar2 = 1;
  }
  return uVar2;
}


