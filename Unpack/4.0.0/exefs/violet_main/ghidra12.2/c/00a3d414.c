/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3d414; name: FUN_00a3d414
 */


undefined8 FUN_00a3d414(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_100 [48];
  ulong local_d0;
  
  if (*(int *)(param_1 + 0x28) - 1U < 0x40) {
    lVar1 = *(long *)(param_1 + 0x38);
    switch(*(int *)(param_1 + 0x28)) {
    case 1:
      nn::oe::SetCpuBoostMode(1);
      DAT_0485a120 = 1;
      FUN_02b28e70(auStack_100,0);
      if (local_d0 >> 0x16 < 0xf) {
        *(undefined1 *)(param_1 + 0x20) = 1;
        nn::oe::SetCpuBoostMode(0);
        DAT_0485a120 = 0;
        return 0;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        pcVar3 = "system/data/style_transfer/painting_da_18.tensordat";
      }
      else {
        if (*(int *)(param_1 + 0x24) != 1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("false","_Exec",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/ui_utility/style_transfer/FastNeuralStyle.cpp"
                     ,0x121,"Error Unknown StyleType(%d)");
        }
        pcVar3 = "system/data/style_transfer/jewerly_da_18.tensordat";
      }
      FUN_00a4b0c8(*(undefined8 *)(param_1 + 0x38),pcVar3);
      nn::oe::SetCpuBoostMode(0);
      DAT_0485a120 = 0;
      break;
    case 2:
      uVar2 = FUN_00a4b294();
      return uVar2;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      switch(*(undefined4 *)(lVar1 + 0x80)) {
      case 0:
      case 1:
        FUN_00a3d5e0(param_1);
        break;
      case 2:
      case 3:
        FUN_00a3db90(param_1);
      }
      break;
    default:
      switch(*(undefined4 *)(lVar1 + 0x80)) {
      case 0:
        FUN_00a3e1dc(param_1);
        break;
      case 1:
      case 2:
      case 3:
        FUN_00a3f2e8(param_1);
      }
      break;
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
      switch(*(undefined4 *)(lVar1 + 0x80)) {
      case 0:
      case 1:
      case 3:
        FUN_00a405bc(param_1);
        break;
      case 2:
        FUN_00a40b40(param_1);
      }
    }
  }
  return 1;
}


