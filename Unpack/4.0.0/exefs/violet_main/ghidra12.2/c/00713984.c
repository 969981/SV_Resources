/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00713984; name: FUN_00713984
 */


/* WARNING: Removing unreachable block (ram,0x0071447c) */

byte * FUN_00713984(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  while( true ) {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar7 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar7._0_8_;
      if ((auVar7._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar2 = *param_2;
    auVar7[8] = bVar2;
    auVar7._0_8_ = param_2 + 1;
    auVar7._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      bVar1 = param_2[1];
      uVar5 = ((uint)bVar2 + (uint)bVar1 * 0x80) - 0x80;
      if ((char)bVar1 < '\0') {
        auVar7 = FUN_0052e560(param_2,uVar5);
        if (auVar7._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar5 = (uint)(auVar7._8_8_ >> 3) & 0x1fffffff;
      }
      else {
        auVar7._8_4_ = uVar5;
        auVar7._0_8_ = param_2 + 2;
        auVar7._12_4_ = 0;
        uVar5 = uVar5 >> 3;
      }
    }
    else {
      uVar5 = (uint)(bVar2 >> 3);
    }
    if (uVar5 - 1 < 0x1a) break;
    uVar5 = auVar7._8_4_;
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar5 - 1;
      return auVar7._0_8_;
    }
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) == 0) {
      lVar4 = FUN_0021d48c((ulong *)(param_1 + 8));
    }
    else {
      lVar4 = (uVar6 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(auVar7._8_8_ & 0xffffffff,lVar4,auVar7._0_8_,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00713a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar3 = (byte *)(*(code *)(&UNK_00713a24 +
                             (ulong)*(ushort *)(&DAT_03d0a998 + (ulong)(uVar5 - 1) * 2) * 4))();
  return pbVar3;
}


