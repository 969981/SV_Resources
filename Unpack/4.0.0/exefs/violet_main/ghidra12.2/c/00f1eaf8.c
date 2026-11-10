/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1eaf8; name: FUN_00f1eaf8
 */


undefined8 FUN_00f1eaf8(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [24];
  long *local_48;
  undefined1 auStack_40 [24];
  long *local_28;
  
  if (((~*(uint *)(param_1 + 0xd0) & 0xf) == 0) &&
     ((((plVar1 = *(long **)(param_1 + 200), plVar1 == (long *)0x0 ||
        (uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1 + 0x88), (uVar2 & 1) != 0)) &&
       (*(char *)(param_1 + 0x82) != '\0')) && (*(int *)(param_1 + 0x2e8) == 3)))) {
    FUN_00f1ec1c(auStack_40);
    lVar4 = *param_2;
    if (((lVar4 == 0) || (*(char *)(lVar4 + 0x250) == '\0')) ||
       (uVar2 = (**(code **)(**(long **)(lVar4 + 8) + 0x78))(*(long **)(lVar4 + 8),auStack_40),
       (uVar2 & 1) == 0)) {
      FUN_00f1ed2c(auStack_60);
      lVar4 = *param_2;
      if ((lVar4 == 0) || (*(char *)(lVar4 + 0x250) == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(**(long **)(lVar4 + 8) + 0x78))(*(long **)(lVar4 + 8),auStack_60);
        uVar2 = uVar2 & 0xffffffff;
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
    else {
      uVar2 = 1;
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    uVar3 = 1;
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2f8) = 1;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


