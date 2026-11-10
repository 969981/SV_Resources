/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e5e30; name: FUN_008e5e30
 */


undefined8 FUN_008e5e30(long param_1,ulong param_2)

{
  if (param_2 != 0) {
    if ((*(uint *)(param_1 + 0x1188) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11a8);
    }
    if ((*(uint *)(param_1 + 0x118c) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11b0);
    }
    if ((*(uint *)(param_1 + 0x1190) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11b8);
    }
    if ((*(uint *)(param_1 + 0x1194) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11c0);
    }
    if ((*(uint *)(param_1 + 0x1198) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11c8);
    }
    if ((*(uint *)(param_1 + 0x119c) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11d0);
    }
    if ((*(uint *)(param_1 + 0x11a0) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11d8);
    }
    if ((*(uint *)(param_1 + 0x11a4) & param_2) != 0) {
      return *(undefined8 *)(param_1 + 0x11e0);
    }
  }
  return 0;
}


