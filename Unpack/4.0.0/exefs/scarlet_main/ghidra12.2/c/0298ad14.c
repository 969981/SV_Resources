/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298ad14; name: FUN_0298ad14
 */


void FUN_0298ad14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = param_2;
  uStack_28 = param_4;
  local_20 = param_3;
  uStack_18 = param_5;
  uVar1 = FUN_0298afa0(*(undefined8 *)(param_1 + 0x78));
  FUN_0298afa8(uVar1,auStack_38,&local_30);
  return;
}


