/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dea1e0; name: FUN_00dea1e0
 */


undefined2 * FUN_00dea1e0(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    *param_3 = *param_1;
    FUN_00ca1ea4(param_3 + 4,param_1 + 4);
    FUN_00cacc64(param_3 + 0xc,param_1 + 0xc);
    FUN_00d48230(param_3 + 0x14,param_1 + 0x14);
    FUN_0127739c(param_3 + 0x1c,param_1 + 0x1c);
    FUN_0108458c(param_3 + 0x24,param_1 + 0x24);
    FUN_010f6758(param_3 + 0x2c,param_1 + 0x2c);
    FUN_00dea484(param_3 + 0x34,param_1 + 0x34);
    FUN_00dea51c(param_3 + 0x38,param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x3c);
    *(undefined1 *)(param_3 + 0x40) = *(undefined1 *)(param_1 + 0x40);
    *(undefined8 *)(param_3 + 0x3c) = uVar1;
    memcpy(param_3 + 0x44,param_1 + 0x44,0x25);
    if (param_1 + 0x58 == param_2) {
      param_3 = param_3 + 0x58;
    }
    else {
      param_3[0x58] = param_1[0x58];
      FUN_00ca1ea4(param_3 + 0x5c,param_1 + 0x5c);
      FUN_00cacc64(param_3 + 100,param_1 + 100);
      FUN_00d48230(param_3 + 0x6c,param_1 + 0x6c);
      FUN_0127739c(param_3 + 0x74,param_1 + 0x74);
      FUN_0108458c(param_3 + 0x7c,param_1 + 0x7c);
      FUN_010f6758(param_3 + 0x84,param_1 + 0x84);
      FUN_00dea484(param_3 + 0x8c,param_1 + 0x8c);
      FUN_00dea51c(param_3 + 0x90,param_1 + 0x90);
      uVar1 = *(undefined8 *)(param_1 + 0x94);
      *(undefined1 *)(param_3 + 0x98) = *(undefined1 *)(param_1 + 0x98);
      *(undefined8 *)(param_3 + 0x94) = uVar1;
      memcpy(param_3 + 0x9c,param_1 + 0x9c,0x25);
      if (param_1 + 0xb0 == param_2) {
        param_3 = param_3 + 0xb0;
      }
      else {
        param_3[0xb0] = param_1[0xb0];
        FUN_00ca1ea4(param_3 + 0xb4,param_1 + 0xb4);
        FUN_00cacc64(param_3 + 0xbc,param_1 + 0xbc);
        FUN_00d48230(param_3 + 0xc4,param_1 + 0xc4);
        FUN_0127739c(param_3 + 0xcc,param_1 + 0xcc);
        FUN_0108458c(param_3 + 0xd4,param_1 + 0xd4);
        FUN_010f6758(param_3 + 0xdc,param_1 + 0xdc);
        FUN_00dea484(param_3 + 0xe4,param_1 + 0xe4);
        FUN_00dea51c(param_3 + 0xe8,param_1 + 0xe8);
        uVar1 = *(undefined8 *)(param_1 + 0xec);
        *(undefined1 *)(param_3 + 0xf0) = *(undefined1 *)(param_1 + 0xf0);
        *(undefined8 *)(param_3 + 0xec) = uVar1;
        memcpy(param_3 + 0xf4,param_1 + 0xf4,0x25);
        param_3 = param_3 + 0x108;
        for (param_1 = param_1 + 0x108; param_1 != param_2; param_1 = param_1 + 0x58) {
          *param_3 = *param_1;
          FUN_00ca1ea4(param_3 + 4,param_1 + 4);
          FUN_00cacc64(param_3 + 0xc,param_1 + 0xc);
          FUN_00d48230(param_3 + 0x14,param_1 + 0x14);
          FUN_0127739c(param_3 + 0x1c,param_1 + 0x1c);
          FUN_0108458c(param_3 + 0x24,param_1 + 0x24);
          FUN_010f6758(param_3 + 0x2c,param_1 + 0x2c);
          FUN_00dea484(param_3 + 0x34,param_1 + 0x34);
          FUN_00dea51c(param_3 + 0x38,param_1 + 0x38);
          uVar1 = *(undefined8 *)(param_1 + 0x3c);
          *(undefined1 *)(param_3 + 0x40) = *(undefined1 *)(param_1 + 0x40);
          *(undefined8 *)(param_3 + 0x3c) = uVar1;
          memcpy(param_3 + 0x44,param_1 + 0x44,0x25);
          param_3 = param_3 + 0x58;
        }
      }
    }
  }
  return param_3;
}


