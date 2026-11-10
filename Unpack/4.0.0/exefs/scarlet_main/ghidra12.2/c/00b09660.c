/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b09660; name: FUN_00b09660
 */


void FUN_00b09660(long param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  
  if ((*(char *)(param_1 + 0xadf0) != '\0') &&
     ((uVar2 = nn::bluetooth::StopBleScanSmartDevice(), uVar2 == 0 ||
      (((uVar2 & 0x3ffe00) == 0x32400 && ((uVar2 & 0x1ff) == 0x71)))))) {
    *(char *)(param_1 + 0xadf0) = '\0';
  }
  *(undefined1 *)(param_1 + 0xadf1) = 0;
  *(undefined1 *)(param_1 + 0xae02) = 0;
  if (*(uint *)(param_1 + 0xadf4) != 0xffffffff) {
    nn::bluetooth::DisconnectFromGattServer(*(uint *)(param_1 + 0xadf4));
  }
  *(undefined1 *)(param_1 + 0xae01) = 0;
  if (*(long *)(param_1 + 0xb438) != 0) {
    pcVar1 = (char *)(*(long *)(param_1 + 0xb438) + 0xadf0);
    if ((*pcVar1 != '\0') &&
       ((uVar2 = nn::bluetooth::StopBleScanSmartDevice(), uVar2 == 0 ||
        (((uVar2 & 0x3ffe00) == 0x32400 && ((uVar2 & 0x1ff) == 0x71)))))) {
      *pcVar1 = '\0';
    }
    lVar3 = *(long *)(param_1 + 0xb438);
    *(undefined1 *)(lVar3 + 0xadf1) = 0;
    *(undefined1 *)(lVar3 + 0xae02) = 0;
    if (*(uint *)(lVar3 + 0xadf4) != 0xffffffff) {
      nn::bluetooth::DisconnectFromGattServer(*(uint *)(lVar3 + 0xadf4));
      return;
    }
  }
  return;
}


