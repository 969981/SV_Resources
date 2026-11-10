/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed9990; name: FUN_01ed9990
 */


undefined8 FUN_01ed9990(void *param_1,ulong param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_5f0 [712];
  undefined1 auStack_328 [708];
  short local_64;
  
  uVar4 = param_2 / 0x2c8;
  uVar3 = 0;
  if ((param_2 % 0x2c8 == 0) && (0x2c7 < param_2)) {
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    do {
      memcpy(auStack_328,param_1,0x2c8);
      sVar1 = local_64;
      local_64 = 0;
      sVar2 = FUN_01e719d0(0xffff,auStack_328,0x2c8);
      if (sVar1 != sVar2) {
        return 0;
      }
      local_64 = sVar1;
      memcpy(auStack_5f0,auStack_328,0x2c8);
      if ((code *)*param_3 != (code *)0x0) {
        (*(code *)*param_3)(param_3 + 4,auStack_5f0);
      }
      uVar4 = uVar4 - 1;
      param_1 = (void *)((long)param_1 + 0x2c8);
    } while (uVar4 != 0);
    uVar3 = 1;
  }
  return uVar3;
}


