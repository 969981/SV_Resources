/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd5744; name: FUN_01dd5744
 */


void FUN_01dd5744(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_01f675b4();
  }
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar1 - 3U < 2) {
    if (*(char *)(param_1 + 200) != '\0') {
      nn::os::GetSystemTick();
      lVar3 = nn::os::ConvertToTimeSpan();
      lVar3 = lVar3 - *(long *)(param_1 + 0xd0);
      *(long *)(param_1 + 0xd8) = lVar3;
      if ((((1.5 <= (double)lVar3 / 1000000000.0) && ((*(uint *)(param_1 + 0xc4) & 0xfffffffe) == 4)
           ) && (uVar2 = FUN_01f6777c(param_1), (uVar2 & 1) != 0)) &&
         (*(undefined4 *)(param_1 + 0xc0) = 5, *(char *)(param_1 + 200) != '\0')) {
        *(undefined1 *)(param_1 + 200) = 0;
      }
    }
  }
  else if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined8 *)(param_1 + 0xc0) = 0x200000002;
    }
  }
  else if (((iVar1 == 0) && (*(long *)(param_1 + 0x98) != 0)) &&
          ((*(short *)(*(long *)(param_1 + 0x98) + 0x1a) != 0 &&
           (uVar2 = FUN_01f675f4(param_1), (uVar2 & 1) != 0)))) {
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  return;
}


