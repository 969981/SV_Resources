/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295bdb0; name: FUN_0295bdb0
 */


void FUN_0295bdb0(long param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,0x306);
  if (((((uVar4 & 1) != 0) && (uVar4 = (**(code **)(*plVar3 + 0x5b0))(plVar3), (uVar4 & 1) == 0)) &&
      (lVar5 = FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2), lVar5 != 0)) &&
     (sVar1 = *(short *)(lVar5 + 0x718), sVar2 = FUN_0295bfac(), sVar1 != sVar2)) {
    uVar4 = FUN_0295bf9c();
    local_54 = 0x34a;
    if ((uVar4 & 1) == 0) {
      local_54 = 0x34b;
    }
    local_56 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = (ulong)CONCAT24(sVar2,param_2);
    local_58 = 0x101;
    local_52 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_019079a0(param_1,&local_60);
  }
  return;
}


