/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169ed18; name: FUN_0169ed18
 */


void FUN_0169ed18(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0x700000000;
  *(undefined2 *)(param_1 + 0x34) = 0x506;
  *(undefined8 *)(param_1 + 0xa7) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x506050605060506;
  *(undefined8 *)(param_1 + 0x48) = 0x506050605060506;
  *(undefined4 *)(param_1 + 0x50) = 0x5060506;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb7) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 199) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe7) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x97) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  memset((void *)(param_1 + 0x110),0,0x166);
  *(undefined8 *)(param_1 + 0x278) = 0xffffffffffffffff;
  lVar2 = *(long *)(param_1 + 0x38);
  plVar1 = (long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x88) != 0) {
    FUN_017a8828(plVar1,*(undefined8 *)(lVar2 + 0x60));
    uVar6 = *(ulong *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x60) = 0;
    if (uVar6 != 0) {
      uVar3 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar4 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*plVar1 + lVar5 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(lVar2 + 0x88) = 0;
  }
  return;
}


