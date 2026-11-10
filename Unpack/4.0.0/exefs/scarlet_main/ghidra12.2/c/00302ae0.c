/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00302ae0; name: FUN_00302ae0
 */


undefined8 FUN_00302ae0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00302b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar5;
  }
  if (param_3 != (undefined8 *)0x0) {
    pcVar6 = (char *)FUN_0038c780(0x3d);
    uVar1 = s_crypter_or_crypter_>vtable_has_n_03c965da._53_8_;
    uVar5 = CONCAT53(s_crypter_or_crypter_>vtable_has_n_03c965da._48_5_,
                     s_crypter_or_crypter_>vtable_has_n_03c965da._45_3_);
    *param_3 = pcVar6;
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


