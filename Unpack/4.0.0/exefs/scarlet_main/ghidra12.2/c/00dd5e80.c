/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd5e80; name: FUN_00dd5e80
 */


undefined8 FUN_00dd5e80(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *param_2;
  lVar5 = *(long *)*param_4;
  uVar4 = *param_1;
  fVar6 = *(float *)(*(long *)(lVar5 + (uVar2 >> 0x1d & 0x7fffffff8)) + 0x90);
  uVar3 = *param_3;
  fVar7 = *(float *)(*(long *)(lVar5 + (uVar3 >> 0x1d & 0x7fffffff8)) + 0x90);
  if (*(float *)(*(long *)(lVar5 + (uVar4 >> 0x1d & 0x7fffffff8)) + 0x90) < fVar6) {
    if (fVar6 < fVar7) {
      if ((uVar4 & 0xff) == 0) {
        if ((uVar3 & 0xff) == 0) {
          return 1;
        }
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_3 + 4);
        *(undefined1 *)param_1 = 1;
        *(undefined1 *)param_3 = 0;
        return 1;
      }
      if ((uVar3 & 0xff) == 0) {
        *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)((long)param_1 + 4);
        *(undefined1 *)param_3 = 1;
        *(undefined1 *)param_1 = 0;
        return 1;
      }
      uVar1 = *(undefined4 *)((long)param_1 + 4);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_3 + 4);
      *(undefined4 *)((long)param_3 + 4) = uVar1;
      return 1;
    }
    if ((uVar4 & 0xff) == 0) {
      if ((uVar2 & 0xff) != 0) {
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
        *(undefined1 *)param_1 = 1;
        *(undefined1 *)param_2 = 0;
      }
    }
    else if ((uVar2 & 0xff) == 0) {
      *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_1 + 4);
      *(undefined1 *)param_2 = 1;
      *(undefined1 *)param_1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)((long)param_1 + 4);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
      *(undefined4 *)((long)param_2 + 4) = uVar1;
    }
    uVar2 = *param_3;
    if (*(float *)(*(long *)(*(long *)*param_4 + (uVar2 >> 0x1d & 0x7fffffff8)) + 0x90) <=
        *(float *)(*(long *)(*(long *)*param_4 + (*param_2 >> 0x1d & 0x7fffffff8)) + 0x90)) {
      return 1;
    }
    if ((*param_2 & 0xff) == 0) {
      if ((uVar2 & 0xff) == 0) {
        return 2;
      }
      *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_3 + 4);
      *(undefined1 *)param_2 = 1;
      *(undefined1 *)param_3 = 0;
      return 2;
    }
    if ((uVar2 & 0xff) != 0) {
      uVar1 = *(undefined4 *)((long)param_2 + 4);
      *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_3 + 4);
      *(undefined4 *)((long)param_3 + 4) = uVar1;
      return 2;
    }
    *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)((long)param_2 + 4);
    *(undefined1 *)param_3 = 1;
  }
  else {
    if (fVar7 <= fVar6) {
      return 0;
    }
    if ((uVar2 & 0xff) == 0) {
      if ((uVar3 & 0xff) != 0) {
        *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_3 + 4);
        *(undefined1 *)param_2 = 1;
        *(undefined1 *)param_3 = 0;
      }
    }
    else if ((uVar3 & 0xff) == 0) {
      *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)((long)param_2 + 4);
      *(undefined1 *)param_3 = 1;
      *(undefined1 *)param_2 = 0;
    }
    else {
      uVar1 = *(undefined4 *)((long)param_2 + 4);
      *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_3 + 4);
      *(undefined4 *)((long)param_3 + 4) = uVar1;
    }
    uVar2 = *param_2;
    if (*(float *)(*(long *)(*(long *)*param_4 + (uVar2 >> 0x1d & 0x7fffffff8)) + 0x90) <=
        *(float *)(*(long *)(*(long *)*param_4 + (*param_1 >> 0x1d & 0x7fffffff8)) + 0x90)) {
      return 1;
    }
    if ((*param_1 & 0xff) != 0) {
      if ((uVar2 & 0xff) == 0) {
        *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_1 + 4);
        *(undefined1 *)param_2 = 1;
        *(undefined1 *)param_1 = 0;
        return 2;
      }
      uVar1 = *(undefined4 *)((long)param_1 + 4);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
      *(undefined4 *)((long)param_2 + 4) = uVar1;
      return 2;
    }
    if ((uVar2 & 0xff) == 0) {
      return 2;
    }
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
    *(undefined1 *)param_1 = 1;
  }
  *(undefined1 *)param_2 = 0;
  return 2;
}


