/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034771d0; name: FUN_034771d0
 */


void FUN_034771d0(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (param_1 + 0x20 != *(long *)(param_1 + 0x40)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (param_1 + 0x50 != *(long *)(param_1 + 0x60)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (param_1 + 0x70 != *(long *)(param_1 + 0x90)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (param_1 + 0xa0 != *(long *)(param_1 + 0xb0)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (param_1 + 0xc0 != *(long *)(param_1 + 0xd0)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  *(bool *)(param_1 + 0xe1) = DAT_048afd38 == param_1;
  return;
}


