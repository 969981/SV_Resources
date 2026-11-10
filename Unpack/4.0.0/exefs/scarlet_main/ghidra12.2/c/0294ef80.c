/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294ef80; name: FUN_0294ef80
 */


undefined8 FUN_0294ef80(long param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_50;
  undefined1 local_4c;
  undefined4 local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
  }
  if ((iVar1 == param_2) &&
     (piVar3 = (int *)(*(long *)(param_1 + 0x48) + (ulong)(param_3 & 0xff) * 4 + 0x48), *piVar3 != 0
     )) {
    uVar4 = 1;
    *piVar3 = 0;
    if ((param_4 & 1) != 0) {
      local_48 = 0x80820045;
      local_28 = 0;
      local_40 = 0;
      local_4c = 1;
      local_38 = 0;
      uStack_30 = 0;
      local_50 = param_2;
      iStack_44 = param_2;
      FUN_01907920(param_1,&local_50);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


