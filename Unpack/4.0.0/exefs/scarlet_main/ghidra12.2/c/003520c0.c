/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003520c0; name: FUN_003520c0
 */


undefined8 FUN_003520c0(ulong param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 < 5) {
    if (param_2 == 5) {
      *param_3 = PTR_DAT_047cc5d0;
      auVar4 = NEON_ext(*(undefined1 (*) [16])(&PTR_DAT_04496150 + param_1 * 3),
                        *(undefined1 (*) [16])(&PTR_DAT_04496150 + param_1 * 3),8,1);
      param_3[2] = auVar4._8_8_;
      param_3[1] = auVar4._0_8_;
      return 1;
    }
  }
  else {
    uVar3 = (ulong)*(byte *)(param_1 + param_2 + 0x20);
    if (uVar3 != 0xff) {
      lVar1 = param_1 + uVar3 * 8;
      uVar2 = *(undefined8 *)(lVar1 + 0x38);
      uVar6 = *(undefined8 *)(lVar1 + 0x50);
      uVar5 = *(undefined8 *)(lVar1 + 0x48);
      param_3[1] = *(undefined8 *)(lVar1 + 0x40);
      *param_3 = uVar2;
      param_3[3] = uVar6;
      param_3[2] = uVar5;
      return 1;
    }
  }
  return 0;
}


