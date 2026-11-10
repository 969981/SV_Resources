/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00302940; name: FUN_00302940
 */


undefined8 FUN_00302940(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  code *pcVar7;
  undefined8 *in_stack_00000010;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (pcVar7 = *(code **)(*param_1 + 8), pcVar7 != (code *)0x0)) {
    uVar5 = (*pcVar7)();
    return uVar5;
  }
  if (in_stack_00000010 == (undefined8 *)0x0) {
    return 3;
  }
  pcVar6 = (char *)FUN_0038c780(0x3d);
  uVar3 = s_crypter_or_crypter_>vtable_has_n_03c965da._53_8_;
  uVar5 = CONCAT53(s_crypter_or_crypter_>vtable_has_n_03c965da._48_5_,
                   s_crypter_or_crypter_>vtable_has_n_03c965da._45_3_);
  *in_stack_00000010 = pcVar6;
  uVar2 = s_crypter_or_crypter_>vtable_has_n_03c965da._8_8_;
  uVar1 = s_crypter_or_crypter_>vtable_has_n_03c965da._0_8_;
  *(undefined8 *)(pcVar6 + 0x35) = uVar3;
  *(undefined8 *)(pcVar6 + 0x2d) = uVar5;
  uVar4 = s_crypter_or_crypter_>vtable_has_n_03c965da._32_8_;
  uVar3 = s_crypter_or_crypter_>vtable_has_n_03c965da._16_8_;
  uVar5 = CONCAT35(s_crypter_or_crypter_>vtable_has_n_03c965da._45_3_,
                   s_crypter_or_crypter_>vtable_has_n_03c965da._40_5_);
  *(undefined8 *)(pcVar6 + 0x18) = s_crypter_or_crypter_>vtable_has_n_03c965da._24_8_;
  *(undefined8 *)(pcVar6 + 0x10) = uVar3;
  *(undefined8 *)(pcVar6 + 0x28) = uVar5;
  *(undefined8 *)(pcVar6 + 0x20) = uVar4;
  *(undefined8 *)(pcVar6 + 8) = uVar2;
  *(undefined8 *)pcVar6 = uVar1;
  return 3;
}


