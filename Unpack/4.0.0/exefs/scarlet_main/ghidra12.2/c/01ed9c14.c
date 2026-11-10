/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed9c14; name: FUN_01ed9c14
 */


void FUN_01ed9c14(undefined1 *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (((*(char *)(param_2 + 0x40) == '\0') || (*(int *)(param_2 + 0x44) != 0)) ||
     (lVar1 = *(long *)(param_2 + 8),
     (uint)((int)((ulong)(*(long *)(param_2 + 0x10) - lVar1) >> 3) * -0x40a57eb5) <= param_3)) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + (ulong)param_3 * 0x318);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = *puVar2;
    FUN_01c8e564(param_1 + 0x10,puVar2 + 1);
    param_1[0x48] = 0;
    if (*(char *)(puVar2 + 8) != '\0') {
      memcpy(param_1 + 0x50,(void *)(lVar1 + (ulong)param_3 * 0x318 + 0x48),0x2c8);
      param_1[0x48] = 1;
    }
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(lVar1 + (ulong)param_3 * 0x318 + 0x310);
    *param_1 = 1;
  }
  return;
}


