/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b3920; name: FUN_003b3920
 */


undefined8 FUN_003b3920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x860) == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      if ((*(byte *)(param_1 + 0x44) >> 1 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x28) = 1;
        return 0;
      }
      if ((*(int *)(param_1 + 0x84) == 8) || (*(int *)(param_1 + 0x84) == 1)) {
        FUN_004806c0(0x14,0x20b,0x42,"external/openssl/ssl/ssl_lib.c",0x71b);
        return 0;
      }
      FUN_003c3a60(param_1,0);
      if (((*(byte *)(param_1 + 0x699) & 1) == 0) || (lVar1 = FUN_003e6430(), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003b3a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x38))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      local_40 = 0;
      local_38 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x38);
      local_58 = param_1;
      uStack_50 = param_2;
      local_48 = param_3;
      uVar2 = FUN_003b3a70(param_1,&local_58,&LAB_003b3b70);
      *param_4 = *(undefined8 *)(param_1 + 0x1920);
      return uVar2;
    }
    uVar2 = 0x114;
    uVar3 = 0x710;
  }
  else {
    uVar2 = 0x42;
    uVar3 = 0x70b;
  }
  FUN_004806c0(0x14,0x20b,uVar2,"external/openssl/ssl/ssl_lib.c",uVar3);
  return 0xffffffff;
}


