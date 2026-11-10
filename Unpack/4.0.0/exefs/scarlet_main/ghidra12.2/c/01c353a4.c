/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c353a4; name: FUN_01c353a4
 */


void FUN_01c353a4(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char local_10d0 [2128];
  undefined1 auStack_880 [2128];
  
  FUN_01c368d0(local_10d0,param_3,*param_2,param_2[1]);
  if (local_10d0[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    memcpy(auStack_880,(void *)((ulong)local_10d0 | 2),0x84e);
    FUN_01b702c8(param_1 + 8,auStack_880);
  }
  return;
}


