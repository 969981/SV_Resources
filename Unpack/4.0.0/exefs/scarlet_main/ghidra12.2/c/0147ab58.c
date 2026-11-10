/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147ab58; name: FUN_0147ab58
 */


undefined8 FUN_0147ab58(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  *(undefined2 *)(param_1 + 0x212) = 0xff;
  *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) & 0xfb;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8);
  uVar1 = FUN_010f9128(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),
                       *(undefined1 *)(param_1 + 0x11c));
  FUN_0147accc(param_1,uVar1,param_1 + 0x348,param_1 + 0x360);
  *(undefined2 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined2 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined2 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x3db) = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar5 = 0;
    do {
      uVar2 = FUN_0147ac98(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30),
                           *(undefined1 *)(param_1 + 0x11c),uVar5);
      uVar3 = FUN_015af3fc(param_1,uVar2,0);
      if ((uVar3 & 1) == 0) {
        *(char *)(param_1 + 0x213) = (char)uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar1 & 0xff) != uVar5);
  }
  *(undefined1 **)(param_1 + 0x308) = &LAB_015aed60;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  return 0;
}


