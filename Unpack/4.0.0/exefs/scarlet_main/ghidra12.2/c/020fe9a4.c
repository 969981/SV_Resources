/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fe9a4; name: FUN_020fe9a4
 */


void FUN_020fe9a4(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_34 [4];
  
  uVar3 = FUN_015af3fc(param_1,param_3,param_2);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_020fea98(param_1,param_3,auStack_34);
    if (((uint)uVar3 & 0xff) == 4) {
      uVar1 = FUN_011e21c0(uVar3,*(undefined8 *)(param_1 + 0x50),param_3,0xa5,param_1 + 0xb0);
      uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
      param_2[0] = 0;
      param_2[1] = 0;
      uVar1 = (uVar1 & 0xf) << 4 | 0xa501;
    }
    else {
      uVar3 = (**(code **)(*param_3 + 0x730))(param_3,uVar3 & 0xffffffff);
      uVar1 = FUN_011e21c0(uVar3,*(undefined8 *)(param_1 + 0x50),param_3,uVar3 & 0xffffffff,
                           param_1 + 0xb0);
      uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
      uVar1 = (uVar1 & 0xf) << 4 | ((uint)uVar3 & 0xffff) << 8 | 1;
      param_2[0] = 0;
      param_2[1] = 0;
    }
    param_2[2] = uVar2;
    *param_2 = uVar1;
  }
  return;
}


