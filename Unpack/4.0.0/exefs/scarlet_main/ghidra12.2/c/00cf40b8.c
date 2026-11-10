/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf40b8; name: FUN_00cf40b8
 */


undefined8
FUN_00cf40b8(undefined8 param_1,undefined2 *param_2,uint *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auStack_38 [4];
  undefined2 local_34;
  
  uVar2 = FUN_00cf44ec(param_4);
  uVar3 = FUN_00cf41a0(param_4);
  *param_2 = (short)uVar2;
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  uVar4 = FUN_00cf4bf4(param_4);
  if (((uVar4 & 1) != 0) && (bVar1 = FUN_00cf4838(uVar2,uVar3), bVar1 != 0)) {
    uVar5 = 0;
    do {
      FUN_00cf5114(auStack_38,param_4,uVar5);
      uVar4 = FUN_00cf55c0(param_4,param_5,param_6,auStack_38);
      if ((uVar4 & 1) != 0) {
        *param_2 = local_34;
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar5;
        }
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  return 0;
}


