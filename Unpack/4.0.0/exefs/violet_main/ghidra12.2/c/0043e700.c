/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043e700; name: FUN_0043e700
 */


undefined8 FUN_0043e700(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 local_28;
  
  lVar1 = FUN_004002d0(param_2);
  iVar3 = 0x1c;
  if (lVar1 != 0) {
    iVar3 = 0x398;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_28 = 0;
    if (((*(long *)(param_1 + 10) != 0) && (*(long *)(param_1 + 4) != 0)) &&
       (pcVar4 = *(code **)(*(long *)(param_1 + 4) + 0xa8), pcVar4 != (code *)0x0)) {
      (*pcVar4)(param_1);
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if ((param_1[1] == iVar3) && (*(long *)(param_1 + 4) != 0)) {
      *(long *)(param_1 + 10) = param_2;
    }
    else {
      puVar2 = (undefined4 *)FUN_003de9a0(&local_28,iVar3);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004806c0(6,0x9e,0x9c,"external/openssl/crypto/evp/p_lib.c",0xd2);
        return 0;
      }
      *(undefined4 **)(param_1 + 4) = puVar2;
      *(undefined8 *)(param_1 + 6) = local_28;
      *param_1 = *puVar2;
      param_1[1] = iVar3;
      *(long *)(param_1 + 10) = param_2;
    }
    if (param_2 != 0) {
      FUN_004000f0(param_2);
      return 1;
    }
  }
  return 0;
}


