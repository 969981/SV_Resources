/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c2af0; name: FUN_014c2af0
 */


void FUN_014c2af0(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  
  bVar2 = FUN_014c2bc0(param_3);
  if (bVar2 < 4) {
    uVar6 = (ulong)bVar2;
    lVar4 = param_1 + uVar6 * 0x28;
    *(undefined8 *)(lVar4 + 0x50) = *param_3;
    uVar1 = *(uint *)(lVar4 + 0x58);
    *(uint *)(lVar4 + 0x58) = param_2;
    uVar1 = uVar1 & 1;
    if (((param_2 & 1) != 0) && (uVar1 == 0)) {
      lVar4 = param_1 + uVar6 * 0x28;
      *(undefined8 *)(lVar4 + 0x68) = 0;
      *(undefined8 *)(lVar4 + 0x70) = 0;
      if (*(char *)(lVar4 + 0x60) == '\0') {
        *(char *)(lVar4 + 0x60) = '\x01';
      }
      nn::os::GetSystemTick();
      uVar3 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + uVar6 * 0x28 + 0x68) = uVar3;
    }
    if ((((param_2 & 1) == 0) && (uVar1 != 0)) &&
       (pcVar5 = (char *)(param_1 + uVar6 * 0x28 + 0x60), *pcVar5 != '\0')) {
      *pcVar5 = '\0';
    }
  }
  return;
}


