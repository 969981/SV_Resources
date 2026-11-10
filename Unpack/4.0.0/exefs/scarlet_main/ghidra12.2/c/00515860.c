/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00515860; name: FUN_00515860
 */


byte * FUN_00515860(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  
  while( true ) {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar4 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar4._0_8_;
      if ((auVar4._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar2 = *param_2;
    auVar5[8] = bVar2;
    auVar5._0_8_ = param_2 + 1;
    auVar5._9_3_ = 0;
    if ((char)bVar2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        auVar5 = FUN_0052e560(param_2);
        if (auVar5._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar5._8_4_ = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        auVar5._0_8_ = param_2 + 2;
      }
    }
    uVar3 = auVar5._8_4_;
    if ((uVar3 == 0) || ((uVar3 & 7) == 4)) break;
    param_2 = (byte *)FUN_00515980(uVar3,param_1,auVar5._0_8_,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  *(uint *)(param_3 + 10) = uVar3 - 1;
  return auVar5._0_8_;
}


