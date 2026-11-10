/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ad02c; name: FUN_008ad02c
 */


void FUN_008ad02c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  FUN_008a6438();
  *param_1 = (long)(PTR_DAT_047d21c8 + 0x10);
  param_1[0x1f] = 0;
  plVar5 = param_1 + 0x1e;
  *plVar5 = 0;
  if ((param_5 == 0) || (lVar8 = param_5, *(short *)(param_6 + 0x44) != 0)) {
    lVar8 = param_4;
  }
  bVar1 = *(byte *)(lVar8 + 0x66);
  bVar2 = *(byte *)(lVar8 + 0x67);
  param_1[0x1d] = -1;
  param_1[0x1b] = 0;
  param_1[0x1c] = -1;
  uVar6 = (uint)bVar1;
  if (2 < uVar6) {
    uVar6 = 3;
  }
  if (((bVar2 & 1) == 0) && (uVar6 != 0)) {
    FUN_00892800(param_1 + 0x1e);
    FUN_0089283c(param_1 + 0x1e,uVar6);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar8 + 0x54);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(lVar8 + 0x58);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar8 + 0x5c);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar8 + 0x60);
  if (uVar6 == 0) {
    uVar7 = 0x68;
  }
  else {
    if (((bVar2 & 1) == 0) && ((char)*plVar5 != '\0')) {
      FUN_00892994(plVar5,lVar8 + 0x68,uVar6);
    }
    uVar7 = (ulong)(uVar6 * 0x20 + 0x68);
  }
  if ((bVar2 & 1) != 0) {
    FUN_008ad210(param_1,param_2,param_3,lVar8,param_6,*(undefined4 *)(lVar8 + uVar7));
  }
  uVar3 = FUN_00892a10(*(undefined8 *)(param_6 + 0x30),*(undefined2 *)(param_4 + 100));
  uVar4 = 0;
  if (param_5 != 0) {
    uVar4 = FUN_00892a10(*(undefined8 *)(param_6 + 0x38),*(undefined2 *)(param_5 + 100));
  }
  plVar5 = (long *)FUN_00896e78(0x50);
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_047d2360 + 0x10);
    FUN_0089f120(plVar5,param_2,param_3,uVar3,uVar4,param_6);
  }
  param_1[0x1b] = (long)plVar5;
  FUN_008a0b7c(plVar5,param_2,param_3,param_6);
  FUN_008ad43c(param_1,param_2,param_3);
  return;
}


