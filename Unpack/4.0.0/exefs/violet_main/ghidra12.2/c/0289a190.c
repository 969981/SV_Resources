/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289a190; name: FUN_0289a190
 */


void FUN_0289a190(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  lVar2 = *param_2;
  if (lVar2 != *param_3) {
    do {
      local_60 = 0;
      uStack_58 = 0;
      FUN_00c43ef0(&local_60,lVar2);
      local_50 = *(undefined8 *)(lVar2 + 0x10);
      local_48 = *(undefined1 *)(lVar2 + 0x18);
      uVar1 = FUN_0289a74c(param_4,&local_60);
      FUN_019b7290(&local_60);
      if ((uVar1 & 1) != 0) {
        lVar2 = *param_2;
        break;
      }
      lVar2 = *param_2 + 0x20;
      *param_2 = lVar2;
    } while (lVar2 != *param_3);
  }
  *param_1 = lVar2;
  return;
}


