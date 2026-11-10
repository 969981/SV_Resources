/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d3a80; name: FUN_001d3a80
 */


undefined8 FUN_001d3a80(long *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_b0;
  undefined1 local_ac;
  long local_a8;
  undefined1 auStack_a0 [128];
  
  FUN_001c6c60(param_1,0);
  uVar1 = FUN_001d15a8(param_1,0);
  if ((int)uVar1 == 0) {
    if ((-1 < *(char *)((long)param_1 + 0x3fe)) &&
       ((((int)param_1[0x2f] != 2 || ((char)param_1[0x7f] != '\0')) &&
        (uVar2 = FUN_001d21c8(param_1), (uVar2 & 1) == 0)))) {
      lVar3 = *param_1;
      if ((*(byte *)(lVar3 + 0xf46) >> 5 & 1) != 0) {
        if ((*(byte *)((long)param_1 + 0x3fd) >> 2 & 1) == 0) {
          local_b0 = 0x34504354;
        }
        else {
          local_b0 = 0x36504354;
        }
        local_ac = 0;
        FUN_001ce394(auStack_a0,0x80,"PROXY %s %s %s %li %li\r\n",&local_b0,lVar3 + 0x1680,
                     lVar3 + 0x1648,*(undefined8 *)(lVar3 + 0x16b0),*(undefined8 *)(lVar3 + 0x1678))
        ;
        local_a8 = FUN_001ec338(1,0x18);
        if (local_a8 == 0) {
          uVar1 = 0x1b;
        }
        else {
          uVar1 = FUN_001d4a1c(&local_a8,auStack_a0);
          if ((int)uVar1 == 0) {
            uVar1 = FUN_001d4768(&local_a8,param_1,*param_1 + 0x1618,0,0);
          }
        }
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      if ((*(byte *)(param_1[0x85] + 0x80) >> 1 & 1) == 0) {
        *param_2 = 1;
      }
      else {
        uVar1 = FUN_001d3bd8(param_1,param_2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


