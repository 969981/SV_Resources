/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec52c0; name: FUN_01ec52c0
 */


void FUN_01ec52c0(long param_1,undefined8 param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  undefined1 local_64 [4];
  long local_60 [4];
  undefined1 local_3c [4];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  local_3c[0] = param_4;
  FUN_016947d8(local_60);
  local_64[0] = 2;
  if (((local_60[0] == 0) || (FUN_01ec29b4(auStack_38,local_64,local_60[0] + 8), local_60[0] == 0))
     || (FUN_01ec2a28(auStack_38,param_2,local_60[0] + 8), lVar2 = local_60[0], local_60[0] == 0))
  goto LAB_01ec53a4;
  uVar6 = 0xffffff80;
  if (0xff < (param_3 & 0xffff)) {
    uVar6 = 0xffffff81;
  }
  uVar1 = param_3;
  if (0x7f < (param_3 & 0xffff)) {
    uVar1 = uVar6;
  }
  lVar3 = FUN_0111b030(uVar1);
  if ((ulong)(*(long *)(lVar2 + 0x18) + lVar3) <= *(ulong *)(lVar2 + 0x10)) {
    *(char *)(*(long *)(lVar2 + 8) + *(long *)(lVar2 + 0x18)) = (char)uVar1;
    lVar3 = *(long *)(lVar2 + 0x18) + 1;
    *(long *)(lVar2 + 0x18) = lVar3;
    if ((uVar1 & 0xff) == 0x81) {
      *(short *)(*(long *)(lVar2 + 8) + lVar3) = (short)param_3;
      lVar3 = *(long *)(lVar2 + 0x18) + 2;
    }
    else {
      if ((uVar1 & 0xff) != 0x80) goto LAB_01ec538c;
      *(char *)(*(long *)(lVar2 + 8) + lVar3) = (char)param_3;
      lVar3 = *(long *)(lVar2 + 0x18) + 1;
    }
    *(long *)(lVar2 + 0x18) = lVar3;
  }
LAB_01ec538c:
  if (local_60[0] != 0) {
    FUN_01ec541c(auStack_38,local_3c,local_60[0] + 8);
  }
LAB_01ec53a4:
  plVar7 = *(long **)(param_1 + 0x40);
  uVar4 = FUN_014c27b0(local_60);
  uVar5 = FUN_014c27c8(local_60);
  (**(code **)(*plVar7 + 0x70))(plVar7,uVar4,uVar5);
  FUN_01694aa8(local_60);
  return;
}


