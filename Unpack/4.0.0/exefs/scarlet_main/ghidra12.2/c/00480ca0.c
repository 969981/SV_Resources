/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00480ca0; name: FUN_00480ca0
 */


void FUN_00480ca0(ulong param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  size_t sVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 auStack_120 [64];
  ulong local_e0 [8];
  ulong local_a0 [8];
  
  if (param_3 == 0) {
    return;
  }
  uVar5 = param_1 >> 0x18 & 0xff;
  iVar1 = FUN_0047e650(&DAT_047f3ba8,&LAB_004805b0);
  if ((iVar1 == 0) || (DAT_047f3bac == 0)) {
LAB_00480d30:
    puVar6 = local_a0;
    FUN_003e7390(local_a0,0x40,"lib(%lu)",uVar5);
  }
  else {
    local_a0[0] = param_1 & 0xff000000;
    FUN_0047e5c0(DAT_047f3bc0);
    lVar2 = FUN_00451a40(DAT_047f3bc8,local_a0);
    FUN_0047e600(DAT_047f3bc0);
    if ((lVar2 == 0) || (puVar6 = *(ulong **)(lVar2 + 8), puVar6 == (ulong *)0x0))
    goto LAB_00480d30;
  }
  iVar1 = FUN_0047e650(&DAT_047f3ba8,&LAB_004805b0);
  if ((iVar1 == 0) || (DAT_047f3bac == 0)) {
LAB_00480dac:
    uVar7 = param_1 >> 0xc & 0xfff;
  }
  else {
    local_e0[0] = param_1 & 0xfffff000;
    FUN_0047e5c0(DAT_047f3bc0);
    lVar2 = FUN_00451a40(DAT_047f3bc8,local_e0);
    FUN_0047e600(DAT_047f3bc0);
    if (lVar2 == 0) goto LAB_00480dac;
    puVar8 = *(ulong **)(lVar2 + 8);
    uVar7 = param_1 >> 0xc & 0xfff;
    if (puVar8 != (ulong *)0x0) goto LAB_00480dcc;
  }
  puVar8 = local_e0;
  FUN_003e7390(local_e0,0x40,"func(%lu)",uVar7);
LAB_00480dcc:
  puVar3 = (undefined1 *)FUN_00480f20(param_1);
  if (puVar3 == (undefined1 *)0x0) {
    FUN_003e7390(auStack_120,0x40,"reason(%lu)",param_1 & 0xfff);
    puVar3 = auStack_120;
  }
  FUN_003e7390(param_2,param_3,"error:%08lX:%s:%s:%s",param_1,puVar6,puVar8,puVar3);
  sVar4 = strlen(param_2);
  if (sVar4 == param_3 - 1U) {
    FUN_003e7390(param_2,param_3,"err:%lx:%lx:%lx:%lx",param_1,uVar5,uVar7,param_1 & 0xfff);
  }
  return;
}


