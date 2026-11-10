/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d32a0; name: FUN_004d32a0
 */


void FUN_004d32a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_00523908(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar1 = puVar1 + 1;
      FUN_004e22f4(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if (*(long *)(uVar2 + 8) != *(long *)(uVar2 + 0x10)) {
      FUN_00514600();
    }
  }
  FUN_004cf010(param_1,param_2);
  return;
}


