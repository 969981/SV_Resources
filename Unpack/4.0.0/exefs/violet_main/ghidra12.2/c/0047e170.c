/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047e170; name: FUN_0047e170
 */


undefined8 FUN_0047e170(uint *param_1,uint param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != (uint *)0x0) && (-1 < (int)param_2)) {
    uVar1 = *param_1;
    if ((int)uVar1 <= (int)param_2) {
      return 0;
    }
    __dest = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8);
    uVar2 = *__dest;
    if (uVar1 - 1 != param_2) {
      memmove(__dest,(void *)(*(long *)(param_1 + 2) + (long)(int)(param_2 + 1) * 8),
              -(ulong)(uVar1 + ~param_2 >> 0x1f) & 0xfffffff800000000 |
              (ulong)(uVar1 + ~param_2) << 3);
      param_2 = *param_1 - 1;
    }
    *param_1 = param_2;
  }
  return uVar2;
}


