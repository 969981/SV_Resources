/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c91be0; name: FUN_01c91be0
 */


void FUN_01c91be0(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0xc40) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0xc40) + 8), lVar2 != 0)) {
    bVar1 = *(byte *)(lVar2 + 0x24a);
    while ((bVar1 & 1) == 0) {
      nn::os::SleepThread(1000000);
      lVar2 = *(long *)(*(long *)(param_1 + 0xc40) + 8);
      if (lVar2 == 0) goto LAB_01c91c44;
      bVar1 = *(byte *)(lVar2 + 0x24a);
    }
    FUN_01eda888();
  }
LAB_01c91c44:
  if (*(char *)(param_1 + 0x1ff8) != '\0') {
    *(undefined1 *)(param_1 + 0x1ff8) = 0;
  }
  if (*(char *)(param_1 + 0x1fe8) != '\0') {
    if (*(char *)(param_1 + 0x1fec) != '\0') {
      *(undefined1 *)(param_1 + 0x1fec) = 0;
    }
    *(char *)(param_1 + 0x1fe8) = '\0';
  }
  lVar2 = *(long *)(param_1 + 0xc40);
  *(undefined8 *)(param_1 + 0xc40) = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_01e5e99c(param_1 + 0xc48);
  return;
}


