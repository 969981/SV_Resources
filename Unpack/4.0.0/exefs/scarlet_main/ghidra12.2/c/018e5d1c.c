/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e5d1c; name: FUN_018e5d1c
 */


void FUN_018e5d1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_0142f6e8();
  *param_1 = &DAT_045925a8;
  param_1[0xc] = 0;
  param_1[4] = &PTR_LAB_04592628;
  param_1[5] = &PTR_LAB_04592678;
  plVar2 = param_1 + 0xb;
  *plVar2 = 0;
  FUN_018e61dc(plVar2,param_3);
  if ((*plVar2 == 0) || (lVar1 = *(long *)(*plVar2 + 0x10), lVar1 == 0)) {
    return;
  }
  FUN_018e5da0(lVar1 + -0x28,param_2);
  return;
}


