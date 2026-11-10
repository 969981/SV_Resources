/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186cbc8; name: FUN_0186cbc8
 */


void FUN_0186cbc8(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (7 < *(int *)(param_1 + 0x50)) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  switch(iVar1) {
  case 2:
  case 3:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x12;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar2 + 0x10))(0x3f4ccccd,plVar2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x13;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    lVar3 = *plVar2;
    uVar5 = 0x3f4ccccd;
    goto LAB_0186ce1c;
  case 4:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x12;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar2 + 0x10))(0x3f266666,plVar2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x13;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar2 + 0x10))(0x3f266666,plVar2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar5 = 4;
    goto LAB_0186ce38;
  case 5:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x12;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar2 + 0x10))(0x3a51b718,plVar2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x13;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    lVar3 = *plVar2;
    uVar5 = 0x3a51b718;
LAB_0186ce1c:
    pcVar4 = *(code **)(lVar3 + 0x10);
    break;
  case 6:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x12;
    local_38 = (long *)0x0;
    uVar5 = *(undefined4 *)(param_1 + 100);
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar2 + 0x10))(uVar5,plVar2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x13;
    local_38 = (long *)0x0;
    uVar5 = *(undefined4 *)(param_1 + 0x68);
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    pcVar4 = *(code **)(*plVar2 + 0x10);
    break;
  case 7:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x12;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar2 + 0x10))(0x3f000000,plVar2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x13;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    uVar5 = 0x3f000000;
    pcVar4 = *(code **)(*plVar2 + 0x10);
    break;
  default:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x12;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar2 + 0x10))(0x3f800000,plVar2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x13;
    local_38 = (long *)0x0;
    plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar2 + 0x10))(0x3f800000,plVar2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    return;
  }
  (*pcVar4)(uVar5,plVar2,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  uVar5 = 2;
LAB_0186ce38:
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  return;
}


