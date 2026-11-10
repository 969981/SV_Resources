/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02967750; name: FUN_02967750
 */


void FUN_02967750(long param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_28 [8];
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  if (lVar4 == 0) {
    if (param_2 != 0) {
      return;
    }
  }
  else if (*(int *)(lVar4 + 0xc) != param_2) {
    return;
  }
  uVar2 = FUN_018f6550(param_1,param_2);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    uVar1 = (**(code **)(*plVar3 + 0x2a8))();
    lVar4 = FUN_029621d0(param_1,uVar1);
    uVar1 = 0;
    if (lVar4 < -0x5846dc675ac65d04) {
      if (lVar4 == -0x5f6e48b5278ed0bb) {
        local_28[0] = 2;
        uVar1 = 0xc;
      }
      else {
        local_28[0] = 0;
        if (lVar4 == -0x5edfab1e23939506) {
          local_28[0] = 1;
          uVar1 = 10;
        }
      }
    }
    else if (lVar4 == -0x5846dc675ac65d04) {
      local_28[0] = 3;
      uVar1 = 9;
    }
    else {
      local_28[0] = 0;
      if (lVar4 == -0x191c6f3ce7018a72) {
        local_28[0] = 4;
        uVar1 = 0xe;
      }
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xb8);
    if (((lVar4 != 0) && (*(byte *)(lVar4 + 10) < 2)) &&
       (*(undefined4 *)(lVar4 + 0xc) = uVar1, *(byte *)(lVar4 + 10) == 1)) {
      *(undefined1 *)(lVar4 + 10) = 2;
    }
    FUN_0149b630(param_1,local_28);
  }
  return;
}


