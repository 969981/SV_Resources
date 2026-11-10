/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e55bc; name: FUN_001e55bc
 */


undefined8 FUN_001e55bc(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  FUN_001dac98(lVar3,3);
  if ((*(byte *)(param_1[0x84] + 0x84) >> 4 & 1) == 0) {
    *param_2 = 0;
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xff7fffff;
    if (*(long *)(lVar3 + 0xdb0) != 0) {
      FUN_001ec308(param_1[0x8c]);
      param_1[0x8c] = 0;
      lVar1 = FUN_001ce400("User-Agent: %s\r\n",*(undefined8 *)(lVar3 + 0xdb0));
      param_1[0x8c] = lVar1;
      if (lVar1 == 0) {
        return 0x1b;
      }
    }
    *(undefined8 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x14e8) = 0;
    auVar4 = FUN_001e0dfc();
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
    if ((int)param_1[0x4b] == -1) {
      *(undefined1 *)((long)param_1 + 0x3fa) = 0;
      uVar2 = FUN_001c6364(param_1,param_1[0xd]);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      FUN_001dac98(lVar3,4);
      FUN_001dac98(lVar3,5);
      *(undefined1 *)((long)param_1 + 0x3fa) = 1;
      *param_2 = 1;
      FUN_001c5b80(param_1,(int)param_1[0x4b]);
      FUN_001e514c(param_1);
    }
    auVar4 = FUN_001e0dfc();
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}


