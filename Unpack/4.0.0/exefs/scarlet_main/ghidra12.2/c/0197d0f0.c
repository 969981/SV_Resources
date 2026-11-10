/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197d0f0; name: FUN_0197d0f0
 */


void FUN_0197d0f0(long param_1,undefined4 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar2 = (**(code **)(*plVar1 + 0x3b8))();
  if ((uVar2 & 1) != 0) {
    local_24 = 0;
    local_2c = 0;
    local_34 = 0;
    local_3c = 0;
    local_44 = 0;
    local_48 = param_2;
    FUN_0197d160(param_1,&local_48);
  }
  return;
}


