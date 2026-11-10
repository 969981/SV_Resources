/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd5c70; name: FUN_00dd5c70
 */


ulong FUN_00dd5c70(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = FUN_00dd5e80();
  uVar4 = *param_4;
  if (*(float *)(*(long *)(*(long *)*param_5 + (*param_3 >> 0x1d & 0x7fffffff8)) + 0x90) <
      *(float *)(*(long *)(*(long *)*param_5 + (uVar4 >> 0x1d & 0x7fffffff8)) + 0x90)) {
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
    uVar4 = *param_3;
    iVar2 = (int)uVar3;
    if (*(float *)(*(long *)(*(long *)*param_5 + (*param_2 >> 0x1d & 0x7fffffff8)) + 0x90) <
        *(float *)(*(long *)(*(long *)*param_5 + (uVar4 >> 0x1d & 0x7fffffff8)) + 0x90)) {
      if ((*param_2 & 0xff) == 0) {
        if ((uVar4 & 0xff) != 0) {
          *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_3 + 4);
          *(undefined1 *)param_2 = 1;
          *(undefined1 *)param_3 = 0;
        }
      }
      else if ((uVar4 & 0xff) == 0) {
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
      if (*(float *)(*(long *)(*(long *)*param_5 + (*param_1 >> 0x1d & 0x7fffffff8)) + 0x90) <
          *(float *)(*(long *)(*(long *)*param_5 + (uVar3 >> 0x1d & 0x7fffffff8)) + 0x90)) {
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
        uVar3 = (ulong)(iVar2 + 3);
      }
      else {
        uVar3 = (ulong)(iVar2 + 2);
      }
    }
    else {
      uVar3 = (ulong)(iVar2 + 1);
    }
  }
  return uVar3;
}


