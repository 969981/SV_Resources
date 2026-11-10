/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026a308; name: FUN_0026a308
 */


byte * FUN_0026a308(long param_1,byte *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar5 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar5._0_8_;
      if ((auVar5._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    pbVar3 = param_2 + 1;
    uVar4 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar4 = (uVar4 + (uint)*pbVar3 * 0x80) - 0x80;
      if (-1 < (char)*pbVar3) {
        pbVar3 = param_2 + 2;
        goto joined_r0x0026a3a0;
      }
      auVar6 = FUN_0052e560(param_2,uVar4);
      if (auVar6._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
joined_r0x0026a3a0:
      auVar6._8_4_ = uVar4;
      auVar6._0_8_ = pbVar3;
    }
    uVar4 = auVar6._8_4_;
    param_2 = auVar6._0_8_;
    if (uVar4 == 10) {
      param_2 = param_2 + -1;
      do {
        param_2 = (byte *)FUN_0026a46c(param_3,param_1 + 0x10,param_2 + 1);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
    }
    else {
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar4 - 1;
        return param_2;
      }
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) == 0) {
        lVar1 = FUN_0021d48c((ulong *)(param_1 + 8));
      }
      else {
        lVar1 = (uVar2 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_0052f000(uVar4,lVar1,param_2,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  } while( true );
}


