/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e71b20; name: FUN_01e71b20
 */


void FUN_01e71b20(long param_1,undefined4 param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 local_34 [2];
  
  if ((param_4 & 1) == 0) {
    uVar8 = 0;
    do {
      local_34[0] = 0;
      FUN_01e71c20(param_2,local_34,uVar8 & 0xffffffff,param_3,8,0);
      *(undefined2 *)(param_1 + uVar8 * 2) = local_34[0];
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x100);
  }
  else {
    uVar8 = 0;
    do {
      local_34[0] = 0;
      FUN_01e71c20(param_2,local_34,uVar8,param_3,8,0);
      uVar3 = FUN_01e71cb0(local_34[0],param_2);
      uVar4 = 0x80;
      uVar7 = 1;
      uVar6 = 1;
      uVar5 = uVar8;
      do {
        uVar6 = uVar6 | uVar4;
        uVar1 = (uint)uVar5 & uVar6;
        bVar2 = uVar4 != (uVar1 & 0xffff);
        uVar4 = uVar4 >> 1;
        if (uVar7 != (uVar1 & 0xffff) && bVar2) {
          uVar6 = 0;
        }
        uVar5 = (ulong)(uVar6 ^ (uint)uVar5);
        uVar6 = uVar7 << 1;
        uVar7 = uVar6 & 0xfffe;
      } while (uVar7 < uVar4);
      *(undefined2 *)(param_1 + (uVar5 & 0xffff) * 2) = uVar3;
      uVar7 = (uint)uVar8;
      uVar8 = (ulong)(uVar7 + 1);
    } while ((uVar7 & 0xffff) < 0xff);
  }
  return;
}


