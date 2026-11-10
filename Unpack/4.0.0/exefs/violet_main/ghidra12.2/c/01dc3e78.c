/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc3e78; name: FUN_01dc3e78
 */


void FUN_01dc3e78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)param_2;
  if (iVar1 == 0) {
    if ((param_3 & 1) != 0) {
      iVar1 = 0;
      do {
        FUN_01888ab8(param_1,0,iVar1,0);
        FUN_014e5cb0(param_1,0,iVar1,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x1e);
      return;
    }
    FUN_01888ab8(param_1,0,0,0);
    FUN_01888ab8(param_1,0,1,0);
    FUN_01888ab8(param_1,0,2,0);
    FUN_01888ab8(param_1,0,3,0);
    FUN_01888ab8(param_1,0,4,0);
    FUN_01888ab8(param_1,0,5,0);
    FUN_01888ab8(param_1,0,6,0);
    FUN_01888ab8(param_1,0,7,0);
    FUN_01888ab8(param_1,0,8,0);
    FUN_01888ab8(param_1,0,9,0);
    FUN_01888ab8(param_1,0,10,0);
    FUN_01888ab8(param_1,0,0xb,0);
    FUN_01888ab8(param_1,0,0xc,0);
    FUN_01888ab8(param_1,0,0xd,0);
    FUN_01888ab8(param_1,0,0xe,0);
    FUN_01888ab8(param_1,0,0xf,0);
    FUN_01888ab8(param_1,0,0x10,0);
    FUN_01888ab8(param_1,0,0x11,0);
    FUN_01888ab8(param_1,0,0x12,0);
    FUN_01888ab8(param_1,0,0x13,0);
    FUN_01888ab8(param_1,0,0x14,0);
    FUN_01888ab8(param_1,0,0x15,0);
    FUN_01888ab8(param_1,0,0x16,0);
    FUN_01888ab8(param_1,0,0x17,0);
    FUN_01888ab8(param_1,0,0x18,0);
    FUN_01888ab8(param_1,0,0x19,0);
    FUN_01888ab8(param_1,0,0x1a,0);
    FUN_01888ab8(param_1,0,0x1b,0);
    FUN_01888ab8(param_1,0,0x1c,0);
    uVar3 = 0x1d;
    uVar2 = 0;
LAB_01dc43d0:
    FUN_01888ab8(param_1,uVar2,uVar3,0);
    return;
  }
  if (iVar1 == 1) {
    FUN_01888ab8(param_1,param_2,0,0);
    if ((param_3 & 1) == 0) {
      FUN_01888ab8(param_1,1,1,0);
      FUN_01888ab8(param_1,1,2,0);
      FUN_01888ab8(param_1,1,3,0);
      FUN_01888ab8(param_1,1,4,0);
      uVar3 = 5;
      uVar2 = 1;
      goto LAB_01dc43d0;
    }
    FUN_014e5cb0(param_1,1,0,0);
    FUN_01888ab8(param_1,1,1,0);
    FUN_014e5cb0(param_1,1,1,0);
    FUN_01888ab8(param_1,1,2,0);
    FUN_014e5cb0(param_1,1,2,0);
    FUN_01888ab8(param_1,1,3,0);
    FUN_014e5cb0(param_1,1,3,0);
    FUN_01888ab8(param_1,1,4,0);
    FUN_014e5cb0(param_1,1,4,0);
    FUN_01888ab8(param_1,1,5,0);
    uVar2 = 1;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    FUN_01888ab8(param_1,param_2,0,0);
    if ((param_3 & 1) == 0) {
      FUN_01888ab8(param_1,2,1,0);
      FUN_01888ab8(param_1,2,2,0);
      FUN_01888ab8(param_1,2,3,0);
      FUN_01888ab8(param_1,2,4,0);
      uVar3 = 5;
      uVar2 = 2;
      goto LAB_01dc43d0;
    }
    FUN_014e5cb0(param_1,2,0,0);
    FUN_01888ab8(param_1,2,1,0);
    FUN_014e5cb0(param_1,2,1,0);
    FUN_01888ab8(param_1,2,2,0);
    FUN_014e5cb0(param_1,2,2,0);
    FUN_01888ab8(param_1,2,3,0);
    FUN_014e5cb0(param_1,2,3,0);
    FUN_01888ab8(param_1,2,4,0);
    FUN_014e5cb0(param_1,2,4,0);
    FUN_01888ab8(param_1,2,5,0);
    uVar2 = 2;
  }
  FUN_014e5cb0(param_1,uVar2,5,0);
  return;
}


