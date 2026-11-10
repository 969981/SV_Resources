/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e61e64; name: FUN_01e61e64
 */


bool FUN_01e61e64(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long local_8;
  
  iVar1 = (int)param_1[8];
  if (iVar1 == 4) {
    if (param_1[0xb] == 0) {
LAB_01e61f4c:
      local_8 = 0;
    }
    else {
      FUN_01c27dd8(&local_8);
      if (local_8 != 0) {
        *(undefined1 *)(local_8 + 0xf2) = 0;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
      if ((uVar3 & 1) == 0) {
        uVar4 = 4;
      }
      else {
        (**(code **)(*param_1 + 0x80))(param_1);
        uVar4 = 2;
      }
      *(undefined4 *)(param_1 + 8) = uVar4;
      goto LAB_01e61f58;
    }
    if (iVar1 != 0) goto LAB_01e61f58;
    nn::os::GetSystemTick();
    lVar2 = nn::os::ConvertToTimeSpan();
    param_1[10] = lVar2 - param_1[9];
    if ((double)(lVar2 - param_1[9]) / 1000000000.0 < 1.0) goto LAB_01e61f58;
    if (param_1[0xb] == 0) goto LAB_01e61f4c;
    FUN_01c27dd8(&local_8);
    if (local_8 != 0) {
      uVar3 = FUN_01e6250c();
      if (((uVar3 & 1) == 0) &&
         (lVar2 = param_1[0x15], *(int *)(param_1 + 0x15) = (int)lVar2 + 1, 999 < (int)lVar2)) {
        *(undefined4 *)(param_1 + 8) = 4;
      }
      else {
        nn::os::GetSystemTick();
        lVar2 = nn::os::ConvertToTimeSpan();
        param_1[9] = lVar2;
      }
    }
  }
  FUN_01c1abf8(&local_8);
LAB_01e61f58:
  return (int)param_1[8] == 3;
}


