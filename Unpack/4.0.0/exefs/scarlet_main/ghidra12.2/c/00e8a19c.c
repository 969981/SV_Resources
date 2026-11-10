/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8a19c; name: FUN_00e8a19c
 */


void FUN_00e8a19c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x498) != 0) && (**(char **)(*(long *)(param_1 + 0x498) + 0x38) != '\0'))
  {
    *(undefined1 *)(param_1 + 0x628) = 0;
    *(undefined1 *)(param_1 + 0x629) = 0;
    if (*(long **)(param_1 + 0x30) != *(long **)(param_1 + 0x28)) {
      *(undefined1 *)(**(long **)(param_1 + 0x28) + 0x50) = 0;
      if (1 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 3)) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x50) = 0;
        lVar1 = *(long *)(param_1 + 0x28);
        if (2 < (ulong)(*(long *)(param_1 + 0x30) - lVar1 >> 3)) {
          uVar2 = 2;
          do {
            *(undefined1 *)(*(long *)(lVar1 + uVar2 * 8) + 0x50) = 0;
            lVar1 = *(long *)(param_1 + 0x28);
            uVar2 = uVar2 + 1;
          } while (uVar2 < (ulong)(*(long *)(param_1 + 0x30) - lVar1 >> 3));
        }
      }
    }
    FUN_00e8a258(param_1);
  }
  *(undefined8 *)(param_1 + 0x318) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 800));
  return;
}


