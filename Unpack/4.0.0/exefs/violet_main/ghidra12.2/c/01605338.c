/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01605338; name: FUN_01605338
 */


undefined8 FUN_01605338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_28;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  lVar1 = *(long *)(param_1 + 0x200);
  local_28 = param_2;
  if (lVar1 == 0) {
    FUN_016055d0(&local_60,param_2,&local_28);
    lVar1 = local_60;
    local_60 = 0;
    lVar3 = *(long *)(param_1 + 0x200);
    *(long *)(param_1 + 0x200) = lVar1;
    if (lVar3 == 0) {
      *(long **)(param_1 + 0x218) = local_48;
    }
    else {
      FUN_0299bdf8(param_1 + 0x208);
      *(long **)(param_1 + 0x218) = local_48;
      lVar1 = *(long *)(param_1 + 0x200);
    }
    *(undefined8 *)(param_1 + 0x210) = local_50;
    *(char **)(param_1 + 0x208) = local_58;
  }
  uVar2 = FUN_01607028(lVar1,param_4);
  if ((uVar2 & 1) != 0) {
    local_60 = 0x4326bef60cb284a4;
    local_58 = "English(US)";
    local_50 = 0xb;
    local_48 = (long *)0x0;
    FUN_0160559c(*(undefined8 *)(param_1 + 0x200),&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    FUN_0160558c(*(undefined8 *)(param_1 + 0x200),&LAB_0299bde0);
    *(undefined4 *)(param_1 + 0x1f8) = 0xf;
    if (*(long *)(param_1 + 0x220) == 0) {
      FUN_016056f0(&local_60,param_2,&local_28);
      lVar1 = local_60;
      local_60 = 0;
      lVar3 = *(long *)(param_1 + 0x220);
      *(long *)(param_1 + 0x220) = lVar1;
      if (lVar3 != 0) {
        FUN_0299c1b4(param_1 + 0x228);
      }
      *(undefined8 *)(param_1 + 0x230) = local_50;
      *(long **)(param_1 + 0x238) = local_48;
      *(char **)(param_1 + 0x228) = local_58;
    }
    if (*(long *)(param_1 + 0x240) == 0) {
      FUN_01605980(&local_60,param_2,&local_28);
      lVar1 = local_60;
      local_60 = 0;
      lVar3 = *(long *)(param_1 + 0x240);
      *(long *)(param_1 + 0x240) = lVar1;
      if (lVar3 != 0) {
        FUN_0299c578(param_1 + 0x248);
      }
      *(undefined8 *)(param_1 + 0x250) = local_50;
      *(long **)(param_1 + 600) = local_48;
      *(char **)(param_1 + 0x248) = local_58;
    }
    if (*(long *)(param_1 + 0x260) == 0) {
      FUN_01605c20(&local_60,param_2,&local_28);
      lVar1 = local_60;
      local_60 = 0;
      lVar3 = *(long *)(param_1 + 0x260);
      *(long *)(param_1 + 0x260) = lVar1;
      if (lVar3 != 0) {
        FUN_0299c93c(param_1 + 0x268);
      }
      *(undefined8 *)(param_1 + 0x270) = local_50;
      *(long **)(param_1 + 0x278) = local_48;
      *(char **)(param_1 + 0x268) = local_58;
    }
    uVar2 = FUN_01608a4c(param_1,param_3);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_01609880(param_1,param_2), (uVar2 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      return 1;
    }
  }
  return 0;
}


