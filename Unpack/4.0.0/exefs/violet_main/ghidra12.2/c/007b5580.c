/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b5580; name: FUN_007b5580
 */


undefined8 FUN_007b5580(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 auStack_50 [32];
  
  FUN_00796868(auStack_50,param_2);
  local_58 = 0;
  local_60 = 0x10;
  FUN_0078b2cc(auStack_50,&local_60);
  FUN_0284e3d4(auStack_50);
  plVar7 = *(long **)(*(long *)(param_1 + 0x188) + 0x120);
  (**(code **)(*plVar7 + 0x68))(plVar7,param_2);
  iVar8 = *(int *)(param_1 + 0x150);
  iVar6 = iVar8;
  if (iVar8 < 1) {
  }
  else {
    do {
      lVar5 = *(long *)(param_1 + 0x140);
      if (0 < iVar6) {
        iVar6 = 0;
        if (*(int *)(param_1 + 0x148) <= *(int *)(param_1 + 0x14c)) {
          iVar6 = *(int *)(param_1 + 0x148);
        }
        lVar5 = lVar5 + (long)(*(int *)(param_1 + 0x14c) - iVar6) * 0x20;
      }
      FUN_007965ac(auStack_50,lVar5);
      if (0 < *(int *)(param_1 + 0x150)) {
        iVar6 = 0;
        if (*(int *)(param_1 + 0x14c) + 1 < *(int *)(param_1 + 0x148)) {
          iVar6 = *(int *)(param_1 + 0x14c) + 1;
        }
        *(int *)(param_1 + 0x14c) = iVar6;
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
      }
      uVar3 = (**(code **)(*plVar7 + 0x68))(plVar7,auStack_50);
      if ((uVar3 & 1) != 0) {
        iVar6 = *(int *)(param_1 + 0x150);
        iVar2 = *(int *)(param_1 + 0x148);
        if (iVar6 < iVar2) {
          *(int *)(param_1 + 0x150) = iVar6 + 1;
          iVar6 = *(int *)(param_1 + 0x14c) + iVar6;
          iVar1 = 0;
          if (iVar2 <= iVar6) {
            iVar1 = iVar2;
          }
          FUN_00796828(*(long *)(param_1 + 0x140) + (long)(iVar6 - iVar1) * 0x20,auStack_50);
        }
      }
      iVar8 = iVar8 + -1;
      iVar6 = *(int *)(param_1 + 0x150);
    } while (iVar8 != 0);
  }
  iVar8 = *(int *)(param_1 + 0x148);
  if (iVar6 < iVar8) {
    *(int *)(param_1 + 0x150) = iVar6 + 1;
    iVar6 = *(int *)(param_1 + 0x14c) + iVar6;
    iVar2 = 0;
    if (iVar8 <= iVar6) {
      iVar2 = iVar8;
    }
    FUN_00796828(*(long *)(param_1 + 0x140) + (long)(iVar6 - iVar2) * 0x20,param_2);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


