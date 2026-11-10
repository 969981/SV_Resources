/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c482c; name: FUN_006c482c
 */


undefined8 FUN_006c482c(MultiWaitType *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = nn::os::TryWaitAny(param_1);
  if (lVar1 != 0) {
    do {
      uVar2 = FUN_006c4704(param_1,&local_30,lVar1);
      if ((uVar2 & 1) == 0) {
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = local_30;
          param_2[1] = uStack_28;
        }
        return 1;
      }
      lVar1 = nn::os::TryWaitAny(param_1);
    } while (lVar1 != 0);
  }
  return 0;
}


