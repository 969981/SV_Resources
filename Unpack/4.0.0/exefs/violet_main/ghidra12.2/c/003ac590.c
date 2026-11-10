/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ac590; name: FUN_003ac590
 */


undefined8 FUN_003ac590(long param_1,int param_2,uint *param_3,ulong param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_28 [2];
  
  if (param_4 < 4) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0x20;
    if (param_2 != 0) {
      uVar3 = 0x40;
    }
    if ((*(uint *)(param_1 + 0x698) & uVar3) == 0) {
      uVar2 = FUN_00464f80(param_3,param_4 & 0xffffffff);
      iVar1 = (int)uVar2;
    }
    else {
      FUN_0049e4c0(local_28);
      uVar3 = (local_28[0] & 0xff00ff00) >> 8 | (local_28[0] & 0xff00ff) << 8;
      *param_3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar2 = FUN_00464f80(param_3 + 1,(int)param_4 + -4);
      iVar1 = (int)uVar2;
    }
    if (0 < iVar1) {
      if (param_4 < 9) {
        return 0;
      }
      if (param_5 == 2) {
        uVar4 = 0x4452474e574f44;
      }
      else {
        if (param_5 != 1) {
          return uVar2;
        }
        uVar4 = 0x14452474e574f44;
      }
      *(undefined8 *)((long)param_3 + (param_4 - 8)) = uVar4;
      return uVar2;
    }
  }
  return uVar2;
}


