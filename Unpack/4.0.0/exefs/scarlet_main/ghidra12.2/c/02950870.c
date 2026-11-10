/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02950870; name: FUN_02950870
 */


void FUN_02950870(long param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar2 = 0;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0xc);
  }
  if ((iVar2 == param_2) && (*(int *)(*(long *)(param_1 + 0x48) + 0x48) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 0;
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xd8);
    if (lVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(lVar1 + 0xc);
      if ((iVar2 != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x4c) == iVar2)) {
        return;
      }
    }
    local_4c = 1;
    local_28 = 0;
    local_40 = 0;
    local_46 = 0x8082;
    local_38 = 0;
    uStack_30 = 0;
    local_50 = param_3;
    local_48 = param_4;
    local_44 = param_2;
    FUN_01907920(param_1,&local_50);
    *(int *)(*(long *)(param_1 + 0x48) + 0x4c) = iVar2;
  }
  return;
}


