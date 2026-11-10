/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079bd80; name: FUN_0079bd80
 */


void FUN_0079bd80(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_88 [16];
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_64;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  
  uVar1 = FUN_0079fe28();
  if ((uVar1 & 1) == 0) {
    switch(*(undefined1 *)(param_2 + 2)) {
    case 0x11:
      (**(code **)(*param_1 + 0x370))(param_1,param_2,param_3);
      break;
    case 0x12:
      FUN_0079e4dc(param_1,param_2,param_3);
      break;
    case 0x13:
      FUN_0079e5b0(param_1,param_2);
      break;
    case 0x20:
      FUN_0079e90c(param_1,param_2,param_3);
      break;
    case 0x21:
      if (*(char *)((long)param_1 + 0x284) == '\0') {
        FUN_007a3e24(&local_78,*param_2,*(undefined4 *)((long)param_2 + 0xc),0x21,param_1);
        local_78 = PTR_DAT_047d0a50 + 0x10;
        uVar1 = FUN_007a4114(&local_78);
        if ((uVar1 & 1) != 0) {
          if ((((*(int *)((long)param_2 + 0xc) == local_60._4_4_ + (int)local_60) &&
               (local_64 == '!')) && (*(uint *)((long)param_1 + 100) < local_54)) &&
             (uVar1 = (**(code **)(*param_1 + 0x348))(param_1,&local_78), (uVar1 & 1) != 0)) {
            (**(code **)(*param_1 + 0x340))(auStack_88,param_1,&local_78);
          }
        }
      }
      break;
    case 0x30:
      FUN_0079f58c(param_1,param_2,param_3);
      break;
    case 0x31:
      FUN_0079f754(param_1,param_2,param_3);
      break;
    case 0x32:
      FUN_0079ec50(param_1,param_2,param_3);
      break;
    case 0x33:
      FUN_0079f0d4(param_1,param_2,param_3);
      break;
    case 0x40:
      FUN_0079e83c(param_1,param_2);
      break;
    case 0x41:
      FUN_0079f978(param_1,param_2);
      break;
    case 0x50:
      FUN_0079ea3c(param_1,param_2,param_3);
      break;
    case 0x51:
      FUN_0079eb7c(param_1,param_2,param_3);
      break;
    case 0x80:
      FUN_0079f878(param_1,param_2,param_3);
      break;
    case 0x81:
      local_68 = *(undefined4 *)((long)param_2 + 0xc);
      uStack_70 = *param_2;
      local_58 = 0;
      local_64 = -0x80;
      local_78 = PTR_DAT_047d0a48 + 0x10;
      local_60 = 4;
      FUN_007a3154(&local_78);
    }
    if (((param_1[0x230] != 0) &&
        (uVar1 = (**(code **)(*param_1 + 0x180))(param_1), (uVar1 & 1) != 0)) &&
       (*(short *)((long)param_1 + 0x114e) != 0)) {
      uVar1 = 0;
      do {
        uVar2 = FUN_007967e8(*(long *)(param_1[0x11] + uVar1 * 8) + 0x10,param_3);
        if ((uVar2 & 1) != 0) {
          if ((short)uVar1 < 0) {
            return;
          }
          uVar2 = FUN_00796784(*(long *)(param_1[0x11] + uVar1 * 8) + 0x10);
          if ((uVar2 & 1) == 0) {
            return;
          }
          local_78 = (undefined *)0x0;
          FUN_007935cc(&local_78);
          *(undefined **)(param_1[0x230] + uVar1 * 8) = local_78;
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ushort *)((long)param_1 + 0x114e));
    }
  }
  return;
}


