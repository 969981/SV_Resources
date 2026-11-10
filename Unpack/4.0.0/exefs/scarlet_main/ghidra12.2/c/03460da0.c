/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03460da0; name: FUN_03460da0
 */


undefined8 FUN_03460da0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((*(uint *)(param_1 + 0xb0) < 0xc) && (*(uint *)(param_1 + 0xb4) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0xb4) - (ulong)*(uint *)(param_1 + 0xb0)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0xa8),lVar1 * 8);
    if (lVar2 == 0) {
      return 0x34;
    }
    *(long *)(param_1 + 0xa8) = lVar2;
    *(int *)(param_1 + 0xb4) = (int)lVar1;
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0xa8) + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (uVar4 < *(uint *)(param_1 + 0xb0));
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0x4483126f;
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(undefined1 *)(param_1 + 0x54) = 0x32;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


