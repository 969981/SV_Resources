/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0161b4fc; name: FUN_0161b4fc
 */


undefined8 FUN_0161b4fc(long param_1,long *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar4 = (**(code **)(*param_2 + 0x708))(param_2);
  uVar2 = (uint)uVar4;
  if ((uVar4 & 0xff) != 0) {
    uVar6 = 0;
    uVar3 = 0;
    iVar7 = 0;
    do {
      uVar1 = (**(code **)(*param_2 + 0x730))(param_2,uVar3);
      uVar4 = FUN_0161b654(param_2,uVar1,*(undefined8 *)(param_1 + 0x48),
                           *(undefined8 *)(param_1 + 0x50));
      if (((int)uVar4 == 0) &&
         (uVar4 = (**(code **)(*param_2 + 0x690))(param_2,uVar3), (uVar4 & 0xffff) != 0)) {
        iVar7 = iVar7 + 1;
        uVar4 = (**(code **)(*param_2 + 0x730))(param_2,uVar3);
        uVar6 = uVar4 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar2 & 0xff) != uVar3);
    if (iVar7 != 0) {
      if (iVar7 != 1) {
        return 0;
      }
      if (((uint)uVar6 & 0xffff) != 0x2eb) {
        return 0;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = (**(code **)(*param_2 + 0x2a8))(param_2);
      uVar4 = FUN_019d69c4(uVar5,uVar1);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
    }
  }
  uVar2 = FUN_011e21c0(uVar4,*(undefined8 *)(param_1 + 0x50),param_2,0xa5,param_1 + 0xb0);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  param_3[2] = uVar3;
  param_3[0] = 0;
  param_3[1] = 0;
  *param_3 = (uVar2 & 0xf) << 4 | 0xa501;
  return 1;
}


