/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cb974; name: FUN_007cb974
 */


void FUN_007cb974(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  
  puVar1 = param_1 + 8;
  *puVar1 = 0;
  local_78[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 9),(Result *)local_78);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  local_78[0] = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
  FUN_018ff39c(puVar1,local_78);
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  puVar5 = (undefined8 *)(param_1 + 0x12);
  *puVar5 = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  puVar6 = (undefined8 *)(param_1 + 0x16);
  *puVar6 = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  puVar7 = (undefined8 *)(param_1 + 0x1a);
  *puVar7 = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x1e);
  *puVar8 = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  puVar9 = (undefined8 *)(param_1 + 0x22);
  *puVar9 = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  puVar10 = (undefined8 *)(param_1 + 0x26);
  *puVar10 = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  puVar11 = (undefined8 *)(param_1 + 0x2a);
  *puVar11 = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  puVar3 = (undefined8 *)(param_1 + 0x2e);
  *puVar3 = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x35] = 0;
  puVar2 = (undefined8 *)(param_1 + 0x32);
  *puVar2 = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x39] = 0;
  puVar4 = (undefined8 *)(param_1 + 0x36);
  *puVar4 = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_007cc99c(param_1 + 0x3a,param_1 + 0x40,10);
  *(undefined8 **)(param_1 + 0x40) = puVar5;
  *(undefined8 **)(param_1 + 0x42) = puVar6;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 **)(param_1 + 0x44) = puVar7;
  *(undefined8 **)(param_1 + 0x46) = puVar8;
  *(undefined8 **)(param_1 + 0x48) = puVar9;
  *(undefined8 **)(param_1 + 0x4a) = puVar10;
  *(undefined8 **)(param_1 + 0x4c) = puVar11;
  *(undefined8 **)(param_1 + 0x4e) = puVar3;
  *(undefined8 **)(param_1 + 0x50) = puVar2;
  *(undefined8 **)(param_1 + 0x52) = puVar4;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  local_78[0] = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
  FUN_018ff39c(puVar1,local_78);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *puVar5 = 0;
  *puVar6 = 0;
  *puVar7 = 0;
  *puVar8 = 0;
  *puVar9 = 0;
  *puVar10 = 0;
  *puVar11 = 0;
  *puVar3 = 0;
  *puVar2 = 0;
  *puVar4 = 0;
  FUN_007cc9ac(param_1 + 0x3a);
  return;
}


