/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bbbec; name: FUN_027bbbec
 */


void FUN_027bbbec(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_01cfa410(param_1 + 0x48);
    if ((param_1[0x28] & 1U) != 0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),
                 *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe,1);
    }
    if ((param_1[8] & 1U) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
                 *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
    }
    *param_1 = '\0';
  }
  return;
}


