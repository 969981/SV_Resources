/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003029f0; name: FUN_003029f0
 */


undefined8 FUN_003029f0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *in_stack_00000018;
  
  if (((param_1 != (long *)0x0) && (param_1 = (long *)*param_1, param_1 != (long *)0x0)) &&
     (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00302a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)param_1[1])();
    return uVar5;
  }
  if (in_stack_00000018 != (undefined8 *)0x0) {
    pcVar6 = (char *)FUN_0038c780(0x3d);
    uVar1 = s_crypter_or_crypter_>vtable_has_n_03c965da._53_8_;
    uVar5 = CONCAT53(s_crypter_or_crypter_>vtable_has_n_03c965da._48_5_,
                     s_crypter_or_crypter_>vtable_has_n_03c965da._45_3_);
    *in_stack_00000018 = pcVar6;
    *(undefined8 *)(pcVar6 + 0x35) = uVar1;
    *(undefined8 *)(pcVar6 + 0x2d) = uVar5;
    uVar4 = s_crypter_or_crypter_>vtable_has_n_03c965da._32_8_;
    uVar3 = s_crypter_or_crypter_>vtable_has_n_03c965da._16_8_;
    uVar2 = s_crypter_or_crypter_>vtable_has_n_03c965da._8_8_;
    uVar1 = s_crypter_or_crypter_>vtable_has_n_03c965da._0_8_;
    uVar5 = CONCAT35(s_crypter_or_crypter_>vtable_has_n_03c965da._45_3_,
                     s_crypter_or_crypter_>vtable_has_n_03c965da._40_5_);
    *(undefined8 *)(pcVar6 + 0x18) = s_crypter_or_crypter_>vtable_has_n_03c965da._24_8_;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    *(undefined8 *)(pcVar6 + 0x28) = uVar5;
    *(undefined8 *)(pcVar6 + 0x20) = uVar4;
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar1;
  }
  return 3;
}


