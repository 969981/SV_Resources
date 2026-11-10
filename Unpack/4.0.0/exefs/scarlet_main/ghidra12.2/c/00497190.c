/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00497190; name: FUN_00497190
 */


int FUN_00497190(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_50 [2];
  long local_48;
  
  lVar7 = FUN_00483b40();
  uVar1 = FUN_0048a3e0();
  uVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x110));
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar1 <= (int)(uVar2 ^ 0x7fffffff)) {
    uVar3 = FUN_0047e430(*param_2);
    uVar4 = FUN_0047e430(param_2[1]);
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar3 <= (int)(uVar4 ^ 0x7fffffff)) {
      uVar2 = uVar2 + uVar1;
      if (uVar2 != 0) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = 0x100000 / uVar2;
        }
        if (uVar1 < uVar4 + uVar3) {
          return 1;
        }
      }
      iVar5 = FUN_0048a3e0(lVar7);
      if (0 < iVar5) {
        local_50[0] = 4;
        local_48 = lVar7;
        iVar5 = FUN_00497320(local_50,param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = -1;
        local_50[0] = 1;
        while (iVar5 = FUN_0048a3f0(lVar7,0x30,iVar5), iVar5 != -1) {
          FUN_0048a390(lVar7,iVar5);
          local_48 = FUN_0048a380();
          if (*(int *)(local_48 + 4) != 0x16) {
            return 0x35;
          }
          iVar6 = FUN_00497320(local_50,param_2);
          if (iVar6 != 0) {
            return iVar6;
          }
        }
      }
      iVar5 = FUN_0047e430(*(undefined8 *)(param_1 + 0x110));
      if (iVar5 < 1) {
        return 0;
      }
      iVar5 = 0;
      do {
        uVar8 = FUN_0047e450(*(undefined8 *)(param_1 + 0x110),iVar5);
        iVar6 = FUN_00497320(uVar8,param_2);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_0047e430(*(undefined8 *)(param_1 + 0x110));
      } while (iVar5 < iVar6);
      return 0;
    }
  }
  return 1;
}


