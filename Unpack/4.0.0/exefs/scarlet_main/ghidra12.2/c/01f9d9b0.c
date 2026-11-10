/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9d9b0; name: FUN_01f9d9b0
 */


void FUN_01f9d9b0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4,
                 long *param_5)

{
  undefined1 *local_10c8;
  undefined8 uStack_10c0;
  undefined1 local_10b8;
  undefined4 local_1038;
  undefined1 local_1030 [4096];
  
  if (*param_5 != 0) {
    local_1038 = 1;
    local_1030[0] = 0;
    local_10b8 = 0;
    uStack_10c0 = 0x8000100000000001;
    local_10c8 = local_1030;
    FUN_031c8aac(&local_10c8,param_4,param_5);
    param_4 = local_10c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032270d0(param_1,param_2,param_3,param_4);
}


