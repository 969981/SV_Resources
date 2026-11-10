/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d5f5c; name: FUN_033d5f5c
 */


undefined8 FUN_033d5f5c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x158);
  if (*(char *)(lVar2 + 0x98) == '\0') {
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x135) = 0;
    if (*(int *)(lVar2 + 0x80) - 2U < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (*(int *)(lVar2 + 0x80) == 1) {
        uVar3 = (ulong)*(byte *)(param_1 + 0x138);
      }
    }
    *(char *)(param_1 + 0x136) = (char)uVar3;
    if (*(int *)(lVar2 + 0x88) - 2U < 2) {
      uVar3 = (ulong)((int)uVar3 + 1);
    }
    else if (*(int *)(lVar2 + 0x88) == 1) {
      uVar3 = (ulong)((int)uVar3 + (uint)*(byte *)(param_1 + 0x138));
    }
    *(char *)(param_1 + 0x137) = (char)uVar3;
    if (*(int *)(lVar2 + 0x90) - 2U < 2) {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      *(char *)(param_1 + 0x134) = (char)uVar1;
    }
    else {
      if (*(int *)(lVar2 + 0x90) == 1) {
        uVar3 = (ulong)((int)uVar3 + (uint)*(byte *)(param_1 + 0x138));
      }
      *(char *)(param_1 + 0x134) = (char)uVar3;
      if ((int)uVar3 == 0) goto LAB_033d6078;
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                      (*(long **)(param_1 + 0x160),uVar3 * 0xa0,
                       "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkRoomVerb/AkRoomVerbFX.cpp"
                       ,0x164);
    *(long *)(param_1 + 0x148) = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    lVar4 = 0;
    while( true ) {
      uVar3 = uVar3 - 1;
      if (lVar2 != 0) {
        memset((void *)(lVar2 + lVar4),0,0xa0);
      }
      if (uVar3 == 0) break;
      lVar2 = *(long *)(param_1 + 0x148);
      lVar4 = lVar4 + 0xa0;
    }
  }
LAB_033d6078:
  FUN_033d6504(param_1);
  FUN_033d65e8(param_1);
  FUN_033d66cc(param_1);
  return 1;
}


