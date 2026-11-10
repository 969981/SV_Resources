/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fa648; name: FUN_007fa648
 */


void FUN_007fa648(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (*(long *)(param_1 + 0x60) != 0) {
    if (*(char *)(param_1 + 0xb0) != '\x04') {
      *(undefined1 *)(param_1 + 0xb0) = 0x14;
      FUN_007c9f04(param_1 + 0x68);
      if (*(char *)(param_1 + 0xb0) != '\x04') {
        lVar2 = *(long *)PTR_DAT_047d0970;
        do {
          FUN_007ca35c(lVar2 / 10000);
          if (*(char *)(param_1 + 0xb0) == '\x03') {
            *(undefined1 *)(param_1 + 0xb0) = 0x14;
            FUN_007c9f04(param_1 + 0x68);
          }
        } while (*(char *)(param_1 + 0xb0) != '\x04');
      }
    }
    (**(code **)(**(long **)(param_1 + 0x60) + 0x40))();
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN_007bfaa0(puVar1);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_007ead0c(param_1 + 8);
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_018ff39c(param_1 + 0xb8,local_40);
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 != 0) {
    FUN_007f838c(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}


