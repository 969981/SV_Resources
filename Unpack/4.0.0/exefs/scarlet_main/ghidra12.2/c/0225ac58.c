/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0225ac58; name: FUN_0225ac58
 */


void FUN_0225ac58(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *local_40;
  char local_38;
  
  FUN_017fbcec(&local_40);
  if ((param_2 < *(ulong *)(param_1 + 0xf0)) &&
     ((*(ulong *)(param_1 + 0x88) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x80) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + param_2 * 0x10 + 8);
    if (param_2 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4)) {
      FUN_01285250(param_1 + 0x48,param_2);
    }
    if (local_38 != '\0') {
      *local_40 = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_40 + 1));
    }
    local_40 = (undefined8 *)0x0;
    local_38 = '\0';
    FUN_0225db90(*(undefined8 *)(param_1 + 0x40),uVar1);
  }
  if (local_38 != '\0') {
    *local_40 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_40 + 1));
  }
  return;
}


