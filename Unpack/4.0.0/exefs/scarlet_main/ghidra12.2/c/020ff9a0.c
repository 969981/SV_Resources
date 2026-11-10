/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ff9a0; name: FUN_020ff9a0
 */


void FUN_020ff9a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 local_48 [4];
  undefined1 auStack_44 [4];
  
  uVar2 = FUN_00f7e274(*(undefined8 *)(param_1 + 0x208));
  uVar3 = FUN_020ffb4c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                       *(undefined1 *)(param_1 + 0x11c));
  if (*(char *)(param_1 + 0x12f) == '\0') {
    bVar7 = 0;
  }
  else {
    uVar6 = 0;
    bVar7 = 0;
    do {
      FUN_01253868(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                   *(undefined1 *)(param_1 + uVar6 + 0x131),auStack_44,local_48);
      uVar5 = uVar3 & 0xff;
      if ((uVar3 & 0xff) < (uVar2 & 0xff)) {
        do {
          uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) + (ulong)(uVar5 & 0xff) * 8) +
                              0x200))();
          uVar1 = uVar5 + 1;
          if ((uVar4 & 1) == 0) {
            uVar4 = (ulong)bVar7;
            bVar7 = bVar7 + 1;
            FUN_015d8d70(param_1 + uVar4 * 0x10 + 0x220,local_48[0],uVar5);
            uVar3 = uVar1;
            break;
          }
          uVar5 = uVar1;
        } while ((uVar2 & 0xff) != uVar1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x12f));
  }
  *(byte *)(param_1 + 0x138) = bVar7;
  if (5 < bVar7) {
    bVar7 = 6;
  }
  if (bVar7 != 0) {
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x220);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x228);
    if (bVar7 != 1) {
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x230);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x238);
      if (bVar7 != 2) {
        *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x240);
        *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x248);
        if (bVar7 != 3) {
          *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x250);
          *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 600);
          if (bVar7 != 4) {
            *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x260);
            *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x268);
            if (bVar7 != 5) {
              *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x270);
              *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x278);
            }
          }
        }
      }
    }
  }
  FUN_0132746c(param_1,param_1 + 0x138,200);
  return;
}


