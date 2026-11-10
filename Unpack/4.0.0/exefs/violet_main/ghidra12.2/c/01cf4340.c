/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf4340; name: FUN_01cf4340
 */


undefined8 FUN_01cf4340(void)

{
  long lVar1;
  ulong uVar2;
  
  FUN_019b511c();
  lVar1 = DAT_0483a578;
  DAT_0483a570 = DAT_0483a578;
  if (((DAT_0483a578 != 0) && (uVar2 = FUN_01f6db1c(), (uVar2 & 1) != 0)) &&
     (*(int *)(lVar1 + 0x30) == 0)) {
    if (*(long *)(lVar1 + 0x50) == 0) {
      return 0;
    }
    uVar2 = FUN_01f6dab4();
    if (((uVar2 & 1) != 0) && (*(char *)(lVar1 + 0x35) != '\0')) {
      *(undefined4 *)(lVar1 + 0x30) = 6;
      return 1;
    }
  }
  return 0;
}


