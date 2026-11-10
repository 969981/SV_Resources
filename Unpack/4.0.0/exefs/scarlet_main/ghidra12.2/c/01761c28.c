/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01761c28; name: FUN_01761c28
 */


undefined1  [16] FUN_01761c28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined4 local_28 [2];
  
  if ((*(char *)(param_1 + 0x88) == '\0') &&
     (*(long *)(param_1 + 0x78) < *(long *)(param_1 + 0x80) + param_3)) {
    uVar4 = 0;
    uVar3 = 8;
  }
  else {
    local_28[0] = 0;
    uVar2 = nn::fs::WriteFile(*(undefined8 *)(param_1 + 0x70),*(long *)(param_1 + 0x80),param_2,
                              param_3,local_28);
    if (uVar2 == 0) {
      param_3 = *(long *)(param_1 + 0x80) + param_3;
      if (*(char *)(param_1 + 0x88) == '\0') {
        lVar1 = *(long *)(param_1 + 0x78);
        if (param_3 <= *(long *)(param_1 + 0x78)) {
          lVar1 = param_3;
        }
        *(long *)(param_1 + 0x80) = lVar1;
      }
      else {
        *(long *)(param_1 + 0x80) = param_3;
        if (*(long *)(param_1 + 0x78) < param_3) {
          *(long *)(param_1 + 0x78) = param_3;
        }
      }
    }
    uVar4 = (ulong)uVar2;
    uVar3 = 0x100000008;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


