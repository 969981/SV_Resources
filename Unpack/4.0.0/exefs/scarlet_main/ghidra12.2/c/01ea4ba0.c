/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea4ba0; name: FUN_01ea4ba0
 */


undefined2 * FUN_01ea4ba0(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      FUN_00ca1ea4(param_3 + 4,param_1 + 4);
      FUN_00cacc64(param_3 + 0xc,param_1 + 0xc);
      FUN_00d48230(param_3 + 0x14,param_1 + 0x14);
      FUN_0127739c(param_3 + 0x1c,param_1 + 0x1c);
      FUN_0108458c(param_3 + 0x24,param_1 + 0x24);
      FUN_010f6758(param_3 + 0x2c,param_1 + 0x2c);
      FUN_00dea484(param_3 + 0x34,param_1 + 0x34);
      FUN_00dea51c(param_3 + 0x38,param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x3c);
      *(undefined1 *)(param_3 + 0x40) = *(undefined1 *)(param_1 + 0x40);
      *(undefined8 *)(param_3 + 0x3c) = uVar3;
      *(undefined1 *)(param_3 + 0x44) = *(undefined1 *)(param_1 + 0x44);
      *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_3 + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
      FUN_015fb960(param_3 + 0x50,param_1 + 0x50);
      memcpy(param_3 + 0x8c,param_1 + 0x8c,0x2d);
      FUN_015fb7e0(param_3 + 0xa4,param_1 + 0xa4);
      puVar1 = (undefined4 *)((long)param_1 + 0x1c3);
      uVar2 = *(undefined4 *)(param_1 + 0xe0);
      param_1 = param_1 + 0xe4;
      *(undefined4 *)((long)param_3 + 0x1c3) = *puVar1;
      *(undefined4 *)(param_3 + 0xe0) = uVar2;
      param_3 = param_3 + 0xe4;
    } while (param_1 != param_2);
  }
  return param_3;
}


