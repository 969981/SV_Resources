/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a6700; name: FUN_008a6700
 */


void FUN_008a6700(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_48;
  undefined5 local_44;
  undefined3 uStack_3f;
  undefined5 uStack_3c;
  
  if ((*(byte *)(param_1 + 0x62) >> 5 & 1) == 0) {
    local_48 = 0x15;
    local_44 = 0xffffffffff;
    uStack_3f = 0xffffff;
    uStack_3c = 0xffffffffff;
    FUN_008a7990(param_1,0x15,&local_48,0x14,1);
  }
  FUN_008a7990(param_1,param_2,param_3,param_4,0);
  return;
}


