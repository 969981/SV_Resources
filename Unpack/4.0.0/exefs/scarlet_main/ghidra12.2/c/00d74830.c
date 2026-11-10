/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d74830; name: FUN_00d74830
 */


ulong FUN_00d74830(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                  undefined8 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = FUN_00d74620();
  uVar4 = *param_5;
  if (*(float *)(*(long *)(*(long *)*param_6 + (*param_4 >> 0x1d & 0x7fffffff8)) + 0x90) <
      *(float *)(*(long *)(*(long *)*param_6 + (uVar4 >> 0x1d & 0x7fffffff8)) + 0x90)) {
    if ((*param_4 & 0xff) == 0) {
      if ((uVar4 & 0xff) != 0) {
        *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)((long)param_5 + 4);
        *(undefined1 *)param_4 = 1;
        *(undefined1 *)param_5 = 0;
      }
    }
    else if ((uVar4 & 0xff) == 0) {
      *(undefined4 *)((long)param_5 + 4) = *(undefined4 *)((long)param_4 + 4);
      *(undefined1 *)param_5 = 1;
      *(undefined1 *)param_4 = 0;
    }
    else {
      uVar1 = *(undefined4 *)((long)param_4 + 4);
      *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)((long)param_5 + 4);
      *(undefined4 *)((long)param_5 + 4) = uVar1;
    }
    uVar4 = *param_4;
    iVar2 = (int)uVar3;
    if (*(float *)(*(long *)(*(long *)*param_6 + (uVar4 >> 0x1d & 0x7fffffff8)) + 0x90) <=
        *(float *)(*(long *)(*(long *)*param_6 + (*param_3 >> 0x1d & 0x7fffffff8)) + 0x90)) {
      uVar3 = (ulong)(iVar2 + 1);
    }
    else {
      if ((*param_3 & 0xff) == 0) {
        if ((uVar4 & 0xff) != 0) {
          *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)((long)param_4 + 4);
          *(undefined1 *)param_3 = 1;
          *(undefined1 *)param_4 = 0;
        }
      }
      else if ((uVar4 & 0xff) == 0) {
        *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)((long)param_3 + 4);
        *(undefined1 *)param_4 = 1;
        *(undefined1 *)param_3 = 0;
      }
      else {
        uVar1 = *(undefined4 *)((long)param_3 + 4);
        *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)((long)param_4 + 4);
        *(undefined4 *)((long)param_4 + 4) = uVar1;
      }
      uVar3 = *param_3;
      if (*(float *)(*(long *)(*(long *)*param_6 + (uVar3 >> 0x1d & 0x7fffffff8)) + 0x90) <=
          *(float *)(*(long *)(*(long *)*param_6 + (*param_2 >> 0x1d & 0x7fffffff8)) + 0x90)) {
        uVar3 = (ulong)(iVar2 + 2);
      }
      else {
        if ((*param_2 & 0xff) == 0) {
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
        uVar3 = *param_2;
        if (*(float *)(*(long *)(*(long *)*param_6 + (uVar3 >> 0x1d & 0x7fffffff8)) + 0x90) <=
            *(float *)(*(long *)(*(long *)*param_6 + (*param_1 >> 0x1d & 0x7fffffff8)) + 0x90)) {
          uVar3 = (ulong)(iVar2 + 3);
        }
        else {
          if ((*param_1 & 0xff) == 0) {
            if ((uVar3 & 0xff) != 0) {
              *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
              *(undefined1 *)param_1 = 1;
              *(undefined1 *)param_2 = 0;
            }
          }
          else if ((uVar3 & 0xff) == 0) {
            *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_1 + 4);
            *(undefined1 *)param_2 = 1;
            *(undefined1 *)param_1 = 0;
          }
          else {
            uVar1 = *(undefined4 *)((long)param_1 + 4);
            *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
            *(undefined4 *)((long)param_2 + 4) = uVar1;
          }
          uVar3 = (ulong)(iVar2 + 4);
        }
      }
    }
  }
  return uVar3;
}


