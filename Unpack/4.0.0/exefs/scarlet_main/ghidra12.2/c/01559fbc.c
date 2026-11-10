/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01559fbc; name: FUN_01559fbc
 */


void FUN_01559fbc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_4;
  if ((param_5 & 1) == 0) {
    FUN_00ead0d0();
  }
  else {
    FUN_01447330(*(undefined8 *)(param_1 + 200),2,param_2,&local_20);
  }
  return;
}


