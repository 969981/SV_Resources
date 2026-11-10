/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00301190; name: FUN_00301190
 */


undefined8 FUN_00301190(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *in_x5;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003011b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)();
    return uVar5;
  }
  if (in_x5 != (undefined8 *)0x0) {
    pcVar6 = (char *)FUN_0038c780(0x3e);
    uVar1 = s_crypter_or_crypter_>vtable_has_n_03c7b90f._54_8_;
    uVar5 = CONCAT62(s_crypter_or_crypter_>vtable_has_n_03c7b90f._48_6_,
                     s_crypter_or_crypter_>vtable_has_n_03c7b90f._46_2_);
    *in_x5 = pcVar6;
    *(undefined8 *)(pcVar6 + 0x36) = uVar1;
    *(undefined8 *)(pcVar6 + 0x2e) = uVar5;
    uVar4 = s_crypter_or_crypter_>vtable_has_n_03c7b90f._32_8_;
    uVar3 = s_crypter_or_crypter_>vtable_has_n_03c7b90f._16_8_;
    uVar2 = s_crypter_or_crypter_>vtable_has_n_03c7b90f._8_8_;
    uVar1 = s_crypter_or_crypter_>vtable_has_n_03c7b90f._0_8_;
    uVar5 = CONCAT26(s_crypter_or_crypter_>vtable_has_n_03c7b90f._46_2_,
                     s_crypter_or_crypter_>vtable_has_n_03c7b90f._40_6_);
    *(undefined8 *)(pcVar6 + 0x18) = s_crypter_or_crypter_>vtable_has_n_03c7b90f._24_8_;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    *(undefined8 *)(pcVar6 + 0x28) = uVar5;
    *(undefined8 *)(pcVar6 + 0x20) = uVar4;
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar1;
  }
  return 3;
}


