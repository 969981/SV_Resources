/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f0ad0; name: FUN_021f0ad0
 */


undefined8 FUN_021f0ad0(undefined2 *param_1,long param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar4 = FUN_00e974d8(param_2);
    uVar5 = FUN_00cf4c64(uVar4,0xf);
    if ((uVar5 & 1) != 0) {
      uVar2 = FUN_00cf44ec(param_2);
      uVar3 = FUN_00cf41a0(param_2);
      if (param_1 != (undefined2 *)0x0) {
        uVar1 = FUN_021ec244(uVar2,uVar3);
        *param_1 = uVar1;
      }
      uVar4 = FUN_021ec434(uVar2,uVar3);
      return uVar4;
    }
  }
  return 0;
}


