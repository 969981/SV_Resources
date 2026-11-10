/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943170; name: FUN_02943170
 */


void FUN_02943170(long param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int local_60;
  undefined1 local_5c;
  undefined1 auStack_58 [40];
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  if (iVar4 == param_2) {
    plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    uVar3 = (**(code **)(*plVar2 + 0x308))();
    if ((uVar3 & 1) == 0) {
      local_60 = 0;
      local_5c = 0;
      FUN_01246154(auStack_58);
      local_60 = param_2;
      FUN_02943244(auStack_58,2,0xf7);
      FUN_0294325c(auStack_58,param_2);
      lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x98);
      if (lVar5 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(lVar5 + 0xc);
      }
      FUN_0294325c(auStack_58,uVar1);
      FUN_01907920(param_1,&local_60);
    }
  }
  return;
}


