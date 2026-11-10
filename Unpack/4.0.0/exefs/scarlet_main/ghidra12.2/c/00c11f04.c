/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c11f04; name: FUN_00c11f04
 */


uint * FUN_00c11f04(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  
  iVar3 = (int)param_1[1];
  uVar4 = iVar3 + param_2;
  puVar5 = (uint *)param_1[2];
  if (*(int *)((long)param_1 + 0xc) < (int)uVar4) {
    uVar1 = *(int *)((long)param_1 + 0xc) * 2;
    if ((int)uVar4 <= (int)uVar1) {
      uVar4 = uVar1;
    }
    lVar6 = *param_1;
    if ((int)uVar4 < 5) {
      uVar4 = 4;
    }
    if (lVar6 == 0) {
      puVar2 = operator_new__((ulong)uVar4 * 8 + 8);
    }
    else {
      puVar2 = (undefined4 *)FUN_00c0e238(lVar6,0);
    }
    param_1[2] = (long)puVar2;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    if ((puVar5 == (uint *)0x0) || ((int)*puVar5 < 1)) {
      *puVar2 = 0;
    }
    else {
      memcpy(puVar2 + 2,puVar5 + 2,(ulong)*puVar5 << 3);
      *(uint *)param_1[2] = *puVar5;
    }
    if ((puVar5 != (uint *)0x0) && (lVar6 == 0)) {
      operator_delete__(puVar5);
    }
    puVar5 = (uint *)param_1[2];
    iVar3 = (int)param_1[1];
  }
  return puVar5 + (long)iVar3 * 2 + 2;
}


