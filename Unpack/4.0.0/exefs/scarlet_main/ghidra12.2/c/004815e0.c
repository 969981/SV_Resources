/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004815e0; name: FUN_004815e0
 */


undefined8 FUN_004815e0(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar2 = FUN_004807b0();
  if ((lVar2 != 0) && (iVar4 = *(int *)(lVar2 + 0x240), *(int *)(lVar2 + 0x244) != iVar4)) {
    do {
      lVar3 = (long)iVar4;
      uVar1 = *(uint *)(lVar2 + (long)iVar4 * 4);
      if ((uVar1 & 1) != 0) {
        *(uint *)(lVar2 + lVar3 * 4) = uVar1 & 0xfffffffe;
        return 1;
      }
      if ((*(uint *)(lVar2 + lVar3 * 4 + 0x140) & 1) != 0) {
        FUN_00452f80(*(undefined8 *)(lVar2 + 0xc0 + lVar3 * 8),"external/openssl/crypto/err/err.c",
                     0x387);
        lVar3 = (long)*(int *)(lVar2 + 0x240);
        *(undefined8 *)(lVar2 + 0xc0 + lVar3 * 8) = 0;
      }
      *(undefined4 *)(lVar2 + lVar3 * 4 + 0x140) = 0;
      *(undefined4 *)(lVar2 + (long)*(int *)(lVar2 + 0x240) * 4) = 0;
      iVar4 = *(int *)(lVar2 + 0x240);
      lVar3 = lVar2 + (long)iVar4 * 8;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined8 *)(lVar3 + 0x180) = 0;
      *(undefined4 *)(lVar2 + (long)iVar4 * 4 + 0x200) = 0xffffffff;
      iVar4 = *(int *)(lVar2 + 0x240) + -1;
      if (*(int *)(lVar2 + 0x240) < 1) {
        iVar4 = 0xf;
      }
      *(int *)(lVar2 + 0x240) = iVar4;
    } while (*(int *)(lVar2 + 0x244) != iVar4);
  }
  return 0;
}


