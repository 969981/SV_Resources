/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03471aac; name: FUN_03471aac
 */


ulong FUN_03471aac(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1[0x1a];
  if (((lVar4 == 0) ||
      ((((*(int *)(lVar4 + 4) == 0 && (*(int *)(lVar4 + 0xc) == 0)) && (*(int *)(lVar4 + 0x14) == 0)
        ) && (*(int *)(lVar4 + 0x1c) == 0)))) &&
     (iVar3 = (**(code **)(*param_1 + 0x88))(param_1), iVar3 != 10)) {
    uVar1 = *(uint *)((long)param_1 + 0x11c);
    uVar2 = uVar1 >> 8 & 0xf;
    if (uVar2 < 4) {
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
      if (uVar2 == 3) {
        return 1;
      }
    }
    if ((((~uVar1 & 0xe00) != 0) && ((*(uint *)((long)param_1 + 0xda) & 0x780000) == 0)) &&
       ((param_1[0x14] != 0 &&
        (((*(byte *)((long)param_1 + 0xba) & 0xe) == 0 && (param_1[0x1f] == 0)))))) {
      if ((*(uint *)((long)param_1 + 0xda) >> 0x12 & 1) != 0) {
        return 1;
      }
      if (param_1[0x15] != 0) {
        return 1;
      }
      if ((ulong *)param_1[8] == (ulong *)0x0) {
        return 0;
      }
      uVar5 = *(ulong *)param_1[8];
      if ((uVar5 & 0x280000000020) == 0) {
        return uVar5 >> 0x2c & 1;
      }
    }
  }
  return 1;
}


