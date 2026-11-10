/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02960a30; name: FUN_02960a30
 */


void FUN_02960a30(long param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x4c) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x4c) = 0;
    local_3c = 0;
    local_20 = 0;
    local_18 = 0;
    local_36 = 0x82;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = param_2;
    local_38 = param_3;
    local_34 = param_2;
    FUN_01907920(param_1,&local_40);
  }
  return;
}


