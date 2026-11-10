/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00395f20; name: FUN_00395f20
 */


void FUN_00395f20(char *param_1)

{
  undefined8 uVar1;
  undefined *local_20 [2];
  
  std::logic_error::logic_error((logic_error *)local_20,param_1);
  local_20[0] = PTR_vtable_047cd050 + 0x10;
                    /* try { // try from 00395f44 to 00395f4b has its CatchHandler @ 00395f4c */
  uVar1 = FUN_00395ee0(local_20);
                    /* catch() { ... } // from try @ 00395f44 with catch @ 00395f4c */
  std::out_of_range::~out_of_range((out_of_range *)local_20);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar1);
}


