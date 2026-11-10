/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294c470; name: FUN_0294c470
 */


undefined8 FUN_0294c470(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if ((*(int *)(lVar2 + 0x48) == 0) || (*(int *)(lVar2 + 0x4c) == 0)) {
    uVar1 = 0;
  }
  else {
    local_48 = 0x808201c4;
    local_4c = 0;
    local_30 = 0;
    local_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = param_2;
    uStack_44 = param_2;
    FUN_01907920(param_1,&local_50);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar1 = 1;
  }
  *(undefined4 *)(lVar2 + 0x48) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x4c) = 0;
  return uVar1;
}


