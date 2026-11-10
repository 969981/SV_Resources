/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cbb0c; name: FUN_002cbb0c
 */


void FUN_002cbb0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  
  FUN_0038db40(param_1 + 0x48);
                    /* try { // try from 002cbb34 to 002cbb4b has its CatchHandler @ 002cbb74 */
  local_28 = param_2;
  lVar1 = FUN_002c6948(param_1 + 0x68,param_2,&DAT_03cc9967,&local_28,auStack_30);
  *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + 1;
                    /* try { // try from 002cbb58 to 002cbb5f has its CatchHandler @ 002cbb70 */
  FUN_0038db60(param_1 + 0x48);
  return;
}


