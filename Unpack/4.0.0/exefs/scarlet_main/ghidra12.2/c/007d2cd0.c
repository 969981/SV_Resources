/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d2cd0; name: FUN_007d2cd0
 */


void FUN_007d2cd0(long param_1)

{
  ulong uVar1;
  
  *(undefined2 *)(param_1 + 8) = 0;
  if (((*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) && (*(short *)(param_1 + 10) != 0))
     && ((**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x60))(),
        1 < *(ushort *)(param_1 + 10))) {
    uVar1 = 1;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x60))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 10));
  }
  return;
}


