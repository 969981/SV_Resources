/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043e2c0; name: FUN_0043e2c0
 */


bool FUN_0043e2c0(undefined4 *param_1,int param_2,long param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 local_28;
  
  bVar1 = false;
  if (param_1 != (undefined4 *)0x0) {
    local_28 = 0;
    if (((*(long *)(param_1 + 10) != 0) && (*(long *)(param_1 + 4) != 0)) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 4) + 0xa8), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1);
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if ((param_1[1] != param_2) || (*(long *)(param_1 + 4) == 0)) {
      puVar2 = (undefined4 *)FUN_003de9a0(&local_28,param_2);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004806c0(6,0x9e,0x9c,"external/openssl/crypto/evp/p_lib.c",0xd2);
        return false;
      }
      *(undefined4 **)(param_1 + 4) = puVar2;
      *(undefined8 *)(param_1 + 6) = local_28;
      *param_1 = *puVar2;
      param_1[1] = param_2;
    }
    bVar1 = param_3 != 0;
    *(long *)(param_1 + 10) = param_3;
  }
  return bVar1;
}


