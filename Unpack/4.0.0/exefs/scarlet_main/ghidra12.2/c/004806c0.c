/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004806c0; name: FUN_004806c0
 */


void FUN_004806c0(int param_1,uint param_2,uint param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_004807b0();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x240);
    uVar1 = iVar2 + 0x10;
    if (-1 < iVar2 + 1) {
      uVar1 = iVar2 + 1;
    }
    iVar2 = (iVar2 + 1) - (uVar1 & 0xfffffff0);
    *(int *)(lVar3 + 0x240) = iVar2;
    if (iVar2 == *(int *)(lVar3 + 0x244)) {
      uVar1 = iVar2 + 0x10;
      if (-1 < iVar2 + 1) {
        uVar1 = iVar2 + 1;
      }
      *(uint *)(lVar3 + 0x244) = (iVar2 + 1) - (uVar1 & 0xfffffff0);
    }
    *(undefined4 *)(lVar3 + (long)iVar2 * 4) = 0;
    iVar2 = *(int *)(lVar3 + 0x240);
    lVar4 = lVar3 + (long)iVar2 * 8;
    *(ulong *)(lVar4 + 0x40) = (ulong)(param_1 << 0x18 | (param_2 & 0xfff) << 0xc | param_3 & 0xfff)
    ;
    *(undefined8 *)(lVar4 + 0x180) = param_4;
    *(undefined4 *)(lVar3 + (long)iVar2 * 4 + 0x200) = param_5;
    lVar4 = (long)*(int *)(lVar3 + 0x240);
    if ((*(uint *)(lVar3 + lVar4 * 4 + 0x140) & 1) != 0) {
      FUN_00452f80(*(undefined8 *)(lVar3 + 0xc0 + lVar4 * 8),"external/openssl/crypto/err/err.c",
                   0x1b5);
      lVar4 = (long)*(int *)(lVar3 + 0x240);
      *(undefined8 *)(lVar3 + 0xc0 + lVar4 * 8) = 0;
    }
    *(undefined4 *)(lVar3 + lVar4 * 4 + 0x140) = 0;
  }
  return;
}


