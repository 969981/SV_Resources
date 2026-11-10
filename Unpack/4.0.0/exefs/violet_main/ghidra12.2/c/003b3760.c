/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b3760; name: FUN_003b3760
 */


undefined8 FUN_003b3760(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_38 [5];
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_004806c0(0x14,0xb4,0x90,"external/openssl/ssl/ssl_lib.c",0xed9);
    uVar3 = 0xffffffff;
  }
  else {
    FUN_003c3a60(param_1,0xffffffff);
    (**(code **)(*(long *)(param_1 + 8) + 0x60))(param_1,0);
    iVar1 = FUN_003c38d0(param_1);
    if ((iVar1 == 0) && (iVar1 = FUN_003c3900(param_1), iVar1 == 0)) {
      uVar3 = 1;
    }
    else if (((*(byte *)(param_1 + 0x699) & 1) == 0) || (lVar2 = FUN_003e6430(), lVar2 != 0)) {
      uVar3 = (**(code **)(param_1 + 0x30))(param_1);
    }
    else {
      local_38[0] = param_1;
      uVar3 = FUN_003b3a70(param_1,local_38,&LAB_003b5360);
    }
    if (((int)uVar3 == 1) && (*(long *)(param_1 + 0x860) != 0)) {
      if (*(int *)(param_1 + 0x38) == 0) {
        if (*(int *)(param_1 + 0x84) == 2) {
          *(undefined4 *)(param_1 + 0x84) = 3;
          *(undefined4 *)(param_1 + 0x28) = 3;
          return 0;
        }
      }
      else if (*(int *)(param_1 + 0x84) == 9) {
        *(undefined4 *)(param_1 + 0x84) = 0xc;
        *(undefined4 *)(param_1 + 0x28) = 3;
        return 0;
      }
      return 1;
    }
  }
  return uVar3;
}


