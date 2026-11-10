/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fa9d8; name: FUN_034fa9d8
 */


undefined8 FUN_034fa9d8(long *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar2 = FUN_034f988c();
  iVar3 = (**(code **)(*param_1 + 0x138))(param_1,iVar2,param_1 + 5);
  if (iVar3 == 1) {
    lVar5 = param_1[3];
    *(int *)(lVar5 + 0x2b4) = iVar2 - (int)param_1[5];
    puVar1 = (uint *)(lVar5 + 699);
    *puVar1 = *puVar1 & 0xfe3fffff;
    if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
      (**(code **)(*(long *)param_1[0xb] + 0x90))();
    }
    else {
      *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
    }
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xc] = 0;
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


