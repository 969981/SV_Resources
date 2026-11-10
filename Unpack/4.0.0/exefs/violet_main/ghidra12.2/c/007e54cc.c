/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e54cc; name: FUN_007e54cc
 */


void FUN_007e54cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_48[0] = 0x10407;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    puVar6 = local_48;
  }
  else {
    local_58[0] = 0;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
    FUN_00cbd7c0(local_48,local_58);
    uVar2 = FUN_00793900(param_3);
    FUN_007966e4(local_58,param_2 + 0x18,param_3 + 1,uVar2);
    FUN_018ff39c(local_48,local_58);
    uVar4 = FUN_00796620(param_2 + 0x18);
    lVar1 = param_3 + 1 + (uVar4 & 0xffffffff);
    uVar5 = FUN_007938a0(lVar1);
    *(undefined8 *)(param_2 + 8) = uVar5;
    uVar3 = FUN_007938e0(lVar1 + 8);
    *(undefined2 *)(param_2 + 0x10) = uVar3;
    uVar2 = FUN_00793900(lVar1 + 10);
    *(undefined1 *)(param_2 + 0x38) = uVar2;
    local_58[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    puVar6 = local_58;
  }
  FUN_00cbd7c0(param_1,puVar6);
  return;
}


