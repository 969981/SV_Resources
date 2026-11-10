/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005685c0; name: FUN_005685c0
 */


void FUN_005685c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_18 [8];
  
  FUN_0056c9d0(auStack_18,param_2,param_3);
                    /* try { // try from 005685dc to 005685e7 has its CatchHandler @ 005685fc */
  FUN_00568468(param_1 + 0x10,auStack_18);
  FUN_0056b3f0(auStack_18);
  return;
}


