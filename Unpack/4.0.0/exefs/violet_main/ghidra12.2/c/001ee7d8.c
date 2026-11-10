/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ee7d8; name: FUN_001ee7d8
 */


undefined8 FUN_001ee7d8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  lVar1 = FUN_001edb18(param_1,*(undefined4 *)(param_2 + 8));
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    if (lVar1 == 0) {
      return 0xfffffe02;
    }
    if (*(long *)(lVar1 + 0xa8) == 0) {
      uVar2 = FUN_001f97dc(lVar1,param_2);
      return uVar2;
    }
    return 0xfffffdef;
  case 1:
    if ((*(int *)(param_2 + 0x38) == 0) || ((lVar1 != 0 && (*(int *)(lVar1 + 0xdc) == 4)))) {
      param_1 = param_1 + 0x138;
      goto LAB_001ee8d4;
    }
    break;
  case 3:
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0xdc) = 3;
    }
    break;
  case 4:
  case 6:
    param_1 = param_1 + 0x108;
    goto LAB_001ee8d4;
  case 5:
    if (lVar1 == 0) {
      return 0xfffffe02;
    }
    FUN_001eda0c(auStack_30,*(undefined4 *)(lVar1 + 0xb8),0x10,0);
    lVar1 = FUN_001ee4f4(param_1,*(undefined4 *)(param_2 + 0x28),0,auStack_30,4,
                         *(undefined8 *)(param_2 + 0x70));
    if (lVar1 == 0) {
      return 0xfffffc7b;
    }
    break;
  case 8:
    if (lVar1 == 0) {
      if (*(int *)(param_2 + 8) == 0) {
        *(undefined1 *)(param_1 + 0x9ac) = 1;
      }
    }
    else {
      *(undefined1 *)(lVar1 + 0xe7) = 1;
    }
  }
  param_1 = param_1 + 0x120;
LAB_001ee8d4:
  FUN_001f91dc(param_1,param_2);
  *(undefined1 *)(param_2 + 0x90) = 1;
  return 0;
}


