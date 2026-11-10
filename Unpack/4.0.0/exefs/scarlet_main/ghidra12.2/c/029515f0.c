/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029515f0; name: FUN_029515f0
 */


void FUN_029515f0(long param_1,undefined4 param_2,undefined2 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x28);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar2 + 0xc);
  }
  uVar1 = FUN_0293d6f0(param_1,param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x48) != 0)) {
    FUN_01852230(param_1,param_2);
    local_5c = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_56 = 0x82;
    local_60 = param_2;
    local_58 = param_3;
    local_54 = uVar3;
    FUN_01907920(param_1,&local_60);
    FUN_01852150(param_1,param_2);
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 0;
  }
  return;
}


