/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02785560; name: FUN_02785560
 */


long FUN_02785560(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x28) < 10) {
    local_28 = param_2;
    FUN_027858e0(&local_48,param_2,&local_28);
    lVar2 = local_48;
    local_68 = local_48;
    uStack_60 = uStack_40;
    local_58 = local_38;
    local_50 = uStack_30;
    local_48 = 0;
    FUN_027852ac(*(undefined8 *)(param_1 + 0x20),&local_68);
    lVar1 = local_68;
    local_68 = 0;
    if (lVar1 != 0) {
      FUN_027853e8(&uStack_60);
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}


