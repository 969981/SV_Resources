/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6b58; name: FUN_001c6b58
 */


undefined4 FUN_001c6b58(long *param_1,long param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *__dest;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 local_160 [4];
  undefined4 auStack_150 [64];
  
  uVar6 = *(undefined4 *)(param_2 + 4);
  puVar1 = local_160;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = param_3;
  }
  lVar7 = *param_1;
  *puVar1 = uVar6;
  uVar3 = *(undefined4 *)((long)param_1 + 0xbc);
  puVar1[1] = uVar3;
  if (*(int *)((long)param_1 + 0xbc) == 2) {
    uVar8 = 0x11;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0xc);
  }
  puVar2 = local_160;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = param_3;
  }
  puVar2[2] = uVar8;
  uVar5 = *(uint *)(param_2 + 0x10);
  __dest = auStack_150;
  if (param_3 != (undefined4 *)0x0) {
    __dest = param_3 + 4;
  }
  if (0xff < uVar5) {
    uVar5 = 0x100;
  }
  puVar2[3] = uVar5;
  memcpy(__dest,*(void **)(param_2 + 0x20),(ulong)uVar5);
  if (*(long *)(lVar7 + 0x758) == 0) {
    iVar4 = nnsocketSocket(uVar6,uVar3,uVar8);
    *param_4 = iVar4;
  }
  else {
    FUN_001d14e0(lVar7,1);
    iVar4 = (**(code **)(lVar7 + 0x758))(*(undefined8 *)(lVar7 + 0x760),0,puVar1);
    *param_4 = iVar4;
    FUN_001d14e0(lVar7,0);
    iVar4 = *param_4;
  }
  uVar6 = 7;
  if (iVar4 != -1) {
    uVar6 = 0;
  }
  return uVar6;
}


