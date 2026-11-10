/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dce80; name: FUN_003dce80
 */


undefined8 FUN_003dce80(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    uVar2 = FUN_0048ba10(param_1,param_2,param_3);
    return uVar2;
  }
  uVar4 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  if (0 < (int)param_3) {
    do {
      iVar1 = FUN_003dd250(param_1,&DAT_03bf391f,1);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar3 = (param_4 & 0xf0000) - 0x10000 >> 0x10;
  if (uVar3 < 4) {
                    /* WARNING: Jumptable with 0 entries at 0x003dcf58 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_003dcf5c + (ulong)(byte)(&DAT_03cdd2d7)[uVar3] * 4))();
    return uVar2;
  }
  return 0xffffffff;
}


