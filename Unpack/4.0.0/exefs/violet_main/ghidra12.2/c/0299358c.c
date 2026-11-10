/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299358c; name: FUN_0299358c
 */


void FUN_0299358c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  FUN_02996900();
  if (*(char *)(param_1 + 0x71) == '\0') {
    FUN_00f0f014(*(undefined8 *)(param_1 + 0x50));
    bVar1 = *(char *)(param_1 + 0x71) != '\0';
  }
  else {
    bVar1 = true;
  }
  uVar2 = FUN_010c363c(*(undefined8 *)(param_1 + 0x48),bVar1);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  return;
}


