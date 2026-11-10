/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294b9f0; name: FUN_0294b9f0
 */


void FUN_0294b9f0(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int local_50;
  undefined1 local_4c;
  undefined4 local_48;
  int iStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x28);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  if ((iVar2 == param_2) && (uVar1 = FUN_01a33a20(param_1,param_2), (uVar1 & 1) != 0)) {
    local_40 = FUN_0107bb74(*(undefined8 *)(param_1 + 0x48));
    local_40 = local_40 & 0xffff;
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x98);
    uStack_3c = 0;
    if (lVar3 != 0) {
      uStack_3c = *(undefined4 *)(lVar3 + 0xc);
    }
    local_4c = 0;
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0x1820179;
    local_50 = param_2;
    iStack_44 = param_2;
    FUN_01907920(param_1,&local_50);
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x3b0);
    if (((lVar3 != 0) && (*(byte *)(lVar3 + 10) < 2)) &&
       (*(undefined4 *)(lVar3 + 0xc) = 1, *(byte *)(lVar3 + 10) == 1)) {
      *(undefined1 *)(lVar3 + 10) = 2;
    }
  }
  return;
}


