/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd8a5c; name: FUN_01dd8a5c
 */


void FUN_01dd8a5c(long param_1,byte *param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_50 [24];
  long *local_38;
  
  if (param_3 != 0) {
    uVar2 = (ulong)param_3;
    do {
      if ((ulong)*param_2 < 0x6c) {
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        FUN_0135d26c(auStack_50,
                     param_1 + (ulong)*(byte *)(param_1 + (ulong)*param_2 + 0xb38) * 0x10 + 0x38);
        FUN_01dcc3c4(uVar1,auStack_50,0);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


