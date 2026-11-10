/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298ce90; name: FUN_0298ce90
 */


void FUN_0298ce90(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined1 param_9,undefined1 param_10)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  (**(code **)(*plVar1 + 0x380))(plVar1,1,param_3);
  (**(code **)(*plVar1 + 0x380))(plVar1,2,param_4);
  (**(code **)(*plVar1 + 0x380))(plVar1,3,param_5);
  (**(code **)(*plVar1 + 0x380))(plVar1,4,param_6);
  (**(code **)(*plVar1 + 0x380))(plVar1,5,param_7);
  (**(code **)(*plVar1 + 0x380))(plVar1,6,param_8);
  (**(code **)(*plVar1 + 0x380))(plVar1,7,param_9);
                    /* WARNING: Could not recover jumptable at 0x0298cfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x628))(plVar1,param_10);
  return;
}


