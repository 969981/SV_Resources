/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e3184; name: FUN_007e3184
 */


void FUN_007e3184(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  int local_88 [8];
  undefined4 local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  local_58[0] = 0;
  local_88[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_88);
  uVar1 = FUN_007e44e4(param_2,param_3);
  lVar4 = *(long *)(*(long *)(param_2 + 8) + (uVar1 & 0xffffffff) * 0x18);
  do {
    if (lVar4 == 0) {
      local_88[0] = 0x2c0a;
LAB_007e3218:
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
      FUN_00cbd7c0(local_68,local_88);
      FUN_018ff39c(local_58,local_68);
      if (local_58[0] == 0) {
        uVar1 = FUN_007e44e4(param_2,param_3);
        FUN_007e4860(local_88,*(long *)(param_2 + 8) + (uVar1 & 0xffffffff) * 0x18,param_3);
        FUN_018ff39c(local_58,local_88);
      }
      else {
        local_88[0] = 0x2c0a;
        local_68[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
      }
      uVar1 = FUN_007e44e4(param_2,param_3);
      FUN_007e4608(local_88,*(long *)(param_2 + 8) + (uVar1 & 0xffffffff) * 0x18,param_3,param_4);
      FUN_018ff39c(local_58,local_88);
      local_68[0] = 0;
      local_88[0] = 0xc10;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
      if (local_58[0] == local_88[0]) {
        FUN_0078a1c0(local_88,*(undefined8 *)(param_2 + 0x18));
        uVar2 = FUN_007e44e4(param_2,local_88);
        FUN_007e4860(local_68,*(long *)(param_2 + 8) + (uVar2 & 0xffffffff) * 0x18,local_88);
        FUN_018ff39c(local_58,local_68);
        FUN_007e4608(local_68,*(long *)(param_2 + 8) + (uVar1 & 0xffffffff) * 0x18,param_3,param_4);
        FUN_018ff39c(local_58,local_68);
        local_68[0] = 0;
        local_48[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
        FUN_00cbd7c0(param_1,local_68);
        FUN_0284e3d4(local_88);
      }
      else {
        if (local_58[0] == 0) {
          local_88[0] = 0;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
          piVar3 = local_88;
        }
        else {
          piVar3 = local_58;
        }
        FUN_00cbd7c0(param_1,piVar3);
      }
      return;
    }
    uVar1 = FUN_0078b278(lVar4,param_3);
    if ((uVar1 & 1) != 0) {
      local_88[0] = 0;
      goto LAB_007e3218;
    }
    lVar4 = *(long *)(lVar4 + 0x48);
  } while( true );
}


