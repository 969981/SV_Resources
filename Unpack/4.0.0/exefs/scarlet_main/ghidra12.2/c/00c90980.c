/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c90980; name: FUN_00c90980
 */


undefined1  [16] FUN_00c90980(long *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined8 unaff_d8;
  undefined8 in_register_00005108;
  ulong uVar7;
  long *local_8;
  
  uVar7 = 0;
  if ((((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) ||
      (*(char *)((long)param_1 + 0x14) == '\0')) ||
     (FUN_00c90ab8(&local_8,param_1), local_8 == (long *)0x0)) goto LAB_00c90aa0;
  if (((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) ||
     (*(char *)((long)param_1 + 0x14) == '\0')) {
LAB_00c90a6c:
    iVar3 = (**(code **)(*local_8 + 0x68))(local_8,(long)param_1 + 0x14);
    auVar6 = ZEXT416((uint)(float)iVar3);
LAB_00c90a84:
    in_register_00005108 = auVar6._8_8_;
    unaff_d8 = auVar6._0_8_;
    if (local_8 == (long *)0x0) {
      return auVar6;
    }
    bVar5 = false;
  }
  else {
    iVar3 = (int)param_1[2];
    if (iVar3 == 1) {
      auVar6 = (**(code **)(*local_8 + 0x90))(local_8,(long)param_1 + 0x14);
      goto LAB_00c90a84;
    }
    if (iVar3 == 2) {
      pcVar4 = *(code **)(*local_8 + 0xc0);
LAB_00c90a48:
      uVar2 = (*pcVar4)(local_8,(long)param_1 + 0x14);
      auVar6 = ZEXT416((uint)(float)(uVar2 & 1));
      goto LAB_00c90a84;
    }
    if (iVar3 == 3) {
      pcVar4 = *(code **)(*local_8 + 0xe8);
      goto LAB_00c90a48;
    }
    if (iVar3 == 0) goto LAB_00c90a6c;
    if (local_8 == (long *)0x0) goto LAB_00c90aa0;
    bVar5 = true;
  }
  (**(code **)(*local_8 + 0x18))();
  auVar6._8_8_ = in_register_00005108;
  auVar6._0_8_ = unaff_d8;
  if (!bVar5) {
    return auVar6;
  }
LAB_00c90aa0:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  return auVar1 << 0x40;
}


