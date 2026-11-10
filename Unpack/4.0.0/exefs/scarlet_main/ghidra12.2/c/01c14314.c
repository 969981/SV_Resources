/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c14314; name: FUN_01c14314
 */


void FUN_01c14314(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char local_78 [8];
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  FUN_01c15124(local_78,param_3,*param_2,param_2[1]);
  if (local_78[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    memcpy(auStack_48,auStack_70,0x28);
    FUN_01c15198(param_1 + 8,auStack_48);
  }
  return;
}


