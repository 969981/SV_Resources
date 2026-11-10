/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cb350; name: FUN_003cb350
 */


undefined8 FUN_003cb350(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_2 + 8);
  if (uVar8 < (ulong)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18))) {
LAB_003cb388:
    uVar5 = 0x1ae;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x6a8);
    if (uVar6 < 0x454d) {
      uVar6 = 0x454c;
    }
    if (uVar6 < uVar8) goto LAB_003cb388;
    if (*(long *)(*(long *)(param_1 + 0xb0) + 0x1a8) == 0) {
      lVar2 = FUN_003f3310(*(undefined8 *)(param_1 + 0x88),uVar8 + 0xc);
      if (lVar2 != 0) {
        lVar2 = *(long *)(param_1 + 0xa8);
        *(ulong *)(lVar2 + 0x228) = uVar8;
        lVar7 = *(long *)(param_1 + 0xb0);
        *(ulong *)(lVar7 + 0x198) = uVar8;
        bVar1 = *param_2;
        *(uint *)(lVar2 + 0x230) = (uint)bVar1;
        *(byte *)(lVar7 + 400) = bVar1;
        *(undefined2 *)(lVar7 + 0x1a0) = *(undefined2 *)(param_2 + 0x10);
        return 1;
      }
      uVar3 = 0x50;
      uVar5 = 0x1b9;
      uVar4 = 7;
      goto LAB_003cb3a4;
    }
    if (uVar8 == *(ulong *)(*(long *)(param_1 + 0xb0) + 0x198)) {
      return 1;
    }
    uVar5 = 0x1c8;
  }
  uVar4 = 0x98;
  uVar3 = 0x2f;
LAB_003cb3a4:
  FUN_003c3950(param_1,uVar3,0x120,uVar4,"external/openssl/ssl/statem/statem_dtls.c",uVar5);
  return 0;
}


