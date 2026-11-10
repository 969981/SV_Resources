/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057b3c0; name: FUN_0057b3c0
 */


byte * FUN_0057b3c0(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar6 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar6._0_8_;
      if ((auVar6._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    pbVar3 = param_2 + 1;
    bVar1 = *param_2;
    uVar5 = (ulong)(uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar5 = (ulong)(((uint)bVar1 + (uint)*pbVar3 * 0x80) - 0x80);
      if (-1 < (char)*pbVar3) {
        pbVar3 = param_2 + 2;
        goto LAB_0057b40c;
      }
      auVar6 = FUN_0052e560(param_2,uVar5);
      pbVar3 = auVar6._0_8_;
      if (pbVar3 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (auVar6._8_4_ == 0) {
        uVar4 = 0;
        goto LAB_0057b4a8;
      }
    }
    else {
LAB_0057b40c:
      auVar6._8_8_ = uVar5;
      auVar6._0_8_ = pbVar3;
      uVar4 = 0;
      if ((int)uVar5 == 0) goto LAB_0057b4a8;
    }
    pbVar3 = auVar6._0_8_;
    uVar4 = auVar6._8_4_;
    if ((uVar4 & 7) == 4) {
LAB_0057b4a8:
      *(uint *)(param_3 + 10) = uVar4 - 1;
      return pbVar3;
    }
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) == 0) {
      lVar2 = FUN_0021d48c((ulong *)(param_1 + 8));
    }
    else {
      lVar2 = (uVar5 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(auVar6._8_8_ & 0xffffffff,lVar2,pbVar3,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


