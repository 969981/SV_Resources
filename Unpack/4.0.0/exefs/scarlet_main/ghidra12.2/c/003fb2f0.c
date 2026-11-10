/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fb2f0; name: FUN_003fb2f0
 */


char * FUN_003fb2f0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar5 = FUN_003eb480();
  if (iVar5 != 0) {
    pcVar6 = (char *)FUN_0045abd0(&DAT_03c2bfae,"external/openssl/crypto/bn/bn_print.c",0x1b);
    return pcVar6;
  }
  pcVar6 = (char *)FUN_00452c30((long)(int)param_1[1] << 3 | 2,
                                "external/openssl/crypto/bn/bn_print.c",0x1c);
  if (pcVar6 == (char *)0x0) {
    FUN_004806c0(3,0x69,0x41,"external/openssl/crypto/bn/bn_print.c",0x1e);
    return (char *)0x0;
  }
  pcVar7 = pcVar6;
  if ((int)param_1[2] != 0) {
    pcVar7 = pcVar6 + 1;
    *pcVar6 = '-';
  }
  if (0 < (int)*(uint *)(param_1 + 1)) {
    bVar2 = false;
    uVar9 = (ulong)*(uint *)(param_1 + 1);
    do {
      uVar8 = uVar9 - 1;
      uVar3 = *(uint *)(*param_1 + uVar8 * 4);
      bVar2 = bVar2 || uVar3 >> 0x18 != 0;
      if (bVar2) {
        *pcVar7 = "0123456789ABCDEF"[uVar3 >> 0x1c];
        pcVar7[1] = "0123456789ABCDEF"[(ulong)(uVar3 >> 0x18) & 0xf];
        uVar3 = *(uint *)(*param_1 + uVar8 * 4);
        pcVar7 = pcVar7 + 2;
      }
      uVar4 = uVar3 >> 0x10 & 0xff;
      bVar2 = uVar4 != 0 || bVar2;
      if (bVar2) {
        *pcVar7 = "0123456789ABCDEF"[uVar4 >> 4];
        pcVar7[1] = "0123456789ABCDEF"[(ulong)(uVar3 >> 0x10) & 0xf];
        uVar3 = *(uint *)(*param_1 + uVar8 * 4);
        pcVar7 = pcVar7 + 2;
      }
      uVar10 = (ulong)uVar3;
      uVar4 = uVar3 >> 8 & 0xff;
      bVar2 = uVar4 != 0 || bVar2;
      if (bVar2) {
        *pcVar7 = "0123456789ABCDEF"[uVar4 >> 4];
        pcVar7[1] = "0123456789ABCDEF"[(ulong)(uVar3 >> 8) & 0xf];
        pcVar7 = pcVar7 + 2;
        uVar10 = (ulong)*(byte *)(*param_1 + uVar8 * 4);
      }
      bVar2 = (uVar10 & 0xff) != 0 || bVar2;
      if (bVar2) {
        *pcVar7 = "0123456789ABCDEF"[((uint)uVar10 & 0xff) >> 4];
        pcVar7[1] = "0123456789ABCDEF"[uVar10 & 0xf];
        pcVar7 = pcVar7 + 2;
      }
      bVar1 = 1 < (long)uVar9;
      uVar9 = uVar8;
    } while (bVar1);
  }
  *pcVar7 = '\0';
  return pcVar6;
}


